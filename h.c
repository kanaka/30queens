/*a="g++ -fpermissive -includestdlib.h -includestdio.h -O3 -static -Wl,--omagic
h.c -oh -DS=M=*d,*d=*c,*c=M -DD=0x0";$a;$a`nm h|grep qm|sed 's/0 .*$/1/'`*/
unsigned char J,M,_,A,B=255,E=29,F=30,G=31,m[2003],*n=m,*l=D,*c=D,*d=D+1;
main(){
 for(;A=_=J=0,B;B<A?S:B=A,d=l+(M=rand())%E,c=l+M%F)
  for(S;++J<F?:J=++_+1,_<E;(l[_]-l[J]-_+J)&&(l[_]-l[J]+_-J)?:A++)J%2||A<99?:A--;
 for(;n-m>1983?puts(m),0:1;_=(n-m)/62,J=(n-m)/2%31)
  *n=_%G?'|':'+',n[1]=J!=F?'-':0xa,l[_-1]!=J?:*(n-1)='Q',n+=2;
}
