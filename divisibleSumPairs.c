#include <stdio.h>

#include<stdlib.h>

int divisibleSumPairs(int arr[],int n,int k);

int main(){
    int n,k;
    
    scanf("%d %d",&n,&k);
    int arr[n];
   ;
    for (int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    
   int result=divisibleSumPairs(arr,n,k);
   printf("%d",result);
    
    return(0);
    
    
}


int divisibleSumPairs(int arr[],int n,int k){
     int count=0;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            
            if((arr[i]+arr[j])%k==0){
                
                count++;
                
            }
            
            
        }
        
        
    }
    
    
  return count;  
    
    
}
