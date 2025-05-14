/*Program:- File Handling                                 13/05/25
Performing Write Operation in a text file
E.g Write Student Name and RollNo in Text file
*/
#include<iostream>
#include<fstream> //This is the header file used to handle file in cpp
// Allow us to access predefine classes in our code  to support operation
// Step 1
using namespace std;
int main(){
    string name;
    int Rollno;
    cout<<"Enter your Name ";
    cin>>name;
    cout<<"Enter your RollNo ";
    cin>>Rollno;
    ofstream fout("StudentData1.txt",ios::app); //step 2 -- absolute path to same drive mein store ; for relative path to ddrive mein store
    // ofstream is a predefine class prsesnt in fstream file and we are accessing this class in our code 
    // using object fout(fout is a user define object name)
    // use absolute path or relative path for file
    fout<<"\n Name = "<<name<<"\t "<<"Roll No = "<<Rollno<<endl;
    //using object fout with operator << , we are passing information to the text file 
    fout.close();
    // we are closing the file
    return 0;
}
