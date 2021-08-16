#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

/*
    When you pass vector<int> then function gets a copy of that vector. You can do anything you want with it in the function and your original data would not change.
    
    When you pass vector<int>& then function gets the reference which means that any changes in the function would modify the original data.
*/

bool func(int i, int w, const vector<int> &a)
{
    //ベースケース
    if (i == 0)
    {
        if (w == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}