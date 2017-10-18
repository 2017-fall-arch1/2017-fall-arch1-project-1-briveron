This directory contains:
* code that implements a Binar Search Tree of strings 
* a demo program that uses it



This Lab contains the following files:
 Tree.h: header file of llist structure & "public" interface functions this holds the structure for the binary tree and the methods associated with this data type
 Tree.c: implementation of linked list which are the actual method logic and the process they will exicute.
 ttDemo.c: a demonstration program that uses the linked list 
 

To compile:
~~~
$ make
~~~

To test it, try:
~~~
$ make demo
will print the contents of the demo in the main
~~~
To run the code with your input you will need to enter 
./ttDemo 
which will let you tyoe and make your own tree.

~~~

To delete binaries:
~~~
$ make clean
This method will also delete the text file that is made from the method that writes to a file.
~~~
