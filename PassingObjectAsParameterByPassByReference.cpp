//Method 2. Pass By Reference
//Program to demonstrate working of Passing of Object as Parameter to function.  5/03/25
#include<iostream>
using namespace std;
class Program{
    public: int a;
    public: Program(int b){ //Parameterized Constructor of Program Class
        a=b; // right to left assign hoti ha value
    }
    public: void display(){
        cout<<"\nValue of a is "<<a;
    }
};
void modify(Program &obj2){ //Modify function accepts obj2 as Parameter
    obj2.a=10; //Any Change inside this function will modify original value of a.
              //this will create reference to obj1.
              cout<<"\n Modified value is "<<obj2.a;

}
int main(){
    Program obj1(9);// Original object of class with initialization of paarmetrized constructor
    obj1.display();
    modify(obj1); //calling modify function  //this is the same variable of obj2 only because both obj1 and obj2 is diff likewiise obj1
    //is different if we give obj2 it is also diff beshak naam same h haai diff hi
    obj1.display();
}