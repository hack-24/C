#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    int n,cnt=0;
    
    
    scanf("%d",&n);
    
  
    int arr[n][2];
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<2;j++){
            
            
            scanf("%d",&arr[i][j]);
        }
    }
        
        
        
        for(int i=0;i<n;i++){
            
            for(int j=arr[i][0];j<=arr[i][1];j++){
                
                 for (int k = 1; k*k <= j; k++) {
            if (k * k == j) 
                cnt++; 
                
                 }


         

    }
            
            
            
         printf("%d\n",cnt);
          
          cnt=0;
            
            
            
            
        }
        
        
        
        
        
        
    
    
    
    return(0);
    
}
