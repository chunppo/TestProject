# 다중 파일을 위한 makefile3
# obj를 다른 폴더에 복사하기

INCPATH=./include
CC=cc
CFLAGS=-I$(INCPATH)
OBJPATH=./obj
INSPATH=./bin

all : getobj app putobj

app : main.o foo.o  goo.o
	$(CC) -o app main.o foo.o goo.o

foo.o  :  foo.c  $(INCPATH)/foo.h
	$(CC) -c -o foo.o foo.c $(CFLAGS)

goo.o  : goo.c   $(INCPATH)/goo.h
	$(CC) -c -o goo.o goo.c  $(CFLAGS)

main.o : main.c  $(INCPATH)/foo.h  $(INCPATH)/goo.h
	$(CC) -c -o main.o main.c $(CFLAGS)

putobj:
	@if [ ! -d $(OBJPATH) ]; then	\
		mkdir $(OBJPATH);			\
	fi
	-mv	*.o  $(OBJPATH)

getobj:
	@if [ ! -d $(OBJPATH) ]; then	\
		mkdir $(OBJPATH);			\
	fi
	-mv	$(OBJPATH)/*.o  .

install:
	@if [ ! -d $(INSPATH) ]; then	\
		mkdir $(INSPATH);			\
	fi
	cp app $(INSPATH)/app

cleanall:
	@rm app
	@rm -rf $(OBJPATH)
	@rm -rf $(INSPATH)
	@echo cleanall




















