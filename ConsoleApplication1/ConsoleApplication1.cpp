#include <iostream>
class Car {
public:
	double X;
	int P;
	double V;
};
Car::Car() {
	X = 0;
	P = 1;
	V = 2;
}
int main() {
	using namespace std;
	cout << "Test v3.01: OK.\n";
	Car car;
	cout << "X: " << car.X << endl;
	cout << "P: " << car.P << endl;
	cout << "V: " << car.V << endl;
	return 0;
};
