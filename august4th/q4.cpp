//Data of student
#include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;
    float marks;
};

void display(student stud)
{
    cout<<"The details of student are:"<<endl;
    cout<<"Roll no: "<<stud.rollno<<endl;
    cout<<"Name: "<<stud.name<<endl;
    cout<<"Marks: "<<stud.marks<<endl;
}

int main(){
    student stud;
    cout<<"Enter the details of student"<<endl;
    cout<<"Enter the rollno : "<<endl;
    cin>>stud.rollno;
    cout<<"Enter the name : "<<endl;
    cin>>stud.name;
    cout<<"Enter the marks : "<<endl;
    cin>>stud.marks;
    display(stud);
    return 0;
}