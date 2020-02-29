
OBJS := func.o main.o
TARGET := hello-makefile.out

$(TARGET) : $(OBJS)
	gcc -o $@ $^
	
$(OBJS) : %.o : %.c func.h
	gcc -o $@ -c $<

.PHONY : clean

clean :
	rm $(OBJS) $(TARGET)

