//Odd or Even
#include <iostream>
using namespace std;
void distinguish(int arr[],int x){
    for(int i=0;i<x;i++){
        if(arr[i]%2==0){
            cout<<"The element "<<arr[i]<<" is even"<<endl;
        }
        else{
            cout<<"The element "<<arr[i]<<" is odd"<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the elements in your array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the data in your array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    distinguish(arr,n);
    
}