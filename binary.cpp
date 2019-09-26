#include<iostream>
using namespace std;

int binary(int a[],int find,int size){
  int low=0,high=size-1;
  int mid=(high+low)/2;
  while(high<=low){
    if(a[mid]==find){
      return mid;
    }
    if(a[mid]>find){
      low=mid+1;
    }else{
      high=mid-1;
    }
    mid = (high + low)/2;
  }
  //return 69;
}
int main(){
  int f=7;
  int ar[6]={2,6,7,89,120,769};
  cout<<binary(ar,f,6);
  return 0;
}
