#pragma once

#include <iostream>
#include "IProgram.h"
#include "../data_structures/BST.h"

class BSTProgram : public IProgram
{
  public:
    BSTProgram(const std::string &name) : IProgram(name)
    {
    }

    int Run() override
    {
        BST tree;

        tree.Insert(5);
        tree.Insert(2);
        tree.Insert(8);
        tree.Insert(1);
        tree.Insert(3);

        tree.Display();

        return 0;
    }
};