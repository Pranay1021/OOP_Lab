//The sum of series
#include <iostream>
using namespace std;
int fact(int x){
    int product=1;
    for(int i=1;i<=x;i++){
        product=product*1;
    }
    cout<<"The factorial of "<<x<<"is "<<product<<endl;
    return product;
}
int pow(int y,int z){
    int power=1;
    for(int i=1;i<=y;i++){
        power=power*z;
    }
    cout<<"The value of "<<y<<" to the power "<<z<<" is "<<power<<endl;
    return power;
}
int main(){
    int a,b,c,d;
    float answer;
    cout<<"a/1!+a^2/2!+.......a^n/n! "<<endl;
    cout<<"Enter the value of a in above expression"<<endl;
    cin>>a;
    cout<<"Enter the power of a/factorial in denominator: "<<endl;
    cin>>b;
    c=fact(b);
    d=pow(a,b);
    answer=d/a;
    cout<<"and the sum of the series is "<<answer<<endl;
}