#include <iostream>
#include <string>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  string words="";
  int i=0,counter=0;
  getline(cin,words);
  for(i=0;i<words.length();i++){
    if(words[i]!=' ')
      break;
  }
  if(i==words.length()){
    cout<<"0\n";
    return 0;
  }
  for(int j=i;j<words.length();j++){
    if(words[j]==' ')
      counter++;
    if(j==(words.length()-1)){
      if(words[j]==' ')
	counter--;
    }
  }
  counter++;
  cout<<counter<<"\n";
  return 0;
}
