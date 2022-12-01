#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include"welcome_file.cpp"
class Transaction;
void main_menu(Transaction&);
char trans(Transaction&);
using namespace std;
class user
{
  protected:
   char name[25];
   char email[25];
   int age,i;
   char mobi[12];

  public:
     void usergetdata()
     {

       cout<<"\n\t\t\t Enter Full Name : ";
       for(i=0;i<25;i++)
      {
	  	   name[i]=0;
	   }
		i=0;
       fflush(stdin);
	   gets(name);
       cout<<"\n\t\t\t Enter Email-ID : ";
       for(i=0;i<25;i++)
      {
	  	   email[i]=0;
	   }
		i=0;
       cin>>email;
       cout<<"\n\t\t\t Enter Age : ";
       cin>>age;
       cout<<"\n\t\t\t Enter Mobile No : ";
       for(i=0;i<12;i++)
      {
	  	   mobi[i]=0;
	   }
		i=0;
       cin>>mobi;
       }

     void nam()
    {
      cout<<name;
      }
 };