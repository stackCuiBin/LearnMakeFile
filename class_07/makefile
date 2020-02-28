
HOME := my home
export var := hello boy
#notice: no space
new := hello_girl

test :
	@echo "HOME => $(HOME)"
	@echo "var => $(var)"
	@echo "new => $(new)"
	@$(MAKE) -f makefile.1
	@$(MAKE) -f makefile.1 new:=$(new)

