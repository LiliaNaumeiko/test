
#include <iostream>
#include "function1.h"
using namespace std;
class user
{
    string keyWord;
    string name;
   
public:
 
    user ();
   void SetName(string yourName) {
    name = yourName;
    }
  string GetName() const{
      cout << "Hello, miss " << name << endl;
        return name;
    } 
    bool enterKeyWord()
    {
      
       cout << "Enter your private keyword, please!" << endl;  
       cin >>keyWord;
       if (keyWord != "pre_12High_60" )
      {
       cout << "Non-right keyword!!! Your account will be blocked for 2 min! Call to the checking system!";
       return  0;
      }
      else
      {
       greeting();
       cout << "You've entered in your account" << endl;
       cout << endl;
       return  1;
      }
     }
};
user :: user()
{
    name = "Julia Kingston.";
}