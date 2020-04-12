#include <stdio.h>
#define MAXJUMP 1000
void Kangaroo(int x1,int v1,int x2,int v2);

int main(int argc, char **argv)
{
    int x1,v1,x2,v2;
    scanf("%d",&x1);
    scanf("%d",&v1);
    scanf("%d",&x2);
    scanf("%d",&v2);
    Kangaroo(x1,v1,x2,v2);
    
    return(0);
}



void Kangaroo(int x1,int v1,int x2,int v2){
    int pos1=x1;
    int pos2=x2;
    
    
    
    for(int i=0;i<MAXJUMP;i++){
        
        pos1+=v1;
        pos2+=v2;
        
        if(pos1==pos2){
            
            printf("YES");
            break;
        }
        
        }
        
        
        if((x1>x2 && v1>v2) || ((x1<x2) &&(v1<v2))){
            
            printf("NO");
        }

  
}
