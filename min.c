/* gcc -O3 -Wl,"-static" 30q2.c -o 30q2 */
int a,b=435,i,j,x=0,y=1,z;
char m[1985],l[30]="...";
#define S z=l[y],l[y]=l[x],l[x]=z
#define T(s) (l[i]==(l[j]s(i-j)))
main () {
  for (l[8]=9,l[9]=10,l[12]=13;b;b<a?S:(b=a),a=rand(),x=a%30,y=a%29)
    for (a=i=0,j=1,S;j>29?j=++i+1:1,i<29;T(+)||T(-)?a++:1,j++);
  for (i=j=0;(j>30)?i++,j=0:1,i<32;j++,j==30&&i%31?m[i*62+l[i-1]*2-1]='Q':0)
    m[i*62+j*2]=i%31?'|':'+',m[i*62+j*2+1]=j==30?'\n':'-',i*j==930?puts(m):1;
}
