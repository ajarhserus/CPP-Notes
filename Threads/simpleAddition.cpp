//simple C++ program for addition using thread.
#include<iostream>
#include<thread>

using namespace std;

void add(int a,int b ,int c){
    cout << a + b + c;
}

int main(){

    thread t(add,1,2,3);
    t.join();

   // cout<<"thread returned";
    return 0;
}