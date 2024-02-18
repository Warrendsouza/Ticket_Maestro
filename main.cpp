#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class admin
{
 protected:
 int tax;
 char movie1[69];
 char movie2[69];
 char movie3[69];
 int h1,h2,h3;//times
 int m1,m2,m3;
 int tseats1;//total seats in the theater
 int tseats2;//total seats in the theater
 int tseats3;//total seats in the theater
 /*int gold;
 int platinum;
 int silver;*/
 int platinum=250;
 int gold=200;
 int silver=100;
 int admincount;
 public:
 admin()
 {
 strcpy(movie1,"ONE_PIECE:RED"); //for movies
 strcpy(movie2,"ONE_PIECE:STAMPEDE");
 strcpy(movie3,"ONE_PIECE:GOLD");
 h1=10,m1=15; //for times
 h2=13,m2=25;
 h3=15,m3=45;
 int tax=3;
 /* int platinum=250;
 int gold=200;
 int silver=100;*/
 tseats1=25;//total seats in the theater
 tseats2=30;//total seats in the theater
 tseats3=20;//total seats in the theater
 }
 //to check if admin file is there
 int filepresent()
 {
 ifstream ifile;
 ifile.open("adminfile.txt");
 if(ifile)
 {
 return 1;
 }
 else 
 {
 return 0;
 }
ifile.close();
 }
 admin(int a)
 {
 //movie 1
 ofstream x;
 x.open("adminfile.txt",ios::trunc);
 cout<<"Enter the new name of movie 1:"<<endl;
 cin>>movie1;
 cout<<"Enter the new time(h/m)movie 1:"<<endl;
 cin>>h1>>m1;
 //movie 2
 cout<<"Enter the new name of movie 2:"<<endl;
 cin>>movie2;
 cout<<"Enter the new time(h/m)movie 2:"<<endl;
 cin>>h2>>m2;
 //movie 3
 cout<<"Enter the new name of movie 3:"<<endl;
 cin>>movie3;
 cout<<"Enter the new time(h/m)movie 3:"<<endl;
 cin>>h3>>m3;
 cout<<"enter new tax charge"<<endl;
 //cin>>tax;
 cout<<"enter the new rate of platinum seats"<<endl;
 cin>>platinum;
 cout<<"enter the new rate of gold seats"<<endl;
 cin>>gold;
 cout<<"enter the new rate of silver seats"<<endl;
 cin>>silver;
 x<<movie1<<" "<<h1<<" "<<m1<<" "<<movie2<<" "<<h2<<" "<<m2<<" "
 <<movie3<<" "<<h3<<" "<<m3<<" "<<tax<<" "<<platinum<<" "<<gold
 <<" "<<silver<<endl;
 x.close();
 }
 void display()
 { 
 admincount=filepresent();
 if(admincount==1)
 {
 ifstream adfile;
 adfile.open("adminfile.txt");
 
while(adfile>>movie1>>h1>>m1>>movie2>>h2>>m2>>movie3>>h3>>m3>>tax>>platinum>>go
ld>>silver)
 {
 cout<<setw(45-9+5)<<setfill('-')<<"MOVIE-MENU";
 for(int i=0;i<30-2+1+5+4-5;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(10)<<"screen"<<setw(30-3)<<"movie names"<<setw(16+1+4-
2+1)<<"time"<<setw(15)<<"seats"<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(11-2)<<"1 
"<<setw(30)<<movie1<<setw(15)<<h1<<":"<<m1<<"am"<<setw(11)<<tseats1<<setw(3)<<"|"<<
endl;
 cout<<"|"<<setw(10+1-2)<<"2 
"<<setw(35)<<movie2<<setw(10)<<h2<<":"<<m2<<"pm"<<setw(10+1)<<tseats2<<setw(3)<<"|"
<<endl;
 cout<<"|"<<setw(1+10-2)<<"3 
"<<setw(31)<<movie3<<setw(14)<<h3<<":"<<m3<<"pm"<<setw(13-
2)<<tseats3<<setw(3)<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<endl;
 cout<<setw(45-9+5)<<setfill('-')<<"SEAT-MENU";
 for(int i=0;i<30-2+1+5+4-5;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(25+4-2)<<"SEAT CLASS"<<setw(10+3+1)<<"Price"<<setw(23+10-
1)<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(25)<<"PLATINUM"<<setw(10+5)<<platinum<<setw(23+10)<<"|";
 cout<<endl<<"|"<<setw(15+10)<<"GOLD"<<setw(10+5)<<gold<<setw(23+10)<<"|";
 
cout<<endl<<"|"<<setw(15+10)<<"SILVER"<<setw(10+5)<<silver<<setw(23+10)<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 }
 adfile.close();
 }
 
 else
 {
 cout<<setw(45-9+5)<<setfill('-')<<"MOVIE-MENU";
 for(int i=0;i<30-2+1+5+4-5;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(10)<<"screen"<<setw(30-3)<<"movie names"<<setw(16+1+4-
2+1)<<"time"<<setw(15)<<"seats"<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(11-2)<<"1 
"<<setw(30)<<movie1<<setw(15)<<h1<<":"<<m1<<"am"<<setw(11)<<tseats1<<setw(3)<<"|"<<
endl;
 cout<<"|"<<setw(10+1-2)<<"2 
"<<setw(35)<<movie2<<setw(10)<<h2<<":"<<m2<<"pm"<<setw(10+1)<<tseats2<<setw(3)<<"|"
<<endl;
 cout<<"|"<<setw(1+10-2)<<"3 
"<<setw(31)<<movie3<<setw(14)<<h3<<":"<<m3<<"pm"<<setw(13-
2)<<tseats3<<setw(3)<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<endl;
 cout<<setw(45-9+5)<<setfill('-')<<"SEAT-MENU";
 for(int i=0;i<30-2+1+5+4-5;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(25+4-2)<<"SEAT CLASS"<<setw(10+3+1)<<"Price"<<setw(23+10-
1)<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 cout<<"|"<<setw(25)<<"PLATINUM"<<setw(10+5)<<platinum<<setw(23+10)<<"|";
 cout<<endl<<"|"<<setw(15+10)<<"GOLD"<<setw(10+5)<<gold<<setw(23+10)<<"|";
 
cout<<endl<<"|"<<setw(15+10)<<"SILVER"<<setw(10+5)<<silver<<setw(23+10)<<"|"<<endl;
 cout<<setw(45-9+5)<<setfill('-');
 for(int i=0;i<30-2+1+5+4-5+1;i++)
 {
 cout<<"-";
 }
 cout<<endl<<setfill(' ');
 }
 } 
 
};
class screen1:public admin
{ int r,c;
 protected:
 int pbookeds1;
 int a1[69];
 int 
pbookeds[5][5]={1,2,0,4,5,6,7,8,9,10,0,12,13,14,15,16,0,18,0,20,0,0,23,24,25};//previously 
booked seats
 //int tseats=25;//total seats in the theater
 public:
 int *screen1select(int tbs)
 { 
 r=5;
 c=5;
 ofstream x1;
 x1.open("screen1seats.txt",ios::app);
 x1<<endl;
 x1.close();
 int i;
 int i2;
 int j2;
 ifstream my_file;
 my_file.open("screen1seats.txt",ios::app);
 int ch;
 while (1)
 {
 my_file>>ch;
 if (my_file.eof())
 break;
 for(i2=0;i2<r;i2++)
 {
 for(j2=0;j2<c;j2++)
 {
 if(ch==pbookeds[i2][j2])
 {
 pbookeds[i2][j2]=0;
 break;
 }
 }
 }
 }
 my_file.close();
 for(i2=0;i2<r;i2++)
 {
 for(j2=0;j2<c;j2++)
 {
 cout<<pbookeds[i2][j2]<<"\t";
 }
 cout<<endl;
 }
 ofstream x;
// fflush(stdin);
 x.open("screen1seats.txt",ios::app);
 ofstream cc;
cc.open("seatsdata.txt",ios::app);
 cout<<"enter the seat numbers: "<<endl;
 for(i=0;i<tbs;i++)
 {
 cin>>a1[i];
 x<<a1[i]<<endl;
 cc<<a1[i]<<",";
 }
 x<<endl;
 cc<<endl;
 cc.close();
 x.close();
 for(int i1=0;i1<tbs;i1++)
 {
 for( i2=0;i2<r;i2++)
 {
 for( j2=0;j2<c;j2++)
 {
 if(a1[i1]==pbookeds[i2][j2])
 {
 pbookeds[i2][j2]=0;
 break;
 }
 
 }
 }
 }
 cout<<endl<<"seats successfully booked "<<endl;
 for(int i3=0;i3<r;i3++)
 {
 for(int j3=0;j3<c;j3++)
 {
 cout<<pbookeds[i3][j3]<<"\t";
 }
 cout<<endl;
 }
 return a1;
 }
};
class screen2:public admin
{
 protected:
 int r,c;
 int a1[69];
 int 
pbookeds[6][5]={1,2,3,4,5,6,0,8,9,10,0,12,13,0,15,16,0,18,0,20,0,0,23,24,25,26,27,28,0,0};//pre
viously booked seats
 //int tseats=30;//total seats in the theater
 public:
 int *screen2select(int tbs)
 {
 r=6;
 c=5;
 ofstream x1;
 x1.open("screen2seats.txt",ios::app);
 x1<<endl;
 x1.close();
 int i;
 int i2;
 int j2;
 ifstream my_file;
 my_file.open("screen2seats.txt",ios::app);
 int ch;
 while (1)
 {
 my_file >> ch;
 if (my_file.eof())
 break;
 for(i2=0;i2<r;i2++)
 {
 for(j2=0;j2<c;j2++)
 {
 if(ch==pbookeds[i2][j2])
 {
 pbookeds[i2][j2]=0;
 break;
 }
 }
 }
 }
 my_file.close();
 for(i2=0;i2<r;i2++)
 {
 for(j2=0;j2<c;j2++)
 {
 cout<<pbookeds[i2][j2]<<"\t";
 }
 cout<<endl;
 }
 ofstream x;
 fflush(stdin);
 x.open("screen2seats.txt",ios::app);
 cout<<"enter the seat numbers: "<<endl;
 ofstream cc;
cc.open("seatsdata.txt",ios::app);
 for(i=0;i<tbs;i++)
 {
 cin>>a1[i];
 x<<a1[i]<<endl;
 cc<<a1[i]<<",";
 }
 cc<<endl;
 cc.close();
 x.close();
 for(int i1=0;i1<tbs;i1++)
 {
 for( i2=0;i2<r;i2++)
 {
 for( j2=0;j2<c;j2++)
 {
 if(a1[i1]==pbookeds[i2][j2])
 {
 pbookeds[i2][j2]=0;
 break;
 }
 }
 }
 }
 cout<<endl<<"seats successfully booked "<<endl;
 for(int i3=0;i3<r;i3++)
 {
 for(int j3=0;j3<c;j3++)
 {
 cout<<pbookeds[i3][j3]<<"\t";
 }
 cout<<endl;
 }
 return a1;
 }
};
class screen3:public admin
{
 protected:
 int r,c;
 int a1[69];
 int pbookeds[5][4]={1,2,0,4,5,6,7,8,9,10,0,12,13,14,15,16,0,18,0,20};//previously booked 
seats
 //int tseats=20;//total seats in the theater
 public:
 int *screen3select(int tbs)
 {
 r=5;
 c=4;
 ofstream x1;
 //fflush(stdin);
 x1.open("screen3seats.txt",ios::app);
 x1<<endl;
 x1.close();
 int i;
 int i2;
 int j2;
 ifstream my_file;
 my_file.open("screen3seats.txt",ios::app);
 int ch;
 while (1)
 {
 my_file >> ch;
 if (my_file.eof())
 break;
 for(i2=0;i2<r;i2++)
 {
 for(j2=0;j2<c;j2++)
 {
 if(ch==pbookeds[i2][j2])
 {
 pbookeds[i2][j2]=0;
 break;
 }
 }
 }
 }
 my_file.close();
 for(i2=0;i2<r;i2++)
 {
 for(j2=0;j2<c;j2++)
 {
 cout<<pbookeds[i2][j2]<<"\t";
 }
 cout<<endl;
 }
 ofstream x;
 fflush(stdin);
 x.open("screen3seats.txt",ios::app);
 cout<<"enter the seat numbers: "<<endl;
 ofstream cc;
cc.open("seatsdata.txt",ios::app);
 for(i=0;i<tbs;i++)
 {
 cin>>a1[i];
 x<<a1[i]<<endl;
 cc<<a1[i]<<",";
 }
 cc<<endl;
 cc.close();
 x.close();
 for(int i1=0;i1<tbs;i1++)
 {
 for( i2=0;i2<r;i2++)
 {
 for( j2=0;j2<c;j2++)
 {
 if(a1[i1]==pbookeds[i2][j2])
 {
 pbookeds[i2][j2]=0;
 break;
 }
 
 }
 }
 }
 cout<<endl<<"seats successfully booked "<<endl;
 for(int i3=0;i3<r;i3++)
 {
 for(int j3=0;j3<c;j3++)
 {
 cout<<pbookeds[i3][j3]<<"\t";
 }
 cout<<endl;
 }
 return a1;
 }
};
class booking: public admin
{
 protected:
 //public:
 char name[20];
 int tbs;//total booked seats by the customer
 int sn;//screen number
 int ps,gs,sis;//sis=silver seats gs=gold seats ps=platinum seats
 int tas;//total ammount of booked seats
 public:
 booking()
 {
 admin::display();
 cout<<"enter screen number:"<<endl;
 cin>>sn;
 cout<<"enter customer name:"<<endl;
 cin>>name;
 cout<<"enter the mumber of: "<<endl;
 cout<<"platinum seats: ";
 cin>>ps;
 cout<<endl<<"gold seats: ";
 cin>>gs;
 cout<<endl<<"silver seats: ";
 cin>>sis;
 cout<<endl;
 tbs=ps+gs+sis;
 cout<<"total seats: "<<tbs<<endl;
 // tas=((ps*admin::platinum)+(gs*admin::gold)+(sis*admin::silver)*(admin::tax));
 tas=ps*admin::platinum+gs*admin::gold+sis*admin::silver;
 cout<<"total payable ammount is :"<<tas<<endl;
 }
};
class selectseats: public screen1, public screen2, public screen3 , public booking
{
 protected:
 int cs;// select seats 
 const int tbs=booking::tbs;
 int *x;
 public:
 
 selectseats():booking()
 {
 int cs[tbs];
 // cout<<"seats booked are :";
 switch (booking::sn)
 {
 case 1:
 x=screen1::screen1select(booking::tbs);
 //setting array into cs;
 for(int i=0;i<booking::tbs;i++)
 {
 cs[i]=x[i];
 }
 break;
 case 2:
 x=screen2::screen2select(booking::tbs);
 //setting array into cs;
 for(int i=0;i<booking::tbs;i++)
 {
 cs[i]=x[i];
 }
 break;
 case 3:
 x=screen3::screen3select(booking::tbs);
 //setting array into cs;
 for(int i=0;i<booking::tbs;i++)
 {
 cs[i]=x[i];
 }
 break;
 }
 cout<<endl;
 cout<<"seats booked are : ";
 for(int i=0;i<booking::tbs;i++)
 {
 cout<<cs[i]<<" \t";
 }
}
};
void overallstatus(int a,int b)
{
 static int count;
 count=count+a;
 static int income;
 income=income+b;
 if(a=b==0)
 {
 cout<<"total seats booked today are: "<<count;
 cout<<endl<<"total income today is: "<<income;
 cout<<endl<<endl;
 }
}
class receipt:public selectseats
{ 
 public:
 int count;
 int income;
 
 friend void overallstatus(int a, int b );
// friend void overallstatus();
 receipt():selectseats()
 {
 count=booking::tbs;
 income=booking::tas;
 overallstatus(count,income);
 cout<<endl<<endl<<endl;
 cout<<setw(50)<<"Your Ticket booking was SUCCESSFUL"<<endl<<setw(80)<<" Please do 
visit us again"<<endl<<setw(105)<<"THANKYOU...";
 cout<<endl;
 ofstream x;
 x.open("info69.txt",ios::app);
 //ps+gs+sis;
 x<<booking::name<<" "<<booking::sn<<" "<<booking::ps<<" "<<booking::gs<<" "
 <<booking::sis<<" "<<booking::tbs<<" "<<booking::tas<<endl;
 x.close();
 
 }
};
void calladmin1()
{
 char x[10];
 int c=0;
 do{
 cout<<"enter PASSWORD to enter ADMIN-MODE:"<<endl;
 cin>>x;
 if(!strcmp(x,"admin"))
 {
 admin a(1);
 break;
 }
 else
 {
 cout<<"not equal\n";
 c++;
 }
 }while(c!=4);
}
void callreceiptobj()
{
 receipt obj;
}
void readcustdata()
{
 ifstream x;
 string s1,s2;
 int scrn,totsts,toamt;
 int p,g,s;
 x.open("info69.txt",ios::app);
 ifstream adfile;
 adfile.open("seatsdata.txt",ios::app);
 string c;
 char og=',';
 char og1=' ';
 for(int j=0;j<146+1;j++)
 cout<<"-";
 cout<<endl;
 
cout<<"|"<<setw(15)<<"name"<<setw(17)<<"screen"<<setw(19)<<"platinum"<<setw(15)<<"gold
"
 <<setw(17)<<"silver"<<setw(22)<<"total_seats"<<setw(18)<<"ammount"<<setw(22)<<"seat 
numbers"
 <<"|\n";
 for(int j1=0;j1<147;j1++)
 cout<<"-";
 cout<<endl;
 while( x>>s1>>scrn>>p>>g>>s>>totsts>>toamt&&adfile>>c)
 { 
 for(int i=0;i<c.length();i++)
 {
 if(c[i]==og)
 {
 c[i]=og1;
 }
 }
 cout<<"|"<<setw(15)<<s1<<setw(17-2)<<scrn<<setw(19)<<p<<setw(15)<<g
 <<setw(17)<<s<<setw(22)<<totsts<<setw(18)<<toamt<<setw(22)<<c<<" "<<" |"
 <<endl;
 for(int j2=0;j2<147;j2++)
 cout<<"-";
 cout<<endl;
 }
 x.close();
 adfile.close();
}
int main()
{
 int x;
 do 
 {cout<<"enter 1.to enter admin-mode\n";
 cout<<"enter 2.to book tickets\n";
 cout<<"enter 3.to check sales status\n";
 cout<<"enter 4.to read customer data\n";
 cout<<"enter 5. to exit\n";
 cout<<"enter choice :\n";
 cin>>x;
 switch(x)
 {
 case 1 :
 // admin a(1);
 calladmin1();
 
 break;
 case 2:
 callreceiptobj();
 break;
 case 3:
 overallstatus(0,0);
 break;
 case 4:
 readcustdata();
 break;
 case 5:
 exit(0);
 break;
 default:
 cout<<"enter a valid input\n";
 }
 }while(x!=5);
 return 0;
}
