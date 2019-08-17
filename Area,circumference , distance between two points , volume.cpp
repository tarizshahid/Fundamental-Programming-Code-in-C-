#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.1419;
double area(int r)
{
	int j;
	j = 4 * pi *r* r ;
	cout << "\tSurace Area = " <<  j << endl;
}

double volume (int r)
{
	int j;
	j = (4/3) * pi *r*r*r;
	cout << "\tVolume of Spehere = " << j <<endl;
}

double circum(int r)
{
	int j;
	j = 2 * pi * r ;
	cout << "\tCircumference = " << j << endl;
}

double distance()
{

int x1,x2,y1,y2 , a , b , dstnc;
cout << "Enter x1 , x2 , y1 ,y2  = \n";
cin >> x1>>x2>>y1>>y2;
a = x2 - x1 ;
b = y2 - y1 ;
dstnc = sqrt ((a*a)+ (b*b) ) ;
cout << "\tDistance = " << dstnc <<endl ;
}

int main ()
{
	int r ;
	cout << "Enter radius = ";
	cin >> r;
	volume(r);
	area(r);
	circum(r);
	distance();
}
