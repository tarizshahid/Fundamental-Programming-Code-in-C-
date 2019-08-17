#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int selection(int a[] , int key)
    
	 
	 {
	  int count=0; 
    	for(int i=0;i<99;i++)
    	{
		if(key==a[i])
		{
		cout<< "Found " << key << " at index " << i << endl ;
        count ++;
        }
        
		}
       cout<< "Occured " << count << " time(s)";
 }	
	
int main ()
{
	int p ;
	int fcuk;
	srand(time(0));
	int a[99];
	for(int i= 0 ; i<99;i++)
	{
		a[i]=rand()%98+1;
	    cout << a[i] << "   "; 
	}
	cout<< "Enter a number to search = ";
	cin >> fcuk;
	p=selection(a,fcuk);	
}


