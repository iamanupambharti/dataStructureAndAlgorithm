#include <iostream> 

using namespace std;


// Pass by Value 

void doSomething(int num){
    cout<<num<< endl;
    num+=15;
    cout<<num<< endl;
    num+= 10;
    cout<<num<< endl;
    num+= 10;
    cout<<num<< endl;
}

int main (){
    int num = 10;
    doSomething(num);
    cout <<  num << endl;

return 0;

}