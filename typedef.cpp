//TYPE DEF 

typedef struct student
{
	int rollno;
	char name[60];
	float marks;
}student;

main()
{
	student s={17,'S',50.0};
	printf("%d %s %f",s.rollno,s.name,s.marks);
}
