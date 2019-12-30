def isBalanced(s):
    stack=[]
    for c in s:
        if c in ['(','{','['] :
            stack.append(c)
        else :
            if not stack==[]:
                top=stack.pop()
                if not ((c=='}' and top=='{') or (c==')' and top=='(') or (c==']' and top=='[')) :
                    return "NO"
            else :
                return "NO"

    if stack == []:
        return "YES"
    else :
        return "NO"
s="{{}("
print(isBalanced(s))