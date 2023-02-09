#define PARK_SIZE 5

typedef struct
{
	Car space[PARK_SIZE];
	int top;
}parking;

void init(parking P)
{
	P->top = -1;
}

int pop(parking P,Car * temp)
{
	if(P->top == -1) return false;
	
	Car * temp = P.space[P.top--];
	return true;
}

int GetTop(parking P,Car * temp)
{
	if(P->top == -1) return false;
	
	Car * temp = P.space[P.top];
	return true;
}
