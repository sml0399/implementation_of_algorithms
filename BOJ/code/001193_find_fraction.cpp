#include <iostream>
using namespace std;
int main(void){
    long int target_number=0;
    cin>>target_number;
    long int n=1;
    while(true){
        if((n*(n-1)/2)>=target_number)
            break;
        n++;
    }
    long int remain=target_number-(n-1)*(n-2)/2;
    if(n%2==0)
        cout<<(n-remain)<<"/"<<remain<<endl;
    else
        cout<<remain<<"/"<<(n-remain)<<endl;

    return 0;
}