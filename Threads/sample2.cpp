#include<iostream>
#include<thread>

using namespace std;

class Test{
    public:
    void print(){
        cout<<"hello";
    }
};

int main(){
    Test obj;
    thread t(&Test::print,obj);
    t.join();
    return 0;
}