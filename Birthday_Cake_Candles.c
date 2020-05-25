#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    unsigned long  int n;
    unsigned long int max;
    int count=0;
    
    scanf("%lu", &n);
    
    unsigned long arr[n];
    
    //taking input inside the array
    
   
   
    for (unsigned long i=0;i<n;i++){
        
        
        scanf("%lu",&arr[i]);
    }
    
    
    //setting the max variable to arr[0]
    
    
    max=arr[0];
    
    //finding the max element in the array
    
    
    for(unsigned long j=0;j<n;j++){
        
        if(max<arr[j])
            max=arr[j];
        
        
        
        
    }
    
    //looking for element equal to max element in the array
    
    for(unsigned long k=0;k<n;k++){
        
        
        if(arr[k]==max)
            
            count++;
        
        
    }
    

    printf("%d", count);
    
    
    
    
    
    
    
    
    return(0);
}
