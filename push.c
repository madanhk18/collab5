
int push()
{
    int ele;
    if(top==size-1)
    {
        printf("overflow");

    }
    else
    {
        printf("enter the element");
        scanf("%d",&ele);
        top++;
        stk[top]=ele;
    }
}