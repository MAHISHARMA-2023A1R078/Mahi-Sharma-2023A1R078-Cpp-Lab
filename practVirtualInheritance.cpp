/* 16/04/25
Virtual Function and Pure Virtual Function :- tell compiler that this function is going to overridden by the derived class function 
to ensure Run Time Polymorphism.
*/
#include<iostream>
using namespace std;
class A{
    public: virtual void Fun1() //Virtual Function 
    {
        cout<<"\nVirtual Function in Class A";
    }
};
class B //Abstract Class
{
    public: virtual void Fun2() = 0; //Pure Virtual Function
};
class C: public A{
    public:  void Fun1() override{
    cout<<"\nI am a updated version of class A function";
    }
};
class D : public B{
    public: void Fun2() override{
        cout<<"\nI am having a Implementation code of class B Function";
    }
};
int main(){
    C obj1;
    obj1.Fun1();
    D obj2;
    obj2.Fun2();
    return 0;
}