# include <stdio.h>
int main(void) {
    while(1) {
        int grade;
        
        printf("Thanks for using my grade evaluator\n");
        printf("Rules of Operation: Enter (-1) to exit or your grade to continue\n");
        scanf("%d",&grade);
        
    if (grade == -1) {
        printf("Thanks for using my evaluator,Hope you have a good day, see you next time bye!!\n");
        printf("Grade Evaluator: Mohammad Imaad" );
        break;
    }
    if (grade <= 70) {
        printf("Good, Try better next time %d\n",grade);
        
    }
    else if (grade <= 80) {
        printf("Great try, you can do better\n");
    }
    
    else if (grade <= 90) {
        printf("Wonderful,can you do any better?\n");
    }
    
    else if (grade <= 100) {
        printf("Congrats on the perfect, ever thought about AP?\n");
    }
    }

}