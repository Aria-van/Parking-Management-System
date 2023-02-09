typedef struct Node
{
	Car data;
	struct Node * next;
}sidewalkNode;

typedef struct
{
	sidewalkNode * front;
	sidewalkNode * end;
}sidewalk;

void init(sidewalk * W)
{
	W->front = (sidewalkNode *)malloc(sizeof(sidewalkNode));
	
}
