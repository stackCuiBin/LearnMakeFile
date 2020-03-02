
.PHONY : all clean

MKDIR := mkdir
RM := rm -rf
CC := gcc

DIR_DEPS := deps

SRCS := $(wildcard *.c)
DEPS := $(SRCS:.c=.dep)
DEPS := $(addprefix $(DIR_DEPS)/, $(DEPS))

all :
	@echo "this is $@"

# add '-' to remove worning
ifeq ("$(MAKECMDGOALS)", "all")
-include $(DEPS)
endif

ifeq ("$(MAKECMDGOALS)", "")
-include $(DEPS)
endif
	
$(DIR_DEPS) :
	$(MKDIR) $@

$(DIR_DEPS)/%.dep : $(DIR_DEPS) %.c
	@echo "create $@ ..."
	@$(CC) -MM -E $(filter %.c, $^) | sed 's,\(.*\)\.o[ :]*,objs/\1.o : ,g' > $@

clean :
	$(RM) $(DIR_DEPS)

