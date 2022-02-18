union Item
{
    int x;float y;char z;
};

int main()
{
    union Item i1;
    i1.x=5;
    printf("\nThe value of X=%d",i1.x);
    i1.y=45.23;
    printf("\nThe value of Y=%.3f",i1.y);
    i1.z='A';
    printf("\nThe value of c=%c",i1.z);

    return 0;
}