 #include<iostream>  
#define max 100
 using namespace std;  
 int main(){  
   int n,i,j;  
   cin>>n;  
   string map[max];  
   for(i=0;i<n;i++)  
   {  
     cin>>map[i];    
   }  
   for(i=0;i<n;i++)  
   {  
     for(j=0;j<n;j++)  
     {  
       if(i == 0 || j == 0 || i == n-1 || j == n-1 )  
       {  
         cout<<map[i][j];  
       }  
       else if(map[i][j] > map[i][j-1] && map[i][j] > map[i][j+1] && map[i][j] >map[i-1][j] && map[i][j] > map[i+1][j])  
       {  
         cout<<"X" ;    
       }  
       else  
       {  
         cout<<map[i][j];  
       }  
     }  
     cout<<endl;  
   }  
   return 0;  
 } 