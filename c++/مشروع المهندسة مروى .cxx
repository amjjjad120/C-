#include<iostream>
#include<string>
using namespace std;
int i;

class features{
	string name[100];
	int number[100];
	float price[100];
string Company_Name[100];
public:
virtual void insertmemo(){}
static int count;
	features(){
		name[100]="  ";
		price[100]=0.0;
		number[100]=0;
Company_Name[100]="  ";}
void insert(){
cout<<"enter the name product:   ";
cin>>name[i];
cout<<"\n Enter the number of the product ";
cin>>number[i];
cout<<"\n Enter the price of the product";
cin>>price[i];
cout<<"\n enter the Company_Name";
cin>>Company_Name[i];}

void display(){ 

cout<<"\nname:           "<<name[i];
cout<<"\nnumber:         "<<number[i];
cout<<"\nprice:          "<<price[i];
cout<<"\ncompany_name    "<<Company_Name[i]<<endl;}

};

int features::count=0;
class laptops:public features{
string core[100];
float Version;
public:
void insert(){
for(int i=0;i<100;i++){
insert();
cout<<"enter core \n";
 cin>>core[i];}
}
void display(){
for(int i=0;i<100;i++){
display();
cout<<"core               \n"<<core[i];}

}


};

class memory:public features{

int siz[100];
public:
memory(){siz[100] =0;}
void insert(){
for(int i=0;i<100;i++){
insert();
cout<<"enter siz memory \n";
cin>>siz[i];}}

 
  void display(){
for(int i=0;i<100;i++){
display(); 
cout<<"siz              "<<siz[i]<<endl;}

}

};


int main()
{

int password =12345;
laptops x;
memory  y;
int lop,lop1,lop2,f; 
do{cout<<"1-Officer \n2-Guest  \n";
cin>>lop1;
switch(lop1){
case 1:cout<<"enter the password:  ";cin>>f;
if(f==password){

do{
cout<<"1-laptops \n";
cout<<"2- memory \n";
cout<<"3- display laptops\n";
cout<<"4- display memory \n";
cout<<"0- exit \n";
cin>>lop;
switch(lop)
{
case 1: x.insert();break;
case 2: y.insert();break;
case 3: x.display();break;
case 4: y.display();break;
default:cout<<"error\n";}
}while(lop!=0); }
else
cout<<"   wrong password \n \n \n"; break;
case 2:
do{

cout<<"1- display laptops\n";
cout<<"2- display memory \n";
cin>>lop2;
switch(lop2)
{

case 1: x.display();break;
case 2: y.display();break;
default:cout<<"error\n";}
}while(lop2!=0); }
}while(lop1!=3);   




}