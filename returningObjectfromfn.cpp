//Method1 Return as Value
//Program to demonstrate working of returning object from function //17/03/25
#include<iostream>
using namespace std;
class Program{
    public: int a;// class member variable
    Program(int b) //Parametrized constructor of class
    {
        a=b;        //call nhi hoskte
        //cout<<"value of a is "<<a;
    } 
    void display(){
        cout<<"value of a is "<<a;
    }
};
Program Fun()   //Function with return type as class
{                 //this fn will return object as value
Program obj1(10); //identification of construtor is here 
//return obj1(10);
return obj1;
}
int main(){
        Program obj2=Fun(); //calling fun function from class object1 as when this fn is called it will return a object 
        //to store its return value, we use class object 
        obj2.display();
        return 0;
}