#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,comp=0,swaps=0,minm;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n-1;i++)
        {  
             minm=i;
            for(int j=i+1;j<n;j++)
            {
              comp++;
                if(arr[j]<arr[minm])
                {
                 
                 minm=j;
                }
            }
            swap(arr[i],arr[minm]);
            swaps++;
        }
          for(int i=0;i<n;i++)
        {
             cout<<arr[i]<<" ";    
           
        }
      cout<<endl;
        cout<<"Comparision= "<<comp<<" Swaps= "<<swaps<<endl ; 
    }
   
}