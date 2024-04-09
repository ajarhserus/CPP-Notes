#include<iostream>
#include<thread>
#include<mutex>
#include <unistd.h>

using namespace std;

mutex m1,m2;

void function1(){
lock_guard<mutex> lock(m1);
cout<<"inside function1\n";
lock_guard<mutex> lock1(m2);

}
void function2(){
  lock_guard<mutex> lock(m2);
  cout<<"inside function2\n";
  lock_guard<mutex> lock1(m1);
}

int main(){

    thread t1(function1);
  //  sleep(10);
    thread t2(function2);

    t1.join();
    t2.join();

    cout<<"\n threads returned";

    return 0;
}