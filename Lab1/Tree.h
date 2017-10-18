#ifndef Tree_included		/* prevent multiple inclusion */
#define Tree_included
/*The following code was made using the structure of the given code from git and with the help of Migule<3, Julie<3, Robert<3 This code is for the submission of Brian Riveron*/

/* a linked-list item */
typedef struct Stem_ {
  struct Stem_ *left;
  struct Stem_ *right;
  char *str;
} Stem;

/* a list of LLItems */
typedef struct {
  Stem *root;
} TREE;



void Insert(TREE *root, char *name);

void printOne(TREE *t);

void printTwo(Stem *lp);

TREE *ttAlloc();

Stem* addBranch(Stem *r,Stem *n);


#endif 
