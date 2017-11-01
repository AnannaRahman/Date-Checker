/*in this problem ,
fact 1 ) you will need infinite loop for user . you already did that in your code .
fact 2)  checking of user inputs (this is where you had logical problem )

for checking the input ,one of the good way is to check the values with your previous one ,
if it turns to be smaller than the previous one then store that and again check while user gives input .

think more before solving . that will save your time of coding .

See, there is only 4 conditions for a date to be the earlies ,
(dd/mm/yy)

1) if -->22/4/12 , -->2/4/12, -->12/4/12 (year==near_year && month==near_month & date<near_date)

2) 2/-->4/12 , 2/-->7/12, 12/-->3/12 (year==near_year && month<near_month)

3)2/4/-->12 , 2/7/-->02, 12/3/-->10(year<near_year)

4)2/-->4/-->12 , 2/-->7/-->02, 12/-->3/-->10 (year<near_year && month<near_month)

*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int date, month, year,pot=1;
int near_date, near_month, near_year;
printf("Enter a date (mm/dd/yy) : "); /*Print */

while(pot) /* while pot is true program will run */
{
scanf("%d/%d/%d",&month,&date,&year);

if(date==0&& month==0 &&year==0)
{
    pot=0;/* As it depends on 0/0/0 so when mm/dd/yy is 0 then pot will be 0 .
    so while next execution of while loop program will terminate */
}
else
{
    if(year<near_year && month<near_month)
       /*near_year ,near_month primarily keeps garbage value so ,in this
        checking every time when year and month both are smaller than previous value the value
        will get into it   */
    {
        near_year=year;
        near_date=date;
        near_month=month;
    }
   else if(year==near_year && month<near_month)
    {
        near_year=year;
        near_date=date;
        near_month=month;
    }
     else if(year<near_year)
    {
        near_year=year;
        near_date=date;
        near_month=month;
    }
     else if(year==near_year && month==near_month & date<near_date)
    {
        near_year=year;
        near_date=date;
        near_month=month;
    }

}
}

printf("%d/%d/%d is the earliest date.",near_month,near_date,near_year);
return 0;
}



