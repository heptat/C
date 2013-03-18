
P=main
OBJECTS=stack
# CFLAGS= -g -Wall -O3
# CFLAGS= -I/home/vagrant/dev/C/stack/include -g -Wall -O3
# use this for debugging with gdb:
CFLAGS= -I/home/vagrant/dev/C/stack/include -ggdb -Wall
# this is for linking in shared object .so files which have the naming syntax
# eg.  "libmylib" and then linked with "-lmylib":
# LDLIBS= -L/home/vagrant/dev/C/stack/lib -lstack
LDLIBS=
LDFLAGS=
CC=c99

# $(P):
# 	$(CC) $(CFLAGS) src/*.c -o bin/$@
$(P): $(OBJECTS)
	$(CC) $(CFLAGS) src/$@.c lib/*.o -o bin/$@ $(LDLIBS)
# for linking in shared object libraries:
#	$(CC) $(CFLAGS) src/$@.c -o bin/$@ $(LDLIBS)

stack:
	$(CC) $(CFLAGS) -c src/$@.c -o lib/stack.o

clean:
	rm -f lib/*.o
	rm -f bin/*
	rm -f test/bin/*

test: test_stack

test_stack: stack
	$(CC) $(CFLAGS) test/$@.c lib/*.o -o test/bin/$@ $(LDFLAGS)

