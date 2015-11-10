# $< input 
# $@ output

INCPATH=./include

c : o
	cc -o $< -I$(INCPATH)

app : main.o foo.o goo.o
	cc -o app main.o foo.o goo.o
