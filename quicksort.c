



#include<stdio.h>
#include<stdlib.h>
int k=0;
void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
}
// Complete the lilysHomework function below.
int partition(int *arr,int l,int h){
    int pivot=arr[l];
    int i=l,j=h;
    while(i<j){
        while(arr[i]<=pivot)
        i++;
        while(arr[j]>pivot)
            j--;
            if(i<j){
                swap(arr[i],arr[j]);
                k++;

            }
            swap(arr[l],arr[j]);
            k++;
            
        
    }
    return j;
}

int quicksort(int *arr,int l,int h){
     int j;
     if(l<h){
         j=partition(arr,l,h);
         quicksort(arr,l,j-1+2);
         quicksort(arr,j+1,h);
     }
     return k;
}
int lilysHomework(int arr_count, int* arr) {
    
        int x;
        x=quicksort(arr,0,arr_count-1);
        return x;

    }
int main(){
int A[4]={2,5,3,1};
int x;
x=quicksort(A,0,3);
printf("%d",x);
return x;
}
