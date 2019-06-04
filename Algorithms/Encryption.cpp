//
// Created by Shantanu Dwivedi on 3/12/2019.
//
#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int size=str.length();
    int row=floor(sqrt(size));
    int column=ceil(sqrt(size));
    char array[81][81]={};
    while(row*column<size)
    {
        if(row<column)
            row++;
        else
            column++;
    }
    for (int i = 0, k = 0; i < row && k < size; ++i)
    {
        for (int j = 0; j < column; ++j, ++k)
        {
            array[i][j]=str[k];
        }
    }
    for (int l = 0; l < column; ++l)
    {
        for (int i = 0; i < row; ++i)
        {
            if(array[i][l] != NULL)
            {
                cout << array[i][l];
            }
        }
        cout<<" ";
    }
}
