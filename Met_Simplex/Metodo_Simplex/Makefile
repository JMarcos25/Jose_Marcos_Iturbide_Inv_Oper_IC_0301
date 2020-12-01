programa: main.o MetodoSimplex.o gnuplot_i.o
	gcc -o programa main.o MetodoSimplex.o gnuplot_i.o

main.o: main.c metodosimplex.h gnuplot_i.h
	gcc -c main.c

MetodoSimplex.o: MetodoSimplex.c metodosimplex.h gnuplot_i.h
	gcc -c MetodoSimplex.c

gnuplot_i.o: gnuplot_i.c metodosimplex.h gnuplot_i.h
	gcc -c gnuplot_i.c

clean:
	del *.o
