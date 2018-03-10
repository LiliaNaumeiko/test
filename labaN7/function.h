#include <iostream>
#include <fstream>

using namespace std;

bool indHiroscop ()
{
   bool indHir;
    ifstream inc;
    inc.open ("data_hiroskop");
    inc >> indHir;
    inc.close();
    return indHir;
}

double indPotential ()
{
   double indPot;
    ifstream inc;
    inc.open ("data_potential");
    inc >> indPot;
    inc.close();
    return indPot;
}

double indTemp()
{
    double indTemp;
    ifstream inc;
    inc.open ("data_temp");
    inc >> indTemp;
    inc.close();
    return indTemp;
}

void make_biGline()
{
	cout << endl;
	for (int i = 0; i < 30; i++)
		cout << "=";
	cout << endl;
}
void make_smalLline()
{
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << "-";
	cout << endl;
}
