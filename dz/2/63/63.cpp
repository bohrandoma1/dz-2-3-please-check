  
  #include <iostream>
#include <string>

using namespace std;
auto main () -> int
{ 
	auto const a = ask_user_for_integer (" a = ");
	auto const b = ask_user_for_integer (" b = ");
	cout << (a + b ) << "\ n "; 
	return 0;
}   
