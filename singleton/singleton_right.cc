// Copyright 2017. All Rights Reserved.
// Author: yeshunping@gmail.com (Shunping Ye)

#include <string>
#include <iostream>

#include "base/macro.h"

using std::cout;
using std::endl;

class A {
 public:
  void f1() {
    cout << "print by f1" << endl;
  }

  static A* GetInstance() {
    static A a;
    return &a;
  }

 private:
  A() {
    cout << "print by A::A()" << endl;
  }
  DISALLOW_COPY_AND_ASSIGN(A);
};

int main(int argc, char** argv) {
  A* a = A::GetInstance();
  a->f1();
  return 0;
}
