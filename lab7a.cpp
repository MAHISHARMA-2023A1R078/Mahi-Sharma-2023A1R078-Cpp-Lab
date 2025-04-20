/* 09/04/25  and continued on 10/04/25

Exp:- 7a To implement Inheritance for a UG Course Class, PG Course Class and Diploma Course Class.
Using MultiLevel Inheritance 
Write a Program to 
a. Create a base class with name UG Course Class,
b. Create a function with name SubjectList(), here in this function display a list of Subjects and ask user to select a
 choice from given list.
c. Create a funciton with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. Create a derived class with name PG Course Class,
e. Create a funciton with name SpecializationList(), here in this function display a list of subjects and ask user to 
 select a choice from given list.
f. Create a funciton with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. Create a derived class with name Diploma Course Class,
e.Create a function with name CourseList(), here in this function display a list of Subjects and ask user to select a choice 
from gievn list.
f. Create a funciton with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. create a derived class with name Result Class,
e. Create a funciton with name SelectionCriteria(), here in this funciton display a Selection criteria for the post.
1. Post1: Software Develoeper :
5 points for percentage more than 80 percent in UG
5 points for percentage more than 80 percent in PG
5 points for percentage more than 80 percent in Diploma 
f. Create a funciton with name FinalResult(), candiates scored more 12 ponits are qualified for this post.\
 */                                  // through multiple inheritance
// #include<iostream>
// #include<string.h>
// using namespace std;
// class UG_Course{
//     public: int  marksUG;  int marDiploma; string sub, choice ; float per;
//     public: string SubjectList(){
//       cout<<"\nlist of subjects: ";
//       cout<<"\nMaths \nScience \nIT \nPhysics";
//       cout<<"\nuser to select a choice from the given list: ";
//       getline(cin,choice);
//       if(choice=="Maths" || choice=="Science" || choice=="IT" || choice=="Physics")
//       {
//         cout<<"\nvalid\n";
//        cout<<choice;
//        return  choice;
//       }
//       else{
//         cout<<"Invalid";
//     }
//     }
//    public: void MarksObtained(string selected_course){
//     sub=selected_course;
//     cout<<"\nenter the marks obtained in the selected course i.e. "<<sub;
//     cin>>marksUG;
    
//    } 
// };
// class PG_Course {
//     public: int  markPG;
//     public: string choic, su; 
//     public: string SpecializationList(){
//         cout<<"\nlist of subjects: ";
//       cout<<"\nRDBMS \nRPA \nCOA \nC++";
//       cout<<"\nuser to select a choice from the given list: ";
//       cin>>choic;
//       if(choic=="RDBMS" || choic=="RPA" || choic=="COA" || choic=="C++")
//       {
//        cout<<choic;
//        return choic;
//     }
//     else{
//         cout<<"Invalid";
//     }

// }
// public: void MarObtained(string selecCourse){
   
//     su=selecCourse;
//     cout<<"\nenter the marks obtained in the selected course i.e. "<<su;
//     cin>>markPG;
// }};
// class Diploma_Course : public PG_Course,public UG_Course{
//     public: int  marDiploma;
//     public: string choi; string subj; 
//     public: string CourseList(){

//     cout<<"\nlist of subjects: ";
//       cout<<"\nBEEE \nAI \nML \nDataScience";
//       cout<<"\nuser to select a choice from the given list: ";
//       cin>>choi;
//       if(choi=="BEEE" || choi=="AI" || choi=="ML" || choi=="DataScience")
//       {
//        cout<<choi;
//        return  choi;
//       }
//       else{
//         cout<<"Invalid";
//     }
// }
// public: void MarObtained(string selcCourse){
//     subj=selcCourse;
//     cout<<"\nenter the marks obtained in the selected course i.e. "<<subj;
//     cin>>marDiploma;
// }
// };
// class Result : public UG_Course,public PG_Course{
//    public: int selec, points; int poin; int poi;
//     public: int  SelectionCriteria(){
//     // e. Create a funciton with name SelectionCriteria(), here in this funciton display a Selection criteria for the post.
//     // 1. Post1: Software Develoeper :
//     // 5 points for percentage more than 80 percent in UG
//     // 5 points for percentage more than 80 percent in PG
//     // 5 points for percentage more than 80 percent in Diploma 
//     cout<<"\nthe selection criteria of the course: ";
//     cout<<"\nPost1: Software Develoeper :\n 5 points for percentage more than 80 percent in UG";
//     cout<<"\n5 points for percentage more than 80 percent in PG";
//     cout<<"\n5 points for percentage more than 80 percent in Diploma ";
//     cout<<"\nthe points student got= ";
//     points=marksUG + markPG + marDiploma;
//     per=points/500*100;
//     if(per>=80){
//         cout<<per;
//     cout<<" Post1: Software Develoeper :\n 5 points for percentage more than 80 percent in UG";
//     cout<<"\n5 points for percentage more than 80 percent in PG";
//     cout<<"\n5 points for percentage more than 80 percent in Diploma ";
//     poin=15;
//     cout<<poin;
//     return poin;
//     }

//     else{
//         cout<<"\nno ponits";
//     }
    
// }
// public: void FinalResult(int p){
//     poi==p;
//     cout<<"\ncandiates scored more 12 ponits are qualified for this post";
//     if(poi>=12 && poi<=13){
//         cout<<"\nqualified for this post";
//     }
//     else{
//         cout<<"\nnot qualified for this post";
//     }

// }
// };
// int main(){
//     Result obj;
//     string r;
//     r=obj. SubjectList();
//     obj.MarksObtained(r);
//     string re;
//     re=obj.SpecializationList();
//     obj.MarObtained(re);
//     string res;
//     //res=obj.CourseList();
//     //obj.MarObtained(res);
//     int rees;
//     rees=obj.SelectionCriteria();
//     obj.FinalResult(rees);

//    return 0;


// }

#include<iostream>
#include<string>
using namespace std;

// UG Course Class
class UG_Course {
public:
    int marksUG;
    string ug_subject;

    string SubjectList() {
        cout << "\nUG Subjects: \n1. Maths\n2. Science\n3. IT\n4. Physics";
        cout << "\nEnter UG subject: ";
        getline(cin, ug_subject);

        if (ug_subject == "Maths" || ug_subject == "Science" || ug_subject == "IT" || ug_subject == "Physics") {
            return ug_subject;
        } else {
            cout << "Invalid UG subject\n";
            return "";
        }
    }

    void MarksObtained(string selected_course) {
        cout << "Enter marks in UG course (" << selected_course << "): ";
        cin >> marksUG;
        cin.ignore(); // clear input buffer
    }
};

// PG Course Class
class PG_Course {
public:
    int marksPG;
    string pg_subject;

    string SpecializationList() {
        cout << "\nPG Subjects: \n1. RDBMS\n2. RPA\n3. COA\n4. C++";
        cout << "\nEnter PG subject: ";
        cin >> pg_subject;

        if (pg_subject == "RDBMS" || pg_subject == "RPA" || pg_subject == "COA" || pg_subject == "C++") {
            return pg_subject;
        } else {
            cout << "Invalid PG subject\n";
            return "";
        }
    }

    void MarksObtained(string selected_course) {
        cout << "Enter marks in PG course (" << selected_course << "): ";
        cin >> marksPG;
        cin.ignore();
    }
};

// Diploma Course Class
class Diploma_Course {
public:
    int marksDiploma;
    string diploma_subject;

    string CourseList() {
        cout << "\nDiploma Subjects: \n1. BEEE\n2. AI\n3. ML\n4. DataScience";
        cout << "\nEnter Diploma subject: ";
        cin >> diploma_subject;

        if (diploma_subject == "BEEE" || diploma_subject == "AI" || diploma_subject == "ML" || diploma_subject == "DataScience") {
            return diploma_subject;
        } else {
            cout << "Invalid Diploma subject\n";
            return "";
        }
    }

    void MarksObtained(string selected_course) {
        cout << "Enter marks in Diploma course (" << selected_course << "): ";
        cin >> marksDiploma;
        cin.ignore();
    }
};

// Result Class with Multiple Inheritance
class Result : public UG_Course, public PG_Course, public Diploma_Course {
public:
    int totalPoints = 0;

    int SelectionCriteria() {
        if (marksUG >= 80) totalPoints += 5;
        if (marksPG >= 80) totalPoints += 5;
        if (marksDiploma >= 80) totalPoints += 5;

        cout << "\nSelection Criteria:";
        cout << "\nPoints for UG marks >= 80: " << (marksUG >= 80 ? 5 : 0);
        cout << "\nPoints for PG marks >= 80: " << (marksPG >= 80 ? 5 : 0);
        cout << "\nPoints for Diploma marks >= 80: " << (marksDiploma >= 80 ? 5 : 0);
        cout << "\nTotal Points: " << totalPoints << " out of 15\n";

        return totalPoints;
    }

    void FinalResult(int points) {
        cout << "\nFinal Result:\n";
        if (points >= 12) {
            cout << "Candidate is QUALIFIED for Software Developer Post\n";
        } else {
            cout << "Candidate is NOT QUALIFIED for Software Developer Post\n";
        }
    }
};

// Main Function
int main() {
    Result r;
    string ug, pg, dip;

    cout << "\n--- UG Course ---";
    ug = r.SubjectList();
    r.UG_Course::MarksObtained(ug); // specify base class due to same function names

    cout << "\n--- PG Course ---";
    pg = r.SpecializationList();
    r.PG_Course::MarksObtained(pg);

    cout << "\n--- Diploma Course ---";
    dip = r.CourseList();
    r.Diploma_Course::MarksObtained(dip);

    int pts = r.SelectionCriteria();
    r.FinalResult(pts);

    return 0;
}
