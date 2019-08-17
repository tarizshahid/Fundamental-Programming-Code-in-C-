#include <iostream>
using namespace std;
int main()
{
	int i , num ;
	cout << "Enter number to check Prime or Not = ";
	cin >> num;
	for (i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			cout<<num<< " is not a Prime number!";
			break;
		}
	    if(i==num-1)
		{
				cout<< num << " is a Prime number!";
		}
    }
}

