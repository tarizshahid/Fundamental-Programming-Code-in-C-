#include <iostream>
using namespace std;
int main ()
{
	int  i , num , sum ;
    cout << "Enter number = ";
    cin >> num;
    for (i=2 ; i<=num-1 ; i++)
    {
            
    
			if(num% i==0)
			cout << num << " is divisble by " << i << endl;
              
    
    }
}

