#include <stdio.h>
#include <math.h>

typedef struct{
    int real; 
    char img; 
}NComplexo;

 NComplexo somaimag (NComplexo a, NComplexo b)
 {
     NComplexo c;

     c.real = a.real+b.real;

     c.img = i;

     return c;
}
NComplexo subimag (NComplexo a, NComplexo b)
 {
     NComplexo c;

     c.real = a.real-b.real;

     c.img = i;

     return c;
}
NComplexo multimag (NComplexo a, NComplexo b)
 {
     NComplexo c;

     c.real = a.real*b.real;

     c.img = i;

     return c;
}
NComplexo conjimag (NComplexo a)
 {
     a.img = a.img*-1;

     return a;
}
NComplexo somaimag (NComplexo a, NComplexo b)
 {
     NComplexo c;

     c.real = a.real/b.real;

     c.img = i;

     return c;
}
