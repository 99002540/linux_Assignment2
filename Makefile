TARGET=all.out
BUILD = build
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
all: test.c src/myutil.c src/string2.c src/bit.c  $(BUILD)
	gcc test.c src/myutil.c src/string2.c src/bit.c -Iinc -o all.out
run: all.out
	./all.out	
clean:
	rm *.out *.o
$(BUILD):
	mkdir build
