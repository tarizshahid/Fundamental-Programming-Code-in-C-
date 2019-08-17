 #include <iostream>
#include <string>
#include  <ctime>
#include <windows.h>
using namespace std;
 int main()
 
{
int comp[5];
int user[5];

srand(time(NULL));

for(int i = 0 ; i<5 ;i++)
{

	comp[i] = rand()%6+1;
    cout << " Values of Computer " << comp [i]  <<endl ;
}

for(int i = 0 ; i<5 ;i++)
{
	user[i] = rand()%6+1;
	cout << "\n\t\t\t\tValues of User " << user[i] ;
}


int count=0,count2=0,coco=0;
for (int i =0 ; i < 5 ; i++)
{  
count = comp[i];
 for ( int j = 0 ; j<5 ;j ++ )
 {
   if(count==comp[j])
   {
   	++count2 ;
   }
       
 }
if(coco<count2)
{
	coco=count2;
}
count2=0;
}
cout<<endl;
cout<<"\t\n\nComputer has "<<coco << " of same kind "<<endl;


int count3=0,count4=0,coco1=0;
for (int i =0 ; i < 5 ; i++)
{  
count3 = user[i];
 for ( int j = 0 ; j<5 ;j ++ )
 {
   if(count3==user[j])
   {
   	++count4 ;
   }
       
 }
if(coco1<count4)
{
	coco1=count4;
}
count4=0;
}
cout<<endl;
cout<<"User has "<<coco1 << " of same kind"<<endl;


if (coco>coco1)
{
	cout << "\t\t\nComputer won the game!";
}
else if(coco==coco1)
{ 
	cout << "\t\t\nDraw Game!";
}
else
{
	cout << "\t\t\nUser won the game!";
}


}

