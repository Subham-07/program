#include<stdio.h>

int main(){
	int n,x,y,a;
	int i,j;
	/*
	int arr[7]={7,3,9,4,8,1,5,};
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");*/
	printf("Enter n:");
	scanf("%d",&n);
	int bin[n];
	printf("Enter the elements:")
	for(i=0;i<n;i++){
        scanf("%d",&bin[i]);
    }
	for(i=0;i<n-1;i++){
		y=i;
		for(j=i+1;j<n;j++){
			if(bin[j]>bin[y]){
				y=j;
			} 
		}
		a=bin[i];
		bin[i]=bin[y];
		bin[y]=a;
	}
	for(i=0;i<n;i++){
		printf("%d ",bin[i]);
	}
	/*printf("\n");
	printf("Second largest element:%d\n",arr[n-2]);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	*/
	int min=0,max=n-1,mid;
	int key;
	printf("Enter the key:");
	scanf("%d",&key);
	while (min<max){
		mid=(min+max)/2;
		if(bin[mid]==key){
			printf("%d",mid);
			break;
		}
		else if(arr[mid]>key){
			min=mid+1;
		}
		else{
			max=mid-1;
		}
	}
	return 0;
}
