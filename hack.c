/* gcc -O3 -static hack.c -o hack */
unsigned char a,b=-1,i,j,x,z,l[2015],*m=l+30;
int cnt;
main(y){
  int tries=0;
  //bcopy(0x80a7561,l,30);
  for (i=0; i<30; i++) {
  //    printf ("%d\n", l[i]);
    l[i]=i+1;
  }
  printf("%lx\n", &main);
  for(;b;b<a?z=l[y],l[y]=l[x],l[x]=z:(b=a),x=rand(),y=x%29,x%=30,tries++)
    for(a=i=0,j=1,z=l[y],l[y]=l[x],l[x]=z;j>29?j=++i+1:1,i<29;j++)
      (l[i]==(l[j]+i-j))||(l[i]==(l[j]-i+j))?a++:1,j%2&&a>100?a--:1;
  for(i=j=0;(j>30)?i++,j=0:1,i<32;j++,j==30&&i%31?m[i*62+l[i-1]*2-1]='Q':0)
    m[i*62+j*2]=i%31?'|':'+',m[i*62+j*2+1]=j==30?'\n':'-',i*j==930?puts(m):1;
  printf("tries: %d\n", tries);
}
