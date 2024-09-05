#include <iostream>
#include <memory>

#include "canvas.h"

using namespace std;

void ejemplo_smart_pointer() {
  int* ptr;
  ptr = new int;
  auto ptr2 = ptr;
  delete ptr;
  
  unique_ptr<int> uptr;        // int* ptr;
  uptr = make_unique<int>(44); // ptr = new int;
  
  auto uptr2 = move(uptr);
  
  shared_ptr<int> sptr;        // int* ptr;
  sptr = make_shared<int>(44); // ptr = new int;
  
  auto sptr2 = sptr;
  auto sptr3 = sptr;
  auto sptr4 = sptr;
}

void ejemplo_1() {
  Canvas c;
  c.add(new Circle(10, 20));
  c.add(new Rectangle(34, 20));
  c.add(new Circle(1, 5));
  c.add(new Rectangle(3, 7));
  
  c.draw();
}

int main() {
  ejemplo_1();
  return 0;
}