#include <iostream>
#include <math.h>
using namespace std;
int main() {
	const float Pi = 3.14;
	double S, D, L, R;
	cout << "Write the area of a circle:";
	cin >> S;
	R = sqrt(S/Pi);
	L = 2 * Pi * R;
	D = R * 2;
	cout << "The diametr of a circle is equal " << D << "     ";
	cout << "The length of a circle is equal " << L;
	return 0;


}
    
