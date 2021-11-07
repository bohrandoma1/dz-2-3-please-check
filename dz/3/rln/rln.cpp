#include <iostream>
#include <string>

using namespace std;
     

int main()
{	int p = 1 ;
	int r,l,n;
	cout <<"Enter in this order: "<<endl;
	cout <<"r"<<endl;
	cin >>r;
	cout <<"l"<<endl;
	cin >>l;
	cout <<"n"<<endl;
	cin >>n;
	cout <<"Your numbers"<<endl<<endl<<endl;		
	for (int i = 0; i < p; i++)
	{
		 if ((r = -r) && (l = - l))
			{
				cout <<n<<endl;
				cout <<-l<<endl;
				cout <<-r<<endl;
				}
				 if ((r = -r) && (n = - n))
			{
				cout <<-n<<"\n"<<l<<"\n"<<-r<<"\n"<<endl;
				
				}
			else if (n = -n)
		{
			cout <<r<<"\n"<<l<<"\n"<<-n<<"\n";
			}
			
			
			else if (r = -r)
		{
			cout <<n<<"\n"<<l<<"\n"<<-r<<"\n"<<endl;
			}
			else if (l = -l)
		{
			cout <<r<<"\n"<<endl;
			cout<<-l<<"\n"<<endl;
			cout<<n<<"\n"<<endl;
			}
			
		
}
}
