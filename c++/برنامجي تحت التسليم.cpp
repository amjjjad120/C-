#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int i;
int idr;
int siz=4;
const int passowrd=12345678;
string idp;
string name1;
string name2;
string name3;
string phone4;
string phonenumber1;
struct imt
{
int id;
string name;
string phonenumber;
float math;
float arabic;
float english;
float cpp;
float electricity;
float physics;
float engineeringdrawing;
};
void input(int siz,imt student[siz]);
void output(int siz,imt student[siz]);
void changedata(int siz,imt student[siz]);
void serch (int siz,imt student[siz]);
void marks(int siz, imt student[siz]);
int main() 
{
imt student[siz];
int loop;
cout<<"ENTER THE NUMBER OF STUDENT: ";
cin>>siz;
for(i=0;i<siz;i++){
cout<<"ENTER THE STUDENT'S ID:  ";
cin>>student[i].id;
cout<<"ENTER THE STUDENT'S NAME:  ";
cin>>student[i].name;
cout<<"ENTER THE PHONE NUMBER:  ";
cin>>student[i].phonenumber;}
do{
cout<<"\n1-OUTPUT DATA STUDENT\n";
usleep(400000);
cout<<"2-CHANGE DATA STUDENT\n";
usleep(400000);
cout<<"3-SERCH  DATA STUDENT\n";
usleep(400000);
cout<<"4-INPUT STUDENT MARKS\n";
usleep(400000);
cout<<"5-EXIT FROM THE PROGRAM \n";
usleep(400000);
cin>>loop;
switch(loop){
case 1:
output(siz,student);
break;
case 2:
changedata(siz,student);
break;
case 3:
serch(siz,student);
break;
case 4:
marks(siz,student);
break;
default:
if(loop!=5)
cout<<"  ERROR\nPLEASE RETRY\n\n";}}
while(loop!=5);
cout<<"《《THANKYOU FOR USE THE PROGRAM》》\n\n";
}
void output (int siz,imt student[siz])
{
int loop5;
string name6;
do{
cout<<"1-OUTPUT ONE STUDENT DATA\n";
usleep(400000);
cout<<"2-OUTPUT ALL STUDENTS DATA\n";
usleep(400000);
cout<<"3-BACK TO HOME\n";
usleep(400000);
cin>>loop5;
switch(loop5){
case 1:
cout<<"ENTER THE NAME WANT YOU PRINT:";
cin>>name6;
for(i=0;i<siz;i++)
if(name6==student[i].name)
{
cout<<"ID                "<<student[i].id<<endl;
cout<<"NAME              "<<student[i].name<<endl;
cout<<"PHONE NUMBER      "<<student[i].phonenumber<<endl<<endl;
cout<<"ARABIC               "<<student[i].arabic<<endl;
usleep(400000);
cout<<"ENGLISH              "<<student[i].english<<endl;
usleep(400000);
cout<<"MATH                 "<<student[i].math<<endl;
usleep(400000);
cout<<"PHYSICS              "<<student[i].physics<<endl;
usleep(400000);
cout<<"CPP                  "<<student[i].cpp<<endl;
usleep(400000);
cout<<"ELECTRICITY          "<<student[i].electricity<<endl;
usleep(400000);
cout<<"ENGINEERING DRAWING  "<<student[i].engineeringdrawing<<endl<<endl;
usleep(400000);}
break;
case 2:
for(i=0;i<siz;i++){
cout<<"ID              "<<student[i].id<<endl;
cout<<"NAME.           "<<student[i].name<<endl;
cout<<"PHONE NUMBER    "<<student[i].phonenumber<<endl<<endl;
cout<<"ARABIC               "<<student[i].arabic<<endl;
usleep(400000);
cout<<"ENGLISH.             "<<student[i].english<<endl;
usleep(400000);
cout<<"MATH.                "<<student[i].math<<endl;
usleep(400000);
cout<<"PHYSICS              "<<student[i].physics<<endl;
usleep(400000);
cout<<"CPP.                 "<<student[i].cpp<<endl;
usleep(400000);
cout<<"ELECTRICITY.         "<<student[i].electricity<<endl;
usleep(400000);
cout<<"ENGINEERING DRAWING  "<<student[i].engineeringdrawing<<endl<<endl;
usleep(400000);}
break;
default:
if(loop5!=3)
cout<<" ERROR\nPLEASE RETRY\n\n";
break;}}
while(loop5!=3);
cout<<"THANKYOU FOR USE PROGRAM\n\n";
}
void changedata(int siz,imt student[siz])
{
int loop2,looop,pass,t=0; 
string all,naame;
do
{
cout<<"1-CHANGE STUDENT ID\n";
usleep(400000);
cout<<"2-CHANGE STUDENT NAME\n";
usleep(400000);
cout<<"3-CHANGE STUDENT PHONE NUMBER\n";
usleep(400000);
cout<<"4-CHANGE ALL STUDENT DATA\n";
usleep(400000);
cout<<"5-CHANGE STUDENTS'S MARKS\n";
usleep(400000);
cout<<"6-BACK TO HOME\n";
usleep(400000);
cin>>loop2;
switch(loop2){
case 1:
cout<<"ENTER THE NAME WANT CHANGE DATA: ";
cin>>idp;
for(i=0;i<siz;i++)
if(idp==student[i].name)
{
cout<<"ENTER THE NEW ID: ";
cin>>student[i].id;
}
break;
case 2:
cout<<"ENTER THE NAME WANT CHANGE DATA: ";
cin>>name1;
for(i=0;i<siz;i++)
if(name1==student[i].name)
{
cout<<"ENTER THE NEW NAME: ";
cin>>student[i].name;
}
break;
case 3:
cout<<"ENTER THE NAME WANT CHANGE DATA: ";
cin>>phonenumber1;
for(i=0;i<siz;i++)
if(phonenumber1==student[i].name)
{
cout<<"ENTER THE NEW PHONE NUMBER: ";
cin>>student[i].phonenumber;
}
break;
case 4:
cout<<"ENTER THE NAME STUDENT YOU WANT TO CHANGE";
cin>>all;
  for(i=0;i<siz;i++)
if(all==student[i].name){
cout<<"ENTER THE ID STUDENT: ";
cin>>student[i].id;
cout<<"ENTER THE NAME STUDENT:  ";
cin>>student[i].name;
cout<<"ENTER THE PHONE NUMBER:  ";
cin>>student[i].phonenumber;}
break;
case 5:
cout<<"ENTER THE PASSOWRD:";
cin>>pass;
for(i=0;i<siz;i++)
if(pass==passowrd){
do{
cout<<"1-CHANGE ONE STUDENT MARK\n";
usleep(400000);
cout<<"2-CHANGE ALL STUDENT MARKS\n";
usleep(400000);
cout<<"3-BACK TO HOME\n";
usleep(400000);
cin>>looop;
switch(looop)
{
case 1:
cout<<"ENTER THE NAME STUDENT:";
cin>>naame;
for(i=0;i<siz;i++)
if(naame==student[i].name)
{
cout<<" ENTER THE MARK OF ARABIC: ";
cin>>student[i].arabic;
cout<<" ENTER THE MARK OF ENGLISH: ";
cin>>student[i].english;
cout<<" ENTER THE MARK OF MATH: ";
cin>>student[i].math;
cout<<" ENTER THE MARK OF PHYSICS: ";
cin>>student[i].physics;
cout<<" ENTER THE MARK OF CPP: ";
cin>>student[i].cpp;
cout<<" ENTER THE MARK OF ELECTRICITY: ";
cin>>student[i].electricity;
cout<<" ENTER THE MARK OF ENGINEERING DRAWING: ";
cin>>student[i].engineeringdrawing;}
break;
case 2:
for(i=0;i<siz;i++)
{
cout<<" ENTER THE MARK OF ARABIC: ";
cin>>student[i].arabic;
cout<<" ENTER THE MARK OF ENGLISH: ";
cin>>student[i].english;
cout<<" ENTER THE MARK OF MATH: ";
cin>>student[i].math;
cout<<" ENTER THE MARK OF PHYSICS: ";
cin>>student[i].physics;
cout<<" ENTER THE MARK OF CPP: ";
cin>>student[i].cpp;
cout<<" ENTER THE MARK OF ELECTRICITY: ";
cin>>student[i].electricity;
cout<<" ENTER THE MARK OF ENGINEERING DRAWING: ";
cin>>student[i].engineeringdrawing;}
break;
default :
if(looop!=3)
cout<<"  ERROR\NPLEAS RETRY\n\n";}
}while(looop!=3);
cout<<"THANK YOU FOR USE THE PROGRAM\n";}

 break;
default :
if(loop2!=6)
cout<<"  ERROR\nPLEASE RETRY\n\n"; }
}while(loop2!=6);
cout<<"《《THANKYOU FOR USE THE PROGRAM》》\n\n";}
void serch (int siz,imt student[siz])
{
int loop3,ss=0,mm=0,nn=0; 
do{
cout<<"1-SERCH STUDENT ID\n";
usleep(400000);
cout<<"2-SERCH STUDENT NAME\n";
usleep(400000);
cout<<"3-SERCH STUDENT PHONE NUMBER\n";
usleep(400000);
cout<<"4-BACK TO HOME\n";
usleep(400000);
cin>>loop3;
switch(loop3){
case 1:
cout<<"ENTER THE ID WANT SERCH DATA: ";
cin>>idr;
mm++;
for(i=0;i<siz;i++)
if(idr==student[i].id)
{mm++;
if(mm!=0)
cout<<"\n. ☆☆THIS ID EXISTS☆☆.\n IF YOU WANT TO PRINT ITS DATA,\n   GO BACK TO THE MAIN MENU\n\n";}
else
cout<<"\n《《THIS  ID DOES NOT EXIST》》";
break;
case 2:
cout<<"ENTER THE NAME WANT SERCH DATA: ";
cin>>name3;
for(i=0;i<siz;i++)
if(name3==student[i].name)
{ss++;
if(ss!=0)
cout<<"\n. ☆☆THIS NAME EXISTS☆☆.\n IF YOU WANT TO PRINT ITS DATA,\n   GO BACK TO THE MAIN MENU\n\n";}
else
cout<<"\n《《THIS  NAME DOES NOT EXIST》》";
break;
case 3:
cout<<"ENTER THE PHONE NUMBER WANT SERCH DATA: ";
cin>>phone4;
for(i=0;i<siz;i++)
if(phone4==student[i].phonenumber)
{nn++;
if(nn!=0)
cout<<"\n. ☆☆THIS PHONE NUMBER EXISTS☆☆.\n IF YOU WANT TO PRINT ITS DATA,\n   GO BACK TO THE MAIN MENU\n\n";}
else
cout<<"\n《THIS PHONE NUMBER DOES NOT EXIST》\n";
break; 
default :
cout<<"  ERROR\nPLEASE RETRY\n\n";}
}while(loop3!=4);
cout<<"《《THANKYOU FOR USE THE PROGRAM》》\n\n";}
void marks (int siz,imt student[siz])
{
string name5;
int loop4;
do{
cout<<"1-INPUT ONE STUDENT MARK\n";
usleep(400000);
cout<<"2-INPUT ALL STUDENTS MARKS\n";
usleep(400000);
cout<<"3-EXIT FROM PROGRAM\n";
usleep(400000);
cin>>loop4;
switch(loop4){
case 1:
cout<<" ENTER THE NAME OF THE STUDENT\n WHO WANTS YOU TO ENTER ITS MARKS\n\n ";
cin>>name5;
for(i=0;i<siz;i++)
if(name5==student[i].name)
{
cout<<" ENTER THE MARK OF ARABIC: ";
cin>>student[i].arabic;
cout<<" ENTER THE MARK OF ENGLISH: ";
cin>>student[i].english;
cout<<" ENTER THE MARK OF MATH: ";
cin>>student[i].math;
cout<<" ENTER THE MARK OF PHYSICS: ";
cin>>student[i].physics;
cout<<" ENTER THE MARK OF CPP: ";
cin>>student[i].cpp;
cout<<" ENTER THE MARK OF ELECTRICITY: ";
cin>>student[i].electricity;
cout<<" ENTER THE MARK OF ENGINEERING DRAWING: ";
cin>>student[i].engineeringdrawing;}
break;
case 2:
for(i=0;i<siz;i++)
{
cout<<" ENTER THE MARK OF ARABIC: ";
cin>>student[i].arabic;
cout<<" ENTER THE MARK OF ENGLISH: ";
cin>>student[i].english;
cout<<" ENTER THE MARK OF MATH: ";
cin>>student[i].math;
cout<<" ENTER THE MARK OF PHYSICS: ";
cin>>student[i].physics;
cout<<" ENTER THE MARK OF CPP: ";
cin>>student[i].cpp;
cout<<" ENTER THE MARK OF ELECTRICITY: ";
cin>>student[i].electricity;
cout<<" ENTER THE MARK OF ENGINEERING DRAWING: ";
cin>>student[i].engineeringdrawing;
}
break;
default:
if(loop4!=3)
cout<<"  ERROR\nPLEASE RETRY\n\n";
break;}
}while(loop4!=3);
cout<<"《《THANKYOU FOR USE THE PROGRAM》》\n\n";}