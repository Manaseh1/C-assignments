#include<stdio.h>
main(){
	int size,positiond;
	int arr[6]={1,2,39,4,5,7};
	int i;
	
	size=6;//number of items present
	positiond=3;//item position 3
	for(i=positiond-1;i<size-1;i++)//from 5_4_3then the loop stops
	{
		arr[i]=arr[i+1];//value of pos5 go's to 4 the value 4 to three and 3 to two
	}// hence 3 is now empty
	size=size-1;
	for(i=0;i<size;i++){
		printf("[%d]=%d\n",i,arr[i]);
		
	}
}

