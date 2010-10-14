CFLAGS = -O3 -static

h: h.c
	a="g++ -fpermissive -includestdlib.h -includestdio.h -O3 -static -Wl,--omagic h.c -oh -DS=M=*d,*d=*c,*c=M -DD=0x0";$$a;$$a`nm h|grep qm|sed 's/0 .*$$/1/'`; echo "Now run ./h"

full: full.c
	$(CC) $(CFLAGS) $^ -o $@

min: min.c
	$(CC) $(CFLAGS) $^ -o $@

min2: min2.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm h full min min2
