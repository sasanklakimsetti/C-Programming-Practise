void update()    
{
	Courier c1;
	FILE *fp,*fp1;
	char id[10];
	int found=0,up;
	fp = fopen("Courier Data.txt","r");
	if(fp==NULL)
	{
		printf("\nError in opening the file");
	}
	fp1 = fopen("Updated Data.txt","w");
	if(fp1==NULL)
	{
		printf("\nError in creating a new file");
	}
	printf("\nEnter the ID to update: ");
	scanf("%s",id);
	while(fread(&c,sizeof(Courier),1,fp))
	{
		if(strcmp(c.id,c1.id)==0)
		{
			found = 1;
			do
			{
				printf("\nTo Update\nSender Name-12\nSender Address-13\nReceiver Name-14\nReceiver Address\n15.Home");
				printf("\nEnter the update filter: ");
				scanf("%d",&up);
				switch(up)
				{
					case 12:
						printf("\nEnter the new Sender Address for the ID %s: ",c1.id);
						scanf("%s",c1.sname);
						fprintf(fp1,"%s %s %s %s %s",c.id,c1.sname,c.saddress,c.rname,c.raddress);
						break;
				}
			}while(!up>14);
		}
		fwrite(&c1,sizeof(Courier),1,fp1);
	}
	fclose(fp);
	fclose(fp1);
	if(found)
	{
		fp1 = fopen("Updated Data.txt","r");
		fp = fopen("Courier Data.txt","w");
		
		while(fread(&c1,sizeof(Courier),1,fp1))
		{
			fwrite(&c1,sizeof(Courier),1,fp);
		}
		fclose(fp);
		fclose(fp1);
	}
	printf("\nRecord not found");
}

