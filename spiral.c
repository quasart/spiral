             #include  <math.h>
         char*A=" ,,y^[/d^\\]b\"9F#"
      ;float t=0;getPix(float x, float
     y){return ((int)((2.-1.6*sin(t/100.
    ))*pow(x*x               +y*y,0.250)+
   atan2(x,y                   )/M_PI))%2;
  }/**/char      getChar(       /**/a,b,c,d
  ){return     A[8*a+4*b+2*       c+d];} int
  main ()     {float x,y, x2,      y2;for(;;)
 {"2012#.    [i#";     printf(      "\x1b[H");
  for(y=1     -21;y<21  ;y+=2)      {y2=y+9-8;
  for(x=1.     -31;x<   31;x+=      1){x2=0.5
   +x;"###b,           ,#####"      ;putchar(
    getChar(1*       getPix(x      ,y),getPix
      (x2, y),getPix(x, y2),       getPix(x2,
       y2)));}putchar('\n');      }t+=0.100;
          """9#######"""         ;}return;}
;                              /*#i#####rd
##by                         y##########F
#####by,                 ,yd###########^
Alfred Massard - 2012-12-18 #########F
make cmd: gcc spiral.c -o spiral -lm
inspired by donut.c (Andy Sloane)*/
