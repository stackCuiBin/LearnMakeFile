
CC := gcc

OBJS := func.o main.o

INC := inc
SRC := src
VPATH := $(SRC) $(INC)

CFLAGS := -I $(INC)

GPATH := src

app.out : $(OBJS)
	$(CC) -o $@ $^
	$(RM) $^
	@echo "Target => $@"
	
$(OBJS) : %.o : %.c func.h
	$(CC) $(CFLAGS) -o $@ -c $<


