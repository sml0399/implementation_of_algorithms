#include <cstdio>
#include <iostream>

using namespace std;

int min_func(int a, int b){

  return (a<b)?a:b;
}

int main(void){
  int target=0;
  cin>>target;
  int * myarray=(int*)calloc(1000001,sizeof(int));
  int i=0;
  for(i=2;i<target+1;i++){*(myarray+i)=1000010;}
  i=1;
  while(i<target){
    *(myarray+i+1)=min_func(*(myarray+i+1),*(myarray+i)+1);
    if(i<=500000)*(myarray+2*i)=min_func(*(myarray+i*2),*(myarray+i)+1);
    if(i<333334)*(myarray+3*i)=min_func(*(myarray+i*3),*(myarray+i)+1);
    i++;
  }
  cout<<*(myarray+target)<<endl;
  free(myarray);
  return 0;
}
