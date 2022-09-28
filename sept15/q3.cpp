//use of pointer to class 
#include <iostream>
using namespace std;
class PC{
    int roll;
    char name[25];
    float mark;
    public:
    void read_data(){
        cout<<"Enter the roll no :\n";
        cin>>roll;
        cout<<"Enter the name :\n";
        cin>>name;
        cout<<"Enter the mark:\n";
        cin>>mark;
    }
    void display(){
        cout<<"The name of the student is "<<name<<"roll no is"<<roll<<"mark is "<<mark;
    }
};
int main(){
    PC obj;
    PC *ptr;
    ptr=&obj;
    ptr->read_data();
    ptr->display();
    return 0;
}