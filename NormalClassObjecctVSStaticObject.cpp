// /* Normal Class Object VS Static Object 
// 20/03/25   */
// #include<iostream>
// using namespace std;                      //**normal object  */
// class Program{
//     public: Program(){   //default constructor of class
//         cout<<"Constructor called";

//     }
//     ~Program(){  //destructor of class
//         cout<<"\nDestructor called";
//     }
//     void display(){  //member function of class            //static object ke case mein destructor last mein cALL hoga na ki barbar
//         cout<<"\nDisplay Function called";                //static ibj life duration is through out the program 
//     }                                                     //iss normal object ka lifetime is less(ek fn tk hota ) than the static obj
// };
// void Fun(){ //Function with class object
//       Program obj1;
//       obj1.display(); //Member Function called inside this function 
// } 
// int main(){
//       Fun(); //Function with class object called 
//       cout<<"\nRecalling Fun Function";
//       Fun();  //Function with class object called
//       return 0;
// }








/* Normal Class Object VS Static Object 
20/03/25   ****static wla class ki memory tb tk delete nhi hogi jb tk program end nhi hojata */
#include<iostream>     
using namespace std;
class Program{
    public: Program(){   //default constructor of class
        cout<<"Constructor called";

    }
    ~Program(){  //destructor of class
        cout<<"\nDestructor called";
    }
    void display(){  //member function of class            //static object ke case mein destructor last mein cALL hoga na ki barbar
        cout<<"\nDisplay Function called";                //static ibj life duration is through out the program 
    }                                                     //iss normal object ka lifetime is less(ek fn tk hota ) than the static obj
};
void Fun(){ //Function with class object
     static  Program obj1;     //created class object as static
      obj1.display(); //Member Function called inside this function 
} 
int main(){
      Fun(); //Function with class object called 
      cout<<"\nRecalling Fun Function";
      Fun();  //Function with class object called
      return 0;                               //constructor aur destructor dono ek baar hi call honge in case of staic obj of class 
}

