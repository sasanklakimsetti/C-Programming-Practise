void update()
{
	FILE *fp,*fp1;
	int found=0;
	char n[10];
	printf("enter the id you want to update:");
	scanf("%s", n);
    fp = fopen("Courier Data.txt", "r");
    if (fp == NULL)
	{
        printf("Error opening file.\n");
        return;
    }
    fp1 = fopen("Updated Data.txt","w");
   	if(fp1==NULL)
   	{
   		printf("failed to create updated file\n");
   		fclose(fp);
   		return;
	}
	do
	{
		printf("To Update:\nSender Name-12\nSender Address-13\nReceiver Name-14\nReceiver Address-15\n16.Home");
		int updatee;
		printf("\nEnter your choice: ");
		scanf("%d",&updatee);
		switch(updatee)
		{
			case 12:
				while(fscanf(fp, "%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress)==5)
				{
	   				if(strcmp(n,c.id)==0)
					{
	   					printf("enter the new Sender Name for this id %s:",c.id);
	   					scanf("%s", c.sname);
	   					found=1;
	   					fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
	   					printf("Sender Name updated successfully!");
		   			}
		   			else
					{
		   				fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
		   			}
	   			}
	   			if(!found)
				{
	   				printf("No record found with the given id.\n");
	   			}
	   			fclose(fp);
	   			fclose(fp1);
	   			remove("Courier Data.txt");
	   			rename("Updated data.txt","Courier Data.txt");
	   			break;
	   		case 13:
	   			while(fscanf(fp, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress)==5)
				{
	   				if(strcmp(n,c.id)==0)
		   			{
	   					printf("enter the new Sender Address for the id %s:",c.id);
	   					scanf("%s", c.saddress);
	   					found=1;
	   					fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
	   					printf("Sender Address updated successfully!");
		   			}
	   			}
	   			if(!found)
				{
	   				printf("No record found with the given id.\n");
	   				fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);

	   			}
	   			fclose(fp);
	   			fclose(fp1);
	   			remove("Courier Data.txt");
	   			rename("Updated data.txt","Courier Data.txt");
	   			break;
	   		case 14:
	   			while(fscanf(fp, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress)==5)
				{
	   				if(strcmp(n,c.id)==0)
					{
	   					printf("enter the new Receiver Name for the id %s:",c.id);
	   					scanf("%s", c.rname);
	   					found=1;
	   					fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
	   					printf("Receiver Name updated successfully!");
		   			}
		   			else
					{
		   				fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
		   			}
	   			}
	   			if(!found)
				{
	   				printf("No record found with the given id.\n");
	   			}
	   			fclose(fp);
	   			fclose(fp1);
	   			remove("Courier Data.txt");
	   			rename("Updated data.txt","Courier Data.txt");
	   			break;
	   		case 15:
	   			while(fscanf(fp, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress)==5)
				{
	   				if(strcmp(n,c.id)==0)
					{
	   					printf("enter the new Receiver Address for the id %s:",c.id);
	   					scanf("%s", c.raddress);
	   					found=1;
	   					fprintf(fp1,"%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
	   					printf("Receiver Address updated successfully!");
		   			}
		   			else
					{
		   				fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
		   			}
	   			}
	   			if(!found)
				{
	   				printf("no record found with the given id.\n");
	   			}
	   			fclose(fp);
	   			fclose(fp1);
	   			remove("Courier Data.txt");
	   			rename("Updated data.txt","Courier Data.txt");
	   			break;
		}
	}while(!update>15);
}

