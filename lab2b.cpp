// #include<iostream>
// using namespace std;
// class Student{
//     private: string N, C;
//     int RN, S;

//     public: Student(string name, int rollno, int sem, string course){
       

//         // N=name;
//         // rollno=RN;
//         // sem=S;          //garbage value 
//         // course=C;


//         cout<<"\nenter the name of the student: "<<name;
//         cout<<"\nenter the rollno of the student: "<<rollno;
//         cout<<"\nenter the sem of the student: "<<sem;
//         cout<<"\nenter the course of the student: "<<course;
        
//     }
    
//     public: Student(int course_id){
//         cout<<"\nenter the course id: "<<course_id;  //constructor overloading

//     }
   

// };
// int main(){
//     //Student obj[10]("mahi", 78, 4,"physiscs");
//    Student obj("mahi", 45, 4,"physics");
//    Student obj1(101);
//     return 0;
  
    
    

// }



#include<iostream>
using namespace std;
class Student{
    int R;
    string N;
    float P;
    public: Student(int RollNo, string Name, float Percentage){
        //cout<<"store rollnos from 1 to 10\n";
        R=RollNo;
        N=Name;
        P=Percentage;

    }
public: void display(){
    cout<<"the RollNo = "<<R<<"\t"<<"the Name = "<<N<<"\t"<<"the Percentage = "<<P<<"\n";
}
};
int main(){
    Student obj[5]={{1,"in",89},{2,"pop",45.09},{3,"tom",45.09},{4,"rock",45.09},{5,"jery",45.09}};
    int i;
    // for (int i=4;i>=0;i--){
    //     obj[i].display();  // in reverse order
    // }
    for (int i=0;i<5;i++){
        obj[i].display();
    }
    return 0;
}