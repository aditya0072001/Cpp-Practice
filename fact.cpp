#include<iostream>
using namespace std;

int main(){
  int n1,d1,n2,d2,max,n3,n4,n5,hcf;
  cout<<"N1"<<"D1"<<endl;
  cin>>n1>>d1;
  cout<<"N2"<<"D2"<<endl;
  cin>>n2>>d2;
  if(d2>d1){max=d2;}else{max=d1;}
  while(1){
    if(max%d2==0&&max%d1==0){
      n3=(d2*n1)/d2;
      n4=(d1*n2)/d1;
      n5=n4+n3;
      break;
    }
    max++;
}
//cout<<endl<<n4<<endl<<n3<<endl;
for(int j=1;j<=n5&&j<=max;j++){
  if(n5%j==0&&max%j==0){
    hcf=j;
  }
}
//cout<<endl<<hcf<<endl;
n5=n5/hcf;
max=max/hcf;
cout<<n5<<"/"<<max;
return 0;
}
