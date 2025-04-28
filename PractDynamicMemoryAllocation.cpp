/*28/04/25
Q1: Create a class Book with data member book name and price.
create an object dynamically and display its data and deallocates its memory.*/
#include<iostream>
using namespace std;
class Book{

    public: string bookname; 
    int price;
    public: void display(){
        cout<<"\nbook_name = "<<bookname;
        cout<<"\nprice= "<<price;
    }
};
int main(){
    Book *obj= new Book(); ///Text value dikkhata tbhi bracket class ke agge
    obj->bookname="maths_book";
    obj->price=1000;
    obj->display();
    delete obj;
    obj->display();
    return 0;
}