/*This code was made by Brian Riveron and built off of existing code given by the University of Texas at El Paso*/

#ifndef llist_included		/* prevent multiple inclusion */
#define llist_included


/* a linked-list item */
typedef struct LLItem_s {
  struct LLItem_s *next;
  struct LLItem_s *left;
  struct LLItem_s *right;
  int count;
  char *str;
} LLItem;

/* a list of LLItems */


typedef struct {
  LLItem *first, *last, *right, *left;
  int count;

} LList;


extern int llDoCheck;		/* set true for paranoid consistency checking */

/* create a new list */
LList *llAlloc();

/* free memory associated with a list, discarding all items it contains */
void llFree(LList *lp);

/* append a copy of str to end of list */
void llPut(LList *lp, char *s);

/* Delete all elements off of the list */
void llMakeEmpty(LList *lp);

/* print list membership.  Prints default mesage if message is NULL */
void llPrint(LList *lp, char *msg);

/* check llist consistency, always returns zero */
int llCheck(LList *lp);


/*---------------------------------------MY METHODS----------------------------------------*/

/* Make a new tree like we did for the list*/
LList *newTree();  //almost like llAllloc method

/* I wiil add stirngs into my tree with this method which is like adding a branch hahahahah im so funny*/
LList *addTree(LList *root, char *s);


#endif	/* included */