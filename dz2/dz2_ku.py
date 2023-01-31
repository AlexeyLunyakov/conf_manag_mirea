import requests
import webbrowser

url = 'https://npm.anvaka.com/#/view/2d/'
answer = 'Y'
user_param = ""
url_prob = 'https://registry.npmjs.cf/'

while answer == 'Y' or answer == 'y':

    user_param = input('\nEnter package name: ')
    # формирование нового запроса на сайт
    new_url = url + user_param
    res = requests.get(new_url)
    # формирование проверочного запроса на сайт
    new_prob = url_prob + user_param
    prob_res = requests.get(new_prob)
    # сравнение статусов проверки и запроса на сайт
    while res.status_code != prob_res.status_code:
        print('Error! Invalid package name.')
        user_param = input('Enter a different package name: ')

        new_url = url + user_param
        res = requests.get(new_url)

        new_prob = url_prob + user_param
        prob_res = requests.get(new_prob)
    # при нормальном вводе открываем страницу
    webbrowser.open_new_tab(new_url)
    answer = input('Do you want to see a different package? (y/n): ')

# requests torchlive-cli wrap-ansi pip tensorflow qwerty lox lexa egor vlad
