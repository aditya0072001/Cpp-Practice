#include<iostream>

using namespace std;

int sum(int n1,int n2){
if(n1<0 || n2<0){
n1= -n1;
n2= -n2;

int n3=n1+n2;
return -n3;
}
else{
 return n1+n2;
}

}
int main(){

int n1=sum(-2,-3);
int n2=sum(6,7);
int n3=sum(-8,5);

cout<<n1<<endl<<n2<<endl<<n3<<endl;
return 0;
}
