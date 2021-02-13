int evaluatePostfix(string S)
{
    stack<int>s;
    for(int i=0;i<S.size();i++)
    {
        if(S[i]-'0'>=0&&S[i]-'0'<=9)
        {
            s.push(S[i]-'0');
        }
        else
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            switch (S[i]) 
            { 
            case '+': s.push(b + a); break; 
            case '-': s.push( b - a); break; 
            case '*': s.push( b * a); break; 
            case '/': s.push( b/a); break; 
            } 
            
        }
    }
    return s.top();
}
