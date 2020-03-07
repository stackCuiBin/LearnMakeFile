.PHONY : all compile link clean rebuild

MKDIR := mkdir
RM := rm -rf

CC := gcc
LFLAGS :=

MODULES := common \
		   module \
		   main

DIR_PROJECT := $(realpath .)
DIR_BUILD := build
DIR_BUILD_SUB := $(addprefix $(DIR_BUILD)/, $(MODULES))
DIR_COMMON_INC := common/inc
MODULE_LIB := $(addsuffix .a, $(MODULES))
MODULE_LIB := $(addprefix $(DIR_BUILD)/, $(MODULE_LIB))

APP := app.out
APP := $(addprefix $(DIR_BUILD)/, $(APP))

all : compile $(APP)
	@echo "Success! Target ==> $(APP)"

compile : $(DIR_BUILD) $(DIR_BUILD_SUB)
	@echo "Begin compile ..."
	@set -e; \
	for dir in $(MODULES); \
	do \
		cd $$dir && \
		$(MAKE) all \
			DEBUG:=true \
			DIR_BUILD:=$(addprefix $(DIR_PROJECT)/, $(DIR_BUILD)) \
			DIR_COMMON_INC:=$(addprefix $(DIR_PROJECT)/, $(DIR_COMMON_INC)) && \
		cd ..; \
	done
	@echo "Compile Success!"

link $(APP) : $(MODULE_LIB)
	@echo "Begin link ..."
	$(CC) -o $(APP) -Xlinker "-(" $^ -Xlinker "-)" $(LFLAGS)
	@echo "Link Success!"

$(DIR_BUILD) $(DIR_BUILD_SUB) :
	@$(MKDIR) $@

clean :
	@echo "Begin clean ..."
	$(RM) $(DIR_BUILD)
	@echo "Clean Success!"
	
rebuild : clean all


