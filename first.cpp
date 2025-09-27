

#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=2; i<=n; i++){
        if(n%i==0){
		cout<<"given number is prime";
		break;
        }
        
    else if(n==i){
    	cout<<"number is not prime";
    }   
    }
    return 0;
}
