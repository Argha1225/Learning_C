// Chef has invented 11-minute Instant Noodles. As the name suggests, each packet takes exactly 11 minute to cook.

// Chef's restaurant has XX stoves and only 11 packet can be cooked in a single stove at any minute.

// How many customers can Chef serve in YY minutes if each customer orders exactly 11 packet of noodles?

#include <stdio.h>

int main(void) {
	// your code goes here
	int x, y;
	
	scanf("%d %d", &x, &y);
	printf("%d", x * y);

    return 0;
}