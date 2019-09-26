#include<iostream>
using namespace std;

template <class T>
  T sum(T a,T b){
    return a+b;
  }

int main(){
T g;
T h;
cout<<"N1"<<"N2"<<endl;
cin>>g>>h;
cout<<sum(g,h);
  return 0;
}
