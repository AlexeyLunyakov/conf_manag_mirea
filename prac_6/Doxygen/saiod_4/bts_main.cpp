////#include "stdafx.h"
//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <cmath>
//using namespace std;
//
//
//struct BinTree {
//    //Информационная часть по варианту:
//    int value;
//    //Адреса левой и правой веткок
//    BinTree* left;
//    BinTree* right;
//};
//
////Операция вставки нового значения для создания дерева:
////      Вход: значение будущего узла, узел бинарного дерева
////      Выход: упорядоченное бин-дерево, которое заполнено значениями
//
//void buildBinTree(int val, BinTree** new_tree) {
//    if ((*new_tree) == nullptr) {
//        //Выделение памяти
//        (*new_tree) = new BinTree;
//        //Помещение в выделенное место нового значения
//        (*new_tree)->value = val;
//        //Создаем пустые ветки от текущего элемента
//        (*new_tree)->left = (*new_tree)->right = nullptr;
//        return;
//    }
//    // Правила создания БДП:
//    // у всех узлов левого поддерева узла значения ключей данных меньше, нежели значение ключа данных самого узла
//    // у всех узлов правого поддерева узла значения ключей данных больше либо равны, нежели значение ключа данных самого узла
//
//    if (val > (*new_tree)->value) {
//        buildBinTree(val, &(*new_tree)->right); //Если аргумент больше чем текущий элемент, поместить его вправо
//    }
//    else {
//        buildBinTree(val, &(*new_tree)->left); //Иначе поместить его влево
//    }
//}
////Для печати дерева
//void print_BT(BinTree** Tree, int l) {
//    int i;
//
//    if (*Tree != nullptr) {
//        print_BT(&((**Tree).right), l + 1);
//        for (i = 1; i <= l; i++) cout << "   ";
//        cout << (**Tree).value << endl;
//        print_BT(&((**Tree).left), l + 1);
//    }
//}
//
//void DirectBypass(BinTree* Root) {
//    if (Root != nullptr) {
//        cout << Root->value << endl;
//        DirectBypass(Root->left);
//        DirectBypass(Root->right);
//    }
//}
//
//void ReverseBypass(BinTree* Root) {
//    if (Root != nullptr) {
//        ReverseBypass(Root->left);
//        ReverseBypass(Root->right);
//        cout << Root->value << endl;
//    }
//}
//
//int ReverseBypass_count(BinTree* Root) {
//    int count = 0;
//    if (Root != nullptr) {
//        ReverseBypass(Root->left);
//        ReverseBypass(Root->right);
//        cout << Root->value << endl;
//        count++;
//    }
//    return count;
//}
//
//void SymmBypass(BinTree* Root) {
//    if (Root != nullptr) {
//        ReverseBypass(Root->left);
//        cout << Root->value << endl;
//        ReverseBypass(Root->right);
//    }
//}
////В БДП всегда выполняется left < right, для поиска минимума надо проходить от корня по левым веткам до последнего элемента - там и будет наименьший
//BinTree* MinValue(BinTree* Tree)
//{
//    if (Tree->left != nullptr) {
//        return MinValue(Tree->left);
//    }
//    else {
//        return Tree;
//    }
//}
////В БДП всегда выполняется left < right, для поиска максимума надо проходить от корня по правым веткам до последнего элемента - там и будет наибольший
//BinTree* MaxValue(BinTree* Tree) {
//    if (Tree->right != nullptr) {
//        return  MaxValue(Tree->right);
//    }
//    else {
//        return Tree;
//    }
//}
//int NumberOfNodes(BinTree* Tree) {
//    if (Tree == nullptr) return 0;
//    return NumberOfNodes(Tree->left) + 1 + NumberOfNodes(Tree->right);
//}
//
//int ListCount(BinTree* node)
//{
//    if (!node)
//        return 0;
//    if (!node->left && !node->right)
//        return 1;
//    return  ListCount(node->left) + ListCount(node->right);
//}
//
//int HeightBT(BinTree* Tree) {
//    int x = 0, y = 0;
//    if (Tree == nullptr) return 0;     //пустое дерево или дошли до листа
//    if (Tree->left) x = HeightBT(Tree->left); //высота левого поддерева
//    if (Tree->right) y = HeightBT(Tree->right);  //высота правого поддерева
//    if (x > y) return x + 1;    //+1 от корня к левому поддереву
//    else return y + 1;   //+1 от корня к правому поддереву
//}
////Поиск элемента в БДП
//BinTree* search_BT(BinTree* Tree, int key) {
//    if (Tree == nullptr) return nullptr;
//    if (Tree->value == key) return Tree;
//    if (key < Tree->value) return search_BT(Tree->left, key);
//    else
//        return search_BT(Tree->right, key);
//}
//// Удаление БДП
//void destroyBT(BinTree* Tree) {
//    if (Tree != nullptr) {
//        destroyBT(Tree->left);
//        destroyBT(Tree->right);
//        delete(Tree);
//    }
//}
//
//void MenuProc() {
//    BinTree* Tree = nullptr;
//
//    char variant;
//    int val;
//    cout << "Для проверки дерева его необходимо создать\n";
//    while (_getch() != 27) {
//        cout << "Введите значение (для завершения ввода нажмите ESC) ";
//        cin >> val;
//        buildBinTree(val, &Tree);
//    }
//    print_BT(&Tree, 0);
//    cout << "Прямой обход дерева\n";
//    DirectBypass(Tree);
//    cout << "Обратный обход дерева\n";
//    ReverseBypass(Tree);
//    cout << "Cимметричный обход дерева\n";
//    SymmBypass(Tree);
//    //while (_getch() != 27) {
//    //    cout << "Введите значение (для завершения ввода нажмите ESC) ";
//    //    cin >> val;
//    //    buildBinTree(val, &Tree);
//    //}
//    //print_BT(&Tree, 0);
//    cout << "Минимальный элемент дерева-> ";
//    BinTree* min = MinValue(Tree);
//    cout << min->value << "\nМаксимальный элемент дерева-> ";
//    BinTree* max = MaxValue(Tree);
//    cout << max->value << "\n\nВысота дерева-> ";
//    int tmp_h = HeightBT(Tree);
//    cout << tmp_h << "\n\nКоличество элементов в дереве-> ";
//    int a = NumberOfNodes(Tree);
//    cout << a << "\n\nКоличество листьев в дереве-> ";
//    int b = ListCount(Tree);
//    cout << b << "\n\nПоиск элемента" << endl;
//    int key = max->value;
//    /*cout << "\nВведите значение элемента для поиска-> ";
//    cin >> key;*/
//    BinTree* Tree1 = search_BT(Tree, key);
//    if (Tree1 == nullptr)
//        cout << "Элемент не найден\n";
//    else
//        cout << "Ваш элемент->" << Tree1->value;
//    cout << endl;
//    destroyBT(Tree);
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    MenuProc();
//    system("pause");
//    return 0;
//}