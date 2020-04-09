#include <stdio.h>
#include <stdlib.h>

long long aVeryBigSum(long long []);
int n;

int main(void){



    

    scanf(" %d\n", &n);

    long long sum[n];

    for(int i=0;i<n;i++){

        scanf(" %lld", &sum[i]);
    }

long long total=aVeryBigSum(sum);

printf("%lld", total);

return(0);

}


    long long aVeryBigSum(long long sum[]){

        long long result=0;

        for(int i=0;i<n;i++){

          result+=sum[i];

        }

        return result;



    }

