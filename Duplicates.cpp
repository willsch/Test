#include<iostream.>
#include<conio.h>
using namespace std;

int main()
{
int a[3],j,i,n;
printf("Give me the size of array (N): ");
scanf("%d",&n);
//printf("enter elements: ");
for(i=0;i<n;i++)
{
cout<<"pos."<<i+1<<"= ";
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
printf("Numbers at position %d and %d are the same.\n",i+1,j+1);
}
}
 getch();
} 

