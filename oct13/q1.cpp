//q1.to calculate factorial using constructor
#include <iostream>
using namespace std;
class test{
        int n;
        int f;
    public:
        test(){
            f=1;
        }
        void read_data(){
            cout<<"\nEnter a number";
            cin>>n;
        }
        void display(){
            cout<<"The factorial is "<<f;
        }
        void calc();
};
void test:: calc(){
    for(int i=1;i<=n;i++){
        f=f*i;
    }
}
int main(){
    test obj;
    obj.read_data();
    obj.calc();
    obj.display();
    return 0;
}