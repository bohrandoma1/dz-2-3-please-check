
#include <iostream>
#include <string>

using namespace std;
     

int main()
{
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"<< endl;
     double x;
     char oper;
     double result;
     double y;          
	cin >>  x;	
	cin >>  oper;
    cin >>  y; 
      

    switch(oper)
    {
        case '+':
            result =  x + y;
            break;
        case '-':
            result =  x - y;
            break;
        case '*':
            result =  x * y;
            break;
        case '/':
            result =  x / y;
            break;
        default:
            return 0;
             
               } 
               cout<<"your result is "<<result<<endl;
		   }
