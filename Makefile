CFLAGS = -O3 -static

full: full.c
	$(CC) $(CFLAGS) $^ -o $@

min: min.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm full
