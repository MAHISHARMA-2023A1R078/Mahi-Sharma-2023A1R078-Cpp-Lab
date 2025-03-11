// //To update the details of a student class using its member functions.


/*3a. to update the details of a student using a member fn of student class
3b. To delete the details of a student using  a member fn of student class.*/
#include<iostream>
using namespace std;
class Student{
    public: string StudentName; int StudentID;
    float Marks, per;
    public:Student(string Name, int Id, float Mark){
        StudentName=Name;
        StudentID=Id;
        Marks=Mark;
    }
    void Display(){
        cout<<"\nName= "<<StudentName<<"\tStudentID is "<<StudentID<<"\tMarks are "<<Marks;
        
    }

};
void Semester1(Student Sem1){
    Sem1.Marks = 400;
    cout<<"\nMarks in Semester1 "<<Sem1.Marks;
}
void Semester2(Student Sem2){
    Sem2.Marks  = 450;
    cout<<"\nMarks in Semester2 "<<Sem2.Marks;
}
void update(Student &obj){
    obj.StudentName="Mahi";
    obj.Marks=480;
    obj.StudentID=102;
   // cout<<"\nthe updated information name is "<<obj.StudentName<<"\t"<<"marks is "<<obj.Marks<<"\t"<<"StudentID is "<<obj.StudentID<<"\n";
  
}
// void Delete(Student *pobj){
//     cout<<"\n Student Records not found";
//     pobj->StudentName="";
//     pobj->StudentID=0;
//     pobj->Marks=0;
// }
int main(){
  Student obj("ABC",101,0);
  obj.Display();
  Semester1(obj);
  Semester2(obj);
  update(obj);
  cout<<"\nStudent Records after updation_your updated information is ";
  obj.Display();
  //Delete(&obj);
  //obj.Display();
}






































// #include<iostream>
// using namespace std;
// class Student
// {
//     public:string StudentName;int StudentID;
//     float Marks,per;
//     public:Student(string Name,int Id,float Mark)
//     {
//         StudentName=Name;
//         StudentID=Id;
//         Marks=Mark;       
//     }
//     void display()
//     {
//         cout<<"\nInformation entered by the Student is ";
//         cout<<"\n Name= "<<StudentName<<"\t Student ID is "<<StudentID<<"\t Marks are ";
//         cout<<Marks;
//     }
//     void Grade()// method 2:int or char grade
//     {
//         per=Marks/500*100;
//         if(per>=80 && per<=100)
//         {
//             cout<<"\n Your Grade is A";
//             //return 1orA
//         }
//         else if(per>=70 && per<80)
//         {
//             cout<<"\n Your Grade is B";
//             //return 2orB
//         }
//         else if(per>=60 && per<70)
//         {
//             cout<<"\n Your Grade is C";
//             //return 3orC
//         }
//         else if(per>=50 && per<60)
//         {
//             cout<<"\n Your Grade is D";
//             //return 4orD
//         }
//         else
//         {
//             cout<<"\n Not Qualified.";
//         }
//     }
//     void Club_Assignment() // on the basis of grades
//     {
//         if(per>=80 && per<=100)
//         {
//             cout<<"\n You are assigned to sports Club ";
//         }
//         else if(per>=70 && per<80)
//         {
//             cout<<"\n You are assigned to  ECO Club";
//         }
//         else if(per>=60 && per<70)
//         {
//             cout<<"\n You are assigned to  NCC Club ";
//         }
//         else if(per>=50 && per<60)
//         {
//             cout<<"\n You are assigned to  NSS Club ";
//         }
//         else
//         {
//             cout<<"\n Not Qualified for any club ";
//         }
//     }
//     public:void update()
//     {
//         cout<<"\n Enter updated Marks ";
//         cin>>Marks;
//         cout<<"\nstudent records after updation";
//         display();
//     }
//     public:~Student()
//     {
//         cout<<" \nDestruction Invoked";
//     }
// };
// int main()
// {
//     Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
//     int i;int SID;//char res
//     for(i=0;i<5;i++)
//     {
//         cout<<"\n Information of Student with ID "<<obj[i].StudentID;
//         obj[i].display();
//         //res=obj[i].Grade();
//         obj[i].Grade();
//         obj[i].Club_Assignment();
//     }
//     cout<<"\n Enter your student ID to update your information ";
//     cin>>SID;
//     for(i=0;i<5;i++)
//     {
//         if(obj[i].StudentID==SID)
//         {
//             cout<<"\n You have entered valid student Id\n";
//             obj[i].update();
//         }
//         // else{
//         //     cout<<"\ninvalid sid\n";
//         // }
//     }
//     return 0;
// }














/********BY Me**********/




// /* pay app using two classes in which u have to update validate accept and delete the user details based 
//  on choice for update and delete (on 14/02/25)  */
//  #include<iostream>
//  using namespace std;
//  string username,emailid,name;
//  int password;
//  class Login_Details{
 
//  public: void validate(){
     
//      cout<<"enter the login password:\n";
//      cin>>password;
//      if(password==1234){
//          cout<<"valid password, so display the details.\n";
//          display();
         
//      }
//      else{
//          cout<<"Not a valid password\n";
//      }

//  }
//  public: void display(){
//      cout<<"Welcome to MyApp\n";
//  }
//  };
//  class User_Profile{
//  public: void accept(){
//      if(password==1234){
//          cout<<"password is correct, so accept the details.\n";
//          cout<<"enter the username:\n";
//      cin>>username;
     
//      cout<<"enter the emailid:\n";
//      cin>>emailid;
 
//      cout<<"enter name:\n";
//      cin>>name;
 
//      }
//      else{
//          cout<<"password is incorrect so not accepted\n";
//      }
//      // cout<<"enter the username:\n";
//      // cin>>username;
     
//      // cout<<"enter the emailid:\n";
//      // cin>>emailid;
 
//      // cout<<"enter name:\n";
//      // cin>>name;
 
//  }
//  public: void display(){
//      if(password==1234){
//          accept();
//      cout<<"\nusername is: "<<username;
//      cout<<"\nemail is: "<<emailid;
//      cout<<"\nname is: "<<name;
//      }
//      else{
//          cout<<"Not display due to incorrect password\n";
//      }
 
//  }
//  public: void update(){
//      string choice;
//      cout<<"\nyou want to update the details: \n";  
//      cin>>choice;
//  if(choice=="update" && password==1234){
//          cout<<"enter the username, emailid and name for updating...\n";
//          cin>>username;
//          cin>>emailid;
//          cin>>name;

//          cout<<"\nthe updated username is: "<<username;
//          cout<<"\nthe updated email id is: "<<emailid;
//          cout<<"\nthe updated name is: "<<name;

//      }
// //  else if(choice=="delete" && password==1234){
// //      delt();
// //  }
//  else{
//      cout<<"type correctly or password is not valid that's why user details not accepted and hence exit!!\n";
//  }

//  }
// //  public: void delt(){
// //      cout<<"usernsme is:"<<" ";
// //      cout<<"\n email is:"<<" ";// to delete give spaces inside the double codes...
// //      cout<<"\n name is:"<<" ";

// //  }
//  };
//  int main(){
//      Login_Details obj;    /*there are two classes, so name the two objects differently, otherwise comiler will confuse that
//                              from which class the object belongs to... */
//      User_Profile obj1;
//      obj.validate();
//      //obj1.accept();
//      obj1.display();
//      obj1.update();
 
//  return 0;

//  }