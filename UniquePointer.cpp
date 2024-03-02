//Title --> Unique Pointer
/*Description & Usage:
    Unique pointer is a smart pointer that provides exclusive ownership for the dynamically allocated objects.
    It means the multiple objects can't share the same resource . It can be only moved or in other words, the ownership
    can be transferred to  other object using std::move().
*/

#include<iostream>

using namespace std;

class A{
    public:
    int a=0;;
    A(int a=0){
        this->a=a;
    }
    void print(){
        cout<<a<<"\n";
    }
};
int main(){

        unique_ptr<A> aClass (new A(10)); //works , 1 owner

        unique_ptr<A> bClass; // works
        //bClass->print();//not initialized , not works .
        //bClass=aClass; // can't copy , compilation error . Because uniqueptr resources cant be shared

        unique_ptr<A> cClass (new A(160));//works , independent object with its own resource.
        cClass->print();//works

        

        bClass=std::move(aClass);//works because ownership transferred;

     //  aClass->print(); // Error. no more accessible
       
        cout<<aClass;
        cout<<bClass;

    return 0;
}
