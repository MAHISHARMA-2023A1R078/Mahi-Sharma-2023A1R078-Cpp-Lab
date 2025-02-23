/* Program to demonstrate working and execution sequence of constructor, destructor and other functions  20/02/25 */
#include<iostream>
using namespace std;
class Program // Class
{
    private: int a;
    public: void Fun1(){
        cout<<"\n Function1";
    }
    public: void Fun2(){
        cout<<"\n Function2";

    }
    public: Program(){ // default constructor
        a=5;
        cout<<"\n a = "<<a;

    }
    public: ~Program() //destructor that frees the memory always comes in last to free the memory of memb variables.
    // tild sign //~// will use here..
    {
        cout<<"\n Destructor Called";
    }
};
int main(){
    Program obj; //class object
    obj.Fun2();
    obj.Fun1();
    return 0;

}