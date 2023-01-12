#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която изкарва колко пъти се среща всяка буква в низ */

    char s[1000];
    int  i, k, count = 0, n, length;

    printf("Enter the string: ");
    gets(s);

    for(length = 0; s[length]; length++){
        n = length;
    }

    for(i = 0; i < n; i++)
    {
     	count = 1;
    	if(s[i])
    	{

 		  for(length = i + 1; length < n; length++)
	      {

	        if(s[i] == s[length])
    	    {
                 count++;
                 s[length] = '\0';
	     	}
	      }
	      printf("%c = %d \n",s[i],count);
       }
 	}

    return 0;
}
