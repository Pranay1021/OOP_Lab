//friend function in c++
#include <iostream>
using namespace std;
class friend1{
    float a;
    float b;
public:
    void get_val(float i,float j){
        a=i;
        b=j;
    }
    friend void calc_avg(friend1,friend1);
};
void calc_avg(friend1 x,friend1 y){
    cout<<"\nThe average is "<<(x.a+y.b)/2;
}
int main(){
    friend1 f;
    float a,b;
    cout<<"Input two numbers :\n";
    cin>>a>>b;
    f.get_val(a,b);
    calc_avg(f,f);
}