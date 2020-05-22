'''
    Summary:
        Checking if brackets in a string are balanced or not
    Arguments:
        [string] -- [initial string]
    Returns:
        [string] -- ["YES" or "NO"] #you can change it to booleans
'''
def isbalanced(string):
    string = list(string)
    if len(string) % 2:
        return "NO"
    stack = []
    for character in string:
        if character in ["(", "{", "["]:
            stack.append(character)
        else:
            if not stack:
                return "NO"
            current = stack.pop()
            if current == '(':
                if character != ')':
                    return "NO"
            if current == '[':
                if character != ']':
                    return "NO"
            if current == '{':
                if character != '}':
                    return "NO"
    if stack:
        return "NO"
    return "YES"
