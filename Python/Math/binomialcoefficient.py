'''
    Summary:
          Evaluating the binomial coefficient, C(n,k), with n>=k using recursion C(n,k)=n!/(k!*(n-k)!)
    Arguments:
        [int] -- [n]
    Returns:
        [double] -- [n!]
'''
def binomialcoefficient(n, k):
    if k > n:
        print("Invalid Inputs, ensure that n >= k")
        return -1
    if k == 0 or n == k:
        return 1
    if (k > n / 2):
        # reducing problem size since C(n,k) = C(n,n-k) and n/2 is small.
        return binomialcoefficient(n, n - k)
    else:
        # C(n,k) = (n/k)C(n-1,k-1)
        return (n / k) * binomialcoefficient(n - 1, k - 1)
