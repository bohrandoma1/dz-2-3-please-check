#include <iostream>
#include <string>
#include <cmath>

using namespace std;
     

int main()
{
	int a,b,f,n,t,y;	
	cout <<"write a,b:"<<endl;
	cin >> a;
	cin >> b;
	int c = 1;
	cout <<"1) *;     2) /;    3)%; 4) **; 5) sqrt; "<<endl;
	cin >> f;
	double h;	
	for (int i=0; i<c; i++)
	 {
		 if (f = 1)
		 {
			 n=a*b;
			 cout <<"a*b = "<<n<<endl;
			 }
			  if (f = 2)
		 {	
			 n=a/b;
			 cout <<"a/b = "<<n<<endl;
			 }
			  if (f = 3)
		 {	
			 n=a%b;
			 cout <<"a%b = "<<n<<endl;
			 }
			  if (f = 4)
		 {	cout <<"a number t degree "<<endl;
			 cin >>a; cin>>t;			 
			 cout <<"a** = "<<pow(a,t)<<endl;
			 }
			 if (f = 5)
			 { cout <<"sqrt "<<endl;
				 cin >> h;
				 y=sqrt(h);				 
			 cout<<"sqrt h = "<<y<<endl;
			 }
			 
		 }
	 }
 
