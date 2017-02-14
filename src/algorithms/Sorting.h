/*
 * Algorithms
 * Sorting algorithms
 * 
 * Written by Zhen Zhi Lee in C++11
 */

#pragma once

#include <vector>
#include <algorithm>
#include <random>
#include <functional>

template <class T, class Compare>
size_t partition(std::vector<T> &arr, const size_t &lo, const size_t &hi,
                 const Compare &comp)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    // something wrong with closed interval in mingw64, hi must be hi - 1
    std::uniform_int_distribution<size_t> dist(lo, hi - 1);

    auto pivotIndex = dist(gen);
    auto pivot = arr[pivotIndex];
    auto i = lo - 1;
    auto j = hi + 1;

    while (true)
    {
        do { ++i; } while (comp(arr[i], pivot));
        do { --j; } while (comp(pivot, arr[j]));
        if (i >= j) return j;
        std::swap(arr[i], arr[j]);
    }
}

template <class T, class Compare>
void quickSort(std::vector<T> &arr, const size_t &lo, const size_t &hi,
               const Compare &comp)
{
    if (lo < hi)
    {
        auto p = partition(arr, lo, hi, comp);
        quickSort(arr, lo, p, comp);
        quickSort(arr, p + 1, hi, comp);
    }
}

template <class T>
void quickSort(std::vector<T> &arr)
{
    quickSort(arr, 0, arr.size() - 1, std::less<T>());
}

template <class T, class Compare>
void quickSort(std::vector<T> &arr, const Compare &comp)
{
    quickSort(arr, 0, arr.size() - 1, comp);
}