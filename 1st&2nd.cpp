#include<iostream.>
#include<conio.h>
using namespace std;

 int main()
{
    int i,l,a[100],sl,n;
    cout<< "Give me the size of array (N): ";
    cin>> n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
           cin>> a[i];
    }
    l=a[0];
    sl=a[1];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>sl && a[i]!=l)
        {
            sl=a[i];
        }
    }
    cout<<" Largest number is "<< l;
    cout<<endl; 
    cout<<" 2nd largest number is "<< sl;
  getch();
}
