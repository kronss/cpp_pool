#include <iostream>

class A
{
public:
	A(){};
	~A(){};

	void foo(){std::cout << "fooA" << std::endl;}
	
};

class B : public A
{
public:
	B(){};
	~B(){};
	void foo(){std::cout << "fooB" << std::endl;}
};


int main(int argc, char const *argv[])
{
	A *a = new B;

	a->foo();



	return 0;
}