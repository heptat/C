
P=main
OBJECTS=pair connection
# CFLAGS= -g -Wall -O3
# CFLAGS= -I/home/vagrant/dev/C/connectivity/include -g -Wall -O3
# use this for debugging with gdb:
CFLAGS= -I/home/vagrant/dev/C/connectivity/include -ggdb -Wall
# this is for linking in shared object .so files which have the naming syntax
# eg.  "libmylib" and then linked with "-lmylib":
# LDLIBS= -L/home/vagrant/dev/C/connectivity/lib -lpair
LDLIBS=
LDFLAGS=
CC=c99

# $(P):
# 	$(CC) $(CFLAGS) src/*.c -o bin/$@
$(P): $(OBJECTS)
	$(CC) $(CFLAGS) src/$@.c lib/*.o -o bin/$@ $(LDLIBS)
# for linking in shared object libraries:
#	$(CC) $(CFLAGS) src/$@.c -o bin/$@ $(LDLIBS)

pair:
	$(CC) $(CFLAGS) -c src/$@.c -o lib/$@.o

connection:
	$(CC) $(CFLAGS) -c src/$@.c -o lib/$@.o

clean:
	rm -f lib/*.o
	rm -f bin/*
	rm -f test/bin/*

test: test_connectivity

test_connectivity: pair connection
	$(CC) $(CFLAGS) test/$@.c lib/*.o -o test/bin/$@ $(LDFLAGS)

