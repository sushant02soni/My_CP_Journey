#include <iostream>
using namespace std;

void pyramid(int n){

    for(int i=0;i<n;i++){

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int k=0; k<=i; k++){
            if(i==0 || i==n-1 || k==0 || k==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin>> n ;
    pyramid(n);
    
    return 0;
}
