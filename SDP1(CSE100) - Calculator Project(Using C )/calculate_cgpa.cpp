#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("cls");
    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                      GPA & CGPA Calculator                               "<<endl;
    cout<<"                Develop By(Iqbal , Sharial , Aminul)                           "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice: ";
    cin>>input;
    switch(input)
    {
        case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;
        case 3:
                method();
                break;
        case 4:
                exit(EXIT_SUCCESS);
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;
    }
}

void calculateGPA()
{
    int q;
    system("cls");
    cout<<"-------------- GPA Calculating -----------------"<<endl;
    sub:
    cout<<" which semester GPA do you want to calculate? : ";
    cin>>q;

    switch(q)
    {
        double a,b,c,d;
        double point[4],cr[4];
    case 1:
        {
      cout<<endl<<"1st semester sub and credit:"<<endl<<endl;
        cout<<"CSE 101 - Computer and programing concept           3.00 "<<endl;
        cout<<"CSE 102 - Computer and programing concept lab       1.5"<<endl;
        cout<<"MAT 101 - Differential and integral calculus        3.00"<<endl;
        cout<<"ENG 101 - English language                          3.00"<<endl<<endl;



        cr[0]=3.00;
         cr[1]=1.5;
         cr[2]=3.00;
         cr[3]=3.00;

        cout<<"Enter the marks:"<<endl;
        cin>>a>>b>>c>>d;


        if(a>=80 && a<=100)
        {
             point[0]=4.00;
            cout<<"CSE 101 "<<point[0]<<endl;

        }
        else if(a>=75 && a<=79)
        {
             point[0]=3.75;
            cout<<"CSE 101  "<<point[0]<<endl;

        }
        else if(a>=70 && a<=74)
        {
             point[0]=3.50;
             cout<<"CSE 101  "<<point[0]<<endl;

        }
        else if(a>=65 && a<=69)
        {
             point[0]=3.25;
             cout<<"CSE 101  "<<point[0]<<endl;

        }
        else if(a>=60 && a<=64)
        {
             point[0]=3.00;
             cout<<"CSE 101  "<<point[0]<<endl;

        }
        else if(a>=55 && a<=59)
        {
             point[0]=2.75;
             cout<<"CSE 101  "<<point[0]<<endl;

        }
        else if(a>=50 && a<=54)
        {
             point[0]=2.50;
             cout<<"CSE 101   "<<point[0]<<endl;

        }
        else if(a>=45 && a<=49)
        {
             point[0]=2.25;
             cout<<"CSE 101   "<<point[0]<<endl;

        }
        else if(a>=40 && a<=44)
        {
             point[0]=2.00;
             cout<<"CSE 101   "<<point[0]<<endl;

        }
        else if(a>=0 && a<39)
        {
            point[0]=0.00;
             cout<<"CSE 101   "<<point[0]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }





        if(b>=80 && b<=100)
        {
             point[1]=4.00;
            cout<<"CSE 102 "<<point[1]<<endl;

        }
        else if(b>=75 && b<=79)
        {
             point[1]=3.75;
             cout<<"CSE 102 "<<point[1]<<endl;

        }
        else if(b>=70 && b<=74)
        {
             point[1]=3.50;
             cout<<"CSE 102 "<<point[1]<<endl;

        }
        else if(b>=65 && b<=69)
        {
             point[1]=3.25;
             cout<<"CSE 102  "<<point[1]<<endl;

        }
        else if(b>=60 && b<=64)
        {
             point[1]=3.00;
             cout<<"CSE 102 "<<point[1]<<endl;

        }
        else if(b>=55 && b<=59)
        {
             point[1]=2.75;
             cout<<"CSE 102 "<<point[1]<<endl;

        }
        else if(b>=50 && b<=54)
        {
             point[1]=2.50;
             cout<<"CSE 102  "<<point[1]<<endl;

        }
        else if(b>=45 && b<=49)
        {
             point[1]=2.25;
             cout<<"CSE 102  "<<point[1]<<endl;

        }
        else if(b>=40 && b<=44)
        {
             point[1]=2.00;
             cout<<"CSE 102  "<<point[1]<<endl;

        }
        else if(b>=0 && b<=39)
        {
             point[1]=0.00;
             cout<<"CSE 102  "<<point[1]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }



        if(c>=80 && c<=100)
        {
             point[2]=4.00;
            cout<<"MAT 101 "<<point[2]<<endl;

        }
        else if(c>=75 && c<=79)
        {
             point[2]=3.75;
             cout<<"MAT 101  "<<point[2]<<endl;

        }
        else if(c>=70 && c<=74)
        {
             point[2]=3.50;
             cout<<"MAT 101  "<<point[2]<<endl;

        }
        else if(c>=65 && c<=69)
        {
             point[2]=3.25;
             cout<<"MAT 101 "<<point[2]<<endl;

        }
        else if(c>=60 && c<=64)
        {
             point[2]=3.00;
             cout<<"MAT 101  "<<point[2]<<endl;

        }
        else if(c>=55 && c<=59)
        {
             point[2]=2.75;
             cout<<"MAT 101  "<<point[2]<<endl;

        }
        else if(c>=50 && c<=54)
        {
             point[2]=2.50;
             cout<<"MAT 101 "<<point[2]<<endl;

        }
        else if(c>=45 && c<=49)
        {
             point[2]=2.25;
             cout<<"MAT 101  "<<point[2]<<endl;

        }
        else if(c>=40 && c<=44)
        {
             point[2]=2.00;
             cout<<"MAT 101  "<<point[2]<<endl;

        }
        else if(c>=0 && c<39)
        {
             point[2]=0.00;
             cout<<"MAT 101  "<<point[2]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


        if(d>=80 && d<=100)
        {
             point[3]=4.00;
            cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=75 && d<=79)
        {
              point[3]=3.75;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=70 && d<=74)
        {
              point[3]=3.50;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=65 && d<=69)
        {
              point[3]=3.25;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=60 && d<=64)
        {
              point[3]=3.00;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=55 && d<=59)
        {
              point[3]=2.75;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=50 && d<=54)
        {
              point[3]=2.50;
             cout<<"ENG 101 "<< point[3]<<endl;
        }
        else if(d>=45 && d<=49)
        {
              point[3]=2.25;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=40 && d<=44)
        {
              point[3]=2.00;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=0 && d<39)
        {
              point[3]=0.00;
             cout<<"ENG 101"<< point[3]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


         float sum=0;
    float tot=0;
    for(int j=0;j<4;j++)
    {
        tot=cr[j]*point[j];
        sum=sum+tot;

    }

    float totCr=10.5;


    cout<<"\n\n\nTotal Points: "<<sum<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

//      sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//              goto sub;
    }

     break;
    }


     case 2:
        {
        cout<<endl<<"2nd semester sub and credit:"<<endl<<endl;
        cout<<"CSE 111 - Structured programing language              3.00 "<<endl;
        cout<<"CSE 112 - Structured programing language  lab         1.5"<<endl;
        cout<<"MAT 111 - Co-Ordinate geometry and vector calculus    3.00"<<endl;
        cout<<"ENG 111 - English language                            3.00"<<endl<<endl;

        cr[0]=3.00;
         cr[1]=1.5;
         cr[2]=3.00;
         cr[3]=3.00;

        cout<<"Enter the marks:"<<endl;
        cin>>a>>b>>c>>d;


        if(a>=80 && a<=100)
        {
             point[0]=4.00;
            cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=75 && a<=79)
        {
             point[0]=3.75;
            cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=70 && a<=74)
        {
             point[0]=3.50;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=65 && a<=69)
        {
             point[0]=3.25;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=60 && a<=64)
        {
             point[0]=3.00;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=55 && a<=59)
        {
             point[0]=2.75;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=50 && a<=54)
        {
             point[0]=2.50;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=45 && a<=49)
        {
             point[0]=2.25;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=40 && a<=44)
        {
             point[0]=2.00;
             cout<<"CSE 111  "<<point[0]<<endl;

        }
        else if(a>=0 && a<39)
        {
            point[0]=0.00;
             cout<<"CSE 111  "<<point[0]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }





        if(b>=80 && b<=100)
        {
             point[1]=4.00;
            cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=75 && b<=79)
        {
             point[1]=3.75;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=70 && b<=74)
        {
             point[1]=3.50;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=65 && b<=69)
        {
             point[1]=3.25;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=60 && b<=64)
        {
             point[1]=3.00;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=55 && b<=59)
        {
             point[1]=2.75;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=50 && b<=54)
        {
             point[1]=2.50;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=45 && b<=49)
        {
             point[1]=2.25;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=40 && b<=44)
        {
             point[1]=2.00;
             cout<<"CSE 112 "<<point[1]<<endl;

        }
        else if(b>=0 && b<=39)
        {
             point[1]=0.00;
             cout<<"CSE 112 "<<point[1]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }



        if(c>=80 && c<=100)
        {
             point[2]=4.00;
            cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=75 && c<=79)
        {
             point[2]=3.75;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=70 && c<=74)
        {
             point[2]=3.50;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=65 && c<=69)
        {
             point[2]=3.25;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=60 && c<=64)
        {
             point[2]=3.00;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=55 && c<=59)
        {
             point[2]=2.75;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=50 && c<=54)
        {
             point[2]=2.50;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=45 && c<=49)
        {
             point[2]=2.25;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=40 && c<=44)
        {
             point[2]=2.00;
             cout<<"MAT 111 "<<point[2]<<endl;

        }
        else if(c>=0 && c<39)
        {
             point[2]=0.00;
             cout<<"MAT 111 "<<point[2]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


        if(d>=80 && d<=100)
        {
             point[3]=4.00;
            cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=75 && d<=79)
        {
              point[3]=3.75;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=70 && d<=74)
        {
              point[3]=3.50;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=65 && d<=69)
        {
              point[3]=3.25;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=60 && d<=64)
        {
              point[3]=3.00;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=55 && d<=59)
        {
              point[3]=2.75;
             cout<<"ENG 101 "<< point[3]<<endl;

        }
        else if(d>=50 && d<=54)
        {
              point[3]=2.50;
             cout<<"ENG 101  "<< point[3]<<endl;
        }
        else if(d>=45 && d<=49)
        {
              point[3]=2.25;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=40 && d<=44)
        {
              point[3]=2.00;
             cout<<"ENG 101  "<< point[3]<<endl;

        }
        else if(d>=0 && d<39)
        {
              point[3]=0.00;
             cout<<"ENG 101 "<< point[3]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


         float sum=0;
    float tot=0;
    for(int j=0;j<4;j++)
    {
        tot=cr[j]*point[j];
        sum=sum+tot;

    }

    float totCr=10.5;


    cout<<"\n\n\nTotal Points: "<<sum<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

     // sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//              goto sub;
    }

     break;
    }

        case 3:
            {
        cout<<endl<<"3rd semester sub and credit:"<<endl<<endl;
        cout<<"CSE 121 - object oriented programming language         3.00 "<<endl;
        cout<<"CSE 122 - object oriented programming language lab     1.5"<<endl;
        cout<<"MAT 121 - linear algebra & differential equation       3.00"<<endl;
        cout<<"CSE 103 - Discrete mathematics                         3.00"<<endl<<endl;

        cr[0]=3.00;
         cr[1]=1.5;
         cr[2]=3.00;
         cr[3]=3.00;

        cout<<"Enter the marks:"<<endl;
        cin>>a>>b>>c>>d;


        if(a>=80 && a<=100)
        {
             point[0]=4.00;
            cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=75 && a<=79)
        {
             point[0]=3.75;
            cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=70 && a<=74)
        {
             point[0]=3.50;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=65 && a<=69)
        {
             point[0]=3.25;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=60 && a<=64)
        {
             point[0]=3.00;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=55 && a<=59)
        {
             point[0]=2.75;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=50 && a<=54)
        {
             point[0]=2.50;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=45 && a<=49)
        {
             point[0]=2.25;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=40 && a<=44)
        {
             point[0]=2.00;
             cout<<"CSE 121  "<<point[0]<<endl;

        }
        else if(a>=0 && a<39)
        {
            point[0]=0.00;
             cout<<"CSE 121  "<<point[0]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }





        if(b>=80 && b<=100)
        {
             point[1]=4.00;
            cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=75 && b<=79)
        {
             point[1]=3.75;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=70 && b<=74)
        {
             point[1]=3.50;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=65 && b<=69)
        {
             point[1]=3.25;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=60 && b<=64)
        {
             point[1]=3.00;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=55 && b<=59)
        {
             point[1]=2.75;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=50 && b<=54)
        {
             point[1]=2.50;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=45 && b<=49)
        {
             point[1]=2.25;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=40 && b<=44)
        {
             point[1]=2.00;
             cout<<"CSE 122 "<<point[1]<<endl;

        }
        else if(b>=0 && b<=39)
        {
             point[1]=0.00;
             cout<<"CSE 122 "<<point[1]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }



        if(c>=80 && c<=100)
        {
             point[2]=4.00;
            cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=75 && c<=79)
        {
             point[2]=3.75;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=70 && c<=74)
        {
             point[2]=3.50;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=65 && c<=69)
        {
             point[2]=3.25;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=60 && c<=64)
        {
             point[2]=3.00;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=55 && c<=59)
        {
             point[2]=2.75;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=50 && c<=54)
        {
             point[2]=2.50;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=45 && c<=49)
        {
             point[2]=2.25;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=40 && c<=44)
        {
             point[2]=2.00;
             cout<<"MAT 121 "<<point[2]<<endl;

        }
        else if(c>=0 && c<39)
        {
             point[2]=0.00;
             cout<<"MAT 121 "<<point[2]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


        if(d>=80 && d<=100)
        {
             point[3]=4.00;
            cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=75 && d<=79)
        {
              point[3]=3.75;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=70 && d<=74)
        {
              point[3]=3.50;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=65 && d<=69)
        {
              point[3]=3.25;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=60 && d<=64)
        {
              point[3]=3.00;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=55 && d<=59)
        {
              point[3]=2.75;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=50 && d<=54)
        {
              point[3]=2.50;
             cout<<"CSE 103 "<< point[3]<<endl;
        }
        else if(d>=45 && d<=49)
        {
              point[3]=2.25;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=40 && d<=44)
        {
              point[3]=2.00;
             cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=0 && d<39)
        {
              point[3]=0.00;
             cout<<"CSE 103"<< point[3]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


         float sum=0;
    float tot=0;
    for(int j=0;j<4;j++)
    {
        tot=cr[j]*point[j];
        sum=sum+tot;

    }

    float totCr=10.5;


    cout<<"\n\n\nTotal Points: "<<sum<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

     // sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//              goto sub;
    }

     break;
    }

        case 4:
                 {
        cout<<endl<<"4th semester sub and credit:"<<endl<<endl;
        cout<<"CSE 231 - Data structural                            3.00 "<<endl;
        cout<<"CSE 232 - Data structural  lab                       1.5"<<endl;
        cout<<"STA 231 - Statistics                                 3.00"<<endl;
        cout<<"CSE 213 - Theory of computing & Automata theory      3.00"<<endl<<endl;

        cr[0]=3.00;
         cr[1]=1.5;
         cr[2]=3.00;
         cr[3]=3.00;

        cout<<"Enter the marks:"<<endl;
        cin>>a>>b>>c>>d;


        if(a>=80 && a<=100)
        {
             point[0]=4.00;
            cout<<"CSE 231  "<<point[0]<<endl;

        }
        else if(a>=75 && a<=79)
        {
             point[0]=3.75;
            cout<<"CSE231  "<<point[0]<<endl;

        }
        else if(a>=70 && a<=74)
        {
             point[0]=3.50;
             cout<<"CSE 231  "<<point[0]<<endl;

        }
        else if(a>=65 && a<=69)
        {
             point[0]=3.25;
             cout<<"CSE 231  "<<point[0]<<endl;

        }
        else if(a>=60 && a<=64)
        {
             point[0]=3.00;
             cout<<"CSE 231 "<<point[0]<<endl;

        }
        else if(a>=55 && a<=59)
        {
             point[0]=2.75;
             cout<<"CSE 231 "<<point[0]<<endl;

        }
        else if(a>=50 && a<=54)
        {
             point[0]=2.50;
             cout<<"CSE 231  "<<point[0]<<endl;

        }
        else if(a>=45 && a<=49)
        {
             point[0]=2.25;
             cout<<"CSE 231  "<<point[0]<<endl;

        }
        else if(a>=40 && a<=44)
        {
             point[0]=2.00;
             cout<<"CSE 231 "<<point[0]<<endl;

        }
        else if(a>=0 && a<39)
        {
            point[0]=0.00;
             cout<<"CSE 231  "<<point[0]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }





        if(b>=80 && b<=100)
        {
             point[1]=4.00;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=75 && b<=79)
        {
             point[1]=3.75;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=70 && b<=74)
        {
             point[1]=3.50;
             cout<<"CSE 232"<<point[1]<<endl;

        }
        else if(b>=65 && b<=69)
        {
             point[1]=3.25;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=60 && b<=64)
        {
             point[1]=3.00;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=55 && b<=59)
        {
             point[1]=2.75;
             cout<<"CSE 232"<<point[1]<<endl;

        }
        else if(b>=50 && b<=54)
        {
             point[1]=2.50;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=45 && b<=49)
        {
             point[1]=2.25;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=40 && b<=44)
        {
             point[1]=2.00;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=0 && b<=39)
        {
             point[1]=0.00;
             cout<<"CSE 232 "<<point[1]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }



        if(c>=80 && c<=100)
        {
             point[2]=4.00;
            cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=75 && c<=79)
        {
             point[2]=3.75;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=70 && c<=74)
        {
             point[2]=3.50;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=65 && c<=69)
        {
             point[2]=3.25;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=60 && c<=64)
        {
             point[2]=3.00;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=55 && c<=59)
        {
             point[2]=2.75;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=50 && c<=54)
        {
             point[2]=2.50;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=45 && c<=49)
        {
             point[2]=2.25;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=40 && c<=44)
        {
             point[2]=2.00;
             cout<<"STA 231 "<<point[2]<<endl;

        }
        else if(c>=0 && c<39)
        {
             point[2]=0.00;
             cout<<"STA 231 "<<point[2]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


        if(d>=80 && d<=100)
        {
             point[3]=4.00;
            cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=75 && d<=79)
        {
              point[3]=3.75;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=70 && d<=74)
        {
              point[3]=3.50;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=65 && d<=69)
        {
              point[3]=3.25;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=60 && d<=64)
        {
              point[3]=3.00;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=55 && d<=59)
        {
              point[3]=2.75;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=50 && d<=54)
        {
              point[3]=2.50;
             cout<<"CSE 213 "<< point[3]<<endl;
        }
        else if(d>=45 && d<=49)
        {
              point[3]=2.25;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=40 && d<=44)
        {
              point[3]=2.00;
             cout<<"CSE 213 "<< point[3]<<endl;

        }
        else if(d>=0 && d<39)
        {
              point[3]=0.00;
             cout<<"CSE 213 "<< point[3]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


         float sum=0;
    float tot=0;
    for(int j=0;j<4;j++)
    {
        tot=cr[j]*point[j];
        sum=sum+tot;

    }

    float totCr=10.5;


    cout<<"\n\n\nTotal Points: "<<sum<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

     // sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//              goto sub;
    }

     break;
    }



        case 5:
                 {
        cout<<endl<<"5th semester sub and credit:"<<endl<<endl;
        cout<<"CSE 205 - Digital logic design                         3.00 "<<endl;
        cout<<"CSE 206 - Digital logic design lab                     1.5"<<endl;
        cout<<"MAT 231 - Complex variable and Fourier                 3.00"<<endl;
        cout<<"CSE 209 - Data communication                            3.00"<<endl<<endl;

        cr[0]=3.00;
         cr[1]=1.5;
         cr[2]=3.00;
         cr[3]=3.00;

        cout<<"Enter the marks:"<<endl;
        cin>>a>>b>>c>>d;


        if(a>=80 && a<=100)
        {
             point[0]=4.00;
            cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=75 && a<=79)
        {
             point[0]=3.75;
            cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=70 && a<=74)
        {
             point[0]=3.50;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=65 && a<=69)
        {
             point[0]=3.25;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=60 && a<=64)
        {
             point[0]=3.00;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=55 && a<=59)
        {
             point[0]=2.75;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=50 && a<=54)
        {
             point[0]=2.50;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=45 && a<=49)
        {
             point[0]=2.25;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=40 && a<=44)
        {
             point[0]=2.00;
             cout<<"CSE 205  "<<point[0]<<endl;

        }
        else if(a>=0 && a<39)
        {
            point[0]=0.00;
             cout<<"CSE 205  "<<point[0]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }





        if(b>=80 && b<=100)
        {
             point[1]=4.00;
            cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=75 && b<=79)
        {
             point[1]=3.75;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=70 && b<=74)
        {
             point[1]=3.50;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=65 && b<=69)
        {
             point[1]=3.25;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=60 && b<=64)
        {
             point[1]=3.00;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=55 && b<=59)
        {
             point[1]=2.75;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=50 && b<=54)
        {
             point[1]=2.50;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=45 && b<=49)
        {
             point[1]=2.25;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=40 && b<=44)
        {
             point[1]=2.00;
             cout<<"CSE 206 "<<point[1]<<endl;

        }
        else if(b>=0 && b<=39)
        {
             point[1]=0.00;
             cout<<"CSE 206 "<<point[1]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }



        if(c>=80 && c<=100)
        {
             point[2]=4.00;
            cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=75 && c<=79)
        {
             point[2]=3.75;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=70 && c<=74)
        {
             point[2]=3.50;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=65 && c<=69)
        {
             point[2]=3.25;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=60 && c<=64)
        {
             point[2]=3.00;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=55 && c<=59)
        {
             point[2]=2.75;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=50 && c<=54)
        {
             point[2]=2.50;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=45 && c<=49)
        {
             point[2]=2.25;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=40 && c<=44)
        {
             point[2]=2.00;
             cout<<"MAT 231 "<<point[2]<<endl;

        }
        else if(c>=0 && c<39)
        {
             point[2]=0.00;
             cout<<"MAT 231 "<<point[2]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


        if(d>=80 && d<=100)
        {
             point[3]=4.00;
            cout<<"CSE 103 "<< point[3]<<endl;

        }
        else if(d>=75 && d<=79)
        {
              point[3]=3.75;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=70 && d<=74)
        {
              point[3]=3.50;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=65 && d<=69)
        {
              point[3]=3.25;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=60 && d<=64)
        {
              point[3]=3.00;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=55 && d<=59)
        {
              point[3]=2.75;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=50 && d<=54)
        {
              point[3]=2.50;
             cout<<"CSE 209 "<< point[3]<<endl;
        }
        else if(d>=45 && d<=49)
        {
              point[3]=2.25;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=40 && d<=44)
        {
              point[3]=2.00;
             cout<<"CSE 209 "<< point[3]<<endl;

        }
        else if(d>=0 && d<39)
        {
              point[3]=0.00;
             cout<<"CSE 209 "<< point[3]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


         float sum=0;
    float tot=0;
    for(int j=0;j<4;j++)
    {
        tot=cr[j]*point[j];
        sum=sum+tot;

    }

    float totCr=10.5;


    cout<<"\n\n\nTotal Points: "<<sum<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

     // sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//              goto sub;
    }

     break;
    }



        case 6:
                 {
        cout<<endl<<"6th semester sub and credit:"<<endl<<endl;
        cout<<"CSE 241 - Algorithms                            3.00 "<<endl;
        cout<<"CSE 232 - Algorithms  lab                       1.5"<<endl;
        cout<<"ACT 201 - Accounting fundamentals               3.00"<<endl;
        cout<<"CSE 215 - Computer architecture                 3.00"<<endl<<endl;

        cr[0]=3.00;
         cr[1]=1.5;
         cr[2]=3.00;
         cr[3]=3.00;

        cout<<"Enter the marks:"<<endl;
        cin>>a>>b>>c>>d;


        if(a>=80 && a<=100)
        {
             point[0]=4.00;
            cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=75 && a<=79)
        {
             point[0]=3.75;
            cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=70 && a<=74)
        {
             point[0]=3.50;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=65 && a<=69)
        {
             point[0]=3.25;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=60 && a<=64)
        {
             point[0]=3.00;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=55 && a<=59)
        {
             point[0]=2.75;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=50 && a<=54)
        {
             point[0]=2.50;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=45 && a<=49)
        {
             point[0]=2.25;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=40 && a<=44)
        {
             point[0]=2.00;
             cout<<"CSE 241  "<<point[0]<<endl;

        }
        else if(a>=0 && a<39)
        {
            point[0]=0.00;
             cout<<"CSE 241  "<<point[0]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }





        if(b>=80 && b<=100)
        {
             point[1]=4.00;
            cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=75 && b<=79)
        {
             point[1]=3.75;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=70 && b<=74)
        {
             point[1]=3.50;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=65 && b<=69)
        {
             point[1]=3.25;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=60 && b<=64)
        {
             point[1]=3.00;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=55 && b<=59)
        {
             point[1]=2.75;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=50 && b<=54)
        {
             point[1]=2.50;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=45 && b<=49)
        {
             point[1]=2.25;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=40 && b<=44)
        {
             point[1]=2.00;
             cout<<"CSE 232 "<<point[1]<<endl;

        }
        else if(b>=0 && b<=39)
        {
             point[1]=0.00;
             cout<<"CSE 232 "<<point[1]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }



        if(c>=80 && c<=100)
        {
             point[2]=4.00;
            cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=75 && c<=79)
        {
             point[2]=3.75;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=70 && c<=74)
        {
             point[2]=3.50;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=65 && c<=69)
        {
             point[2]=3.25;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=60 && c<=64)
        {
             point[2]=3.00;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=55 && c<=59)
        {
             point[2]=2.75;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=50 && c<=54)
        {
             point[2]=2.50;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=45 && c<=49)
        {
             point[2]=2.25;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=40 && c<=44)
        {
             point[2]=2.00;
             cout<<"ACT 201 "<<point[2]<<endl;

        }
        else if(c>=0 && c<39)
        {
             point[2]=0.00;
             cout<<"ACT 201 "<<point[2]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


        if(d>=80 && d<=100)
        {
             point[3]=4.00;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=75 && d<=79)
        {
              point[3]=3.75;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=70 && d<=74)
        {
              point[3]=3.50;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=65 && d<=69)
        {
              point[3]=3.25;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=60 && d<=64)
        {
              point[3]=3.00;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=55 && d<=59)
        {
              point[3]=2.75;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=50 && d<=54)
        {
              point[3]=2.50;
             cout<<"CSE 215 "<< point[3]<<endl;
        }
        else if(d>=45 && d<=49)
        {
              point[3]=2.25;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=40 && d<=44)
        {
              point[3]=2.00;
             cout<<"CSE 215 "<< point[3]<<endl;

        }
        else if(d>=0 && d<39)
        {
              point[3]=0.00;
             cout<<"CSE 215 "<< point[3]<<endl;
        }
        else
        {
            cout<<"Erorr try again"<<endl;
        }


         float sum=0;
    float tot=0;
    for(int j=0;j<4;j++)
    {
        tot=cr[j]*point[j];
        sum=sum+tot;

    }

    float totCr=10.5;


    cout<<"\n\n\nTotal Points: "<<sum<<" .Total GPA: "<<sum/totCr<<" ."<<endl;

     // sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//              goto sub;
    }

     break;
    }
        default:
            cout<<"You have entered wrong input! try again."<<endl<<endl;
            goto sub;
            break;





    }
};



void calculateCGPA()
{
    system("cls");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}

void method()
{
    system("cls");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<"-----------------------------------------------------------------\n\n"<<endl;

    sub:
    int inmenu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
};










