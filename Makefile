CC = gcc

all:
	$(CC) -o su sudo.c
	strip su.exe
