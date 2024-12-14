#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,i,res=1;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        if(i!=0)
        {
            cout<<res;
            res+=2;
        } 
        cout<<endl;  
    }
    cout<<"The final value of i is: "<<res;
}