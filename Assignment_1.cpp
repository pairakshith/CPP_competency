#include <iostream>
#include <string>
using namespace std;
 
class Car                           // declare class
{
private:
    string customer;                
    int release_year;               
    int speed;                      
 
public:                             // display functions are declared in this section
    void display_customer()
    {cout<<customer;}

    void display_release_year()
    {cout<<release_year;}

    int display_speed()
    { return speed; }
 
    void accelerate ()              // accelerating by adding 10 to the current speed
    {  speed += 10;  }
 
    void brake()                    // braking by subtracting 10 from the current speed
    {
        if ( speed >= 10)   
            speed -=10;
        else
            speed = 0;
    }
 
};

int main()                          // Start of the main function
{
    Car car_obj;                    // car_obj is the object of class Car
    cout<<"Accelerating..."<<endl;
    for (int speedup =0; speedup < 5; speedup++)
    {
        car_obj.accelerate();
        cout << " current speed: " << car_obj.display_speed() << "\n";
    }
    cout << endl;

    cout<<"Braking..."<<endl;
    for(int speedbrake = 0; speedbrake < 5; speedbrake++)
    {
        car_obj.brake();
        cout << "  Current speed: " << car_obj.display_speed() << "\n";
    }
     
    return 0;
}

//-------------END---------------//