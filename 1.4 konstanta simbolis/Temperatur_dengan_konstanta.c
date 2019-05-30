#define LOWER 0    /* batas terendah */
#define UPPER 300  /* batas maksimal */
#define STEP 20    /* jarak */

main()
{
    int fahr;

    for (fahr = Lower; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
