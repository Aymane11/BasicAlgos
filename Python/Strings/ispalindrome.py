'''
    Summary:
        Checking whether a string is a palindrome or not
    Arguments:
        [string] -- [initial string]
    Returns:
        [bool] -- [true if palindrome, false otherwise]
'''
def ispalindrome(string):
    return string == string[::-1]
