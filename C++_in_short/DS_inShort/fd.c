#include<stdio.h>
main()
{
	int i,n,num,end,beg,mid,arr[10];
	printf("ENTER 10 ELEMENTS: ");
	for(i=1;i<=10;i++)
	{
		printf("ENTER %d ELEMENT:",i);
		scanf("%d",&arr[i]);
	}
    printf("\nPrinting elements\n");
    for(i=1;i<=10;i++)
    printf("%d\t",arr[i]);




	printf("ENTER NUMBER WHICH YOU WANT TO SEARCH: ");
	scanf("%d",&num);
	end=10;
	beg=0;
		mid=end+beg/2;

        printf("%d",mid);

        
		while(beg<=end){
			if(arr[mid]<num)
			{
				beg=mid+1;
			}
			else if(arr[mid]>num)
			{
				end=mid-1;
			}
			else if(arr[mid]==num)
			{
				printf("element is present");
				break;
		}
		mid=end+beg/2;
	}
	if(beg>end)
	printf("element is not present");
}