#include <iostream>
using namespace std;

class A {
public:
  int v;
  A(int n)
  {
    v=n;
    cout<<"Constructor called"<<endl;
  }
  A(const A & a)
  {
    v=a.v;
    cout<<"Copy Constructor called"<<endl;
  }
};

A Func()
{
  A b(4);
  return b;
}

int main()
{
  Func();
  cout<<Func().v<<endl;
  return 0;
}
