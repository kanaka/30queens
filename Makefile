CFLAGS = -O3 -static

full: full.c
	$(CC) $(CFLAGS) $^ -o $@

min: min.c
	$(CC) $(CFLAGS) $^ -o $@

min2: min2.c
	$(CC) $(CFLAGS) $^ -o $@

h: h.c
	a="g++ -include /usr/include/stdlib.h -include /usr/include/stdio.h -O3 -static -Wl,--omagic h.c -oh -DU=unsigned -DC=char -DO=const -DY=main -DZ=for -DD=0x0"; $$a; $$a`nm h|grep qm|sed 's/0 .*$$/1/'`

clean:
	rm full
