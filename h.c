/* a="g++ -include /usr/include/stdlib.h -include /usr/include/stdio.h -O3 -static -Wl,--omagic h.c -oh -DU=unsigned -DC=char -DO=const -DY=main -DZ=for -DD=0x0"; $a; $a`nm h|grep qm|sed 's/0 .*$/1/'` */
U C J,M,_,A,B=-1,F=30,G=31,H=62,m[2003],x,*l=(U C*)D,*c=(U C*)D,*d=(U C*)D+1;
Y(){
  Z(;B;B<A?M=*d,*d=*c,*c=M:(B=A),x=rand(),d=l+x%29,c=l+x%F)
    Z(A=_=0,J=1,M=*d,*d=*c,*c=M;J>29?J=++_+1:1,_<29;J++)
      (l[_]==(l[J]+_-J))||(l[_]==(l[J]-_+J))?A++:1,J%2&&A>100?A--:1;
  Z(_=J=0;(J>F)?_++,J=0:1,_<=G;J++,J==F&&_%G?m[_*H+l[_-1]*2-1]='Q':0)
    m[_*H+J*2]=_%G?'|':'+',m[_*H+J*2+1]=J==F?'\n':'-',_*J==F*G?puts((O C*)m):1;
}
