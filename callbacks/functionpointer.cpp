#include<iostream>


using namespace std;

bool desc(int,int);


//using Callback = bool(*)(int,int);

typedef bool (*Callback)(int,int);
template<typename T,int size>
void Sort(T (&arr)[size],Callback desc){

        for(int i=1;i<size;i++){
            for(int j=1;j<size;j++){
                if(desc(arr[j-1] , arr[j])){
                    swap(arr[j-1],arr[j]);
                }
            }
        }
}

bool desc(int a,int b){
    return a < b ;
}
int main(){

    int arr[]={5,4,3,10,2,11,1};
    Sort(arr,desc);
for(auto a:arr)
    cout<<a<<" ";

    return 0;
}