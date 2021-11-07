#include <iostream>
#include <string>
#include <ctime>

using namespace std;
     

int main()
{	
	int p=1;
	srand(time(NULL));
	int n =	rand();	
	int a = n%3;
	int b = n%5;
	int c = n%3%5;
	cout <<n<<endl;
	for (int i = 0; i < p; i++)
	{
		if (a==0)
		{
			cout << "Fizz"<<endl;
		}
			else if (b==0)
		{
			cout << "Buzz"<<endl;
		}
		    else if (c==0)
		{
			cout << "FizzBuzz"<<endl;
		}


}
}

