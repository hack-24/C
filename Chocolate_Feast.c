#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int t, total_Chocolates=0,total_Wrappers=0,temp=0;
    
    scanf("%d",&t);
    int arr[t][3];
    
    
    
    //taking inputs inside the array
    for(int i=0;i<t;i++){
        
        for(int j=0;j<3;j++){
            
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    for(int k=0;k<t;k++){
        total_Chocolates=0;
        total_Wrappers=0;
        
        for(int l=0;l<1;l++){
            
            total_Chocolates+=arr[k][l]/arr[k][l+1];
             total_Wrappers+=total_Chocolates;
            
            //checking if the total_wrappers are greater than or equal to m
           while(total_Wrappers>=arr[k][l+2]){
               
               
               temp=total_Wrappers/arr[k][l+2];
               total_Wrappers=total_Wrappers%(arr[k][l+2]);
               
               total_Chocolates+=temp;//incrementing total chocolates by temp
               
               total_Wrappers+=temp; //incrementing total wrappers by temp
               
               
               
               
               
               
               
               
           }
                
                
                
                
                
                
                
                
                
                
            }
            
            printf("%d\n",total_Chocolates);
            
            
        }
        
     return(0); 
        
    }
