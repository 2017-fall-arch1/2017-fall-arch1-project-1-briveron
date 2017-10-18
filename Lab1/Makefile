all: ttDemo

CFLAGS=-g -O3

# Symbols helpful for understanding the productions
#   $@ is the production's target
#   $^ are the production's prerequisites

ttDemo: Tree.o ttDemo.o
	cc -o $@ $^

Tree.o: Tree.c Tree.h
	cc -c $(CFLAGS) Tree.c

ttDemo.o: ttDemo.c Tree.h
	cc -c $(CFLAGS) ttDemo.c

clean:
	rm -f *.o ttDemo

demo: ttDemo
	(echo first; echo "second line"; echo "third and last") | ./ttDemo

