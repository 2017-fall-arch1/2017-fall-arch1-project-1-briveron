#ifndef Tree_included		/* prevent multiple inclusion */
#define Tree_included


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

void printOne(TREE *r);

void printTwo(Stem *lp);

TREE *ttAlloc();

Stem* addBranch(Stem *r,Stem *n);


#endif 
