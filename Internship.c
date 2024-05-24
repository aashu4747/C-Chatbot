#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
struct user //structure user to store user's information
{
    char name[32];   //structure members
    char mobile[10];    //structure members
    char city[32];  //structure members
    char email[100];    //structure members
}s1; //structure variable initialization
//global variables and array declaration
char choice[2];
char user_input[32];
char *user_name;
char courses[3][500]={"CSE - Computer Science and Engineering","ISE - Information Science and Engineering","AIML - Artificial Intelligence and Machine Learning"};
//user-defined function declaration
int pdetails();
int fee_struct();
int e_criteria();
int c_support();
int dept_course();
int ask();
//main function starts
int main()
{
    int i;
    int count;
    int n;                 //local variable declaration
    user_name = "user";
    time_t t = time(NULL);
    //printing of home screen to the user.
    printf("Current date and time is : %s\n", ctime(&t));
    printf("Welcome to the Admission Enquiry Bot!\n");
    printf("We are here to help you understand our admission process.\n");
    printf("Happy to know your details. Would you like to provide (Y/N) ==> ");
    scanf("%s",user_input);     //taking user input.
    //conditional statement based on user input.
    if(strcmp(user_input,"Y")==0||strcmp(user_input,"y")==0)
    {
        printf("Enter your name:\n");
        scanf("%s",s1.name);
        user_name = s1.name;
        printf("Enter your mobile number:\n");
        scanf("%s",s1.mobile);
        if(strlen(s1.mobile)<10)
        {
            printf("Invalid mobile number\n");
            printf("Please enter valid 10-digit mobile number\n");
            scanf("%s",s1.mobile);
        }
        printf("Enter your city:\n");
        scanf("%s",s1.city);
        printf("Enter your email:\n");
        scanf("%s",s1.email);
        if (strchr(s1.email,'@'))
        {
            printf("Valid Email Address\n");
        }
        else
        {
            printf("Invalid Email. Please enter a valid email address.\n");
            scanf("%s",s1.email);
        }
        
    }
    printf("Bot ==> Hello %s ",user_name);      //Response from bot.
    return dept_course();       //function call
}
//user-defined function to display the menu-like option for user to choose from.
int dept_course()
{
    int n;
    while(1)
    {
        //menu-like option for the user to choose from.
    printf("\n\n");
    printf("Please select an option from below, so that we can proceed further:\n");
    printf("\n_____________________________________________________________________\n");
    printf("1. Courses offered\n");
    printf("2. Fee Structure\n");
    printf("3. Eligibility Criteria\n");
    printf("4. Contact Us\n");
    printf("5. Exit\n");
    printf("\n_____________________________________________________________________\n");
    printf("User Input ==> ");
    scanf("%d",&n);
    //switch statement to call the function based on the user's inputs.
    switch(n)
    {
        case 1: pdetails();
                break;
        case 2: fee_struct();
                break;
        case 3: e_criteria();
                break;
        case 4: c_support(); break;
        case 5: printf("Thank You!\n");
                exit(0);
        default: printf("Sorry, I didn't catch that. Please re-try.\n");  
    }
    }
    return 0;
}
//user-defined function having details of all the courses available.
int pdetails()
{
    while(1)        //while loop initialization
    {
        int m=3,i;
        printf("Hi there! I will guide you through our course catalogue.\n");
        printf("We have the following courses available:-\n");
        for(i=0;i<m;i++)
        {
            printf("%s\n",courses[i]);      //calling the list of courses from the globally declared variable.
        }
        printf("Please enter course short code to know more.\n");
        printf("User Input ==> ");
        scanf("%s",user_input);
        //displaying the course details based on the user's input.
        if(strcmp(user_input,"CSE")==0 || strcmp(user_input,"cse")==0)
         {
             printf("Bot ==> CSE Department\n");
             printf("Intake: 180\n");
             printf("VTU Ranks: 19\n");
             printf("Placement Offers in 2022: 498\n");
             printf("Facilities - \n");
             printf("Class Rooms:\n Well ventilated class rooms each having a seating capacity of 75.\n Every class room is so equipped to conduct theory classes using both conventional black board and LCD Projector for audio visual flavor.\n");
             printf("Laboratory:\n The department has 10 laboratory space with total of 225 state of the art computers with licensed software.\n The systems are powered with dedicated LAN 100Mbps and Wifi 500 Mbps leased lines.\n The hardware lab is having 30 microcontroller kits, IOT kits, Voltmeters, Ammeters, CROs, other devices, etc\n");
             printf("Would you like to continue?(Y/N)\n");
             scanf("%s",choice);
             if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
                    return dept_course();           //function call. Return back to the main menu if the user selects Yes.
             else
             {
                printf("Thank You!\n");
                exit(0);            //exit the program if the user selects no.
             }  
             
         }
        else if(strcmp(user_input,"ISE")==0 || strcmp(user_input,"ise")==0)
        {
             printf("Bot ==> ISE Department\n");
             printf("Intake: 180\n");
             printf("VTU Ranks: 16\n");
             printf("Placement Offers in 2022: 325\n");
             printf("Facilities - \n");
             printf("Class Rooms:\n Well ventilated class rooms each having a seating capacity of 75.\n Every class room is so equipped to conduct theory classes using both conventional black board and LCD Projector for audio visual flavor.\n");
             printf("Laboratory:\n The department has 07 laboratory space with total of 215 state of the art computers with licensed software.\n The systems are powered with dedicated LAN 100Mbps and Wifi 500 Mbps leased lines.\n The hardware lab is having 30 microcontroller kits, IOT kits, Voltmeters, Ammeters, CROs, other devices, etc\n");
             printf("Would you like to continue?(Y/N)\n");
             scanf("%s",choice);
             if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
             {
                return dept_course();       //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {
                printf("Thank You!\n");
                exit(0);            //exit the program if the user selects no.
             }
             
        }
        else if(strcmp(user_input,"AIML")==0 || strcmp(user_input,"aiml")==0)
        {
            printf("Bot ==> AIML Department\n");
            printf("Intake: 180\n");
            printf("Facilities - \n");
            printf("Class Rooms:\n Well ventilated class rooms each having a seating capacity of 75.\n Every class room is so equipped to conduct theory classes using both conventional black board and LCD Projector for audio visual flavor.\n");
            printf("Laboratory:\n The department has 02 laboratory space with total of 52 state of the art computers with licensed software.\n The systems are powered with dedicated LAN 100Mbps and Wifi 500 Mbps leased lines.\n The hardware lab is having 17 microcontroller kits, IOT kits, Voltmeters, Ammeters, CROs, other devices, etc\n");
            printf("AMURA Student Club - \n");
            printf("AMURA bearing the tagline “Where the future begins”, is an enthralling AI&ML club of RNSIT, furnishing a deeper apprehension of AI and providing a platform for students by conducting various activities ranging from tech savvy coding competitions to amusing extracurricular events.\n");
            printf("Through this club we aim to create a competitive learning environment in AI/ML branch, RNSIT. \n");
            printf("The objectives of the club are:\n");
            printf("Create a competitive environment.\n Provide necessary study resources such as courses, tutorials and books. \nMake projects based on AI , participate in AI related competitions.\n");
            printf("Would you like to continue?(Y/N)\n");
            scanf("%s",choice);
            if(strcmp(choice,"y")==0 || strcmp(choice,"Y")==0)
             {
                return dept_course();       //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {  
                printf("Thank You!\n");
                exit(0);                //exit the program if the user selects no.
             }
             
        }
        else
        {
             printf("Bot ==> Sorry, I couldn't get that.\n");
             
        }
    }
}
//user-defined function to show the fee-structure of the program to the user.
int fee_struct()
{
    printf("Entry to our college happens through three modes:\nKCET\nCOMEDK\nManagement Quota(MQY).\n");
    printf("Enter your mode of admission:\n");
    printf("User Input ==> ");
    scanf("%s",user_input);
    //display fee - structure based on the mode of admission selected by the user.
    if(strcmp(user_input,"KCET")==0 || strcmp(user_input,"kcet")==0)
    {
        printf("Bot ==> KCET Fee Structure:\n");
        printf("Tuition Fees: Rs. 58806\n");
        printf("College Fees: Rs. 31500\n");
        printf("VTU Fees: Rs. 4490\n");
        printf("Total: Rs. 94796\n");
        printf("Would you like to continue?(Y/N)\n");
        scanf("%s",choice);
        if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
             {
                return dept_course();       //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {
                printf("Thank You!\n");
                exit(0);                //exit the program if the user selects no.
             }
             
    }
    else if (strcmp(user_input,"COMEDK")==0 || strcmp(user_input,"comedk")==0)
    {
        printf("Bot ==> COMEDK Fee Structure:\n");
        printf("Tuition Fees: Rs. 201960\n");
        printf("College Fees: Rs. 31500\n");
        printf("VTU Fees: Rs. 4490\n");
        printf("Total: Rs. 237950\n");
        printf("Would you like to continue?(Y/N)\n");
        scanf("%s",choice);
        if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
             {
                return dept_course();       //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {
                printf("Thank You!\n");
                exit(0);                //exit the program if the user selects no.
             }
             
    }
    else if (strcmp(user_input,"MQY")==0 || strcmp(user_input,"mqy")==0)
    {
        printf("Bot ==> Management Quota Fee Structure:\n");
        printf("CSE: Rs. 550000\n");
        printf("ISE: Rs. 460000\n");
        printf("AIML: Rs. 480000\n");
        printf("Would you like to continue?(Y/N)\n");
        scanf("%s",choice);
        if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
             {
                return dept_course();           //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {
                printf("Thank You!\n");
                exit(0);                    //exit the program if the user selects no.
             }
    }
    else
    {
         printf("Bot ==> Sorry, I couldn't get that.\n");
         printf("Would you like to continue?(Y/N)\n");
         scanf("%s",choice);
         if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
             {
                return dept_course();           //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {
                printf("Thank You!\n");                 //exit the program if the user selects no.
                exit(0);
             }
             
    }
}
//user-defined function to check whether the student is eligible for normal quota admission or management quota admission.
int e_criteria()
{
    float marks;
    int rank;
    printf("Hello. I'll help you find out whether you qualify for the admission process or not\n");
    printf("Please enter your Class XII Marks\n");
    scanf("%f",&marks);
    printf("Please enter your KCET/COMEDK Rank\n");
    scanf("%d",&rank);
    if(marks>=55 && rank<=18000)
    {
        printf("You are eligible for admission\n");
    }
    else
    {
        printf("You are eligible for Management Quota admissions\n");
    }
    printf("Would you like to continue?(Y/N)\n");
             scanf("%s",choice);
             if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
             {
                return dept_course();           //function call. Return back to the main menu if the user selects Yes.
             }
             else
             {
                printf("Thank You!\n");
                exit(0);                //exit the program if the user selects no.
             }
}  
//user-defined function to show the contact details of the college.
int c_support()
{
    printf("For any further queries, you can contact us at - \n");
    printf("Contact: 080 28611880/1/2\n");
    printf("Email: registrar@rnsit.ac.in, principal@rnsit.ac.in\n");
    printf("Address: RNS Institute of Technology, R R Nagar Post, Channasandra, Bengaluru - 560 098\n");
    printf("Would you like to continue?(Y/N)\n");
    scanf("%s",choice);
    if(strcmp(choice,"Y")==0 || strcmp(choice,"y")==0)
        {
            return dept_course();           //function call. Return back to the main menu if the user selects Yes.
        }
     else
        {
            printf("Thank You!\n");
            exit(0);                //exit the program if the user selects no.
        }
}
