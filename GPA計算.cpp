#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<string>
#include<vector>
using namespace std;
double total=0;
int subject_num=0;
double totalgrade=0;
int totalcredit = 0;
double totalGPA=0.0;
int main()
{ 
	
	printf("�A�L���פF�X����\n");
	cin >> subject_num;
	map<string, double> subject_content;
	map<string, double>::iterator iter;
    vector<string> subject(subject_num);
	vector<int>     credit(subject_num);
	vector<int>      grade(subject_num);
	vector<double>     GPA(subject_num);
	
	for (int i = 0; i < subject_num; ++i) {
		printf("�Цo������J��ئW��\n");
		cin >> subject[i];
		printf("�A�L�����X��\n");
		cin >> subject_content[subject[i]];
		if (subject_content[subject[i]] < 0 || subject_content[subject[i]]>100)
		{
			cout << "�������O�x" << endl;
			i--;
			continue;
		}
	
		printf("�o���X�Ǥ�\n");
		cin >> credit[i];
		totalcredit += credit[i];
		totalgrade += credit[i] * subject_content[subject[i]];
		switch ((int)(subject_content[subject[i]] / 10)) {

		
		case 10:
			GPA[i] = 4.3; 
			break;
		case  9:
			GPA[i] = 4.3; 
			break;
		case  8:
			if (subject_content[subject[i]] / 10 >= 8.5) {
				GPA[i] = 4.0;
				
			}
			else { GPA[i] = 3.7; }
			break;
		case  7:
			if (subject_content[subject[i]] / 10 >= 7.7)
				GPA[i] = 3.3;
			else if(subject_content[subject[i]] / 10 >= 7.3)
				GPA[i] = 3.0;
			else if (subject_content[subject[i]] / 10 >= 7.0)
				GPA[i] = 2.7;
			break;
		case  6:
			if (subject_content[subject[i]] / 10 >= 6.7)
				GPA[i] = 2.3;
			else if (subject_content[subject[i]] / 10 >= 6.3)
				GPA[i] = 2.0;
			else if (subject_content[subject[i]] / 10 >= 6.0)
				GPA[i] = 1.7;
			break;
		default:
			GPA[i] = 0;
		
		}
		totalGPA += GPA[i]* credit[i];
		system("cls");
	}
	
	printf("�A���`�����O%f\n", totalgrade / totalcredit);
	printf("�A��GPA�O%f\n", totalGPA / totalcredit);
	for (iter = subject_content.begin(); iter != subject_content.end(); iter++)
		cout << iter->first << " " << iter->second << endl;
	

	system("pause");
}