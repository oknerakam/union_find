#include<iostream>
#pragma once
#include <string>
class forest
{
private:
    int p[100000];
    int rk[100000];
public:
    void Make_Set();
    int Find_x(int);
    bool Union(int, int);
};
