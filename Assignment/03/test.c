//Declaration

int a,b = 10;
auto const int a;
static char **c[10];

int *p;
int a[10];
float *f();
float (*fun)();

//enum
typedef enum {false, true} BOOLEAN;
enum color {white, red = 10, green = 10+1, blue, black}
enum color c1, c2;
enum color {white, red, black} c1 = white;

//struct
typedef struct node {
	char *name;
	int value, level;
	struct node *link;
} NODE;

struct s1 { int b[3]; float c; } kim = { {1,2,3}, 4.5};

int *a->b.c++;
int ++b = c++;


/* Function Declaration */
main()
{
	return 0;
}

int func(int c)
{
	int i;
	switch(i)
	{
		case 0:
			break;
		case 1:
			continue;
		default:
			break;
	}

	if(a > b)
	{
		int t;
	}
	else
	{
		max = b;
	}
	return 1;
}

int fun (int a, float b, char c)
{
	static int x = 0;
	auto struct {int a; float b;} s;
	x = a * a;
	result = result + x;

	while(a > b)
		max = a;

	for(i = 0; i < 100; i++)
	{
		max = b;
	}

	if(a << 1)
	{
		b >> 2;
	}
	else if (a && b || c)
	{
		sizeof(a);
	}
	else if (!b >= c)
	{
		printf("%d", ~c);
	}

	return x;
}
