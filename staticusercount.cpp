/* Write a Program to create a class with name UserCount and a function Count(), this function will count total number of 
users of class.
Imp Point : Static Variables can be declared inside a class and initialized outside.
*/
// #include<iostream>
// using namespace std;
// static int User=0;
// class UserCount{
    
//     //static int User;
//     // public: int UserCount::User=0;
//    public: UserCount()
//     {
//        User=0;
//         User++;
//     }
//   public : void Count(){
    
//   cout<<"the value of count of Users is "<<User<<"\n";
//   }
//   public : void display(){
//     cout<<"total no of users are: "<<User;
//   }

// };



// int main(){
//     UserCount obj,obj1,obj2;

// obj2.Count();
// obj2.display();

 
//     return 0;
// }

// class UserCount{
//     public: UserCount(){
//           static int user=0;
//           user++;
//           cout<<user<<Endl;
//     }
// };






#include<iostream>
using namespace std;
class UserCount{
    public: static int n;     //static variable code
    public: UserCount(){
        n++;
    }
};
int UserCount::n=0;//::scope resolution operator
int main(){
    UserCount obj1,obj2,obj3;
    cout<<"total no os users are: "<<UserCount::n;
}
