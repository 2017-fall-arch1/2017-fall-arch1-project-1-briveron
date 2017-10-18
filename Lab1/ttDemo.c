#include <stdio.h>		/* for printf */
#include <stdlib.h>		/* for free() */
#include <string.h> 		/* for strlen */
#include "Tree.h"		/* for list operations */

/*The following code was made using the structure of the given code from git and with the help of Migule<3, Julie<3, Robert<3 This code is for the submission of Brian Riveron*/


/* read no more than limit chars into s, return #chars read.  Doesn't include trailing \n */
int gets_n(char *s, int limit){
  char *p = s;			/* for indexing into s */
  char c;
  if (fgets(s, limit, stdin)) {
    while ((c = *p) && c != '\n') /* scan p through s until 0 or \n */
      p++;
    if (c == '\n')		/* erase \n */
      *p = 0;
  }
  return (p - s);		/* #chars read (not including terminator or \n*/
}

int main(){
  char buf[100];
  TREE *lp = ttAlloc();
  


  printf("This program will place your names in a Tree Structure \n");
  
 

  while (gets_n(buf, 100)){	
    printf("Place your names now or enter Exit \n");
    if(strcmp(buf,"Exit")==0){
      break;
    }
    Insert(lp,buf);
  }
 
  printOne(lp);

  printf("\n");
  printf("This is the end of the program   \n");
  
  return 0;
}
