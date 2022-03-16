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

    int a,b,c=0,d=0,e=0;
    int i,j;
    int array1[100000]={0};
    int array2[100000]={0};
    int array3[100000]={0};
    int array4[100000]={0};


    while(scanf("%d",&a)!=EOF){

        for(j=0;j<a;j++){

            scanf("%d",&b);

            for(i=0;i<100000;i++){

                scanf("%d",&array1[i]);
                scanf("%d",&array2[i]);

                c++;

                if(array1[i]==0&&array2[i]==0){

                    i=100000;

                }

            }

            sort(array1,array2,c);

            array3[d]=-50001;

            for(i=0;i<c;i++){

                if(array1[i]<=0&&array2[i]>=array4[d]&&array1[i]>array3[d]){

                    array3[d]=array1[i];
                    array4[d]=array2[i];

                }

            }

            while(array4[d]<b){
        
                for(i=0;i<c;i++){

                    if(array1[i]<=array4[d]&&array2[i]>array4[d]){

                        if(array1[i]==array3[d]&&array2[i]>array4[d]){

                            d--;

                        }

                        if(array4[d]>=b){

                            break;

                        }

                        d++;
                        array3[d]=array1[i];
                        array4[d]=array2[i];

                    }

                }

                e++;

                if(e>c){  

                    break;

                }

            }

            if(array3[0]>0){

                printf("0\n");

            }

            else if(array4[d]<b){

                printf("0\n");

            }

            else{
            
                printf("%d\n",d+1);
        
                for(i=0;i<d+1;i++){
                
                    printf("%d %d\n",array3[i],array4[i]);
        
                }

            }

            c=0;
            d=0;
            e=0;
            
            for(i=0;i<100000;i++){

                array1[i]=0;
                array2[i]=0;
                array3[i]=0;
                array4[i]=0;

            }

        }

    }

}