all: clean pascal_triangle pascal_matrix

pascal_matrix: pascal_matrix.o
	gcc pascal_matrix.o -o ../bin/pascal_matrix

pascal_matrix.o:
	gcc -c pascal_matrix.c -o pascal_matrix.o

pascal_triangle: pascal_triangle.o
	gcc pascal_triangle.o -o ../bin/pascal_triangle

pascal_triangle.o:
	gcc -c pascal_triangle.c -o pascal_triangle.o

clean:
	rm -rf *.o