/*a. Create a class with name Bank          //17/03/25
b. member variable with name balance
c. parametrized constructor to initialize member variable
d. display fn to display() updated balance
e. function with name NetBanking() //return object
this fn will deposit amount and add this amount with balance
*/
/* by mam */
// #include<iostream>
// using namespace std;
// class Bank{
//     public: float bal;
//     public: Bank(float balance){
//          bal=balance;
        

//     }
//     public: void display(){
//         cout<<"\nthe updated balance is "<<bal;
//     }
 
// };
// Bank NetBanking(Bank obj1)
// {
// obj1.bal=obj1.bal + 1000.00;
// return obj1;
// }
// int main(){
//     Bank obj2(19000.00);
//     obj2.display();
//     obj2=NetBanking(obj2);//obj1 ki values obj2 main pass hori
//     obj2.display();
 
   
// }



//by me
#include<iostream>
using namespace std;
class Bank{
    public: float bal;
    public: Bank(float balance){
         bal=balance;
        

    }
    public: void display(){
        cout<<"\nthe updated balance is "<<bal;
    }
 
};
float  amt;
Bank NetBanking(Bank obj)
{cout<<"enter the amount ";
    cin>>amt;
    amt=amt+obj.bal;
 return amt;

}
int main(){
    Bank obj2(19000.00);
    obj2.display();
    obj2=NetBanking(obj2);//obj1 ki values obj2 main pass hori
    obj2.display();
 
   
}