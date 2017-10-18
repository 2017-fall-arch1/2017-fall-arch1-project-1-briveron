#include <stdio.h>		/* for puts,  */
#include <stdlib.h> 		/* for malloc */
#include <assert.h>     /* for assert */
#include <string.h>
#include "Tree.h"

/*The following code was made using the structure of the given code from git and with the help of Migule<3, Julie<3, Robert<3 This code is for the submission of Brian Riveron*/

int ttDoCheck = 1;		/* set true for paranoid consistency checking */

#define doCheck(_lp) (ttDoCheck && ttCheck(_lp))

/* create a new list */
TREE *ttAlloc()
{
  TREE *lp = (TREE *)malloc(sizeof(TREE));
  lp->root = NULL;
  return lp;
}

/* print list membership.  Prints default mesage if message is NULL */

void Insert(TREE *r,char *n){
    
    int length;
    char *hold;
    Stem *first;

    
    first = (Stem *)malloc(sizeof(Stem));

    for(length=0;n[length];length++){
        
    }
    
    hold =(char *)malloc(length+1);
    for(length=0;n[length];length++){
        hold[length]=n[length];
    }
        
    hold[length]=0;

    first->str=hold;
    first->left=NULL;
    first->right=NULL;

    r->root=addBranch(r->root, first);
}

Stem* addBranch(Stem *r,Stem *n){


  if(r==NULL){
    return n;
  }
  int compare=strcmp(n->str,r->str);

  if(0 > compare){
    r->left=addBranch(r->left, n);
  }
  else{
    r->right=addBranch(r->right, n);
  }
  // printf("end of add branch");
  return r;
  

}


void printOne(TREE *t){
    printTwo(t->root);
}

void printTwo(Stem *p){
  if(p != NULL){
      printTwo(p->left);
      printf("%s\t ", p->str);
      //printf(" %4d %s \n ", p->str);
      printTwo(p->right);
  }
  
  //printf("End of print\n");
}
