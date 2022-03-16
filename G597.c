#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int arr[], int i, int j) {
    
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;

}

void sort(int arr[], int a){

    int i,j;

    for(i=0;i<a;i++){

        for(j=0;j<a-1;j++){

            if(arr[j+1]<arr[j]){

                swap(arr,j+1,j);

            }

        }

    }

}

int main(){

    int a,b,c,d,e,f=0;
    int i,j;
    int array[200000][5];
    int array1[200000]={0};
    int array2[20000]={0};

    while(scanf("%d %d",&a,&b)!=EOF){

        for(i=0;i<b;i++){

            for(j=0;j<3;j++){

                scanf("%d",&array[i][j]);

            }

        }

        for(i=0;i<a;i++){

            scanf("%d",&array1[i]);

        }
        
        sort(array1,a);

        for(i=0;i<b;i++){

            c=array[i][0];
            d=array[i][1];
            e=array[i][2];

            for(j=c;j<=d;j++){

                array2[j-1]=array2[j-1]+e;

            }

        }

        sort(array2,a);

        for(i=0;i<=a;i++){

            f=f+array1[i]*array2[a-1-i];

        }

        printf("%d\n",f);

        f=0;
        
        for(i=0;i<=a;i++){

            array2[i]=0;

        }

    }

}