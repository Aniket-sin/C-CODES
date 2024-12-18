#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout <<"Enter character:";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout <<"character is lowercase";
    }
    else {
        cout <<"character is uppercase";
    }
    return 0;

}