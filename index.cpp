#include<iostream>

using namespace std;

class Hello{
int age;

public:
Hello(){
  age=0;
}

Hello(int age){
  this->age=age;
}

void input(int age){
  this->age=age;
}

static  void check(Hello *h){
  int largest=h[0].age;
  for(int i=0;i<sizeof(h)/sizeof(h[0]);i++){

      if(largest>h[i+1].age){
      }
      else{
        largest=h[i+1].age;
      }
  }
  cout<<"Largest age is "<<largest<<endl;
}

};


int main() {
// int n,a;
  Hello h1(24),h2(69),h3(23),h4(4);
 /*cout<<"Enter number of objects you want";
  cin>>n;
  Hello h[n];
  for(int i=0;i<n;i++){
    cout<<"Enter age of "<<n<<"Object";
    cout<<a;
    h[i].input(a);
  }
*/
 Hello h[4]={h1,h2,h3,h4};
  Hello::check(h);
  return 0;
}
