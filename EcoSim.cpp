#include <cstdio>


void updatePopulations(double g, double p, double c, double m, double K,
                       double& numRabbits, double& numFoxes);

int main(){
	double numRabbits;
	double numFoxes;

	cout << "Enter initial number of rabbits, followed by initial number of foxes." << endl;
	cin >> numRabbits >> numFoxes >> endl;

	cout << "You entered" << numRabbits << numFoxes << endl;
}