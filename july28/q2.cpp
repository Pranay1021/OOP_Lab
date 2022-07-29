//max number
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter threee numbers ";
    cin>>a>>b>>c;
    d=(a>b)?(a>c)?a:c:(b>c)?b:c;
    cout<<"The maximum number is "<<d;
}