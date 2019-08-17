# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    
    
    
      while( op!='e' || op!='E')
{
	
    cout << "Enter operator either + or - or * or / or e/E for Exit: ";
    cin >> op;
    if(op=='e' || op=='E')
    {
    	break;
	}
	cout <<endl << "Enter first number: ";
    cin >> num1 ;
    cout <<endl << "Enter second number: ";
    cin >> num2 ;
    

		
	switch(op)
    {
        case '+':
            cout <<endl<< num1+num2<<endl;
            break;

        case '-':
            cout <<endl<< num1-num2<<endl;
            break;

        case '*':
            cout << endl<<num1*num2<<endl;
            break;

        case '/':
            cout << endl<< num1/num2<<endl;
            break;
        
	
	}
}
	
	

    return 0;
}
