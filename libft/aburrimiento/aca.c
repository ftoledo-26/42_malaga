int sum(int a, int b)
{
    int c;

    c = a + b;
}

void inicio()
{
  
}
int main()
{
    int a;
    int b;

    a = 0;
    b = 0;
    printf("dime dos numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", sum(a, b));
}