
app.out : main func.o
	$(CC) -lstdc++ -o $@ $^
	
.c.o :
	$(CC) -o $@ -c $^
	
.c :
	@echo "suffix rule"
	$(CC) -o $@ -c $^

