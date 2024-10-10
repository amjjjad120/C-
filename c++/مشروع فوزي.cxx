#include<iostream>
#include<string>
using namespace std;
class data{
string name[100],x;
int id[100],i=0,f=0;
string dep[100];
int phone[100];
float avg[100];
static int count;
public:
virtual void  insert_fourth_level(){cout<<"go";}
void printdata();
data(){
name[100]="  ";
id[100]=0;
dep[100]="  ";
phone[100]=0;
avg[100]=0.0;}
void setname(){cout<<" \nenter name student  ";cin>>name[i];}
void setID(){cout<<"   \nenter ID student  ";cin>>id[i];}
void setdep(){cout<<"  \nenter department student. ";cin>>dep[i];}
void setphone(){cout<<"\nenter phone student. ";cin>>phone[i];}
void setavg(){cout<<"  \nenter avg student  ";cin>>avg[i];}
void getname(){cout<<" \nname student           ";cout<<name[i];}
void getID(){cout<<"   \nID student             ";cout<<id[i];}
void getdep(){cout<<"  \ndepartment student.    ";cout<<dep[i];}
void getphone(){cout<<"\nphone student.         ";cout<<phone[i];}
void getavg(){cout<<"  \navg student            ";cout<<avg[i]<<endl<<endl;}
void insertdata(){
do{
setname();
setID();
setdep();
setphone();
setavg();
cout<<"\nDo you want to enter another student's data? \n write yes or no \n";
cin>>x;
i++;
f=i;
count++;
}while(x!="no");}
static void getcount(){cout<<"count: "<<count<<endl;}};
void data :: printdata(){
i=0;
do{
getname();
getID();
getdep();
getphone();
getavg();
i++;
}while(i<f);}
int data :: count;
class first_level:public data{
public:
 void insert_first_level(){
insertdata();}
void print_first_level(){
printdata();}
};
class second_level:public data{
public:
 void insert_second_level(){
insertdata();}
void print_second_level(){
printdata();}};
class third_level:public data{
public:
 void insert_third_level(){
insertdata();}
void print_third_level(){
printdata();}};
class fourth_level:public data{
public:
 void insert_fourth_level(){
insertdata();}
void print_fourth_level(){
printdata();}};
class fifth_level:public data{
public:
 void insert_fifth_level(){
insertdata();}
void print_fifth_level(){
printdata();}};
int main(){
	data c;
	 c.insert_fourth_level();
int k,y,w,p,o,n;
 first_level h;
second_level h1;
third_level h2;
fourth_level h3;
fifth_level h4;
data getcount();
do{
cout<<"1-level 1 \n";
cout<<"1-level 2 \n";
cout<<"1-level 3 \n";
cout<<"1-level 4 \n";
cout<<"1-level 5 \n";
cin>>k;
switch(k){
case 1:
do{
cout<<"1-insert data student \n";
cout<<"2-display data student \n";
cout<<"3-exit \n";
cin>>y;
switch(y){
case 1:h.insert_first_level();break;
case 2:h.print_first_level();break;
default:cout<<"error \n";}}while(y!=3);break;
case 2:
do{
cout<<"1-insert data student \n";
cout<<"2-display data student \n";
cout<<"3-exit \n";
cin>>w;
switch(w){
case 1:h1.insert_second_level();break;
case 2:h1.print_second_level();break;
default:cout<<"error \n";}}while(w!=3);break;
case 3:
do{
cout<<"1-insert data student \n";
cout<<"2-display data student \n";
cout<<"3-exit \n";
cin>>p;
switch(p){
case 1:h2.insert_third_level();break;
case 2:h2.print_third_level();break;
default:cout<<"error \n";}}while(p!=3);break;
case 4:
do{
cout<<"1-insert data student \n";
cout<<"2-display data student \n";
cout<<"3-exit \n";
cin>>o;
switch(o){
case 1:h3.insert_fourth_level();break;
case 2:h3.print_fourth_level();break;
default:cout<<"error \n";}}while(o!=3);break;
case 5:
do{
cout<<"1-insert data student \n";
cout<<"2-display data student \n";
cout<<"3-exit \n";
cin>>n;
switch(n){
case 1:h4.insert_fifth_level();break;
case 2:h4.print_fifth_level();break;
default:cout<<"error \n";}}while(n!=3);break;
}
}while(k!=6);
}