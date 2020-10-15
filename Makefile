TARGET=all.out
S(TARGET):test.o myutil.o string2.o bit.o
        gcc test.o myutil.o string2.o  bit.o -o all.out
test.o: test.c  inc/myutil.h inc/bit.h inc/string2.h
        gcc test.c -c test.c
myutil.o:myutil.c inc/myutil.h
        gcc myutil.c -c myutil.c
bit.o:bit.c inc/bit.h
        gcc bit.c -c bit.c
string2.o:string2.c inc/string2.h
        gcc string2.c -c string2.c
clean:
        rm *.out *.o
