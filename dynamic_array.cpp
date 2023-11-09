
#include<iostream>
using namespace std;

typedef struct  {
    int size;
    int capacity;
    int* container;
} dynamicArray;

dynamicArray newDynamicArray() {
    dynamicArray darray =  {0,1,new int[1]};
    return darray;
}

void push(dynamicArray* darray, int x){
    int capacity = (*darray).capacity;
    int size = (*darray).size;
    if(size == capacity){
        int doubleCapacity = 2*capacity;
        int * newContainer = new int[doubleCapacity];
        (*darray).capacity = doubleCapacity;

        for(int i=0; i< size; i++ )
            newContainer[i] = darray->container[i];
        
        delete darray->container;
        darray->container = NULL;
        darray->container = newContainer;
    }
    darray->container[size] = x;
    darray->size++;
}

int main(){
    dynamicArray darray = newDynamicArray();

    for(int i=5; i>0; i--)
        push(&darray, i);
    

    for(int i=0; i< darray.size; i++ )
        cout<<darray.container[i]<<endl;
    
    return 0;
    
}