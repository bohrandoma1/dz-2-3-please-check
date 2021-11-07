#include <iostream>
#include <string>

using namespace std;
     

int main()
{
	int a;
	cin >> a;
	int b = a;	
	for (int i=0; i<b; i++)
	 {
		 if (a-->=0)
		 {
	 cout <<a+1<<" bottles of beer on the wall, "<<a+1<<" bottles of beer."<<endl;
	 cout <<"Take one down, pass it around, "<<a<<" bottles of beer on the wall..."<<endl;
		}
	}
	int c;
	do
	{
			cout <<"No  more bottles of beer on the wall, no more bottles of beer"<<endl;
			cout <<"Go to the store and buy some more, "<<b<<" bottles of beer on the wall..."<<endl;
			cin >>a ;
			if (a == 0)
			break;
			}
	
	while (c = 1);
		

}
	
	
	
	
	
	
	
	
