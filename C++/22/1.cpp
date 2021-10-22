#include <iostream>
using namespace std;

/*
 * 
 * name: main
 * @param
 * @return
 * 
 */
int main()
{
	setlocale(LC_ALL, "ru");
	int symbolcount;
	char sybol;
	int linetype;
	int index = 0;
	
		cout <<"Введите количество символов в линии "<<endl;
		cin>> symbolcount;
		cout << "Введите символ"<< endl;
		cin >> sybol;
		cout <<"Выберите тип линии:"<<endl
			<<"1- вертикальная линия"<<endl
			<<"2- горизонтальная линия"<<endl;
		cin>>linetype;
		if (linetype!=1 && linetype!=2)
		{
			cout << "Не корректный тип линии"<<endl;
			return;
			}
			
		while (index < symbolcount)
		{
			if (linetype==1)
			{
				cout << sybol << endl;
				}
				if (linetype ==2)
				{
			cout <<sybol;
			
			}
			index++;
		}
			cout << endl << endl;
}
