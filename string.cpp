#include <iostream> 
#include <fstream> 

using  namespace  std;

int main()
{
	string str1( 5, 'c' );
	string str2( "Now is the time..." );
	string str3( str2, 11, 4 ); // берем 4 символа, начиная с 11
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	return 0;
}
