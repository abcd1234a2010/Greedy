#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b,c=0,d=0;
    int i,j;
    int array1[100000]={0};

    while(scanf("%d",&a)!=EOF){

        for(j=0;j<a;j++){

            scanf("%d",&b);

            for(i=0;i<b;i++){

                scanf("%d",&array1[i]);

            }

            c=array1[0];
            d++;

            for(i=1;i<b;i++){

                if(c<array1[i]){

                    c=c+array1[i];
                    d++;

                }

                else if(c>=array1[i]){

                    c=c-array1[i-1];
                    c=c+array1[i];

                }

            }

            printf("%d\n",d);

            d=0;

            for(i=0;i<100000;i++){

                array1[i]=0;

            }
            
        }

    }

}