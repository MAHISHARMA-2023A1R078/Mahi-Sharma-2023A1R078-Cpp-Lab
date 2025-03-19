/* 19/03/25 */
//solution of the code in which same users ko baar baar nhi dikhata alag ko hi count krega (same ko not include)
#include<iostream>
using namespace std;
class usercount{
    public: static int count; //static variable inside the class
    public: usercount(){ //constructor of class
    count++;
    }
   void display(){
    cout<<"Users are "<<count<<endl;
   }
};
int usercount::count=0;//inititalized outside the class
int main(){//using syntax datatype class name scope resolution operator and static variable name
    usercount user1,user2;
    user1.display();
    return 0;

}