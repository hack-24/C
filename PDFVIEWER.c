#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 26



int main(int argc, char **argv)
{
	int arr1[MAXSIZE],arr2[10];
    char str1[10];
    char str2[]="abcdefghijklmnopqrstuvwxyz";
    int max=0;

    
   
   
    for(int i=0;i<MAXSIZE;i++){
        
        scanf("%d",&arr1[i]);
    }
    
   
     scanf("%s",str1);
     
     
     
    
        
        for(int i=0;i<10;i++){
              
              if(str1[i]=='\0')
                  break;
                              
                  
            for(int j=0;j<MAXSIZE;j++){
                
                if(str1[i]==str2[j]){
                    
                    arr2[i]=arr1[j];
                    
                }
            }
            
           
            
            
            
        }
       
        
        max=arr2[0];
        for(int i=0;i<strlen(str1);i++){
            if(arr2[i]>max){
                
                max=arr2[i];
            }
            
        }
        
        
    
    int result=max*strlen(str1)*1;
    printf("%d",result);
        
        


        
     
        
       
        return(0);
        }
        
        
        
        
        
    