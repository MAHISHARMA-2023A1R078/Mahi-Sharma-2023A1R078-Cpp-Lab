/*21/04/25
Program: Friend Class
In BankApp, we create a Frind class Admin Class as Freind Class of BankApp Class which 
can access internal data of this class(BankApp Class) and can modify it.  */
#include<iostream>
using namespace std;
// class Admin; //Forward Declaration agr niche friend class mein error aye too use it  otherwise use niche wla khali
class BankApp{
    private: int Account_Number;
    string  Username;
    int password;
    float Balance;
    public: BankApp(int Number, string user, int pass, float Bal){
        Account_Number=Number;
        Username=user;
        password=pass;
        Balance=Bal;
    }
    public: void Display(){
        cout<<"\nUsername is "<<Username;
        cout<<"\nPassword is "<<password;
        cout<<"\nAccount Number is "<<Account_Number;
        cout<<"\nBalance is "<<Balance;
    }
    friend class Admin; //Declaring Friend Class Admin inside this BankApp class
};
class Admin{
    private: int p=1111;
    public: void Reset_Pass(BankApp &obj){ //refrence di to change the password at whole 
        obj.password =p;

    }
};
int main(){
   BankApp obj1(101,"user1",1234,10000);
   obj1.Display();
   cout<<"\nAfter Password resetting";
   Admin obj2;
   obj2.Reset_Pass(obj1);
   obj1.Display();
    return 0;
}