#include <stdio.h>

calc: configRead.c
	gcc -o configRead configRead.c

clean:
	rm -f configRead
