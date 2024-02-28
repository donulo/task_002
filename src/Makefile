CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: clean pascal_triangle pascal_matrix

pascal_matrix: pascal_matrix.o
	$(CC) $(CFLAGS) pascal_matrix.o -o ../bin/pascal_matrix

pascal_matrix.o:
	$(CC) $(CFLAGS) -c pascal_matrix.c -o pascal_matrix.o

pascal_triangle: pascal_triangle.o
	$(CC) $(CFLAGS) pascal_triangle.o -o ../bin/pascal_triangle

pascal_triangle.o:
	$(CC) $(CFLAGS) -c pascal_triangle.c -o pascal_triangle.o

clean:
	rm -rf *.o