/* 24/04/25
Program :- This Pointer */
#include<iostream>
using namespace std;
class A{
    private: int x; //Local Variable
    public: A(int x){ //Parametrized Variable
       this->x=x; //this is already present in reality in code (hidden) , its for demonstration only
    }
    public: void display(){
        cout<<"\nValue of Local Variable is "<<x; //Printing value of local variable
    }
};
int main(){
    A obj(1);
    obj.display();
    return 0; //no automatic garbage colllection in c++ 
    //its for non-static not with static
}