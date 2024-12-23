#include<iostream>
using namespace std;

int main(){

    int n , i ;
    bool isPrime = true;

    cout << "Enter no.=";
    cin>>n;

    for(i=2 ; i<= n-1 ; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
     }
     if (isPrime == true){
        cout<<"Prime no\n";
     }else {
        cout<<"Non prime no\n";
     }
     return 0;
}

