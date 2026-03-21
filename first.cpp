#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
	int f=1;
	if(n<=1){
		f=0;
	}		
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
		f=0;
		break;
        }
    }
        
    if(f)
        cout<<"Given number is Prime";
    else
        cout<<"Given number is NOT Prime";

    return 0;
    

    }
