#include <iostream>

using namespace std;
class comp
{
    int fuel;
    string sSwitcher;
public:
    void checkFuel ()
    {
        fuel = 100;
        cout << "The engine trust data : it consist " << fuel << "% of fuel " << endl;
    }
    void switcherOn ()
    {
        sSwitcher = " on ";
        cout << "Your system is turned "<< sSwitcher  << "." << endl;
        checkFuel();
    }
     void switcherOf ()
    {
        sSwitcher = " off ";
        cout << "Your system is turned "<< sSwitcher  << "." << endl;
    }
    void TakeOfer ()
    {
        cout << "The data are normal! Plane is ready for flying. " << endl;
    }
    void Lander ()
    {
        cout << "The plane is ready for landing.  " << endl;
    }
};