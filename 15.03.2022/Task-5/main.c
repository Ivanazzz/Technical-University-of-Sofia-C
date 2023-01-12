#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Трима спортни състезатели финишират за някакъв брой секунди (между 1 и 50). Да се напише програма,
     която чете времената на състезателите, въведени от потребителя, и пресмята сумарното им време във
     формат "минути:секунди". Секундите да се изведат с водеща нула (2 🡪 "02", 7 🡪 "07", 35 🡪 "35").   */

    int firstPlayerSeconds, secondPlayerSeconds, thirdPlayerSeconds;

    printf("Enter the first player seconds: ");
    scanf("%d", &firstPlayerSeconds);
    printf("Enter the second player seconds: ");
    scanf("%d", &secondPlayerSeconds);
    printf("Enter the third player seconds: ");
    scanf("%d", &thirdPlayerSeconds);

    int totalSeconds = firstPlayerSeconds + secondPlayerSeconds + thirdPlayerSeconds;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    printf("%d:", minutes);
    if (seconds < 10){
        printf("0%d", seconds);
    } else {
        printf("%d", seconds);
    }

    return 0;
}
