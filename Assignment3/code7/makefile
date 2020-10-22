
all: rm my client server

rm:
	rm -rf *.out *.o MYFIFO
my:
	mkfifo MYFIFO

client:
	gcc client.c -o client.out

server:
	gcc server.c -o server.out
