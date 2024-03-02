/*
        Title :Shared Pointer
        Description/Usage:
            Shared Pointer is a smart pointer that allows the objects to share the resources.
            Automatically freed when the scope ends.     
               
*/



#include<iostream>
using namespace std;

class A{

    public:
      int data;
      A(int a=0){
        this->data=a;
      }
      void print(){
        cout << this->data << "\n";
      }

      ~A(){
        cout<<"destructor ";
      }

};
int main(){

    shared_ptr<A> a(new A(10));
    shared_ptr<A> b(a);
    shared_ptr<A> c;
    c=b;

    a->print(); //prints 10
    b->print(); //prints 10
    c->print();//prints 10

    b->data=50;

    a->print(); // prints 50
    b->print();//prints 50
    c->print();//prints 50
   // a.reset();
    c->data=150;
     a->print(); // prints 150
    b->print();//prints 150
    c->print();//prints 150
    cout << "\n" <<c.use_count();



    return 0;
}