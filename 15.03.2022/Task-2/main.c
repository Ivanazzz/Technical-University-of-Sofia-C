#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която чете час и минути от 24-часово денонощие, въведени от потребителя,
    и изчислява колко ще е часът след 15 минути. Резултатът да се отпечата във формат hh:mm. Часовете
    винаги са между 0 и 23, а минутите винаги са между 0 и 59. Часовете се изписват с една или две цифри.
    Минутите се изписват винаги с по две цифри, с водеща нула когато е необходимо.   */

    int hour, minutes;

    printf("Enter hour: ");
    scanf("%d", &hour);
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    int totalMinutes = (hour * 60) + minutes;
    totalMinutes += 15;

    hour = totalMinutes / 60;
    minutes = totalMinutes % 60;

    if (hour == 24) {
        hour = 0;
    }

    printf("%d:", hour);
    if (minutes < 10){
        printf("0%d", minutes);
    } else {
        printf("%d", minutes);
    }
    return 0;
}
