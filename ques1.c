#include<stdio.h>
#include<math.h>
int main(){
    int num, orignum, remainder, n;
    int result;

    printf("enter interger: ");
    scanf("%d",&num);
    orignum=num;

    for (orignum = num ; orignum != 0 ; ++n) {
        orignum/= 10;
    }

    orignum = num;

    while (orignum != 0) {
        remainder = orignum % 10;
        result += pow(remainder, n);
        orignum /= 10;
    }

    if ((int)result == num)
        printf("it is an Armstrong number", num);
    else
        printf("it is not an Armstrong number", num);

    return 0;
}
