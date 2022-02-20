#include "dsu.h"
#include<iostream>
using namespace std;
int main()
{
	forest tree;
	tree.Make_Set();
	cout << "0 - Find(x)\n1 - Union(x,y)\n2 - Solution" << endl;
	int key;
	cin >> key;
	do
	{
		switch (key)
		{
		case 0:
		{
			int x;
			cin >> x;
			cout<<"\nAnswer:\t"<<tree.Find_x(x);
			break;
		}
		case 1:
		{
			int x, y;
			cin >> x >> y;
			tree.Union(x, y);
			break;
		}
		case 2:
		{
			int x, y;
			cin >> x >> y;
			if (!tree.Union(x, y)) cout << "\nThese elements are in the SAME array\n";
			else cout << "\nThese elements are in the DIFFERENT arrays\n";
		}
		}
		cout << "\nIf you wanna continue choose key:\t";
		cin >> key;
	} while (key <= 1 & key >= 0);
	return 0;
}