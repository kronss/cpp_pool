#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

class A {
public:
	A() { cout << "A()" << endl; }
	virtual ~A() { cout << "~A()" << endl; }
};

class B : public A {
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }
};

int main()
{
	A *a = new B;

	delete a;

	return EXIT_SUCCESS;
}
