#include <iostream>
#include <vector>
#include "opC.h"

using namespace std;

int main() {
	OpOv n1(3);
	OpOv n2(6);

	OpOv n3 = n1 + n2;

	n3.print();

	return 0;

}