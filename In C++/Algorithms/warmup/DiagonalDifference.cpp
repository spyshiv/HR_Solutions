#include <iostream>
#define max 1000
using namespace std;

int main() {  
  
    int a[max][max],i,j,diga=0,digb=0,n;  
    cin>>n;   
    for(i=0;i<n;i++)  
        {  
        for(j=0;j<n;j++)  
            {  
            cin>>a[i][j];   
            if(i==j)  
                diga+=a[i][j];    
            if(j==(n-i-1))  
                digb+=a[i][j];  
        }  
    }  
    cout<<abs(diga-digb);  
      
    return 0;  
} 