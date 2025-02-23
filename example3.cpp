/* Program to create a class with Student_data with function name, welcome_message(), this function on execution will display a message
Welcome to MIET Jammu.
Now, we will add 1 more function with name Validate_RegNo(), this function will accept student name and registration number from student 
and validatte it.
(valid RegNo's are from 61 to 120)
*/

#include<iostream>
using namespace std;// used for understanding string
class Student_data{
    public: void Welcome_message(){ // function with no return type and no parameter
        // in vscode by default the function is private
        cout<<"Welcome to MIET Jammu.\n";
  
    }          

    private : string Name;
    int RegNo; // outide class data wll not access and secured using private pryeh pehle hi bahar too too harjaga access
public: string Validate_RegNo(){
    // value return krega ye fn.    /* function with return type and no paramt
    cout<<"Enter your name: ";
    cin>>Name;
    cout<<"\n Enter your registration number: ";
    cin>>RegNo;
    if(RegNo>=61 && RegNo<=120){
        return "True";
    }
    else{
return "False";
    }
}
};

int main(){
    Student_data obj;//create object to allocate memory to class
    obj.Welcome_message();// call kiya function ko
    string res; // fn with return type
    res=obj.Validate_RegNo(); // message ab result ke pass 
    if (res=="True"){
        cout<<"\n Login Successful";
    }
    else{
        cout<<"\n Login Fail";
    }
    // obj.Validate_RegNo();
    return 0;
}
