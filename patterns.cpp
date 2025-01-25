#include<iostream>
using namespace std;

int main(){
    int n = 5;
    cout<<"patterns\n";
    cout<<"square\n";
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    
     n = 5;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            int a = n/2 + 1;
            if(a == j || a == i){
                cout<<"* ";
            }else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
    n = 6;
    for(int i = 1;i < n;i++){
        for(int j = 1;j < n;j++){
            if(i == j || i+j== n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    
    return 0;
}