#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int hours,minutes,second;

for(hours=0;hours<12;hours++)
for(minutes=0;minutes<60;minutes++)
for(second=0;second<60;second++)
{
cout<<"the time today\n";
cout<<hours<<":"<<minutes<<":"<<second<<endl;

sleep(1);
clrscr();




}





}