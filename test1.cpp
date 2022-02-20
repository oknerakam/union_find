#include<iostream>
#include<fstream>
#include "dsu.h"
using namespace std;
int main()
{
    forest tree;
    tree.Make_Set();
    ifstream file("a.txt");
    char temp;
    int x, y;
    int i = 0;
    while(file)
    {
        file >> temp;
        if (temp == 'v')
        {
            i++;
            file >> temp;
        }
        tree.Union(i, temp - '0');
    } 
    cout << "Input x and y:\t" << endl;
    cin >> x >> y;
    if (!tree.Union(x, y)) cout << "Yes!";
    else cout << "No!";
    file.close();
    return 0;
}