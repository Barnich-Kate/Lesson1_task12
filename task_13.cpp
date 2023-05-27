 #include <iostream>
#include <math.h>
using namespace std;
int main() {
	const float Pi = 3.14;
	double R1, R2, S1, S2, S3;
	cout << "Write the radius of the circle number1:";
	cin >> R1;
	cout << "Write the radius of the circle number21:";
	cin >> R2;
	S1 = Pi*(R1*R1);
	S2 = Pi * (R2*R2);
	S3 = S1 - S2;
	cout << "The area of a circle 1 is equal " << S1 << "     ";
	cout << "The area of a circle 2 is equal " << S2 << "     ";
	cout << "The area of a circle 3 is equal " << S3;
	return 0;


}
