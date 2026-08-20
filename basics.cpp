//INPUT OUTPUT

/*
#include <iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"you are krish ka papa";
    }
    else{
        cout<<"i am krish ka bhai";
    }
    return 0;
}
*/

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

//if else statement


/*
#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if (marks<25){
        cout<<"F";
    }
    else if (marks>=25 && marks<=44){
        cout<<"E";
    }
    else if (marks>=45 && marks<=49){
        cout<<"D";
    }
    else if (marks>=50 && marks<=59){
        cout<<"C";
    }
    else if (marks>=60 && marks<=79){
        cout<<"B";
    }
    else if (marks>=80 && marks<=100){
        cout<<"A";
    }
    else{
        cout<<"Invalid marks entered";
    
    }
    return 0;
}
*/


//Nested loop


/*Take the age from the user and then decide accordingly
1. If age < 18,
   print-> not eligible for job
2. If age >= 18 and age <= 54,
   print-> "eligible for job"
3. If age >= 55 and age <= 57,
   print-> "eligible for job, but retirement soon."
4. If age > 57
   print-> "retirement time"
# include <iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for the job";
    }
    else if(age<=54){
    
        cout<<"Eligible for the job";

    }

else if (age<=57){
    cout<<"Eligible for the job, but retirement soon.";
}
else{
    cout<<"Retirement time.";
}
return 0;
}  
*/


//Switch case statement

/*
# include <iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    cout<<"Today is " ;
    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;  
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid day";

    

    }
    
    return 0;
}
*/



//ARRAYS AND STRINGS

#include <iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        cin>>arr[i] ;
    }
    cout<<"Hello kitty !";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}




