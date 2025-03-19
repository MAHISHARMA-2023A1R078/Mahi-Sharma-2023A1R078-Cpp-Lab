/* Declaring Static Variable inside function and inside class          19/03/25*/
/* Imp : Static Variable declared inside the class are initialized outiside the class */
#include<iostream>
using namespace std;
class UserCount{    //same ko include 
             public: static int Count; //static variable imside class
             void Counter(){
            // Count = 0;   //initialized inside function 
            Count++;
             }
             void Display(){
                cout<<"Usera are "<<Count<<endl;
             }
};
int UserCount::Count = 0; //initialized outiside the class
// using syntax datatype class name scope resolution operator and static variable name
int main(){
    UserCount User1;
    User1.Counter();
    User1.Display(); //same user ko 2 dikhara 
    User1.Counter();
    User1.Display();
    return 0;  //uniquely identify no of users and relogin 
}


// solution : in using constructor static 