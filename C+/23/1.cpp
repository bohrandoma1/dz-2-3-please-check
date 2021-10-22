#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int sum =0;
	int rangebegin, rangeend;
	cout <<"begin"<<endl;
	cin>>rangebegin;
	cout<<"end"<<endl;
	cin>>rangeend;
	do
	{
		if (rangebegin/  2!=0)
		{
			sum+= rangebegin;
			}
		rangebegin++;
		}while (rangebegin<rangeend); 

		cout <<"sum = "<< sum<<endl;
}
