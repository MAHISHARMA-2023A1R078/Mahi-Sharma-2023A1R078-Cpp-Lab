/*23/04/25*/
#include<iostream>
using namespace std;
class HDFC_BANK{
    private: float rate_of_interest;
    public: void accept(){
        rate_of_interest=1000.0;
    }
    public: void display(){
        cout<<"\nthe rate of interest of HDFC Bank is "<<rate_of_interest;
    }
    friend class Comaprison;
};
class SBI_Bank{
    private: float rate_of_interest;
    public: void accept(){
        rate_of_interest=2000.0;
    }
    public: void display(){
        cout<<"\nthe rate of interest of SBI Bank is "<<rate_of_interest;
    }
    friend class Comaprison;

};
class ICICI_Bank{
    private: float rate_of_interest;
    public: void accept(){
        rate_of_interest=3000.0;
    }
    public: void display(){
        cout<<"\nthe rate of interest of ICICI Bank is "<<rate_of_interest;
    }
    friend class Comaprison;

};
class JandK_Bank{
    private: float rate_of_interest;
    public: void accept(){
        rate_of_interest=5000.0;
    }
    public: void display(){
        cout<<"\nthe rate of interest of J&K Bank is "<<rate_of_interest;
    }
    friend class Comaprison;

};
class Comaprison{
float hirat;
public: void compare(JandK_Bank obj, ICICI_Bank  obj1, HDFC_BANK obj2,SBI_Bank obj3){
    hirat=obj.rate_of_interest;
    if(obj.rate_of_interest > hirat){
        hirat=obj.rate_of_interest;
    }
    else if(obj1.rate_of_interest > hirat){
     hirat=obj1.rate_of_interest;
    }
    else if(obj2.rate_of_interest > hirat){
        hirat=obj2.rate_of_interest;
    }
    else if (obj3.rate_of_interest > hirat){
        hirat=obj3.rate_of_interest;
    }
    cout<<"\nhigh rate of interest is: "<<hirat;
}
};

int main(){
HDFC_BANK obj;
obj.accept();
obj.display();
JandK_Bank obj1;
obj1.accept();
obj1.display();
ICICI_Bank obj2;
obj2.accept();
obj2.display();
SBI_Bank obj3;
obj3.accept();
obj3.display();
Comaprison obj4;
obj4.compare(obj1,obj2,obj,obj3);
return 0;
}
