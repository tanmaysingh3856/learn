//Write a program to demonstrate the use of stack (implemented using linear array) in converting arithmetic expression from infix notation to postfix notation

#include <iostream>
#include <stack>
#include <string>
using namespace std;
void infixToPostfix(string s)
{
    stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ns += s[i];
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            while (st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        else
        {
            while (st.top() != 'N' && st.top() != '(' && precedence(s[i]) <= precedence(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }
    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
    cout << ns << endl;
}
int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    string exp;
    cout << "Enter the infix expression: ";
    cin >> exp;
    infixToPostfix(exp);
    return 0;
}

