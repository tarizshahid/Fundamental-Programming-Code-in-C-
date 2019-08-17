#include <iostream>
using namespace std;
int main()
{
	int i = 65  , j = 97  ;
	char in ; 
	cout << "Enter Alphabet to enter (A) or (a) = ";
	cin >> in ;
	switch (in)
	{
	case 'A':
		i = in;
		while (i<=90)
		{
			cout << in++ << endl ;
			i++;
		}
		break;
	case 'a' :
		j = in;
		while(j<=122)
		{
			cout << in++ << endl;
			j++;
		}
		break;
	}
}
