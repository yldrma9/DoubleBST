#include <iostream>
#include "binary_search_tree.h"
using namespace std;
int main() {

    cout << "This is a double variable type implemented binary search tree. Don't expect too much."<< endl;

    cout << "What do you want to do? \n"
            "1- Insert element. \n"
            "2- Search element. \n"
            "3- Tree in inorder traversal. \n"
            "4- Tree in preorder traversal. \n"
            "5- Tree in postorder traversal. \n"
            "6- Show me the parent. \n"
            "7- Extend the tree. \n"
            "8- Stop the program.";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "What do you want to insert comrade? \n"
                    "I want to insert this number: ";
            double insert_element;
            cin >> insert_element;
            binary_search_tree::insertElement(insert_element);
            break;
        case 2:
            double wanted_element;
            cout << "What are you looking for? \n "
                    "I need ";
            cin >> wanted_element;
            binary_search_tree::searchElement(wanted_element);
            break;
        case 3:
            binary_search_tree::inOrder(0);
            break;
        case 4:
            binary_search_tree::preOrder(0);
            break;
        case 5:
            binary_search_tree::postOrder(0);
            break;
        case 6:
            double showtheparent;
            cout << "Enter the value to show it's parent: ";
            cin >> showtheparent;
            binary_search_tree::parent(showtheparent);
            break;
        case 7:
            double extendVal;
            cout << "Enter the value to extend by: ";
            cin >> extendVal;
            binary_search_tree::extendSize(extendVal);
            break;
        case 8:
            cout << "Exiting from the program...";
            return  0;

    }
    return 0;
}
