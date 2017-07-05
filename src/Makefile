OBJS=main.o readData.o
main: $(OBJS)
	g++ -o main $(OBJS)
main.o:main.cpp
	g++ -c main.cpp
readData.o:readData.cpp readData.h
	g++ -c readData.cpp

clean:
	-rm -f main $(OBJS)
