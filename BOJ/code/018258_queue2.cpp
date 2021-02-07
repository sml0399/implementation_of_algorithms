#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int num_operations,number;
  string oper="";
  queue<int> q;
  cin>>num_operations;
  for(int i=0;i<num_operations;i++){
    cin>>oper;
    if(oper=="push"){
      cin>>number;
      q.push(number);
    }else if(oper=="pop"){
      if(q.empty())
	cout<<-1<<"\n";
      else{
	cout<<q.front()<<"\n";
	q.pop();
      }
    }else if(oper=="size"){
      cout<<q.size()<<"\n";
    }else if(oper=="empty"){
      if(q.empty())
	cout<<1<<"\n";
      else
	cout<<0<<"\n";
    }else if(oper=="front"){
      if(q.empty())
	cout<<-1<<"\n";
      else
	cout<<q.front()<<"\n";
    }else if(oper=="back"){
      if(q.empty())
	cout<<-1<<"\n";
      else
	cout<<q.back()<<"\n";
    }
  }

  return 0;
}
