int main()
{
    int b,a,c=0,d,max=0;
    for(a=1;a<=100;a++){
        scanf("%d",&b);
        c++;
        if ( b>max){
            max = b;
            d=c;
        }

    }
        printf ("%d\n%d\n",max,d);
    return 0;
}

