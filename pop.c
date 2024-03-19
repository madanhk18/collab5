int pop()
{
    if(top==-1)
    {
    printf("underflow");
    }
    else
    {
        printf("deleted element is %d\n", stk[top]);
        top--;
    }
}
