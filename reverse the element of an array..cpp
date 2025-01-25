#include<iostream>
using namespace std;

int main(){
    int arr[]= {11,12,13,14,15};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before reverse \n";
    for(int i = 0;i < len;i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    for(int i = 0;i<len/2;i++){
        int temp = arr[i];
        arr[i]= arr[len-1-i];
        arr[len-1-i] = temp;
    }
    cout<<"after reverse \n";for(int i = 0;i < len;i++){
    cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}