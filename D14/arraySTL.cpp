#include<iostream>
#include<array>


using namespace std;
int main()
{
    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};  // formation of stl array 

    int size = a.size(); // returns the size of the array here 4
    cout<< size <<endl;

    // traversal of the array
    for (int i = 0; i < size; i++)
    {
        cout<< a[i] <<endl;
    }
    
    // to find the element at any index 
    // Use at operation 
    // takes index as input and return the value at the index

    cout<< "Element ar 2nd Index : " << a.at(2) << endl;

    // to check whether the array is empty or not we can use empty function 
    // takes no arguments as input
    // return 0 is array is not empty else 1

    cout<< "Empty array or not ??  " << a.empty() << endl;

    // we can find the first and last element in the array 
    // use front function to get the first position and 
    // use the back function to get the last position in the array
    // both takes no argument as input and returns the 1st and last element value in the
    // array 

    cout<< "First element : "<< a.front() << endl;
    cout<< "Last element : "<< a.back() << endl;

    // stl array is based on basic array 
    return 0;
}