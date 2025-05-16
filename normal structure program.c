struct name{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct name s1;
    printf("enter the name");
    scanf("%s", &s1.name);
    printf("enter the student roll number");
    scanf("%d",&s1.roll);
    printf("enter the sudent marks");
    scanf("%f",&s1.marks);
    printf("\nStudent Details:\n");
    printf("Name:%s\nRoll:%f\nMarks:%2f\n,s1.name,s1.roll,s1.marks");
    return 0;
}
