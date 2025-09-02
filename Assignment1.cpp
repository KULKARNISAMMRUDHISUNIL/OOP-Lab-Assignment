#include<iostream>
#include<string>
using namespace std;
class bank account {
  string name, atype;
  int account_no;
  float balance;
public:
  bank_account(string n, string at, int anum, float b) {
    name=n;
    atype=at;
    account_no=anum;
    balance=b;
}
void accept();
void display();
void deposit();
void withdraw();
};
/* void bank_account::accept() {
cout<<"\n Enter name of customer:";
cin>>name;
cout<<"\n Enter account type:";
cin>>atype;
cout<<"\n Enter the account number:";
cin>>account_no;
cout<<"\n Enter current balance amount in the account:";
 cin>>balance;   */

void bank_account::display()
{
cout<<"\n Displaying Account details:";
cout<<"\n Name of the customer: "<<name;
cout<<"\n Account type: "<<atype;
cout<<"\n Account number: "<<account no;
cout<<"\n Balance: "<<balance;
}

void bank_account::deposit() {
  float dp;
  cout<<"\nEnter the amount to be deposited:";
  cin>>dp;
  balance balance+dp;
  cout<<"\nNew balance: "<<balance;
}

void bank_account::withdraw() {
  float w;
  cout<<"\nEnter the amount to be withdrawed:";
  cin>>w;
  balance-balance-w;
  cout<<"\nNew balance: "<<balance;
}

int main() {
int choice;
char ans;
string namel,atl;
int anuml;
float bl;

cout<<"Welcome to the Bank!\nPlease enter account details \n\n";
cout<<"Enter name of customer:";
cin>>namel;
cout<<"Enter account type:";
cin>>atl;
cout<<"Enter the account number:";
cin>>anuml;
cout<<"Enter current balance amount in the account:";
cin>>b1;
bank account obj1(namel, atl,anuml,bl);

do
{
cout<<"\nSelect a choice: \n";
cout<<"1.Deposit\n2.Withdraw\n3.Display account details\n4.Exit\n";
cout<<"\nEnter your choice number:";
cin>>choice;
switch(choice)
{
case 1: objl.deposit();
  break;

case 2: objl.withdraw();
  break;

case 3: objl.display();
  break;

case 4: cout<<"Thank you! Exiting...";
  break;
}
cout<<"\n\nDo you want to continue (Y/N):";
cin>>ans;
while(ans=='Y' ||ans=='y');
return 0;
}

}
