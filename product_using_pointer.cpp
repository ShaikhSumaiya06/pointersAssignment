#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the numbers : ";
    cin>>a>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int c ;
    int *ptr;
    *ptr= *p1 * *p2;
    cout<<"Product : "<<c<<endl;
}