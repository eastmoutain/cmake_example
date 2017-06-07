#include <iostream>
#include <cstdio>
#include <math.h>
#include <unistd.h>
using namespace std;

#define PI 3.1415926f

#define RAD_DEGREE  (180/PI)
#define DEGREE_RAD  (PI/180)

int main()
{
    double i = -100;
    while (i < 100.0) {
        i += 0.1;
        usleep(100000);
        printf("atanf(%f) is %f degree\r\n", i,  (float)(RAD_DEGREE * atanf(float(i))) );
    }

    return 0;

}
