/*14/05/25
Reading data from file (any text file existing in our system)
using conditions
*/
#include<iostream>
#include<fstream>  
using namespace std;
int main(){
    string name;
    int Rollno;
    cout<<"Enter your Name ";
    cin>>name;
    cout<<"Enter your RollNo ";
    cin>>Rollno;
    ofstream fout("StudentData1.txt",ios::app);
   string reading_data;
   fout<<"\n Name = "<<name<<"\t "<<"Roll No = "<<Rollno<<endl;
   ifstream fobj("StudentData1.txt"); //or this is for the file existing in the same folder
   //ifstream fobj("C:/Users/Asus/Mahi Code/C++ Code StudentData1.txt");// when file u r reading is in different folder
   if(!fobj) //placed this condition to verify existence of file in the system
   {
    cout<<"file not found";
   }
   else{
   while(getline(fobj,reading_data))
   {
    cout<<"\n"<<reading_data;
   }
   }
   fobj.close();
   return 0;

}//getline() method is used to read data from file with help of file object (fobj(user define name))
//and using variable
//of string reading_data(user define name)