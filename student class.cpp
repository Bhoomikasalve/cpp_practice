#include<iostream>
using namespace std;

class Student {
    int roll_no;
    string name;int markes;
    public:
    
        void insert(int r,string n,int m){
            roll_no = r;
            name = n;
            markes = m;
        }
        
        void display(){
            cout<<"Student details : \n";
            cout<<"name = "<<name<<" ,roll number = "<<roll_no<<" ,totel ="<<markes<<" ,persentage = "<<markes*100/500<<endl;
        }
};

int main(){
    int n;
    cout<<"enter the number of student : ";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        string n;
        int r;
        int m;
        cout<<"enter details of Student "<<i+1<<endl;cout<<"enter name : ";
        cin>>n;
        cout<<"enter roll number : ";
        cin>>r;
        cout<<"enter markes outof 500 : ";
        cin>>m;
        s[i].insert(r,n,m);
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<"details of Student "<<i+1<<" : \n";
        s[i].display();
    }
    return 0;
}

