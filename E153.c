#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int arr[], int arr1[], int i, int j) {
    
    int tmp = arr[i];
    int tmp1 = arr1[i];
    arr[i] = arr[j];
    arr1[i] = arr1[j];
    arr[j] = tmp;
    arr1[j] = tmp1;

}

void sort(int arr[], int arr1[], int a){

    int i,j;

    for(i=0;i<a;i++){

        for(j=0;j<a-1;j++){

            if(arr[j+1]<arr[j]){

                swap(arr,arr1,j+1,j);

            }

        }

    }

}

int main(){

    int a,b=0,c=0;
    int i,j;
    int array1[2000000]={0};
    int array2[2000000]={0};
    int array3[2000000]={0};


    while(scanf("%d",&a)!=EOF){

        for(i=0;i<a;i++){

            scanf("%d",&array2[i]);

        }

        for(i=0;i<a;i++){

            scanf("%d",&array1[i]);

        }

        sort(array1,array2,a);

        for(i=0;i<a;i++){

            if(array2[i]==-1){

               array3[i]=0;

            }
            
            if(array2[i]>0){

               array3[i]=array1[i]-array2[i];

            }

        }

        for(i=0;i<10;i++){

            for(j=0;j<a;j++){

                if(array3[a-1-j]>0){

                    array3[a-1-j]=array3[a-1-j]-1;

                }

                if(array3[a-1-j]==0){

                    array3[a-1-j]=array3[a-1-j]+array1[a-1-j];

                    j=a;

                }

            }

            for(j=0;j<a;j++){

                if(array3[j]>0){

                    b++;

                }

            }

            if(b>c){

                c=b;

            }

            b=0;
        
        }

        printf("%d",c);

        printf("\n");

        c=0;

    }

}