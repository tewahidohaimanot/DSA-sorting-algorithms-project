//shell sorting

#include <iostream>
using namespace std;
int main()
 {
    int a[] = {23,7,9,5,2,29,15,19,31};
    
    cout<<"The unsorted list: ";
    for (int i=0 ; i<9; i++)
    {
        cout<<a[i]<<" ";
    }
        cout<<endl;
    
   int gap;
   int n=9;
    for (int gap=n/2; gap>=1;gap/=2)
    { for ( int j=gap;j<n;j++)
    { for (int i=j-gap ;i>=0 ; i-=gap)
    { 
    if (a[i+gap]>a[i])
    {
    break;
    }
    else {
    swap(a[i+gap], a[i]);
    }
    }
    }
    }
   
 
    cout<<"The sorted list: ";
    for (int i=0 ; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
        cout<<endl;
    
    return 0;
 } 