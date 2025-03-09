/*    
1.R:a)
2. R:b)
void f(int x)
{ if(x%5!=0)
 { x=x*5/2; 
  f(x);
  }
 else x=x-1;
 cout<<x;
}
f(9)->x=22,


54 55 22


*/
void f(int x)
{ 
  if(x%5!=0)
  { 
    x=x*5/2;
    f(x);
  }
  else 
  {
    x=x-1;
  } 
  cout<<x; 
}

void ex_3()
{
    int c=0;
    for(int i=1; i<=10; i++)
    {
        cin>>s;
        if(strlen(s)==2)
            {
                if((strchr("aeiou", s[0])!=NULL && strchr("aeiou", s[1])==NULL) || (strchr( "aeiou", s[0])==NULL && strchr("aeiou", s[1])!=NULL))
                    c=1;
            }
    }
}