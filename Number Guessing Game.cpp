#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
	double num=1  , in ;
	srand (time(0));
		 num = rand () % 1000+1;
	for (;num>0;)
	{
		 
		 cout << endl << "\aEnter a number (1 to 1000) = " ;
		 cin >> in;
		 if  (in>num)
		 {
		 	cout << "\t\t\tYou number is Higher - Try Again! \n";
		 }
		 if (in<num)
		 {
		 	cout << "\t\t\tYour number is Lower - Try Again! \n";
		 }
		 if (in==num)
		{ 
		    cout << "\n\n\a\a\t\t\t\tCongradulations!!! \tYou Guessed the number. The number is " << num << endl;
		 break;
		 }
	}
	
	
}
