#include "stdio.h" 
#include <iostream>
 
class Parent { 
  public:
  	Parent() {std::cout << "Parent" << std::endl;};
  	virtual ~Parent() {std::cout << "~Parent" << std::endl;};

    void Show(int iToShow) { printf("%d\n", iToShow); } 
}; 
 
class Child: public Parent { 
	int a;
	int b;
  public: 
  	Child() {std::cout << "Child" << std::endl;};
  	~Child(){std::cout << "~Child" << std::endl;};
    
}; 

template <typename T = char>
T max(T const & a, T const & b)
{
  return (a <= b ? b : a);
}


int main() { 


  // Child *a = new Child;
  // Child *b = new Child;

 	// std::cout << sizeof(Parent) << std::endl;

  // delete a;



  std::cout << max<>(2, 4) << std::endl;

  return 0; 
}
