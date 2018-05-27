#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
void bubble(const int *const array)
{
	int arrayCopy[5];
	arrayCopy[0]=array[0];
	int integera,integerb,integerx,integeri,integert;
	for(integeri=0;integeri<5;integeri++)
	{
		integerx=rand()%40+10;
		arrayCopy[integeri]=integerx;
		
	}
      for(integera=0;integera<4;integera++)
      {  
    	for(integerb=integera+1;integerb<5;integerb++)
    	{
    		if(arrayCopy[integera]>arrayCopy[integerb])
    		{
    			integert=arrayCopy[integera];
    			arrayCopy[integera]=arrayCopy[integerb];
    			arrayCopy[integerb]=integert;
			}
		}
	  }
	  printf("\n");
      for(integeri=0;integeri<5;integeri++)
      {
 	    printf("%d\n",arrayCopy[integeri]);
      }
}
