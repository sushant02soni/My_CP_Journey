#include <iostream>
using namespace std;

void inner_diamond(int n){

    for(int i=0; i<n; i++){
//top part
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        for(int k=0; k< 2*i +1; k++){
            cout<<"  ";
        }
        for(int l=0; l<n-i; l++){
            cout<<"* ";
            
        }
        cout<<endl;
    }

    for(int z=0; z<n-1; z++){
//bottom part
        for(int x=0; x<z+2; x++){
            cout<<"* ";
        }

        for(int y=0; y<2*n-2*z-3; y++){
            cout<<"  ";
        }
        for(int m=0; m<z+2; m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows for the inner diamond: ";
    cin>>n;
    inner_diamond(n);
    return 0;

}
