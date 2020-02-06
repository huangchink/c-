#include <iostream> 
void swap(int&, int&);
bool larger(int a, int b);
bool smaller(int a, int b);
void sort(int*, int, bool(*compare)(int, int));
using namespace std;

int main() 
{
	int number1[] = { 3, 5, 1, 6, 9 };
	sort(number1, 5, larger);
	cout << "descending ";
	for (int i = 0; i < 5; i++) 
	{
		cout << number1[i] << " ";
	}
	cout << endl;

	int number2[] = { 3, 5, 1, 6, 9 };
	sort(number2, 5, smaller);
	cout << "ascending ";
	for (int i = 0; i < 5; i++)
	{
		cout << number2[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
void swap(int &a, int &b) 
{
	int t = a;
	a = b;
	b = t;
}

bool larger(int a, int b) 
{
	if (a > b)
		return 1;
	else
		return 0;
}

bool smaller(int a, int b)
{
	return a < b;
}

void sort(int* arr, int length, bool(*compare)(int, int)) 
{
	

	for (int i = 0; i < length - 1 ; i++)
	{
		
		for (int j = i+1; j < length ; j++) 
		{
			if (compare(arr[j], arr[i]))
			{
				swap(arr[j], arr[i]);
			
			}
		}
	}
}