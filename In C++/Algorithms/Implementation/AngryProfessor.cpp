#include <iostream>
using namespace std;


int main() {
    int t;  
    cin>>t;  
    while(t--){  
     int n,k,temp,count=0;  
     cin>>n>>k;  
     for(int i=0;i<n;i++){  
       cin>>temp;  
       if(temp<=0){    
         count++;  
       }  
     }  
     if(count>=k){  
       cout<<"NO"<<endl;  
     }else{  
       cout<<"YES"<<endl;  
     }  
   }
                   
    return 0;
}