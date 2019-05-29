/* Menampilkan Fahrenheit-Celcius tabel
 * for f = 0, 20,..., 300 */

main()
{
    int lower, upper, step; /* variabel bertipe integer (bilangan bulat) */
    float fahr, celcius;    /* variabel bertipe float (bilangan desimal) */

    /* initialization / memberikan nilai pada variabel */
    lower = 0;    /* batas terendah tabel temperatur /*
    upper = 300;  /* batas tertinggi */
    step = 20;    /* jarak antara nilai temperatur */

    printf("Fahrenheit\tCelcius\n");   /* judul tabel temperatur */
    fahr = lower;
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f\t\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}
