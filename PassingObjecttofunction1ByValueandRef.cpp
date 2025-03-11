//Method 1(Pass By Value):  passing Object as Parameter to Function    10/03/25
#include<iostream>
using namespace std;
class Result{
    public: string Name; int RollNo; float Marks; int crd; //local var
    public: Result(string Name1, int RollNo1, float marks,int credits ){  //parametrized var
        Name=Name1;
        RollNo=RollNo1;
        Marks=marks;  // parametrized values ko dere local ki variable (value) ko
        crd=credits;
    }
    public: void display(){
        cout<<"\n Name= "<<Name<<"\tRoll Number= "<<RollNo<<"\t Marks= "<<Marks<<"\tCredits= "<<crd;
    }
};
void semester1(Result sem1){
    sem1.Marks=400;  //sem1 is object 
    
    cout<<"\nthe marks of sem1 is "<<sem1.Marks;
    

}
void semester2(Result sem2){
    sem2.Marks=350;          //sem2 is object
    cout<<"\nthe marks of sem2 is "<<sem2.Marks;
    

}
void semester3(Result sem3){
    sem3.Marks=450;          //sem3 is object
    cout<<"\nthe marks of sem3 is "<<sem3.Marks;
    


}
void credits1(Result &credts_sem1){
    credts_sem1.crd=10;
    cout<<"\nthe credits of sem1 is "<<credts_sem1.crd;
}
void credits2(Result &credts_sem2){
    credts_sem2.crd=5;
    cout<<"\nthe credits of sem1 is "<<credts_sem2.crd;
}

void credits3(Result &credts_sem3){
    credts_sem3.crd=9;
    cout<<"\nthe credits of sem1 is "<<credts_sem3.crd;
}
int main(){
     Result obj("Abc",1,0,0);
     obj.display();
     semester1(obj);
     semester2(obj);
     semester3(obj);
     credits1(obj);
     obj.display();
     credits2(obj);
     obj.display();
     credits3(obj);
     obj.display();
     return 0;
}