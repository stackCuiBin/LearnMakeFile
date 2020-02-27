
CC := gcc
TARGET := hello.out 

$(TARGET) : func.o main.o
	$(CC) -o $@ $^

func.o : func.c
	$(CC) -o $@ -c $^

main.o : main.c
	$(CC) -o $@ -c $^

.PHONY : clean rebuild all

rebuild : clean all

all : $(TARGET)

clean :
	rm *.o $(TARGET)

