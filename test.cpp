#include "stdio.h" 
 
class Parent { 
  public: 
    void Show(int iToShow) { printf("%d", iToShow); } 
}; 
 
class Child: public Parent { 
  public: 
    void Show() override{ printf("%d", 1); } 
}; 
 
int main() { 
  Child obj; 
  obj.Show(2); 
  return 0; 
}
