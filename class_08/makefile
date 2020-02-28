
.PHONY : test

var1 := chichi
var2 := $(var1)
var3 :=

test :
#notice : no tab before ifeq
    ifeq ($(var1),$(var2))
		@echo "var1 == var2"
    else
		@echo "var1 != var2"
    endif
    
    ifneq ($(var1),)
		@echo "var1 is NOT empty"
    else
		@echo "var1 is empty"
    endif
    
    ifdef var1
		@echo "var1 is NOT empty"
    else
		@echo "var1 is empty"
    endif
    
    ifndef var3
		@echo "var3 is empty"
    else
		@echo "var3 is NOT empty"
    endif

