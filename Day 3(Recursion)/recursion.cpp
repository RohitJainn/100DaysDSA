#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int power(int n){
    
    if(n==0)
        return 1;
    
    return 2*power(n-1);
}

int fact(int n){
   
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int count(int n){

    if (n==0)
        return 0;

    cout<<n<<endl; //prints count in descending

    count(n-1);

    cout<<n<<endl; //prints count in ascending
}


int main(){
    int n;
    cin>> n ;

    int answer = fact(n);
    cout<<"Factorial:";
    cout<<answer<<endl;

    int pow = power(n);
    cout<<"Power:";
    cout<<pow<<endl;

    count(n);
    return 0;
}