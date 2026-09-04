// Sum of even numbers/Odd numbers 
#include <iostream>
using namespace std;
    
int main (){
    int i =0;
    int n;
    cin>>n;
    int sum=0;
    while(i<=n){
        sum = sum +i;
        i=i+2;
        
    }
    cout << "value of sum is " << sum;
}