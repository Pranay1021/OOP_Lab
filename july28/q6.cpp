//Reverse a number
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"The reverse of "<<a;
    while(a>0){
        b=b*10+a%10;
        a=a/10;
    }
    cout<<" is "<<b;
}