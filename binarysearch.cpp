/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void bst(int a[30],int x,int low,int high)
{
  while(low<=high)
  {
      int mid=(low+high)/2;
      if(a[mid]==x)
      {
          cout<<"search element is found"<<mid;
          break;
      }
      else if(a[mid]>x)
      {
          high=mid-1;
      }
      else if(a[mid]<x)
      {
          low=mid+1;
      }
      else
      {
          cout<<"not found";
      }
  }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int high=n;
    int low=1;
    int x;
     for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"enter search element";
    cin>>x;
    bst(a,x,low,high);

    return 0;
}

