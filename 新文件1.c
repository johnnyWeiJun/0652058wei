#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
void bubble(int *num)
{
	
	int integera,integerb,integerx,integeri,integert;
	for(integeri=0;integeri<5;integeri++)
	{
		integerx=rand()%40+10;
		num[integeri]=integerx;
		
	}
      for(integera=0;integera<4;integera++)
      {  
    	for(integerb=integera+1;integerb<5;integerb++)
    	{
    		if(num[integera]>num[integerb])
    		{
    			integert=num[integera];
    			num[integera]=num[integerb];
    			num[integerb]=integert;
			}
		}
	  }
	  printf("\n");
      for(integeri=0;integeri<5;integeri++)
      {
 	    printf("%d\n",num[integeri]);
      }
}
