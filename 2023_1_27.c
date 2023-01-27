#include <stdio.h>
#include <string.h>
int main()
{
	
	int i,j,x;
 	char c1[10],c2[10];
 	while(1)
 	{
 		printf("1?2?0?\n");
		scanf("%d",&j);
 	 	if(j==1)
 		{
 			printf("putin:");
 			scanf("%s",&c1);
 			x = strlen(c1); 
 			for(i=0;i<x;i++)
 				c2[i] = c1[i] + i + 5;
			c2[x] = '\0';
 	 		printf("then:%s\n",c2);
 		}
 		else if(j==2)
		{
	 		printf("putin:");
 			scanf("%s",&c1);
 			x = strlen(c1); 
 			for(i=0;i<x;i++)
 			{
 				c2[i] = c1[i] - i - 5;
			}	
			c2[x] = '\0';
 	 		printf("then:%s\n",c2);	 
		}
		else if(j==0)
		{
			printf("Exit");
			break;
		}
		else
		{
			printf("fault\n");
		}
	}
	return 0;	
} 
