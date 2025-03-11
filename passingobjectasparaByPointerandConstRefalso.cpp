//Program to demonstrate working of passing of object as parameter to fn.
//using different methods
//1. pass by value
//2. pass by reference
//3. pass by pointer
//4. pass by const reference- update mei error only u can read the value (read only copy)    {get data}

// 11/03/25
#include<iostream>
using namespace std;
class Program{
    public: int a=1;
    public: void Display(){
        cout<<"\nValue of a in class "<<a;
    }
};
void method1(Program obj1)//pass by value (creae separate copy of a)
{
    obj1.a=2; //any change inside this fn will not modify original value
    cout<<"\n Value of a in method1 "<<obj1.a;
}
void method2(Program &obj){//same obj ko refer krre //pass by reference //scope kam ha, ref ka: same copy generate krta
obj.a=3;  //change inside this fn will modify original value 
cout<<"\n value of a in method2 is "<<obj.a;
}
void method3(Program *pobj){ //pass by pointer  // pointer ka scope jayada ha alag copy bhi generate krta phir wha se value same rkhta
    pobj->a=4;  //pointer will change original value   
    cout<<"\n value of a in method3 is "<<pobj->a;
}
void method4(const Program obj2){
    //obj2.a=5; //this will generate error (we can only read data but not modify)
    cout<<"\n Value of a in method4 is "<<obj2.a;
}
int main(){
    Program obj;
    obj.Display();
    method1(obj);
    obj.Display();
    method2(obj);
    obj.Display();
    method3(&obj); //address ke through kyunki pointer ha 
    obj.Display();
    method4(obj);
    obj.Display();
    return 0;

}