////#include "stdafx.h"
//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <cmath>
//using namespace std;
//
//
//struct BinTree {
//    //�������������� ����� �� ��������:
//    int value;
//    //������ ����� � ������ ������
//    BinTree* left;
//    BinTree* right;
//};
//
////�������� ������� ������ �������� ��� �������� ������:
////      ����: �������� �������� ����, ���� ��������� ������
////      �����: ������������� ���-������, ������� ��������� ����������
//
//void buildBinTree(int val, BinTree** new_tree) {
//    if ((*new_tree) == nullptr) {
//        //��������� ������
//        (*new_tree) = new BinTree;
//        //��������� � ���������� ����� ������ ��������
//        (*new_tree)->value = val;
//        //������� ������ ����� �� �������� ��������
//        (*new_tree)->left = (*new_tree)->right = nullptr;
//        return;
//    }
//    // ������� �������� ���:
//    // � ���� ����� ������ ��������� ���� �������� ������ ������ ������, ������ �������� ����� ������ ������ ����
//    // � ���� ����� ������� ��������� ���� �������� ������ ������ ������ ���� �����, ������ �������� ����� ������ ������ ����
//
//    if (val > (*new_tree)->value) {
//        buildBinTree(val, &(*new_tree)->right); //���� �������� ������ ��� ������� �������, ��������� ��� ������
//    }
//    else {
//        buildBinTree(val, &(*new_tree)->left); //����� ��������� ��� �����
//    }
//}
////��� ������ ������
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
////� ��� ������ ����������� left < right, ��� ������ �������� ���� ��������� �� ����� �� ����� ������ �� ���������� �������� - ��� � ����� ����������
//BinTree* MinValue(BinTree* Tree)
//{
//    if (Tree->left != nullptr) {
//        return MinValue(Tree->left);
//    }
//    else {
//        return Tree;
//    }
//}
////� ��� ������ ����������� left < right, ��� ������ ��������� ���� ��������� �� ����� �� ������ ������ �� ���������� �������� - ��� � ����� ����������
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
//    if (Tree == nullptr) return 0;     //������ ������ ��� ����� �� �����
//    if (Tree->left) x = HeightBT(Tree->left); //������ ������ ���������
//    if (Tree->right) y = HeightBT(Tree->right);  //������ ������� ���������
//    if (x > y) return x + 1;    //+1 �� ����� � ������ ���������
//    else return y + 1;   //+1 �� ����� � ������� ���������
//}
////����� �������� � ���
//BinTree* search_BT(BinTree* Tree, int key) {
//    if (Tree == nullptr) return nullptr;
//    if (Tree->value == key) return Tree;
//    if (key < Tree->value) return search_BT(Tree->left, key);
//    else
//        return search_BT(Tree->right, key);
//}
//// �������� ���
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
//    cout << "��� �������� ������ ��� ���������� �������\n";
//    while (_getch() != 27) {
//        cout << "������� �������� (��� ���������� ����� ������� ESC) ";
//        cin >> val;
//        buildBinTree(val, &Tree);
//    }
//    print_BT(&Tree, 0);
//    cout << "������ ����� ������\n";
//    DirectBypass(Tree);
//    cout << "�������� ����� ������\n";
//    ReverseBypass(Tree);
//    cout << "C����������� ����� ������\n";
//    SymmBypass(Tree);
//    //while (_getch() != 27) {
//    //    cout << "������� �������� (��� ���������� ����� ������� ESC) ";
//    //    cin >> val;
//    //    buildBinTree(val, &Tree);
//    //}
//    //print_BT(&Tree, 0);
//    cout << "����������� ������� ������-> ";
//    BinTree* min = MinValue(Tree);
//    cout << min->value << "\n������������ ������� ������-> ";
//    BinTree* max = MaxValue(Tree);
//    cout << max->value << "\n\n������ ������-> ";
//    int tmp_h = HeightBT(Tree);
//    cout << tmp_h << "\n\n���������� ��������� � ������-> ";
//    int a = NumberOfNodes(Tree);
//    cout << a << "\n\n���������� ������� � ������-> ";
//    int b = ListCount(Tree);
//    cout << b << "\n\n����� ��������" << endl;
//    int key = max->value;
//    /*cout << "\n������� �������� �������� ��� ������-> ";
//    cin >> key;*/
//    BinTree* Tree1 = search_BT(Tree, key);
//    if (Tree1 == nullptr)
//        cout << "������� �� ������\n";
//    else
//        cout << "��� �������->" << Tree1->value;
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