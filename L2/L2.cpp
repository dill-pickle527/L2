#include <iostream>
using namespace std;

int main()
{
	float A;
	float B;
	float X;
	cout << "hello, my name is Ian and I'm going to solve the equation\nAx+B=0\nFor x";
	cout << "Please enter a value for A:";
	cin >> A;
	cout << "Pleae enter a value for B:";
	cin >> B;
	cout << "Solving " << A << "x + " << B << " = 0 for x \n\n";
	X = -B / A; // subtracts B from both sides and divides both sides by A in one swoop
	cout << "The Answer is: \n\n x=" << X;

	return 0;
}
