
#include <iostream>

using namespace std;

struct OpOv
{
	int v;//our value 

	OpOv(int v) : v(v){}

	OpOv operator+(const OpOv& other) {
		return OpOv(v * other.v);
	}

	void print() {
		cout << v << endl;
	}

};
