#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int arr[], int i, int j) {
    
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;

}

void sort(int arr[], int a){

    for(int k=0 ; k < a ; k++){

        int l = k;

        while(a-1 > l && l >= 0 && arr[l+1] < arr[l]){

            swap(arr,l+1,l);

            l--;

        }

    }

}

int main(){

    int a,b=0;
    long long int c=0;
    int i;
    int array1[5000]={0};

    while(scanf("%d",&a)!=EOF){

        if(a==0){

            break;

        }

        for(i=0;i<a;i++){

            scanf("%d",&array1[i]);

        }
        
        sort(array1,a);

        b=a-1;

        while(b>0){

            array1[0]=array1[0]+array1[1];
            
            for(i=1;i<b;i++){

                array1[i]=array1[i+1];

            }
            
            b--;
            c=c+array1[0];
            sort(array1,b+1);

        }

        printf("%lld\n",c);

        b=0;
        c=0;

    }

}