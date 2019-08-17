#include <iostream>
using namespace std;
int main()
{
	int i=1 , j=1 , k ;
    cout << "Enter number of rows = ";
    cin >> k;
	for (i=1;i<=k;i++)
	{
	for(j=1;j<=i;j++)
	{
		cout << "*";
	}
	cout << endl;
   }
}
