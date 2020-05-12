#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Solving quadratic equations using discriminant
        ax²+bx+c=0
        delta=b²-4ac
        if delta=0: one real root : -b/2a
        if delta>0: two distinct real roots : (-b-sqrt(delta))/2a and (-b+sqrt(delta))/2a
        if delta<0: two distinct complex roots : (-b-i*sqrt(-delta))/2a and (-b+i*sqrt(-delta))/2a
    Arguments:
        [int,int,int] -- [a,b,c such as ax²+bx+c=0]
    Returns:
        [none]
*/
void rootsquadratic(double a,double b,double c){
    if(!a) {
        cout << "Invalid Inputs, ensure that a != 0";
        return;
    }
    double delta=b*b-4*a*c;
    cout << "delta= " <<delta<<endl;
    if(!delta){
        double x=-b/(2*a);
        cout << "x=" <<x;
        return;
    }
    double sqdelta=sqrt(abs(delta));
    if(delta>0){
        double x1=(-b-sqdelta)/(2*a),x2=(-b+sqdelta)/(2*a);
        cout << "x1= "<<x1<<"\tx2= "<<x2;
        return; 
    }
    if(delta<0){
        double xr=-b/(2*a),xim=sqdelta/(2*a);
        cout << "x1= "<<xr <<"-i*"<<xim<<"\tx2= "<<xr<<"+i*"<<xim;
        return; 
    }
}