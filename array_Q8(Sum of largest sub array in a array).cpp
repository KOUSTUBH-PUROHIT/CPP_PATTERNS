#include<iostream>
using namespace std;

int subarray(int a[], int size)
{
  int max_so_far = 0, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int n;
    cout<<"Enter the number of Elements you want to enter : "<<endl;
    cin>>n;
    int arr[n];
    
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter Element : ";
        cin>>arr[i];
    }
    int max_sum =  subarray(arr,n);
    
    cout<<"The maximum subarray is : "<<max_sum;
    
    return 0;
}