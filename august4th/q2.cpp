//searching a element
#include <iostream>
using namespace std;
void search(int x,int arr[],int y){
    for(int i=0;i<y;i++){
        if(arr[i]==x){
            cout<<"The element is present at position"<<i;
        }
        else{
            continue;
        }

    }
    cout<<"The element is absent .";
}

int main(){
    int n,search1;
    cout<<"Enter the elements in your array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the data in your array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search :"<<endl;
    cin>>search1;
    search(search1,arr,n);
    return 0;
}
