#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
	Rectangle rect(0, 0, 12, 25);
	
	cout << rect->CalculatePerimeter() << endl;
	return 0;
}
