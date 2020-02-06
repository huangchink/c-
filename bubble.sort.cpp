#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int i,int j)
{
	
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
int main()
{
	int size = 5;
	int fuck[5] = { 110101,87,6154,62000001,41 };
	for (int i = 0; i < size-1 ; i++) {
		cout << i+1 <<'R'<< endl;
		for (int j = 0; j < size-i-1; j++) {
			if (fuck[j] > fuck[j + 1])
			{
				swap(fuck, j,j+1);
			
				
			}
			for (int i = 0; i < size; i++)
				cout << fuck[i] << ' ';
			cout << endl;
		}
	}

	system("pause");
	return 0;
}