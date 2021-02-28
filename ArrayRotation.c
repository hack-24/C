#include <stdio.h>
#include <stdlib.h>

int *leftRotate(int *arr,int t,int d);


int main(int argc, char **argv)
{
	
        
    int *arr, *rotatedarr,t,d;
    scanf("%d", &t);
    scanf("%d",&d);
    
    
    arr=(int *) malloc(t*sizeof(int));
    
    for(int i=0;i<t;i++){
        
        scanf("%d",arr+i);
    }
    
    
    rotatedarr=leftRotate(arr,t,d);
    
    
    for(int i=0;i<t;i++){
        
        printf("%d ",rotatedarr[i]);
    }
   
    
     
  return (0); 
        
    }
    
    
  
   


int *leftRotate(int *arr,int t,int d){
   
 
   
    
     for(int i=0;i<d;i++){
         
           int temp=arr[0];
         for(int j=0;j<t-1;j++){
             
             arr[j]=arr[j+1];
             
         }
         
              arr[t-1]=temp;         
         
        }
    
    
    return arr;     
    }
    
    
    
 
      






