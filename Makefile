CFLAGS = -O3 -static

h: h.c
	@a="g++ -fpermissive -includestdlib.h -includestdio.h -O3 -static -Wl,--omagic h.c -oh -DS=M=*d,*d=*c,*c=M -DD=0x0";$$a 2>/dev/null;$$a`nm h|grep qm|sed 's/0 .*$$/1/'` 2>/dev/null; echo "Now run ./h"

clean:
	rm h
