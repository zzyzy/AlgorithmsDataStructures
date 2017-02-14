/*
 * Data Structures
 * Binary Search Tree (simple)
 * https://en.wikipedia.org/wiki/Binary_search_tree
 * 
 * Written by Zhen Zhi Lee in C++11
 */

#include "BST.h"
#include <iostream>

void BST::Insert(const int &value)
{
    if (!this->_root)
    {
        this->_root = new BSTNode();
        this->_root->Data = value;
    }
    else
    {
        auto parent = this->_root;
        auto current = this->_root;

        while (current != nullptr)
        {
            if (value < current->Data)
            {
                parent = current;
                current = current->Left;
            }
            else if (value == current->Data)
            {
                return;
            }
            else
            {
                parent = current;
                current = current->Right;
            }
        }

        current = new BSTNode();
        current->Data = value;

        if (current->Data < parent->Data)
        {
            parent->Left = current;
        }
        else
        {
            parent->Right = current;
        }
    }
}

void BST::Delete(const int &value)
{
}

void BST::Display()
{
    inOrderTraverse(this->_root);
}

void BST::inOrderTraverse(BSTNode *root)
{
    if (root)
    {
        inOrderTraverse(root->Left);
        std::cout << root->Data << std::endl;
        inOrderTraverse(root->Right);
    }
}