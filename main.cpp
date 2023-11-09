#include <iostream>
#include "dynamic_array"
using namespace std;


int main(){
    dynamicArray darray = newDynamicArray();

    for(int i=5; i>0; i--)
        push(&darray, i);
    

    for(int i=0; i< darray.size; i++ )
        cout<<darray.container[i]<<endl;
    
    return 0;
    
}
