//18/03/25
/* Normal Variable vs Static Variable in Cpp */
#include<iostream>
using namespace std;
static int n=0; 
class Program{

    public: void Fun(){
        //static int n=0; //Normal Variable inside a function then we used static; normal mein seperate ki copies incremented by 1 and 
        // static mein ek  copy banti ha sirf aur whi  increment ho rahi h barr barr
        n++;
        cout<<"value of n is "<<n<<endl;
    }
    public : void display(){
    cout<<"total no of users: "<<n;
    }
};
int main(){
    Program obj1,obj2,obj3;
    obj1.Fun();
    obj2.Fun();
    obj3.Fun();
    obj3.display();

}