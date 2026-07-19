#include <iostream>
using namespace std;

void multiplication_pattern(int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            cout<<i+1<<" X ";
        }
        cout<<i+1;
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter the number of rows : 6";
    cin>>n;
    multiplication_pattern(n);
    return 0;
}