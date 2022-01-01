struct node *PbubbleSort(struct node *h)//bubble sort
{
	struct node *left_pinter; 
	struct node *right_pointer = NULL; 
	int swap;
	do
	{	
		swap = 0;
		left_pinter = h;
		while(left_pinter->next != right_pointer)
		{
			if (left_pinter->priority> left_pinter->next->priority) 
			{
				my_swapp(left_pinter, left_pinter->next); 
                swap = 1; 
			}
			left_pinter = left_pinter->next;
		}
		right_pointer = left_pinter;
	}while(swap);
}
