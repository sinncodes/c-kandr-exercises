#include <stdio.h>

//exercise 1.1
exercise1_1()
{
	printf("hello, world!\n");
}


//exercise 1.3
exercise1_3()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahr Cels\n");

	fahr = lower;
	while (fahr <= upper)
   	{
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

exercise1_4()
{	
	float fahr, celsius, lower, upper, step;
	lower = -17.8;
	upper = 149.0;
	step = 11;

	celsius = lower;
	
	while (celsius <= upper)
		{
			fahr = 9.0/5.0*(celsius)+32.0;
			printf("%6.1f %3.0f\n", celsius, fahr);
			celsius = celsius + step;
		}

}

/*exercise 1.5*/
exercise1_5()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
}

//exercise1_6 any boolean expression can be either 0 (False) or 1 (True)

exercise1_7()
{
	int c;
	//int d;
	while((c = getchar()) != EOF)
	{
		//d = ((c = getchar()) != EOF);
		//printf("%d\n",d);
		putchar(c);
	}
	
	printf("%d", c);
}

exercise1_8()
{
	double nc;

	for(nc=0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);
}


main()
{
	//exercise1_1();
	//exercise1_3();
	//exercise1_4();
	//exercise1_5();
	//exercise1_7();
	exercise1_8();
}


