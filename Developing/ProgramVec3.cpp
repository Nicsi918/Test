/*
* hello.cc
*/
#include <iostream>
#include "../VectorUtils/Vec3.hpp"

using namespace std;

int	main()
{
	cout << "Hello, world" << endl;
	Vec3 v(1.0, 2.0, 3.0);
	//Vec3 v{1.0f, 2.0f, 3.0f};
	//Vec3 v(1.0, 2.0, 3.0);
	return 0; // this return statement is optional
}