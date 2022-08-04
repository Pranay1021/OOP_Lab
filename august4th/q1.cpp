//The sum of series
#include <iostream>
using namespace std;
float fact(float x){
    float product=1;
    for(float i=1;i<=x;i++){
        product=product*i;
    }
    // cout<<"The factorial of "<<x<<"is "<<product<<endl;
    return product;
}
float pow(float y,float z){
    float power=1;
    for(float i=1;i<=y;i++){
        power=power*z;
    }
    // cout<<"The value of "<<y<<" to the power "<<z<<" is "<<power<<endl;
    return power;
}
float result(float a,float b){
    float sum=1;
    for (float i=2;i<=b;i++){
        sum=sum+(pow(i,a)/fact(i));    }
        return (sum);
}
int main(){
    float a,b,c,d;
    float answer;
    cout<<"1+a^2/2!+.......a^n/n! "<<endl;
    cout<<"Enter the value of a in above expression"<<endl;
    cin>>a;
    cout<<"Enter the power of a/factorial in denominator: "<<endl;
    cin>>b;
    answer=result(a,b);
    cout<<"and the sum of the series is "<<answer<<endl;
    return 0;
}