#include<stdio.h>
#include<string.h>
int main(){

struct address{
    char name[20];
    char cityname[50];
     int homeno;
     float pin;
};
struct address a1;
printf("enter the name of student :\n");
fgets(a1.name,sizeof(a1.name),stdin);
a1.name[strcspn(a1.name,"\n")]=0;
printf("enter the city name :\n");
fgets(a1.cityname,sizeof(a1.cityname),stdin);
a1.cityname[strcspn(a1.cityname,"\n")]=0;

printf("enter the home number of the student :\n");
scanf("%d",&a1.homeno);

printf("enter the pin of student is\n");
scanf("%f",&a1.pin);

printf("name is %s\n",a1.name);
printf(" city name%s\n",a1.cityname);
printf("home number is %d\n",a1.homeno);
printf(" pin is %f\n",a1.pin);
return 0;
}


