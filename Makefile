CC = g++

all:
	$(CC) -o su sudo.cxx
	strip su.exe
