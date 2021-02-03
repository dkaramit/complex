#set PATH variable to working directory


# LONG=  #leave empty to use doubles
LONG=long #set to long , in order to use long doubles

 Headers=$(wildcard ./*.hpp)


Path=$(PWD)
CC=g++
FLG=  -std=c++17  -I "$(Path)" -lm   -DLONG=$(LONG)  -O3


all: complex.run

complex.run: makefile $(Headers) complex.cpp
	$(CC) -o "$(Path)/complex.run" "$(Path)/complex.cpp" $(FLG) -Wall


clean:
	@[ -f "$(Path)/complex.run" ] && rm "$(Path)/complex.run" || true
	 