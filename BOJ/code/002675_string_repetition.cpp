#include <iostream>
#include <string>
using namespace std;

int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int i,j,k,iter=0, count=0;
  string word="";
  cin>>iter;
  for(i=0;i<iter;i++){
    cin>>count>>word;
    for(j=0;j<word.length();j++){
      for(k=0;k<count;k++){
	cout<<word[j];
      }
    }
    cout<<"\n";
  }
  return 0;
}
