 #include <iostream>
 using namespace std;

 int main() {  
   int t, n, c, m;  
   cin>>t; 
   while (t--)  
   {  
     cin>>n>>c>>m; 
     int ans = 0;
     ans=n/c;  
     if(ans>=m)  
     {  
       int temp=ans;  
       do{  
         temp-=m;  
         ans++,temp++;  
       }while(temp>=m);  
     }  
     cout<<ans<<endl;  
   }  
   return 0;  
 }