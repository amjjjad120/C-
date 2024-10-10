#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int loop;

int hours,minutes,second;

do {
	cout<<"1- clock \n";
	cout<<"2- alarm \n";
	cout<<"3- exit \n";
	cin>>loop;
	switch(loop)
	{

case 1: 
for(hours=0;hours<12;hours++)
for(minutes=0;minutes<60;minutes++)
for(second=0;second<60;second++)
{
cout<<"the time today\n";
cout<<hours<<":"<<minutes<<":"<<second<<endl;

sleep(1);
clrscr();
}
break;

				
						
case 2:	
int hours,minutes,second;
int x,y;
cout<<"        Alarm clock      \n " ;
cout<<"    Enter the number of hours    \n";
cin>>x;
cout<<"    Enter the number of minutes    \n";
cin>>y;

for(hours=0;hours<12;hours++)
for(minutes=0;minutes<60;minutes++)
for(second=0;second<60;second++)
{
cout<<"the time today\n";
cout<<hours<<":"<<minutes<<":"<<second<<endl;

sleep(1);
clrscr();
if(hours==x)if(minutes==y){
cout<<"    completed    \n";
hours=12;
minutes=60;
second=60;}
}
break;
default : cout<< "error\n";
	break;
				}
	
}while(loop!=3);

}


