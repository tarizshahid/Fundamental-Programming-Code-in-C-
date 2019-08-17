#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, j,a,b,c=0;
	cout <<"Enter number to check Angstrom or not = ";
	cin >> i;
	j=i;
	while(i!=0)
	{
		a=i%10;
		b=pow(a,3);
		c=c+b;
        i=i/10;    
	}
    if(c==j)
   {
    cout<< "Angstrom number \t";
   }
   else
 {
   cout << "Not Angstrom Number \t";
 }	
}
