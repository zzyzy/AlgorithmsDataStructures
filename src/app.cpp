#include <iostream>
#include <vector>
#include "programs/Programs.h"

int main(int argc, const char *argv[])
{
    std::vector<IProgram *> programs;

    programs.push_back(new BSTProgram{"Binary Search Tree"});
    programs.push_back(new QuickSortProgram{"Quick Sort"});

    for (auto p : programs)
    {
        std::cout << p->Name << std::endl;

        int status{p->Run()};

        if (status != 0)
            std::cout << "Program exited with code " << status << std::endl;
        std::cout << std::endl;
    }

    std::cin.get();

    return 0;
}