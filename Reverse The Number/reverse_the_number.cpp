#include <iostream>  
using namespace std;  
int main()  
{  
    int t;
    cin>>t;
    while(t--){
int n, reverse=0, rem;    
   cin>>n;  
  while(n!=0)    
  {   
     rem=n%10;      
     reverse=reverse*10+rem;    
     n=n/10;    
  }    
 std::cout<<reverse<<endl; 
    }
return 0;  
}  