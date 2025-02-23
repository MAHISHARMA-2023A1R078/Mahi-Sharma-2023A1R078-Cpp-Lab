/* Program to demonstrate the concept of Function Overloading.
Create a class with name shapes, create a function with name Area(),
with Area function calculate Area of Circle, Area of Rectangle, Area of Traingle, using function overloading.  21/02/25*/


#include<iostream>
using namespace std;
class Shapes{
    private: float carea, tarea, rarea;
    float base, height;
    public: void Area(float radius){
        cout<<"the area of circle is: ";
        carea=3.14*radius*radius;
        cout<<carea;
        
    }
    public: void Area(){
        cout<<"\nenter the base and height: ";

        cin>>base;
        cin>>height;
        cout<<"the area of traingle is:";
        tarea=0.5*base*height;
        cout<<tarea;
    }
    public: void Area(float length, float breadth){
        cout<<"\nthe area of rectangle: ";
        rarea=length*breadth;
        cout<<rarea;

    }

};
int main(){
    Shapes obj;
    obj.Area(2);
    obj.Area();
    obj.Area(12.0,2.0);
    return 0;

}