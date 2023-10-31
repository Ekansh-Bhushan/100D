#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v; // init a vector

    // initial memory allocated to a vector is zero 
    // we can check the memory allocation with a function 
    // capacity returns the memory allocated to it 

    cout << "capacity -> " << v.capacity() << endl;

    // to see the double memory allocation in a vector 
    v.push_back(1); // adding a value '1' to the vector 
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;

    // printing the size of the vector
    cout<< "size -> " << v.size() << endl;

    // same function can be used here as in case of array 

    // to remove the element from the vector use pop_back
    // takes no arugments as input 

    cout<< "\n\n\n Before pop"<<endl;
    for(int i:v){
        cout<< i << " ";
    }cout<< endl;

    v.pop_back();

    cout<< "\n\n\n After pop"<<endl;
    for(int i:v){
        cout<< i << " ";
    }cout<< endl;
    



    vector<int> a(5,1);

    for(int i:a){
        cout<<i<<"   ";
    }cout << endl;

    return 0;
}