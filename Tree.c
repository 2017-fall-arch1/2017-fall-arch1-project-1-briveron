#include <stdio.h>		/* for puts,  */
#include <stdlib.h> 		/* for malloc */
#include <assert.h>/* for assert */
#include <string.h>
#include "Tree.h"		

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

void Insert(TREE *r,char *name){
    
    int length;
    char *hold;
    Stem *first;

    
    first = (Stem *)malloc(sizeof(Stem));

    for(length=0;name[length];length++);
    
        hold =(char *)malloc(length+1);
    for(length=0;name[length];length++);
        hold[length]=name[length];
        
    hold[length]=0;

    first->str=hold;
    first->left=NULL;
    first->right=NULL;

    r->root=addBranch(r->root, first);
}

Stem* addBranch(Stem *r,Stem *n){


  // printf("add a branch");

  if(r==NULL){
    return n;
  }
  int comp=strcmp(n->str,r->str);

  if(0>comp){
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

void printTwo(Stem *lp){
  if(lp!=NULL){
      printTwo(lp->left);
      printf("%s\n",lp->str);
      printTwo(lp->right);
  }
}

