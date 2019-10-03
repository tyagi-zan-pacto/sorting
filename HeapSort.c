#include<stdio.h>
#include<stdlib.h>
int heapsizeA;
int left(int i){
return (2*i);
}
int right(int i){
return (left(i)+1);
}
void exchange(int *x,int *y){
		int temp;
		temp=*x;
		*x=*y;
		*y=temp;
		}


void maxheapify(int* A,int i){
	int largest;
	int l;
	l=left(i);
	int r;
	r=right(i);
	if(l<=heapsizeA && A[l]>A[i]){
			 largest=l;		
		}
	else
		largest=i;
	if(r<=heapsizeA && A[r]>A[largest]){
		largest=r;	
	}
	if(largest!=i){
		exchange((A+i),(A+largest));
		maxheapify(A,largest);

	}
		
}

void Buildmaxheap(int* A,int n){
       heapsizeA=n;
//printf("%d",heapsizeA);
	for(int i=n/2;i>=1;i--)
		maxheapify(A,i);

	}
void heapsort(int* A,int n){
//printf("he");
	Buildmaxheap(A,n);
//printf("hello");
//for(int i=1;i<=length(A);i++)
//printf("%d\t",*(A+i));

	for(int i=n;i>=2;i--){
              
		exchange(A+1,A+i);
		heapsizeA=heapsizeA-1;
		maxheapify(A,1);	
	}

}


int main(){
int n;
int* A;

printf("enter the size of the array");
scanf("%d",&n);
A=(int*)malloc(sizeof(int)*n);
//printf("lijefrhwpiejhf%ldjfneijnd",sizeof(A));
for(int i=1;i<n+1;i++){
 A[i]=rand()%10;
printf("%d,,",A[i]);
}
A[0]=0;
//printf("%x",A);
heapsort(A,n);
printf("\n");
for(int i=1;i<=n;i++)
printf("%d,",*(A+i));
return 0;
}








