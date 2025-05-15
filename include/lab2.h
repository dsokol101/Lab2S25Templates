#ifndef LAB2_H // Include guard to prevent multiple inclusions
#define LAB2_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
// no size necessary for vector: const size_t ARRSIZE = 100;
void print(const vector<string>& names, string filename);
void load(vector<string>& names, string filename);
void sort_vec(vector<string>& names);
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


#endif