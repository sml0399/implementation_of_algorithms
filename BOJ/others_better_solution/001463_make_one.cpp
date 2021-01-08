/*solution by gracia*/
/*https://www.acmicpc.net/source/7493260*/
#include<iostream>
#include<algorithm>


using namespace std;

int solve(int a){
	return (a <= 1) ? 0 : min(solve(a/2)+1+a%2, solve(a/3)+1+a%3);

}
int main(){
	int a;
	cin >> a;
	cout << solve(a);

}
