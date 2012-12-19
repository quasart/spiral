from math import sin, atan2, pi
t = 0.

def getPix(x,y) :
        return int( (2.-1.6*sin(t/100)) * (x*x+y*y)**0.25 + atan2(x,y)/pi ) % 2

def getChar(a,b,c,d) :
        return ' ,,y^[/d^\\]b"9F#'[8*a + 4*b + 2*c + d]

while 1:
        print('\x1b[H')
        for y in range( -20, 20, 2 ) :
                y2 = y+1
                line = ""
                for x in range( -30, 30 ) :
                        x2 = 0.5+x
                        line += getChar( getPix(x,y ), getPix(x2,y ),
                                         getPix(x,y2), getPix(x2,y2) )
                print(line)
        t+=1
