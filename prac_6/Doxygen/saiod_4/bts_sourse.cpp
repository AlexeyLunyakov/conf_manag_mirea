//#include "bts_head.h"
//
//void BinTree::buildBinTree(int val, BinTree** new_tree) {
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
//void BinTree::print_BT(BinTree** Tree, int l) {
//    int i;
//    if (*Tree != nullptr) {
//        print_BT(&((**Tree).right), l + 1);
//        for (i = 1; i <= l; i++) cout << "   ";
//        cout << (**Tree).value << endl;
//        print_BT(&((**Tree).left), l + 1);
//    }
//}
//
//void BinTree::ReverseBypass(BinTree* Root) {
//    if (Root != nullptr) {
//        ReverseBypass(Root->left);
//        ReverseBypass(Root->right);
//        cout << Root->value << endl;
//    }
//}
//
//int BinTree::ReverseBypass_count(BinTree* Root) {
//    int count = 0;
//    if (Root != nullptr) {
//        ReverseBypass(Root->left);
//        ReverseBypass(Root->right);
//        cout << Root->value << endl;
//        count += Root->value;
//    }
//    return count;
//}
////В БДП всегда выполняется left < right, для поиска максимума надо проходить от корня по правым веткам до последнего элемента - там и будет наибольший
//BinTree* BinTree::MaxValue(BinTree* Tree) {
//    if (Tree->right != nullptr) {
//        return  MaxValue(Tree->right);
//    }
//    else {
//        return Tree;
//    }
//}
//
//BinTree* BinTree::search_BT(BinTree* Tree, int key) {
//    if (Tree == nullptr) return nullptr;
//    if (Tree->value == key) return Tree;
//    if (key < Tree->value) return search_BT(Tree->left, key);
//    else
//        return search_BT(Tree->right, key);
//}
//
//int BinTree::ListCount(BinTree* node)
//{
//    if (!node)
//        return 0;
//    if (!node->left && !node->right)
//        return 1;
//    return  ListCount(node->left) + ListCount(node->right);
//}
//
//int BinTree::NumberOfNodes(BinTree* Tree) {
//    if (Tree == nullptr) return 0;
//    return NumberOfNodes(Tree->left) + 1 + NumberOfNodes(Tree->right);
//}
//
///*int BinTree::HeightBT(BinTree* Tree) {
//    int x = 0, y = 0;
//    if (Tree == nullptr) return 0;     //пустое дерево или дошли до листа
//    if (Tree->left) x = HeightBT(Tree->left); //высота левого поддерева
//    if (Tree->right) y = HeightBT(Tree->right);  //высота правого поддерева
//    if (x > y) return x + 1;    //+1 от корня к левому поддереву
//    else return y + 1;   //+1 от корня к правому поддереву
//}*/
//
//// Удаление БДП
//void BinTree::destroyBT(BinTree* Tree) {
//    if (Tree != nullptr) {
//        destroyBT(Tree->left);
//        destroyBT(Tree->right);
//        delete(Tree);
//    }
//}
