#include <iostream>
#include <string>

using namespace std;
     

int main()
{	
	int p=1;
	int a =	rand()%100 + 1;
	cout <<"Guessing Game Range 1 - 100"<<endl;
	int c;
	cout << "Enter the number and Win"<<endl;
	cin >>c;
	
	for (int i = 0; i < p; i++)
	{
		if (c > a)
		{
			cout << "Number is greater"<<endl;
			cout << "All ahead, try again"<<endl; 
		}
		else if (c < a)
		{
			cout << "Number is less"<<endl;
			cout << "All ahead, try again"<<endl;
		}
		else if (c = a)
		{
			cout <<"You guessed the number. You're a winner"<<endl;
		}
	}

}
