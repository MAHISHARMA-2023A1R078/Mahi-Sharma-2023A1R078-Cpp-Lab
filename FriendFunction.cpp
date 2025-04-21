/*21/04/25
Program: Friend Function
In Banking application where internal data like Account Number, Balance or Account Holder Name is required by Audit Function() ?
Here we declare Audit Function() in Bank Class as friend function to access its private data outside the class.
*/
#include<iostream>
using namespace std;
class BankApp{
    private: int Account_No; //Private Mmeber of Class
    string Acc_Holder_Name; float Balance;
    public: BankApp(int Number,string Name,float Bal){ //Parametrized Constructor 
        Account_No=Number;
        Acc_Holder_Name=Name;
        Balance=Bal;
        
    }
    public: void show(){ //Member Function
        cout<<"\nAccount Holder Name is "<< Acc_Holder_Name;
        cout<<"\nAccount Number is "<<Account_No;
        cout<<"\nAccount Balance is "<<Balance;
    }
    friend void Audit(BankApp &obj1); //Frined Function Declaration Inside a class
};  //you can pass obj as pass by reference , as pass by  poninter or as pass by  value..
//one class has multiple friend functions depending upon kitni branching u want and how many members u want to acces acc to the need
//----->> It is req. when our data is sensitive,  --->> aur tb chahiye when requirement is in non members, non functions.

void Audit(BankApp &obj)  //reference deni ha too dono fn mein dena nhi too ek mein reference dekr error ayega 
{
cout<<"\nAuditor Function";
cout<<"\nAccount Balance of Account Number "<<obj.Account_No<<" is "<<obj.Balance;
}
int main(){
    // BankApp obj(101,"Abc",10000);
    // BankApp obj2(102,"BBC",20000);
    // obj.show();
    // obj2.show();
    // Audit(obj);
    // Audit(obj2);
    // return 0;
    /*--> Through array of object*/
    BankApp obj[5]={{101,"Abc",10000},{102,"BBC",20000},{103,"XYZ",50000},{104,"B0C",90000},{105,"ASD",150000}};
    for(int i=0;i<5;i++){
        obj[i].show();
        Audit(obj[i]);
    }
    return 0;
}