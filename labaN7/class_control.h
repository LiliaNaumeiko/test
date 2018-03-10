#include <iostream>
#include <string.h>
using namespace std;
class controllers
{
protected:
    double data;
public:
    void setData(double xdata)
    {
        data = xdata;
    }
    double getData()
    {
        return data;
    }
};
class termometer : public controllers
{
   
    double temperature ;
   
public:
    void Print ()
    {
        cout << "The average temperature of procesors is  " << getData() <<"C* "<<endl;
    }
};
class voltmeter : public controllers
{
   
    double electrical_potential ;
public:
    void Print ()
    {
        cout << "The indicator of voltmeter is " << getData () << "W "<< endl;
    }
};
class hiroskop : public controllers
{
    bool deviation;
public:
    void Print()
    {
        cout << "The deviation  of compute is  " << getData()<< " on the left " << endl;
    }
};