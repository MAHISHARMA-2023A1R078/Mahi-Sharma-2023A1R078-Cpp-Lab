/* 19/03/25 
Program to demonstate working of static function in program 
1.static functions belongs to class rather than instance of class.
2.can be accessed using class name eg. Program :: Fun()
3. static fn can access static member only , cannot access not static members of class because they require initialization 0f class 
for memory intialization.


static members,fn  can access only static memb of class only beacuse memory initialize is imp 
 but non static can access the static members  */


 #include<iostream>
 using namespace std;
 class Program{
    public: int a=5;//non static variable 
    static int b; //static variable
    void Fun1(){
        cout<<"\n (Fun1)Value of a is "<<a;   //non static function can access both static and non static variable 
        cout<<"\n (Fun1) Value of b is "<<b; 
    }
    static void Fun2(){  //static function 
        //cout<<"\n (Fun2)Value of a is "<<a; //not able to access non static variable a 
                                              //can access static variable only  so gives error
        cout<<"\n (Fun2) Value of b is "<<b; //static static ko hi laata ha 
    }
 };

   int Program::b=1;
 int main()
{
    Program obj;
    obj.Fun1();//calling of non static fn using class object
    Program::Fun2(); //calling of static fn using class not using object //static fn khi bhi call krwaskte non static nhi
    //obj.Fun2();
    return 0;
}
