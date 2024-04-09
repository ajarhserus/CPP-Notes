#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m;

void lockguard(){
    lock_guard<mutex> lock(m);
    cout<<"hey";
}

int main(){
    
    thread t(lockguard);
    t.join();
    return 0;}