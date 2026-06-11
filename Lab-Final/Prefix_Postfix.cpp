#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int priority(char op)
{
    if (op == '+' || op == '-')
        return 1;

    if (op == '*' || op == '/')
        return 2;

    if (op == '^')
        return 3;

    return 0;
}

string infixToPostfix(string infix)
{
    stack<char> st;
    string postfix = "";

    for (char ch : infix)
    {
        if (isdigit(ch))
        {
            postfix += ch;
        }

        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }

            st.pop();
        }
        else
        {
            while (!st.empty() &&
                   priority(st.top()) >= priority(ch))
            {
                postfix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

string infixToPrefix(string infix)
{
    reverse(infix.begin(), infix.end());

    for (char &ch : infix)
    {
        if (ch == '(')
            ch = ')';

        else if (ch == ')')
            ch = '(';
    }

    string postfix = infixToPostfix(infix);

    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int evaluatePostfix(string postfix)
{
    stack<int> st;

    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            int result;

            if (ch == '+')
                result = a + b;

            else if (ch == '-')
                result = a - b;

            else if (ch == '*')
                result = a * b;

            else
                result = a / b;

            st.push(result);
        }
    }

    return st.top();
}

int main()
{
    string infix;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    string prefix = infixToPrefix(infix);

    cout << "\nPostfix : " << postfix;
    cout << "\nPrefix  : " << prefix;

    cout << "\nResult  : " << evaluatePostfix(postfix);

    return 0;
}