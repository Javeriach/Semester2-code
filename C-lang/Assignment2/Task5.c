                //Javeria Kanwal
                //  bitf21m519
                //bsit
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

    //s1-----> side1
    //sde2------>side2
         //using 3 for loop all Pythagorean triples for side1, 
    //side2 and hypotenuse all no larger than 200. 
    for (int s1 = 1; s1 < 200; s1++)
    {
        for (int sde2 = s1 + 1; sde2 < 200; sde2++)
        {
            for (int hypotan = sde2 + 1; hypotan< 200; hypotan++)
            {
                if (((s1 * s1) + (sde2 * sde2)) == (hypotan * hypotan))
                {
                    printf("(%d %d %d)\n", s1, sde2, hypotan);
                }
            }
        }
    }

    return 0;
}