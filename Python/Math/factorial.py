'''
    Summary:
          Evaluating n! (n! = n*(n-1)*(n-2)...*2*1)
    Arguments:
        [int] -- [n]
    Returns:
        [double] -- [n!]
'''
def Factorial(n):
    if n < 0:
        print("Invalid Input, ensure that n >= 0")
        return
    return 1 if n <= 1 else n*Factorial(n-1)
