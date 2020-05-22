'''
    Summary:
        Evaluating fibonnaci's sequence in n
        F(0)=0 , F(1)=1 , F(n)=F(n-1)+F(n-2)
    Arguments:
        [int] -- [n]
    Returns:
        [double] -- [F(n)]
'''
def fibonacci(n):
    if n<0:
        print("Invalid Input, ensure that n >= 0")
        return
    return n if n==0 or n==1 else fibonacci(n-1)+fibonacci(n-2)