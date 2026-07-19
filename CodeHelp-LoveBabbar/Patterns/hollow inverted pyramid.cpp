#include <iostream>
using namespace std;

void pyramid(int n){

    for(int i=0;i<n;i++){

        for(int j=0; j<i+1; j++){
            cout<<" ";
        }

        for(int k=0; k<=n-i-1; k++){
            if(k==0 || k==n-i-1 || i==0){
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
