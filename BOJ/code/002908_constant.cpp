#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(void){
  string a,b;
  cin>>a>>b;
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  int e,f;
  e=stoi(a,nullptr,10);
  f=stoi(b,nullptr,10);
  int larger=(e>f)?e:f;
  cout<<larger<<endl;
  return 0;
}
