'''
    Summary:
        Solving quadratic equations using discriminant
        ax^2+bx+c=0
        delta=b*b-4ac
        if delta=0: one real root : -b/2a
        if delta>0: two distinct real roots : (-b-sqrt(delta))/2a and (-b+sqrt(delta))/2a
        if delta<0: two distinct complex roots : (-b-i*sqrt(-delta))/2a and (-b+i*sqrt(-delta))/2a
    Arguments:
        [int,int,int] -- [a,b,c such as ax²+bx+c=0]
    Returns:
        [none]
'''
from math import sqrt
def rootsquadratic(a, b, c):
    if a == 0:
        print("Invalid Inputs, ensure that a != 0")
        return
    delta = b*b - 4*a*c
    print("delta= "+str(delta))
    if delta == 0:
        x = -b / (2*a)
        print("x= "+str(x))
        return
    sqdelta = sqrt(abs(delta))
    if delta > 0:
        x1 = (-b-sqdelta) / (2*a)
        x2 = (-b+sqdelta) / (2*a)
        print("x1= "+str(x1)+"\tx2= "+str(x2))
        return
    if delta < 0:
        xr = -b / (2*a)
        xim = sqdelta / (2*a)
        print("x1= "+str(complex(xr,xim))+"\tx2= "+str(complex(xr,-xim)))
        return
