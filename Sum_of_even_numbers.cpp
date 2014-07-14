#include<iostream.>
#include<conio.h>
using namespace std;

int main()
{
 int n, i, nr, s, contor;               
 s=0; contor=0;                        
      cout<<"Give me the size of array (N): "; 
      cin>>n;              
      for(i=1;i<=n;i++)
        {
          cout<<"nr="<<i<<"= "; cin>>nr;        
          if(nr%2==0)                                       
            s=s+nr;                                            
          else
            contor++;                                       
   }   
  cout<<"The sum of even numbers: "<<s;                                  
  cout<<endl;                                                                                 
  cout<<"Number of odd numbers: "<<contor;       
  getch();
}
