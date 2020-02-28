.PHONY : test

define func1
	@echo "My name is $(0)"
endef

define func2
	@echo "My name is $(0)"
	@echo "Param 1 => $(1)"
	@echo "Param 2 => $(2)"
endef

var1 := $(func1)
var2 := $(call func1)

test :
	@echo "var1 => $(var1)"	# @echo My name is
	@echo "var2 => $(var2)" # @echo My name is func1
	$(call func1)	# @echo My name is func1
	$(call func2,chichi)

