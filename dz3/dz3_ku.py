import json
import sys


def make_gen(data):
    # задание 1\2\4
    res_str = ''
    # задание 3
    # res_str = 'zd3: clean\n'
    # res_str += 'clean:\n\t@find . -type f  ! -name "*.*"  -delete\n'

    for i in data:
        cmds = ' '.join([cmd for cmd in data[i]])
        # задание 1
        res_str += f'{i}: {cmds}\n\t@echo "{i}"\n'
        # задание 2\3
        # res_str += f'{i}: {cmds}\n\t@touch {i}\n\t@echo "{i}"\n'
        # задание 4
        # res_str += f'{cmds}: \n\t@touch {cmds}\n\t@echo "{i}"\n'

    # задание 1
    new_out_file = open('output.mk', 'w')
    # задание 2
    # new_out_file = open('output2.mk', 'w')
    # задание 3
    # new_out_file = open('output_clean.mk', 'w')
    # задание 4
    # new_out_file = open('output4.mk', 'w') #zd4
    new_out_file.write(res_str)
    new_out_file.close()


def main():
    file_path = sys.argv[1:]
    if len(file_path) < 1:
        print('Нет входного файла. Измените конфигурацию')
    else:
        try:
            new_file = open(file_path[0])
            data = json.load(new_file)
            new_file.close()
        except:
            print('Ошибка нахождения пути входного файла')
            return
        make_gen(data)


main()
