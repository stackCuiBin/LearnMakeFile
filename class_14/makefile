
.PHONY : all clean rebuild

MKDIR := mkdir
RM := rm -rf
CC := gcc

DIR_DEPS := deps
DIR_EXE := output
DIR_OBJS := objs

DIRS := $(DIR_DEPS) $(DIR_EXE) $(DIR_OBJS)

EXE := app.out
EXE := $(addprefix $(DIR_EXE)/, $(EXE))

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
OBJS := $(addprefix $(DIR_OBJS)/, $(OBJS))
DEPS := $(SRCS:.c=.dep)
DEPS := $(addprefix $(DIR_DEPS)/, $(DEPS))

all : $(DIR_OBJS) $(DIR_EXE) $(EXE) 

# add '-' to remove worning
ifeq ("$(MAKECMDGOALS)", "all")
-include $(DEPS)
endif

ifeq ("$(MAKECMDGOALS)", "")
-include $(DEPS)
endif
	
$(EXE) : $(OBJS)
	$(CC) -o $@ $^
	@echo "Success! Target => $@"

$(DIR_OBJS)/%.o : %.c
	$(CC) -o $@ -c $(filter %.c, $^)

$(DIRS) :
	$(MKDIR) $@

$(DIR_DEPS)/%.dep : $(DIR_DEPS) %.c
	@echo "create $@ ..."
	@$(CC) -MM -E $(filter %.c, $^) | sed 's,\(.*\)\.o[ :]*,objs/\1.o $@ : ,g' > $@

clean :
	$(RM) $(DIRS)

rebuild :
	@$(MAKE) clean
	@$(MAKE) all
