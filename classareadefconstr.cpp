/* Program in cpp to create a class with name Area, default constructor of class which set radius value 5, and function() with name 
calculate(), this function will calculate Area of Circle(3.14 *Radius *Radius),finally create destructor to free memory of used 
variables   20/02/25 */

#include<iostream>
using namespace std;
class Area{
    private: float rad,area;
    public: Area(){
        rad=5;
        cout<<"the radius of the circle: "<<rad;
        cout<<"\nconstructor called!!";
    
    }
    public: void Calculate(){
        cout<<"\nthe area of the circle is: ";
        area=3.14*rad*rad;
        cout<<area;

    }
    public: ~Area(){
        cout<<"\ndestructor called!!";
    
    }

};
int main(){
    Area obj;
        obj.Calculate();
        return 0;
}

