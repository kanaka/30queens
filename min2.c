/* gcc -O3 -static min2.c -o min2 */
#define Q "\11\12\15"
unsigned char a,b=-1,i,j,x=0,y=1,z,l[2015]=Q,*m=l+30;
main(){
  for(;b;b<a?z=l[y],l[y]=l[x],l[x]=z:(b=a),x=rand(),y=x%29,x%=30)
    for(a=i=0,j=1,z=l[y],l[y]=l[x],l[x]=z;j>29?j=++i+1:1,i<29;j++)
      (l[i]==(l[j]+i-j))||(l[i]==(l[j]-i+j))?a++:1,j%2&&a>100?a--:1;
  for(i=j=0;(j>30)?i++,j=0:1,i<32;j++,j==30&&i%31?m[i*62+l[i-1]*2-1]='Q':0)
    m[i*62+j*2]=i%31?'|':'+',m[i*62+j*2+1]=j==30?'\n':'-',i*j==930?puts(m):1;
}
