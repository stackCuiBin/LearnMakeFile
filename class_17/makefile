
CC := gcc

OBJS := func.o main.o

INC := inc
SRC := src
VPATH := $(INC) $(SRC)

CFLAGS := -I $(INC)

app.out : $(OBJS)
	$(CC) -o $@ $^
	$(RM) $^
	@echo "Target => $@"
	
$(OBJS) : %.o : %.c func.h
	$(CC) $(CFLAGS) -o $@ -c $<


