#include<iostream>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
    for (int i = 0; i < n-1; i++)
    // for rount 1 to n-1
    {
        for (int j = 0; j < n-i-1; i++)
        {
            swap(arr[j],arr[j+1]);
        }
        
    }
    
}

 
void bubbleSort(vector<int>& arr, int n)
{
    for (int i = 0; i < n-1; i++)
    // for rount 1 to n-1
    {
        for (int j = 0; j < n-i-1; i++)
        {
            swap(arr[j],arr[j+1]);
        }
        
    }
    
}

int main()
{

    return 0;
}