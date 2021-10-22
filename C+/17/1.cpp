#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int var;
	cout << "введите число для проверки чётности"<<endl;
	cin >> var;
	if (var%2==0)
	{
		cout << "Число "<< var<<" чётное"<<endl;
		}
		else
		{
			cout <<"Число "<<var<<" не чётное"<< endl;
			}
	
	}
