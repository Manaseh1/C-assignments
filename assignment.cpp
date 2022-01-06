#include<stdio.h>
main(){
	int arr[20],i,size,posu,searchd,deleted;
	deleted=2;
	printf("Enter the size of the arrays\n");
	scanf("%d",&size);
	printf("Enter the array values\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("[%d]=%d\n",i,arr[i]);
	}
	//update
	printf("Enter the value of updating\n");
	scanf("%d",&posu);
	for(i=size;i<3;i--){
		arr[i]=arr[i-1];
	}
	arr[3]=posu;
	for(i=0;i<size;i++){
		printf("[%d]=%d\n",i,arr[i]);
	}
	for(i=0;i<size;i++){
		 if(arr[i]==34){
			printf("found");
			
		}
	
	
	}
	printf("deletion\n");
	for(i=deleted;i<size;i++){
		arr[i]=arr[i+1];
	}
	size=size-1;
	for(i=0;i<size;i++){
		printf("[%d]=%d\n",i,arr[i]);
	}
}

