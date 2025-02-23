/* Program to demonstrate the working of Constructor 
 
   ****default constructor***** = constructor with no parameter          */

#include<iostream>
using namespace std;
class Program{   //class with name Program
       public:  Program(){      //class Constructor        //private: dege too error ayega 
               cout<<"Constructor Called";
       }
};
int main(){
    Program obj;    //Class Object        
    // sare members share hotte tbhi kisi ko private declare nhi krte sara public rahega  
    // kisiko value return nhi krte tbhi return type is not used
    return 0;
}


//agar phirse program function use krna too parameter dege and every time change krege parameter ko