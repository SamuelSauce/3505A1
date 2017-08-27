#include <cstdio>
#include <iostream>
using namespace std;

void updatePopulations(double g, double p, double c, double m, double K,
                       double& numRabbits, double& numFoxes);

int main(){
        double numRabbits;
        double numFoxes;
        cout << "Enter initial number of rabbits, followed by initial number of foxes:";
        cin >> numRabbits >> numFoxes;
        cout << "You entered " << numRabbits << " " << numFoxes << ".\n";
}
