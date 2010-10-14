/* gcc -O3 -Wl,"-static" 30q3.c -o 30q3 */
/* 
 * "THE POWER OF RANDOM" by Joel Martin
 *   The expanded and commented version
 */

 /* Don't bother computing b,x or y the first time since they're known */
int a,b=435,i,j,x=0,y=1,z;

/* output string */
char m[1985];

/* 
 * Fill our compute array with queens from upper left to lower right This
 * starting position has the property that queens do not share any rows or
 * columns with other queens. By swapping rows, this property is maintained.
 */
char l[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
    16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

/* Swap rows l[x] and l[y] */
#define Swap z=l[y],l[y]=l[x],l[x]=z

/* 
 * Do the queens in rows l[i] and l[j] attack each other?
 * The variable s is "+" or "-" depending on which diagonal we want to test.
 */
#define Test(s) (l[i]==(l[j]s(i-j)))

main () {
  /* Repeat until number of attacks (b) is 0 */
  for (;b;) {
    /* 
     * Swap two random rows, except the first time when we just swap the
     * pre-loaded x and y  (0 and 1) 
     */
    Swap;
    a=0;
    /* Calculate number of attacks (a) */
    for (i=0; i<29; i++) {
      for (j=i+1; j<30; j++) {
        if (Test(+)||Test(-)) {
          a++;
        }
      }
    }
    /* If worse layout, swap back, otherwise save count for next time */
    if (b<a) {
      Swap;
    } else {
      b=a;
    }
    /* 
     * Use (a) as a temporary and get two random rows using one rand() call.
     * I don't bother seeding the generator since it defaults to 0
     */
    a=rand();
    x=a%30;
    y=a%29;
  }
  /* Generate the output string */
  for (i=0; i<32; i++) {
    for (j=0; j<31; j++) {
      if (i%31) {
        m[i*62+j*2] = '|';
      } else {
        m[i*62+j*2] = '+';
      }
      m[i*62+j*2+1]= '-';
    }
    m[i*62+61]= '\n';
    if (i%31) {
      m[i*62+l[i-1]*2-1]='Q';
    }
  }
  /* Print the output string */
  puts(m);
}
