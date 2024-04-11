#include<iostream>

using namespace std;


template<typename T>
class sharedpointer{
    public:
    T* res;
    int* count;

    sharedpointer(){
        res=nullptr;
        count=nullptr;
    }
    sharedpointer(T* other){
        res=other;
        count = new int(1);
    }
    sharedpointer(sharedpointer& other){
        res=other.res;
        count=other.count;
        *count++;
    }
};

int main(){
    sharedpointer<int> a(new int(10));
    sharedpointer<int> b;
    *b=10;

    return 0;
}