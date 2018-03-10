#include <iostream>
#include "class_comp.h"
#include "class_user.h"
#include "class_control.h"
#include "function.h"
using namespace std;

int main()
{
bool Acting;
user Pilot;
Pilot.GetName();
Acting = Pilot.enterKeyWord();

if (Acting == 1)
 {
    comp YourComp;
    YourComp.switcherOn();
    make_biGline();  

    cout << "Before start we check the indicator of termometer , please. " ;
    make_smalLline();
    cout << "And indicator of voltmeter. "<< endl;
    make_smalLline();

    termometer YourPlane;
    YourPlane.setData(indTemp());
    YourPlane.Print();
    make_smalLline();
    
    voltmeter OfYourPlane;
    OfYourPlane.setData(indPotential());
    OfYourPlane.Print();
    make_smalLline();

if( YourPlane.getData () > 18 &&  YourPlane.getData () < 61 && OfYourPlane.getData() > 12 && OfYourPlane.getData() < 24 )
 {
     
    make_biGline();
    YourComp.TakeOfer();
    hiroskop OfYourPlane;
    OfYourPlane.setData(indHiroscop());

    if (OfYourPlane.getData() == false)
    {
        make_smalLline();
        OfYourPlane.Print();
        cout << "the control of the plane is in gaood hands!!!" << endl;
        make_smalLline();
    }
    YourComp.Lander();
    make_smalLline();
 }
else {
    cout << "This indicators are impossible for good fly"<< endl;
}
YourComp.switcherOf();
make_biGline();
}  
return 0;
}