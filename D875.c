#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b,c;
    int i;

    while(scanf("%d",&a)!=EOF){

        b=sqrt(a);

        if(b*b==a){

            for(i=1;i<=b;i++){

                printf("%d ",i);

            }

            for(i=b-1;i>0;i--){

                printf("%d ",i);

            }

            printf("\n");

        }

        c=a-b*b;

        if(c<=b&&c>0){

            for(i=1;i<=b;i++){

                if(c==i){

                    printf("%d ",i);

                }

                printf("%d ",i);

            }

            for(i=b-1;i>0;i--){

                printf("%d ",i);

            }

            printf("\n");

        }

        else if(c>=b&&c<=2*b){

            c=c-b;

            for(i=1;i<=b;i++){

                if(c==i){

                    printf("%d ",i);

                }

                printf("%d ",i);

            }

            printf("%d ",i-1);

            for(i=b-1;i>0;i--){

                printf("%d ",i);

            }

            printf("\n");

        }

    }

}