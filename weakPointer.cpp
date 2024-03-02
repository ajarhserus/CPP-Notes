//Weak Pointer
//weak pointer is a smart pointer which is similar to shared pointer but does not maintain any reference count.
//weak pointer can't be initaialized using constructor.


#include<iostream>
using namespace std;

class A{
    public:
    A(){

    }
};

int main(){
    weak_ptr<A> a;
    weak_ptr<A> b;
    shared_ptr<A> c(new A());

    
    a=c;
    b=c;

    cout << a.use_count() << " " << b.use_count() << " " << c.use_count() ;


    return 0;
}