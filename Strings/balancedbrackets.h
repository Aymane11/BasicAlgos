#include <bits/stdc++.h>
using namespace std;
//this function recieves an string as input, checks if it's brackets are balanced or not
//return values : "YES" if balanced , "NO" otherwise
string isBalanced(string s) {
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