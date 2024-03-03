void update()
{
    FILE *fp, *fp1;
    Courier c;
    int found = 0;
    char n[10];
    int updatee;
    printf("Enter the id you want to update: ");
    scanf("%s", n);
    fp = fopen("Courier Data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fp1 = fopen("Updated Data.txt", "a");
    if (fp1 == NULL) {
        printf("Failed to create updated file.\n");
        fclose(fp);
        return;
    }
    while (fscanf(fp, "%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress) == 5) {
        if (strcmp(n, c.id) == 0) {
        	found = 1;
            do {
                printf("To update:\nSender Name - 12\nSender Address - 13\nReceiver Name - 14\nReceiver Address - 15\nHome - 16\n");
                printf("Enter your choice: ");
                scanf("%d", &updatee);
                switch (updatee) {
                    case 12:
                        printf("Enter the new Sender Name for this id %s: ", c.id);
                        scanf("%s", c.sname);
                        found = 1;
                        fprintf(fp1, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
                        printf("Sender Name updated successfully!\n");
                        fclose(fp);
                        fclose(fp1);
                        remove("Courier Data.txt");
                        rename("Updated Data.txt","Courier Data.txt");
                        break;
                    case 13:
                        printf("Enter the new Sender Address for the id %s: ", c.id);
                        scanf("%s", c.saddress);
                        found = 1;
                        fprintf(fp1, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
                        printf("Sender Address updated successfully!\n");
                        fclose(fp);
                        fclose(fp1);
                        remove("Courier Data.txt");
                        rename("Updated Data.txt","Courier Data.txt");
                        break;
                    case 14:
                        printf("Enter the new Receiver Name for the id %s: ", c.id);
                        scanf("%s", c.rname);
                        found = 1;
                        fprintf(fp1, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
                        printf("Receiver Name updated successfully!\n");
                        fclose(fp);
                        fclose(fp1);
                        remove("Courier Data.txt");
                        rename("Updated Data.txt","Courier Data.txt");
                        break;
                    case 15:
                        printf("Enter the new Receiver Address for the id %s: ", c.id);
                        scanf("%s", c.raddress);
                        found = 1;
                        fprintf(fp1, "\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
                        printf("Receiver Address updated successfully!\n");
                        fclose(fp);
                        fclose(fp1);
                        remove("Courier Data.txt");
                        rename("Updated Data.txt","Courier Data.txt");
                        break;
                    case 16:
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
            }while(!updatee>15);
        }
        else
        {
        	fprintf(fp1,"\n%s %s %s %s %s", c.id, c.sname, c.saddress, c.rname, c.raddress);
		}
    }
    if(!found)
		{
			printf("\nCourier with this ID not found");
		}
}
