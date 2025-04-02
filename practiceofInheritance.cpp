/* write a program to    2/04/25
a. create a base class with name Myapp
b. create a function message() , display welcome message on screen 
c. create a function Login() accept pin from user and validate pin against value 123 
and return Message 'yes' or 'no' 
d. create a derived class with name StudentInfo
e. create a function Accept() store student Information like Name, Registration Number, Course Name but only when user Login Successfull.
f. create a function display() to display student information on screen.*/

#include<iostream>
using namespace std;
class MyApp  //Parent class 
{
public: void message(){
    cout<<"Welcome to My Application";
}
private : int pin1 =123, pin2;
public: string Login(){
    cout<<"\n Enter your pin ";
    cin>>pin2;
    if(pin1==pin2){
        cout<<"\n Login Successful";
        return "yes";
    }
    else{
        cout<<"\n Login Fail";
        return "no";
    }
}
};
class StudentInfo : public MyApp{
    private: string Name, CourseName;
    int RegistrationN;
    public: void Accept(){
        cout<<"\nenter the name of the student: ";
        cin>>Name;
        cout<<"\nenter the Registration Number of the student: ";
        cin>>RegistrationN;
        cout<<"\nenter the Course Name: ";
        cin>>CourseName;
    }
    public: void display(){
        cout<<"the name, Rehgistration Number and Course Nmae of the student is: "<<Name<<"\t"<<RegistrationN<<"\t"<<CourseName<<"\n";
    }

};
// class Login : public MyApp //child class (Syntax class child class name sign of Inheritance : public base class)
// {
//     private : int pin1 =123, pin2;
//     public: string Accept(){
//         cout<<"\n Enter your pin ";
//         cin>>pin2;
//         if(pin1==pin2){
//             cout<<"\n Login Successful";
//             return "yes";
//         }
//         else{
//             cout<<"\n Login Fail";
//             return "no";
//         }
//     }
// };
int main(){
    StudentInfo  obj;
    obj.message();
    string res;
    res=obj.Login();
    if(res=="yes"){
        obj.Accept();
        obj.display();
    }
    else{
        cout<<"\nthe pin is invalid\n";
    }

  
    return 0;
}

