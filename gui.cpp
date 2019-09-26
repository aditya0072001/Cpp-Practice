#include<iostream>

using namespace std;

class GUI{
  string name;
  int n;
public:
  GUI(){
    name=" ";
    n=0;
  }

  GUI(string name,int n){
    this->name=name;
    this->n=n;
  }

   void greet(){
    if(name[0]=='A'&& n<20){
      cout<<name<<" welcome"<<" of age "<<n<<endl;
    }
    else{
      cout<<name<<" not welcome"<<" of age "<<n<<endl;
    }
  }

};

int main(){
  GUI h("Aditya",18),h1("Kaaaanish",56);
  h.greet();
  h1.greet();

  return 0;
}
