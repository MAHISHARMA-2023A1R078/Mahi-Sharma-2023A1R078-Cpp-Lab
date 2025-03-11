/* to create a Course class, its consturctor, destructor and memober functions*/


#include<iostream>
using namespace std;
class Course{
    public: string CourseName; int CourseID,per,att; int CourseCredits;
    public: Course(string Name, int ID, int Credits){
        CourseName=Name;
        CourseID=ID;
        CourseCredits=Credits;

    }
    void display(){
        cout<<"\n course name is "<<CourseName<<"\tCourse Id is "<<CourseID;
        cout<<"\n course Credits are "<<CourseCredits<<"\n";
        
    }
    public: void CoursAssignment(){
        //Here Accept Student Percentage, Attendence and Assign course according to
        /*1. percentage greater than 80 or Attendence more than 90, course option all
        2. Percentage between 70 to 80 or attendence more than 80 course option java
        3.  Percentage between 60 to 70 or attendence more than 70 course option cpp
        4.Percentage between 60 to 70 or attendence more than 60 course option PHP
        5. Percentage between 50 to 60 or attendence more than 50 course option C */
        cout<<"\nenter the percentage ";
        cin>>per;
        cout<<"\nenter the attendence ";
        cin>>att;
        if(per>80 || att>90){
            cout<<"\nyou can choose all the courses";
        }
        else if(per>=70 && per<=80 || att>80){
            cout<<"\ncourse option is java";
        }
        else if(per>=60 && per<=70 || att>70){
            cout<<"\ncourse option is CPP";
        }
        else if(per>=60 && per<=70 || att>60){
            cout<<"\ncourse option is PHP";
        }
        else if(per>=50 && per<=60 || att>50){
            cout<<"\ncourse option is C";
        }
        else{
            cout<<"\nstudent perc not acccpeted\n";
        }



    }

    public:~Course()
     {
         cout<<" \nDestruction Invoked";
     }
};
int main(){
    Course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
    int i;
    for(i=0;i<5;i++){
        obj[i].display();
        //obj[i].CoursAssignment();
    }
    for(i=0;i<5;i++){
       cout<<"\ncourse options according to  the student percenatage and attendence!!";
        obj[i].CoursAssignment();
    }
    return 0;
}








// #include<iostream>
// using namespace std;
// class Course{
//     private: string coursename,name;
//     int courseid,credits, RollNo;
//     public: Course(){
//         cout<<"\nWelcome to the course selection of MIET\n";
//     }
    
//     public: int valid(int loginpin, int credits){
//         if(loginpin==1234 && credits>=5 && credits<=10){
//             cout<<"LoginPin is valid and credits are good, u can select the course now\n";
//             return 1;
//         }
//         else{
//             cout<<"login pin is not valid or credits is not good \n";
//             return 0;
//         }
//     }

//     public: void Course_Selection(){
//         // getline(cin,name);// getline se space read hoskti ha as a character bina getline ke space ke baad terminator manleta h
//         // getline(cin,coursename);  //getline applicable to string datatype only
       
//         cout<<"\nenter the name of the student ";
//         cin>>name;
//         cout<<"\nenter the rollno of of the student ";
//         cin>>RollNo;
//         cout<<"\nenter the course name you want to select ";
//         cin>>coursename; 
//         cout<<"\nenter the courrse id ";
//         cin>>courseid;
        
//     }

//     public: void Course_display(){
//     cout<<"\nthe name of the student ";
//     cout<<name;
//     cout<<"\nthe rollno of of the student ";
//     cout<<RollNo;
//     cout<<"\nthe course name you selected ";
//     cout<<coursename; 
//     cout<<"\nthe course id ";
//     cout<<courseid;
    
// }

// public: ~Course(){
//     cout<<"\nDestructor of class course called!!!\n";
// }

// };

// int main(){
//     Course obj;
//     int res;
//     res=obj.valid(1234,5);
//     if(res==1){
//         obj.Course_Selection();
//         obj.Course_display();
//     }
//     else{
//         cout<<"enter valid loginpin or your credits are not sufficient";
//     }
//     return 0;
// }
