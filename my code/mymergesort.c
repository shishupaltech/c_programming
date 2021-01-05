#include<stdio.h>
void mergesort();
void merge();

int main()
{
	int a[40],n,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element in the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("sorted element are:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
void mergesort(int a[40],int first,int last)
{
	int mid;
	if(first<last){
		mid=(first+last)/2;
		mergesort(a,first,mid);
		mergesort(a,mid+1,last);
		merge(a,first,mid,last);
		
	}
}
void merge(int a[],int first,int mid,int last)
{
	int i,j,k,b[40];
	i=first;
	j=mid+1;
	k=first;
	while(i<=mid && j<=last){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	if(i>mid){
		while(j<=last){
			b[k++]=a[j++];
		}
	}
	else{  
		while(i<=mid){
			b[k++]=a[i++];
		}
	}
	for(i=first;i<=last ;i++){
		a[i]=b[i];
	}
}
