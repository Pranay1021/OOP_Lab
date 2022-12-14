//To display info about 5 students (array of class)
#include <iostream>
using namespace std;
class student{
    int roll;
    char name[25];
    float m[3];
    char grade;
    float sum;

public:
    void read_data();
    void display_data();
    void gradecalc();
    int sn;

};
 void display_bar(){
        for(int i=0;i<60;i++)
        {
            cout<<"_ ";
        }
        cout<<"\n";
    }
void student::display_data(){
    display_bar();
    cout<<"\n";
    cout<<sn<<"\t"<<roll<<"\t"<<name<<"\t\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<sum<<"\t"<<grade;
    cout<<"\n";
    
} 
void student::gradecalc(){
    sum=0;
    for(int i=0;i<3;i++){
        sum+=m[i];
    }
    if(sum>=270){
        grade='O';
    }
    else if(sum>=240){
            grade='E';
        }
    else if(sum>=210){
            grade='A';
        }
    else{
        grade='B';
    }
}
void student::read_data(){
    cout<<"Enter the roll of the student : ";
    cin>>roll;
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the 3 marks of the student : ";
    for(int i=0;i<3;i++){
        cin>>m[i];
    }    
}
int main(){
    student s[5];
    int count=1;
    for(int i=0;i<5;i++){
        cout<<"\nStudent No "<<count<<"\n";
        s[i].read_data();
        count++;
        s[i].gradecalc();
    }
    cout<<"\n";
    display_bar();
    cout<<"\n";
    cout<<"SN"<<"\t"<<"Roll.No"<<"\t"<<"Name"<<"\t\t"<<"m1"<<"\t"<<"m2"<<"\t"<<"m3"<<"\t"<<"total"<<"\t"<<"grade";
    cout<<"\n";
    for(int i=0;i<5;i++){
        s[i].sn=i+1;
        s[i].display_data();
    }
    cout<<"\n\n";
    int n;
    cout<<"Enter the SN of student you want to display:\n";
    cin>>n;
    s[n-1].display_data();
    cout<<"\n\n";
}