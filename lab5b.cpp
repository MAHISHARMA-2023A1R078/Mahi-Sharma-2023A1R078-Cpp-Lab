/* To update the details of a course using a member function of course class. */
#include<iostream>
using namespace std;
    class course{
        public: string CourseName; int CourseID,per,att; int CourseCredits, CourseDuration;
        public: course(string Name, int ID, int Credits, int CDurt){
            CourseName=Name;
            CourseID=ID;
            CourseCredits=Credits;
            CourseDuration=CDurt;
    
        }
        void display(){
            cout<<"\n course name is "<<CourseName<<"\tCourse Id is "<<CourseID;
            cout<<"\n course Credits are "<<CourseCredits;
            cout<<"\n course Duration is "<<CourseDuration<<"\n";
            
        }

};
void Semester1(course Sem1){
    Sem1. CourseName= "Physics";
    cout<<"\nCourse in Semester1 "<<Sem1.CourseName;
}
void Semester2(course Sem2){
    Sem2.CourseName= "Maths";
    cout<<"\nCourse in Semester2 "<<Sem2.CourseName<<"\n";
}
void update(course &obj){
    obj.CourseName="Java";
    obj.CourseID=401;
    obj.CourseCredits=10;
    obj.CourseDuration=11;
   // cout<<"\nthe updated information name is "<<obj.StudentName<<"\t"<<"marks is "<<obj.Marks<<"\t"<<"StudentID is "<<obj.StudentID<<"\n";
  
}
// void Delete(Student *pobj){
//     cout<<"\n Student Records not found";
//     pobj->StudentName="";
//     pobj->StudentID=0;
//     pobj->Marks=0;
// }
int main(){
  course obj("ABC",101,5,18);
  obj.display();
  Semester1(obj);
  Semester2(obj);
  update(obj);
  cout<<"\nCourse details after updation_ updated information is ";
  obj.display();
  //Delete(&obj);
  //obj.Display();
  return 0;
}
