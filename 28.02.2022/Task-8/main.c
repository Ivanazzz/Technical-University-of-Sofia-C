#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете конвертор от левове в долари, евро и паундове */

    float bgn, usd, eur, gbp;

    printf("Enter amount in BGN: ");
    scanf("%f", &bgn);

    usd = bgn / 1.74;
    eur = bgn / 1.96;
    gbp = bgn / 2.34;

    printf("Amount in dollars: %g\n", usd);
    printf("Amount in euros: %g\n", eur);
    printf("Amount in pounds: %g\n", gbp);
    return 0;
}
