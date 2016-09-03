#include <iostream>
#include <cmath>
#include "math.h"
#include <iomanip>

using namespace std;

double finalAmount (double g, double w)
{
  double p= (g/w)*(6.02*pow(10, 23));
  return p;
}

int main()
{
    bool finished = false;
    char tempChar;
    while( finished != true )
    {
        double amount = 0;
        double amu = 0;
        cout << "What is the amount of the substance in grams?" << endl;
        cin >> amount;
        cout << "What is the atomic weight of the element in amu?" << endl;
        cin >> amu;
        cout << "The amount of particles is " << finalAmount(amount, amu) << " Particles" << endl;
        cout << "Again?\n";
        cin >> tempChar;
    }

        if( tempChar == 'N' || tempChar == 'n' || tempChar== 'no' || tempChar == 'No' || tempChar == 'NO')
        {
        finished = true;
        }

    return 0;

}
