#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n = 5;
    char ch=65;
    for(i=0; i<n ; i++){
        for(j=0 ; j<i+1; j++){
            cout <<ch; 
        }
        ch++;
    cout << endl;
    }
    return 0;
}