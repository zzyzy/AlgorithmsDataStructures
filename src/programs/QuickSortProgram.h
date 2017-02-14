#pragma once

#include <iostream>
#include <vector>
#include <cassert>
#include "IProgram.h"
#include "../algorithms/Sorting.h"

class QuickSortProgram : public IProgram
{
  public:
    QuickSortProgram(const std::string &name) : IProgram(name)
    {
    }

    int Run() override
    {
        std::vector<int> arr{9, 7, 5, 11, 12, 2, 14, 3, 10, 6};

        for (auto i : arr)
            std::cout << i << " ";
        std::cout << std::endl;

        quickSort(arr);

        std::cout << "After sort: " << std::endl;
        for (auto i : arr)
            std::cout << i << " ";
        std::cout << std::endl;

        bool sorted{std::is_sorted(arr.begin(), arr.end())};
        std::cout << (sorted ? "Sorted" : "Not sorted") << std::endl;
        assert(sorted == true);

        return 0;
    }
};