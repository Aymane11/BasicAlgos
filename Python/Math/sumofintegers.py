'''
    Summary:
        Calculating the sum of integers in [m,n]
        sum from 1 to n =n*(n+1)/2
    Arguments:
        [int,int] -- [m,n such as m<=n]
    Returns:
        [sum of integers between m and n (both inclusive)]
'''
def sumofintegers(m,n):
    if m > n :
        print("Invalid Inputs, ensure that m <= n")
        return
    return sum(range(n+1))-sum(range(m))