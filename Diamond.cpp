#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
	int i,j,k,s;
	cout<<"enter a number = ";
	cin>>s;
	if(s>=1&&s<=99)
	{
	if(s%2!=0)
	{
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;	
	}
		for(i=(s-1);i>=1;i--)
	{
		for(j=1;j<=s-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
}
}
else
cout<<"number is not odd";
}
else
{
cout<<"number is not in range";
}
return 0;
Sleep(10000);
system("pause");
}

