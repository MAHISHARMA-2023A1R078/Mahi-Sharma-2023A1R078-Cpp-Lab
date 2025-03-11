/* To create a student class, its constructor, destructor and member functions */
/* assign clubs according to the grade, grade a=NCC and grade b=eco & c= nss */
// #include<iostream>
// using namespace std;
// class Student{
//     public: string StudentName, Gr; int StudentID;
//     float Marks, per;
//     public: Student(string Name, int ID, float Mark){
//         StudentName= Name;
//         StudentID =ID;
//         Marks = Mark;
//     }
//     void display(){
//         cout<<"\nInformation Entered by the student is ";
//         cout<<"Name = "<<StudentName<<"\t Studrnt Id is "<<StudentID<< "\t Marsks are ";
//         cout<<Marks;
//     }
//     public: char Grade(){
//         per=Marks/500*100;
//         if(per>=80 && per<=100){
//             // cout<<"\n Your Grade is A";
//             cout<<"\nYour Grade is A";
//             return 'A';
//         }
//         else if(per>=70 && per<=80){
//             // cout<<"\n Your Grade is B";

       
//             cout<<"\nYour Grade is B";
//             return 'B';
//         }

//         else if(per>=50 && per<60){
        
//             cout<<"\nYour Grade is C";
//             return 'C';
//         }
    
//     else{
//         cout<<"\n Not Qualified.";
//     }
// }

// public: void club_assignment(char Gr){
//     if(Gr=='A'){
//         cout<<"\nyou have assigned Sports and NCC Club";
//     }
//     else if(Gr=='B'){
//         cout<<"\nyou have assigned ECO Club";
//     }
//     else if(Gr=='C'){
//         cout<<"\nyou have assigned NSS Club";
//     }
//     else{
//         cout<<"\nyour grade is low, no club assigned\n";
//     }
// }
// };

// int main(){
//     Student obj[5]={{"Ram",101,450},{"Sham",102,392},{"Sita",103,250},{"Gita",104,12},{"Rita",105,499.90}};
//     int i;
//     for(i=0;i<5;i++){
//          cout<<"\nInformation of Student "<<obj[i].StudentName << " with id "<<obj[i].StudentID;
//          obj[i].display();
        
//          char res;
//     res= obj[i].Grade();
//     obj[i].club_assignment(res);
  
//     }
//     return 0;
// }



/* BY MEEEE */
// #include<iostream>
// using namespace std;
// class Student{
//     private: int rollno, sem, loginpin, courseid, RollNo;
//     string name, coursename;
//     public: Student(){

//         cout<<"welcome to MIET\n";  //constructor

//     }

//         public: int validate(){
//         cout<<"enter the loginpin\n";
//         cin>>loginpin;
//         cout<<"\nenter the RollNo \n";
//         cin>>RollNo;
//         if(loginpin==1234 && RollNo>=61 && RollNo<=120){
//             cout<<"valid\n";
//             return 1;
//         }
//         else{
//             cout<<"login pin or rollno is not valid\n";
//             return 0;
//         }
//     }
    
//     public: void details(){
//         cout<<"\nenter the name of the student ";
//         cin>>name;
//         cout<<"\nenter the semester of  the student ";
//         cin>>sem;
//         cout<<"\nenter the course enrolled by the student ";
//         cin>>coursename;
//         cout<<"\nenter the courseid ";
//         cin>>courseid;
//     }

//     public: void display(){
//         cout<<"\nthe name of the student is ";
//         cout<<name;
//         cout<<"\nthe rollno of the student is ";
//         cout<<RollNo;
//         cout<<"\nthe semester of the student is ";
//         cout<<sem;
//         cout<<"\nthe course enrolled by the student is ";
//         cout<<coursename;
//         cout<<"\nthe course id is ";
//         cout<<courseid;

//     }
//     public: ~Student(){
//         cout<<"\nDestructor called to remove the allocated memory!!\n";
//     }

// };
// int main(){
//     Student obj;
//  int res;
//  res= obj.validate();
//  if(res==1){
//     obj.details();
//     obj.display();
//  }
//  else{
//     cout<<"enter valid loginpin, it's incorrrect!!\n";
//  }
//  return 0;
// }






//To cre<ate a student class, its constructor, destructor and member functions. 
#include<iostream>
using namespace std;
class Student{
public : string StudentName; int StudentId;
float Marks,per;
public: Student(string Name , int Id,float Mark ){
    StudentName = Name;
    StudentId = Id;
Marks = Mark;
}
void Display(){
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
}
char Grade(){
    per=Marks/500*100;
    if(per>=80 && per <=100){
        cout<<"\n Your Grade is A";
        return 'A';
    }
   else if(per>=70 && per <80){
        cout<<"\n Your Grade is B";
        return 'B';
    }
    else if(per>=60 && per <70){
        cout<<"\n Your Grade is C";
        return 'C';
    }
    else if(per>=50 && per <60){
        cout<<"\n Your Grade is D";
        return 'D';
    }else{
    cout<<"\n Not Qualified. ";
    }
}
void Club_Assignment(char grade){
if(grade=='A'){
    cout<<"\n Sports Club";
}
else if(grade=='B'){
    cout<<"\n Eco Club";
}
else if(grade=='C'){
    cout<<"\n NCC Club";
}
else if(grade=='D'){
    cout<<"\n NSS Club";
}
}

int search(){
    int id1;
    cout<<"\n Enter your Student Id ";
    cin>>id1;
    return id1;
}
public: ~Student(){
    cout<<"\nDestructor Invoked";
}
};
int main(){
    Student obj[4]={{"Ram",101,450},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i,id2;char res;
    for(i=0;i<4;i++){
        cout<<"\n Information of Student with id "<<obj[i].StudentId;
        obj[i].Display(); 
        res=obj[i].Grade(); 
        obj[i].Club_Assignment(res);      
    }  
    id2=obj[i].search();
    for(i=0;i<4;i++){
        if(id2==obj[i].StudentId){
            cout<<"\n Student Id is valid ";
            cout<<"\n Student Name is "<<obj[i].StudentName;
        }
    }  
    return 0;
}