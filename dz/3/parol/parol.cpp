
#include <iostream>
#include <string>

using namespace std;
     

int main()
{
	string password = "l=o+veIT";
	string s;
	cout <<"Write the parole: "<<endl;
	cout <<"password: \n";
    getline(cin,s);
    if (password==s) 
    {
		cout <<"Ok. Acces is allowed"<<endl;		
				}
	else 
	{
		cout <<"This is a false password"<<endl;
		return 0;
		}
	
	

	
	
	
	
	}
