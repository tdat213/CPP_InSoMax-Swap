#include <iostream>
using namespace std;

void swNum(int& a, int& b) {
	
		int c = a;
		a = b;
		b = c;
	
}

int main()
{
	int so[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap so thu: " << i + 1 << ": ";
		cin >> so[i];
	}

	for ( int x: so )
	{
		cout << x << " ";
	}

	int vitrimax = 0;
	int somax = 0;

	for (int i = 0; i < 5; i++)
	{
		if (somax < so[i]) 
		{
			somax = so[i];
			vitrimax = i;
		}
	}

	cout << "\nSo max: " << somax;
	cout << "\nSau khi swap: ";

	
	swNum(so[0], so[vitrimax]);

	for (int x : so)
	{
		cout << x << " ";
	}

	return 0;
} 
