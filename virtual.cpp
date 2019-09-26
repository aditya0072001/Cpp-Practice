#include<iostream>

using namespace std;

class V{
protected:
  string name;
  int age;
public:
  void setData(){
    cout<<"Enter name and age :"<<endl;
    cin>>name>>age;
  }
  virtual void display()=0;
};

class UseV:public V{
public:
  void display(){
      cout<<endl<<name<<endl<<age;
  }
};

int main(){
  UseV v;
  v.setData();
  v.display();
  return 0;
}
