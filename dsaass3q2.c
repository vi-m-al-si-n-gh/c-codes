#include <stdio.h>
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

void addissionBetweenTimePeriod(struct TIME t3,
                                 struct TIME t4,
                                 struct TIME *add);

int main() {
   struct TIME startTime, stopTime, diff, add;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,
         &startTime.minutes,
         &startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minutes,
         &stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   addissionBetweenTimePeriod(startTime, stopTime, &add);
   printf("\nTime Add: %d:%d:%d + ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", add.hours,
          add.minutes,
          add.seconds);
   return 0;
}

void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) {
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   diff->seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
   diff->minutes = start.minutes - stop.minutes;
   diff->hours = start.hours - stop.hours;
}
void addissionBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *add) {
       add->hours=start.hours+stop.hours;
       add->minutes=start.minutes+stop.minutes;
       add->seconds=start.seconds+stop.seconds;
       if(add->minutes>59)
       {
              add->hours++;
		add->minutes=add->minutes-60;
       }
       if(add->seconds>59)
       {
              add->minutes++;
		add->seconds=add->seconds-60;
       }
}