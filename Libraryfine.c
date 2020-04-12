#include <stdio.h>
#include <stdlib.h>
int libfine(int d1,int m1,int y1,int d2,int m2 ,int y2);

int main(int argc, char **argv)
{
    int d1,m1,y1,d2,m2,y2;
    scanf("%d",&d1);
    scanf("%d",&m1);
    scanf("%d",&y1);
    scanf("%d",&d2);
    scanf("%d",&m2);
    scanf("%d",&y2);
    int result=libfine(d1,m1,y1,d2,m2,y2);
    printf("%d",result);
    
    return(0);
}


int libfine(int d1,int m1,int y1,int d2,int m2,int y2){
    int fine=0;
    if((d1<d2) && (m1==m2) &&(y1==y2)){
        fine=0;
    }else if((d1>d2) && (m1==m2) && (y1==y2)){
        
        fine=15*(d1-d2);
    }else if((m1>m2) &&(y1==y2)){
        
        fine=500*(m1-m2);
    }else {
        
        fine =10000;
    }
    
    return fine;
    
    
    
}
