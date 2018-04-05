#include <iostream>

#include "vector3.h"
#include "vector3.cpp"

using namespace std;

int main()
{
	// test vector class;
	cout << "VECTOR TEST 1:" << endl;
	vector3 vec1(1, 1, 3);
	vec1.printVector3();
	cout << endl;

	// correct answer: (5, 5, 15)
	cout << "VECTOR TEST 2:" << endl;
	vector3 vec2 = 5*vec1 + vec1 - vec1;
	vec2.printVector3();
	cout << endl;

	// correct answer: (5, 105, 19)
	cout << "VECTOR TEST 3:" << endl;
	vector3 vec3(vec2);
	vec3 += vector3(0, 100, 4);
	vec3.printVector3();
	cout << endl;
    return 0;
}
