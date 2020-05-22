#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Checking if brackets in a string are balanced or not
    Arguments:
        [string] -- [initial string]
    Returns:
        [string] -- ["YES" or "NO"] //you can change it to booleans
*/
string isbalanced(string s) {
    //if string's length is odd then brackets arent balanced
    if(s.length()%2) return "NO";
    stack<char> op;
    char p;
    for(int i=0;i<s.length();i++){
        //pushing opening brackets ie: ( , [ and {
        if(s[i]=='('||s[i]=='{'||s[i]=='[') {op.push(s[i]);continue;}
        //if at the first time stack is empty
        //then s[0] isnt an opening bracket (either a closing one or another character)
        if(op.empty()) return "NO";
        //s[i] is a closing bracket ie: ) , ] or }
        switch (s[i]){
                case ')':
                    p=op.top();
                    op.pop();
                    //if top element in stack (last opening bracket) isn't a "(" then the brackets aren't balanced
                    if(p!='(') return "NO";
                    break;
                case '}':
                    p=op.top();
                    op.pop();
                    //if top element in stack (last opening bracket) isn't a "{" then the brackets aren't balanced
                    if(p!='{') return "NO";
                    break;
                case ']':
                    p=op.top();
                    op.pop();
                    //if top element in stack (last opening bracket) isn't a "[" then the brackets aren't balanced
                    if(p!='[') return "NO";
                    else break;
            }
    }
    //if the stack still contains opening brackets then they are not balanced otherwise they're balanced
    if(op.empty()) return "YES";
    else return "NO";
}