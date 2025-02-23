/* Program to demonstrate working of function overloading and constructor overloading.
Create a class with name LoginApp, with function name Register(),
Overload this function three times in this program.
1. Register function will accept user name and Display "Hi" Message with user name.
2. Register funciton will accept Registration Number and Validate Registration
number between (1 to 50)
3. Regiser function will accpet Marks and Calculate Credit, for every 10 marks provide 1 credit (Max 100).
4. create default constructor of class, diplay ,message "Welcome to LoginApp"
5. Create parametrized constructor of class, that accept login credentials, like Login Pin.
21/02/25 */

#include<iostream>
using namespace std;
class LoginApp{
    private: string name;
    int reg,credits;
    public: LoginApp(){   //default constructor
        cout<<"Welcome to LoginApp!!\n";
    }
    public: LoginApp(int LoginPin){
        if(LoginPin==1234){
            cout<<"\nthe loginpin accepted which is: "<<LoginPin;

        }
        else{
            cout<<"\nlogin pin is invalid!!\n";
        }

    }
    public: void Register(){
        cout<<"enter the username: \n";
        cin>>name;
        cout<<"Hi "<<name;

    }
    public: void Register(int reg){
        cout<<"\nenter the registration number:\n ";
        if(reg>=1 && reg<=50){
            cout<<reg;
            cout<<"\naccept the registration number.";
            cout<<"\nthe registration validated\n";
            LoginApp (1234);
           Register(99.05,10);
           //LoginApp (1234);
        }
        else{
            cout<<reg;
            cout<<"\nnot valid\n";
        }
    }
    public: void Register(float marks, int num){
        cout<<"\nthe credits based on the obtained marks....\n";
        cout<<"marks= "<<marks;
        credits=marks/100*num;
        cout<<"\nfor every 10 marks provide 1 credit: "<<credits;



    }
};
int main(){
    LoginApp obj;
    obj.Register();
    obj.Register(8);
    //LoginApp obj1(1234,9);
    return 0;

}

//2nd type with return type pf fn :- int:

// #include<iostream>
// using namespace std;
// class LoginApp{
//     private: string name;
//     int reg,credits;
//     public: LoginApp(){   //default constructor
//         cout<<"Welcome to LoginApp!!\n";
//     }
//     public: LoginApp(int LoginPin){
//         if(LoginPin==1234){
//             cout<<"\nthe loginpin accepted which is: "<<LoginPin;

//         }
//         else{
//             cout<<"\ninvalid!!\n";
//         }

//     }
//     public: void Register(){
//         cout<<"enter the username: \n";
//         cin>>name;
//         cout<<"Hi "<<name;

//     }
//     public: int Register(int reg){
//         cout<<"\nenter the registration number:\n ";
//         if(reg>=1 && reg<=50){
//             cout<<reg;
//             cout<<"\naccept the registration number.";
//             cout<<"\nthe registration validated\n";
//             return 1;
//           // Register(88.95,10);
//            //LoginApp (1234);
//         }
//         else{
//             cout<<reg;
//             cout<<"\nnot valid\n";
//             return 0;
//         }
//     }
//     public: void Register(float marks, int num){
//         cout<<"the credits based on the obtained marks....\n";
//         cout<<"marks= "<<marks;
//         credits=marks/100*num;
//         cout<<"\nfor every 10 marks provide 1 credit: "<<credits;



//     }
// };
// int main(){
//     LoginApp obj;
//     obj.Register();
//     int res;
//     res=obj.Register(0);
//     if(res==1){
//         obj.Register (88.95, 10);
//         LoginApp obj(1234);
//     }
//     else{
//         cout<<"no";
//     }
//     //obj.Register(8);
//     //LoginApp obj1(1234,9);
//     return 0;
   

// return 0;
// }