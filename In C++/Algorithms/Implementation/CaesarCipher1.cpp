#include <iostream>  
#include <string>   
using namespace std;
int main() {  
  
    int n,k,i;  
    char *str,c;  
    cin>>n;
    str=(char*)malloc(sizeof(char)*1000000);   
    cin>>str;   
    cin>>k;
    i=0;  
    while(*(str+i))  
        {    
        if((*(str+i)>='a' && *(str+i)<='z') || (*(str+i)>='A' && *(str+i)<='Z'))  
            {   
            if(*(str+i)>='a' && *(str+i)<='z')  
                c='a';  
            else  
                c='A'; 
            *(str+i)=c+(*(str+i)-c+k)%26;  
        }   
        i++;  
    }  
   
    cout<<str;  
  
    return 0;  
}
