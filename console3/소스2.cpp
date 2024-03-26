#include <iostream>

using std::cout;
using std::endl;

void main()
	{

	for (int j = 1; j <= 9; j++)
	{
		for (int i = 2; i <= 4; i++)
		{
			cout << i << "*" << j << "=" << i * j<<"\t";
		}
		cout<< endl;
	}
	cout << endl << endl;
	for (int j = 1; j <= 9; j++)
	{
		for (int i = 5; i <= 7; i++)
		{
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
}
