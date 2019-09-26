#include<iostream>
using namespace std;

class Obj{
  string name;
public:
  Obj(){}
  Obj(string n){
    name=n;
  }
  void h(){
    cout<<"Hello";
  }
};

int main(){
  Obj a("Hello");
  Obj b;
  Obj &t=b;
  t.h();
  Obj *h,*y;
  h=&t;
  y=&b;
  cout<<endl<<h<<endl;
  cout<<y<<endl;
  return 0;
}
