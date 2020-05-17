#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    
    int n, r=0,cnt,temp=0;
   
    scanf("%d", &n);
   unsigned long long  int arr[n];
    
    //taking input
   
    
    for(int i=0;i<n;i++){
        
        scanf("%lld",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        
        temp=arr[i];
        
        while(arr[i]!=0){
            
           
            r=arr[i] %10;
            
            
            //if the remainder is 0 divide arr[i] by 10 and continue
            if(r==0){
                
                arr[i]=arr[i]/10;
                continue;
            }
            
            
            
            
            
            if(temp%r==0){
                
                
                cnt++;
            }
            
            arr[i]=arr[i]/10;
            
            
            
        }
        
        
        
        
        printf("%d \n" ,cnt);
        
        cnt=0;
        
        
        
        
        
    }
    
    
    
    
    return (0);
    
    
    
}
