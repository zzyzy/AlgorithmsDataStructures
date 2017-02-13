#include "BST.h"
#include <iostream>

int main(int argc, const char *argv[])
{
    BST tree;

    tree.Insert(5);
    tree.Insert(2);
    tree.Insert(8);
    tree.Insert(1);
    tree.Insert(3);

    tree.Display();

    std::cin.get();

    return 0;
}