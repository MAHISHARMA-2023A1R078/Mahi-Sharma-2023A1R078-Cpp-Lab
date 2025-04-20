/*17/04/25
Implement Polymorphism for member function in UG Class, PG Class and Diploma Class 
Polymorphism: - Function Overloading and Function Overriding
Write a Program to :
a, Create a Base Class with MyStudyApp,
b. Create a function Login() 
overload this function for Admin, Student and Guest Login,
c. Login Function for Admin has two Parameters username(admin) and Pin(121)
d.Login function for Student has 1 Parameter (Registration Number, Rnage b/w 1 to 100) 
e. Login Function for Guest has no Parameter
f. Create a function Greet() as pure virtual function of this class,
g.Create a function Accept() to store user information
h. create a function display() to display user information
i. create a Derived class UG_Class
j.Accept choice from user to login as Admin, Student or Guest, according to user's choice invoke base class Login() function,
Now Override Base class functions Greet() this function will greet user with custom message e.g. Welcome Admin, Override
Accept() and Display() Function Store and Display User Detail for Student Admission in UG_Class.
k. Create a Derived class PG_Class 
accept choice from user to login as Admin, Student or Guest, according to user's choice invoke base class Login()
Function, Now override base class functions
*/
#include<iostream>
using namespace std;
class MyStudyApp{
    public: string uname,gname, sname, std, User, cname; int p,regno;
    public: void Login(string username, int pin){
    cout<<"\nAdmin Logged-in: ";
    uname=username;
    p=pin;
    if(p==121){
        cout<<uname;
    }
    else{
        cout<<"\ninvlaid pin";
    }
    }
    public: void Login(int RegNo){
        regno=RegNo;
        if(regno>=1 && regno<=100){
        cout<<"\nStudent Logged-in";
        cout<<sname;
        }
        else{
            cout<<"\nInvalid RegNo.";
        }
    }
    public: void Login(){
        cout<<"\nGuest Logged-in";
        cout<<"\nenter gnmae ";
        cin>>gname;
    }
    
    public: virtual void Greet() = 0; //pure virtual function

    public: virtual void Accpet(){
        cout<<"\nStoring the user inforamtion: ";
        cout<<"\nenter the username";
        cin>>User;
        cout<<"\nenter the class of student";
        cin>>std;
        cout<<"\nenter the course name";
        cin>>cname;
    }
    public: virtual void display(){
        cout<<"\nusername is "<<User;
        cout<<"\nstudent class is "<<std;
        cout<<"\ncourse taken = "<<cname<<"\n";
    }
    
};
class UG: public MyStudyApp{
public :string choice,studname,per,UG_COURSE;
public:  void ch(){
    cout<<"\nenter the choice as Admin / Student / Guest for UG ";
    cin>>choice;
    if(choice=="Admin"){
        Login("Mahi", 121);
        Greet();
    }
    else if(choice=="Student"){
        Login(78);
        Accpet();
        display();
        Greet();
    }
    else if(choice=="Guest")
    {
        Login();
        Greet();
    }
    else{
        cout<<"\nInvallid Choice";
    }
}
public: void Greet()override{
    cout<<"\nWelcome "<<choice<<" "<<studname<<"\n";

}
public: void Accpet() override{
    cout<<"\nStore and Display User Detail for Student Admission in UG_Class";
    cout<<"\nenter the name ";
    cin>>studname;
    cout<<"\nenter the stud percentage ";
    cin>>per;
    cout<<"\nenter the UG course student wants to take ";
    cin>>UG_COURSE;
    cout<<"\n";
    
}
public: void display() override{
cout<<"\nthe student name is "<<studname;
cout<<"\nthe student percentage is "<<per;
cout<<"\nthe UG_Course taken = "<<UG_COURSE<<"\n";
}

};
class PG: public MyStudyApp{
    public :string PG_choice,PG_studname,PG_per, PG_COURSE;
    public:  void PG_ch(){
        cout<<"\nenter the choice as Admin / Student / Guest for PG ";
        cin>>PG_choice;
        if(PG_choice=="Admin"){
            Login("Mahi", 121);
            Greet();
        }
        else if(PG_choice=="Student"){
            Login(78);
            Accpet();
            display();
            Greet();
    
        }
        else if(PG_choice=="Guest")
        {
            Login();
            Greet();
        }
        else{
            cout<<"\nInvallid Choice";
        }
    }
    public: void Greet()override{
        cout<<"\nWelcome "<<PG_choice<<" "<<PG_studname<<"\n";
    
    }
    public: void Accpet() override{
        cout<<"\nStore and Display User Detail for Student Admission in PG_Class";
        cout<<"\nenter the name ";
        cin>>PG_studname;
        cout<<"\nenter the stud percentage ";
        cin>>PG_per;
        cout<<"\nenter the PG course student wants to take ";
        cin>>PG_COURSE;
        cout<<"\n";
        
    }
    public: void display() override{
    cout<<"\nthe student name is "<<PG_studname;
    cout<<"\nthe student percentage is "<<PG_per;
    cout<<"\nthe PG_course taken = "<<PG_COURSE<<"\n";
    }
    
};

int main(){
    UG obj1;
    obj1.ch();   
    // obj1.Greet();
    PG obj;
    obj.PG_ch();
    // obj.Greet();
    return 0;
    
}