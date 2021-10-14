#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int array [3];
    array[0]=43;
    array[1]=10;
    array[2]=11;
    vector<int>vec;
    vec.push_back(34);
    vec.push_back(11);
    vec.push_back(10);
    vec[0]=9;
    printf("%d\n",vec[2]);
    return 0;
}

