#include <iostream>
#include <math.h>
using namespace std;
int main() {
	const float Pi = 3.14;
	double r, l, s;
	cout << "Write the area of the circle:";
	cin >> r;
	l = 2*Pi*r;
	s = Pi*r*r;
	cout << "The area of a circle is equal " << s << "     ";
	cout << "The length of the circle is equal" << l;

}
