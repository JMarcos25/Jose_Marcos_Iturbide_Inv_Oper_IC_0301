all:
	gcc -g -c -Wall EcuacionLineal.c -o EcuacionLineal.o
	gcc -g -c -Wall gnuplot_i.c -o gnuplot_i.o
	gcc -g -Wall gnuplot_i.o EcuacionLineal.o -o Programa.exe
clean:
	del *.o
	
remove:
	del Programa.exe
