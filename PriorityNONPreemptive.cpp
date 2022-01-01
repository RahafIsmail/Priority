void priorityNONPreemptive(struct node *h){
	struct node * temp=NULL;
	struct node * temp1=NULL;
		int s=size(h);
	temp=bubble_sortFirstComeFirstServed(h);
		
	int waiting=0;
	int keeptrack=0;
	double sum=0,avrage;
	std::string out=" \n Scheduling Method: Priority Scheduling (Non-Preemptive) \n Process Waiting Times: \n";
	while(h!=NULL)
	{
			out=out+"P" +toString(h->index) +":" + toString(keeptrack) + " ms \n";
			keeptrack+=h->burst-h->arrival;
			waiting+=h->burst-h->arrival;
			sum+=waiting;
			break;
	}
	h=h->next;
	temp1=bubble_sortp(h);
	while(h!=NULL)		
		{
		
			 if( h->next!=NULL  )
			{
				sum-=h->arrival;
				out=out+"P" +toString(h->index) +": " + toString(keeptrack-h->arrival) + " ms";
				keeptrack+=h->burst ;
				waiting+=h->burst;
				sum+=waiting;
						
			}
			else if(h->next==NULL)
			{
				sum-=h->arrival;
				out=out+"P" +toString(h->index)+": " + toString(keeptrack-h->arrival) + " ms";
				keeptrack+=h->burst;
				waiting+=h->burst-h->arrival;
						
			}
		h=h->next;
	}
	avrage=sum/s;
	out=out+ "Average Waiting Time:  "+ toString(avrage)+" ms \n";
	cout<<out;
	write(out);
}
