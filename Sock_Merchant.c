#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n,count=0 ,totalCount=0;
   
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        
        scanf("%d", &arr[i]);
    }
    
    
    
    for(int j=0;j<n-1;j++){
        
        count=1;
        
        if(arr[j]!=-1)
            
            for(int k=j+1;k<n;k++){
                
                
                
                if(arr[j]==arr[k]){
                    
                    count++;
                    
                    arr[k]=-1;
                    
                }
            }
             if(count>1){
                
               
               
                totalCount+=count/2;
              
             }
             
             
             
            
    }
    
    printf("%d\n",totalCount);
            
            
            
            
        
        
        return (0);
      
    }
    



