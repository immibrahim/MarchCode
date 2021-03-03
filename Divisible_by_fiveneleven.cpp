#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num%5==0 && num%11==0)
        cout<<num<<" is divible by both 5 and 11.\n";
    else
         cout<<num<<" is NOT divible by both 5 and 11.\n";
    return 0;
}