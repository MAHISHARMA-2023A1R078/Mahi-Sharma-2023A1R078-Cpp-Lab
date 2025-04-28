/*28/04/25
Program : Dynamic Memory Allocation 
using New and Delete */
#include<iostream>
using namespace std;
class Student{
    public: float marks; string SName;
    void display(){
        cout<<"\nName= "<<SName;
        cout<<"\nMarks= "<<marks;
    }

};
int main(){
    Student *obj= new Student();
    //syntax class name pointer to object name= new class name();
    //Ensure to allocate memory to object at run time.
    obj->marks=555;
    obj->SName="User1"; //accessing and allocating value to members of class using pointer
    obj->display();
    delete obj; //deleting object to ensure that the memory of object will deallocate after program execution
    obj->display(); //value deallocates/deletes and c++ as per feature will show garbage value now
    return 0;
}