//  WAP to add and substrct two number
#include <stdio.h>

struct time{
    int hour;
    int minute;
    int second;
}s1,s2,addtime,subttime;

void add(struct time t1,struct time t2,struct time result){
    result.second=t1.second+t2.second;
    result.minute=t1.minute+t2.minute;
    result.hour=t1.hour+t2.hour;
    if(result.second>=60){
        result.minute++;
        result.second-=60;
    }
    if(result.minute>=60){
        result.hour++;
        result.minute-=60;
    }
    printf("adding two time: %d hour %d minute & %d second",result.hour,result.minute,result.second);
}
void subtract(struct time t1,struct time t2,struct time result){
    if(t1.second<t2.second){
        t1.minute--;
        t1.second+=60;
    }
    if(t1.minute<t2.minute){
        t1.hour--;
        t1.minute+=60;
    }
    result.second=t1.second-t2.second;
    result.minute=t1.minute-t2.minute;
    result.hour=t1.hour-t2.hour;
    
    printf("\nsubtracting two times: %d hour %d minute & %d second",result.hour,result.minute,result.second);
}
int main(){
    printf("Enter time in hh:min:sec format\n\n\n");
    scanf("%d:%d:%d",&s1.hour,&s1.minute,&s1.second);
    scanf("%d:%d:%d",&s2.hour,&s2.minute,&s2.second);
    add(s1,s2,addtime);
    subtract(s1,s2,subttime);

    return 0;
}