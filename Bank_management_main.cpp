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

// main Function
int main()
 {
   Transaction a1;
   main_menu(a1);
   getch();
   return 0;
  }

  char trans(Transaction &a1)
  {
    char ch;
    int i=0;
    while(1)
   {
     system("cls");
     intro();
     cout<<"\n\n\t\t\t 1. Deposit Amount ";
     cout<<"\n\n\t\t\t 2. Withdraw Amount ";
     cout<<"\n\n\t\t\t 3. Balance Enquiry ";
     cout<<"\n\n\t\t\t 4. Check Book Facility";
     cout<<"\n\n\t\t\t 5. Calculate Compound Interest ";
     cout<<"\n\n\t\t\t 6. Account Info";
     cout<<"\n\n\t\t\t    Exit(e)";
     cout<<"\n\n\t\t\t    Sign Out(s)";
     cout<<"\n\n\n\n\n\n\t\t\t  Enter your choice : ";
     cin>>ch;

     switch(tolower(ch))
     {
       case'1':system("cls");
                intro();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.deposit();
                break;
       case'2':system("cls");
                intro();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.withdraw();
                break;
       case'3':system("cls");
                intro();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.blncenquiry();
                break;
       case '4': a1.checkbk();
                break;
       case'5':a1.compound();
                break;
       case '6':a1.info();
	            break;
       case 'e':system("cls");
                intro();
                system("color c");
	            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t   Thank You";
	            sleep(2);
	            exit(0);
       case 's':cout<<"\n\n\n\n\n\n\n\n\n\n\t";
	             for(i=0;i<8;i++)
	             {
	              sleep(1);
                  cout<<"===== ===== ==== ==== ==== ";

                  }
	            return 's';
       default: cout<<"\n\n\n\t\t\t Invalid Choice ";
     }
    }
    getch();

}


void main_menu(Transaction &a1)
{
  welcome();
  char ch,sign;
  int i=0;
  while(1)
  {
   system("cls");
   intro();
   cout<<"\n\n\n\n\t\t\t\t MAIN MENU "<<endl<<endl;
   cout<<"\t\t\t   1. Create Account"<<endl<<endl;
   cout<<"\t\t\t   2. Sign in"<<endl<<endl;
   cout<<"\t\t\t   3. Exit"<<endl<<endl;
   cout<<"\n\n\t\t Enter your choice : ";
   cin>>ch;
   switch(ch)
    {
       case '1':system("cls");
                intro();
                cout<<endl<<endl<<endl<<endl;
	            a1.accntgetdata();
                break;
       case '2':system("cls");
                intro();
                char accnt2[16],password2[18];

                 cout<<"\n\n\n\n\n\n\n\n\t\t\t Enter Account No : ";
			     cin>>accnt2;
			     cout<<"\n\n\n\t\t\t Enter Password : ";

				for(i=0;i<18;i++)
				{
			       password2[i]=0;
			       }
			        i=0;
			    while((password2[i]=getch())!='\r')
                {
		           printf("*");
    	            i++;
	             }
			     sign=check(a1,accnt2,password2);
                 if(sign=='s'|| sign=='S')
                  continue;
			     break;

       case '3':system("cls");
                intro();
                system("color c");
	            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t   Thank You for banking";
	            sleep(2);
	            exit(0);
       default:cout<<"\n\n\t\t\t\t Invalid Choice";
                getch();
    }

  }

 }
