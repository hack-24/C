#include <stdio.h>
#include <stdlib.h>

int *gradingStudents(int [],int);

int main(void){
int n;
scanf(" %d\n",&n);

int grades[n];

for(int i=0;i<n;i++){

    scanf("%d\n ", &grades[i]);
}

int *p=gradingStudents(grades,n);


for(int i=0;i<n;i++){

    printf("%d\n",p[i]);
}
return(0);

}

int *gradingStudents(int grades[],int n){
    for(int i=0;i<n;i++){

     
 if(grades[i]<38){
     grades[i]=grades[i];
 }
 else if((grades[i]%5)==3){
     grades[i]+=2;
 }

 else if((grades[i]%5)==4){
     grades[i]+=1;
 }

   else{
       grades[i]=grades[i];
   }

 
 }

 return grades;

}