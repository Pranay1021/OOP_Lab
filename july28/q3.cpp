//factorial
#include <iostream>
using namespace std;
int main(){
    int n,answer=1;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        answer=answer*i;
    }
    cout<<"The factorial of "<<n<< " is "<<answer;


}