#include<stdio.h>
#include<stdlib.h>

void bonAppetite(int [],int,int);       
int main(){


int n,k;
scanf("%d",&n);
scanf("%d",&k);

int arr[n];
for(int i=0;i<n;i++){


    scanf("%d",&arr[i]);
}
bonAppetite(arr,n,k);

return(0);

}

void bonAppetite(int arr[],int n,int k){

int Anna;
scanf("%d",&Anna);
int total=0;
int rem=0;
for(int i=0;i<n;i++){

    total+=arr[i];
}



if((Anna)==(total/2)){

    rem=arr[k]/2;
   printf("%d",rem);


}


 else{

     char str[]="Bon Appetit";

     printf("%s",str);
 }








}
