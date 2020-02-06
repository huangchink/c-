#include<iostream>
using namespace std;
           
int main()
{
	int good[13] = {2,5,6,7,3,8,9,13,11,20,18,16,19 };//good°}¦Cªºªì©l­È
	int max = good[0];
	int temp;
	//ascending
	for (int i = 0; i < 13; i++)
	{
		for (int j = i+1; j < 13; j++)
		{
			if (good[i] < good[j])
			{
				
				max = good[j];
				
				good[j] = good[i];
				good[i] = max;
			}
		}
	}
	for (int i = 0; i < 13; i++)
	{
		cout << good[i] << " ";
	}
	cout << endl;
	//descending
	int min = 0;

	for (int i = 0; i < 13; i++)
	{
		for (int j = i + 1; j < 13; j++)
		{
			if (good[i] > good[j])
			{
				temp = j;
				min = good[j];

				good[temp] = good[i];
				good[i] = min;
			}
		}
	}
	for (int i = 0; i < 13; i++)
	{
		cout << good[i]<<" ";
	}
	system("PAUSE");
}
