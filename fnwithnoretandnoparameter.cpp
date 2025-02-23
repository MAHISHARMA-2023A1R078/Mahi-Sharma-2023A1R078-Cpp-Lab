/* program to demonstrate working of function with no return type and no parameter.
oops features (namespace, class, object, access specifier, member variables{class ko belong tbhi memeber use kiya} and member functions)
*/

// #include<iostream>
// int main(){
//     std::cout<<"hi";       /* not oop as class and object is missing
//     return 0;
// }

// #include<iostream>
// void message()
// {
//     std::cout<<"hi";      //not oop 
// }
// int main(){
//     message();
//     return 0;
// }

#include<iostream>
using namespace std;
class Program
{
public: void message(){
    cout<<"hi";
}
}; /* in class to end the class in c++ {;} is used (jb functions sare banaliye too end the class)*/
int main(){
    Program obj;   /*correct way of oops*/
    obj.message();
    return 0;
}
