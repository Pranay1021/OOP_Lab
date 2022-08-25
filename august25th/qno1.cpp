//To read roll,name and mark of a student
#include <iostream>
using namespace std;
class student{
    int roll;
    char name[25];
    float mark;
public:
    void read_data();
    void display_data();
};
void student::read_data(){
    cout<<"Enter the roll of the student : ";
    cin>>roll;
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the mark of the student : ";
    cin>>mark;
}
void student::display_data(){
    cout<<"The name of the student is "<<name<<"\nroll no is "<< roll <<"\nmark is "<<mark;
}
int main(){
    student s;
    s.read_data();
    s.display_data();
    return 0;
}