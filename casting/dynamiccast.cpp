#include<iostream>


using namespace std;


class Base{
    public:
   virtual  void print(){
        cout<<"Base class";
    }
};

class Derived : public Base{
    public:
    int b=0;
    void print(){
        cout<<"Derived Class";
    }
};

int main(){
    Base *b = new Derived;

    Derived* d  = static_cast<Derived*>(b);

    const std::type_info& baseTypeInfo = typeid(*d);
    std::cout << "Type of *basePtr: " << baseTypeInfo.name() << std::endl;

    // if(d==nullptr)
    //     cout<<"cast failed";
    // else
    //    {d->print();}
    return 0;
}