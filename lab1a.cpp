/* analyze and design classes for a student management system*/


/* analyze and design classes for a student managemenet system*/
// software gathering then analyze
// manpower utilization, time limit, how much  people, software nd hardware
/* classes for studet=nt management system: 
1. Student class - to store and display student information
2.course class - to store and display course details
3.admin class {compulosry} - to change/ add / delete/ update, information of student or course
4. Examination - to store and display information about the ongoing or upcoming exams.alignas5
5. Result Class -   to store and display Result.
6. Department class - to store and display information of all schools and departments of college
7. Notification Class - to display all latest information and updates
*/

#include<iostream>
using namespace std;
class Student_Management_System{
    public: void Welcome(){
        cout<<"Welcome to MIET\n";
    }
};

class valid{
    private: int login_pin, RollNo;
    public: int login(){
        cout<<"\nsign in to proceed, enter the login pin ";
        cin>>login_pin;
        cout<<"\nenter the Rollno: ";
        cin>>RollNo;
        if(login_pin==1234 && RollNo>=61 && RollNo<=120){
           // cout<<"\nThe Login_Pin is "<<login_pin;
            cout<<"\nThe RollNo is "<<RollNo;
            cout<<"\nlogin successful, validated!!";
            return 1;
        }
        else{
            cout<<"\nenter valid login pin or RollNo!!\n";
            return 0;
        }
    }
};

class student_details{
    private: string name,study_year,course_name;
    int course_id, sem;
    public: void details(){
        cout<<"\nenter the name of the student: ";
        cin>>name;
        cout<<"\nenter the semester of the student: ";
        cin>>sem;
        cout<<"\nenter the year of study of the student: ";
        cin>>study_year;
        cout<<"\nenter the course name enrolled by the student: ";
        cin>>course_name;
        cout<<"\nenter the course id of the course enrolled by the student: ";
        cin>>course_id;
    }

    public: void display(){
        cout<<"\nname of the student is: "<<name;
        cout<<"\nsemester of the student is: "<<sem;
        cout<<"\nyear of study of the student is: "<<study_year;
        cout<<"\ncourse enrolled by the student is: "<<course_name;
        cout<<"\ncourse id of the course enrolled by the student is: "<<course_id;


    }

};
int main(){
    Student_Management_System obj;  
    //the way you are calling the classes : no matter, pehle kro ya badmein but uss class ke fn. 
    //call krne se pehle(fn. use krne se pehle) class ko declare krna h , thatis for memory initialization only
    //for performing tasks in your sequence (in the way u want) call fn.s accordingly

    student_details obj2;
    obj.Welcome();
    valid obj1;
    int res;
    res=obj1.login();
    if(res==1){
           obj2. details();
           obj2.display();
    }
    else{
        cout<<"Incorrect login pin or rollno";
    }
      return 0;
}




/* by array of object */

// student_details obj2[2];
//     obj.Welcome();
//     valid obj1;
//     int res;
//     res=obj1.login();
//     if(res==1){
//            obj2[0]. details();
//            obj2[1]. details();
//            obj2[0].display();
//            obj2[1].display();
//     }
//     else{
//         cout<<"Incorrect login pin or rollno";
//     }
//     return 0;

// }




/********------jo likhna*/


// Exp. 1a.  Analyze and design classes for a student management system. 
// Classes for Student Management System:-
// 1. Student
// To store and display Student Information
// 2. Course class
// To store and display Course Details
// 3. Admin Class
// To change / Add / Delete  / Update , information of Student or course
// 4. Examination 
// To store and display information about the ongoing or upcomming exams.
// 5. Result Class
// To store and display Result.
// 6. Department Class
// To store and Display information of All Schools And Departments of College.
// 7. Notification Class
// To Display all latest information and updates.








