#include<iostream>

using namespace std;

class Hello{
    private:
    int a,b;
    public:
    Hello(){
        a=0;
        b=0;
    }
    Hello(int x,int y){
        a=x;
        b=y;
    }
    Hello(Hello &h){
        a=h.a;
        b=h.b;
    }
    void add(){
        int c=a+b;
        cout<<"Sum is :"<<c<<endl;
    }
};
int main(){
    Hello h1,h2(2,4),h3(h2);
    h1.add();
    h2.add();
    h3.add();
    return 0;
}
