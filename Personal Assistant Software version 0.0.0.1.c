#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct Task
{
    char date[12];
    char task[100];
    int completed;
};

struct Task tasks[100];
int totalTasks = 0;



int read()
{
    FILE *file = fopen("tasks.txt", "r");
    if (file == NULL)
    {
        return;
    }

    while (fscanf(file, "%s %99[^\n]s %d", tasks[totalTasks].date, tasks[totalTasks].task, &tasks[totalTasks].completed) != EOF)
    {
        totalTasks++;
    }

    fclose(file);
}




//------------------------------------Admin log in password cheeker-----------------------//

int pass(int password)
{
    if(password==123)
    {
        system("cls");
        ui(123);
    }
    else
    {
        system("cls");
               printf("\n\n\n\n");
               printf("\t\t\t\t------------------------------------------------------\n");
               printf("\t\t\t\t|            Incorrect Password                      |\n");
               printf("\t\t\t\t------------------------------------------------------\n");
               printf("\t\t\t\t|                                                    |\n");
               printf("\t\t\t\t|                                                    |\n");

               printf("\t\t\t\t|            Enter your Correct Password             |\n");
               printf("\t\t\t\t|                                                    |\n");

               printf("\t\t\t\t|                                                    |\n");
               printf("\t\t\t\t|                                                    |\n");
               printf("\t\t\t\t|                                                    |\n");
               printf("\t\t\t\t------------------------------------------------------\n");

               printf("\t\t\t\t|Press [1] to Enter your correct password  |\n");

               printf("\t\t\t\t|");

               int re;
               scanf("%d",&re);
               if(re==1)
    {
        system("cls");
            admin(1);
        }
        else
        {

            system("cls");
            pass(password);
        }

    }
}



//------------------------------------------task-----------------------------
void first(void)
{
    int chose;

    printf("                                |");

    scanf("%d",&chose);
    if(chose==1)
    {
        admin(1);
    }
    if(chose==3)
    {
        devinfo(3);
    }
    if(chose==2)
    {
        devadmin(2);
    }
    if(chose>3)
    {
        system("cls");
        printf("Enter A Correct Key \n");

    }

}





void devinfo(void)
{
    system("cls");
    int inp;
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Developer Informations                 |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|      Name: Md.Mehedi Hasan                         |\n");
    printf("\t\t\t\t|      ID: 02402320005101497                         |\n");
    printf("\t\t\t\t|      Email: mahadihasanict01@gmail.com             |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|      Name: Tapty Sharker                           |\n");
    printf("\t\t\t\t|      ID:  0242320005101046                         |\n");
    printf("\t\t\t\t|      Email:sharker2305101046@diu.edu.bd            |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|      Name: Arfanul Haque                           |\n");
    printf("\t\t\t\t|      ID: 242320005101157                           |\n");
    printf("\t\t\t\t|      Email: mahadihasanict01@gmail.com             |\n");
    printf("\t\t\t\t|                                                    |\n");

    printf("\t\t\t\t|      Name: Samiul Haque                            |\n");
    printf("\t\t\t\t|      ID: 242320005101098                           |\n");
    printf("\t\t\t\t|      Email: samiul2305101098@diu.edu.bd            |\n");
    printf("\t\t\t\t|                                                    |\n");





    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\n\n\n\n\n\n \t\t\t\tBack [1]  ");
    scanf("%d",&inp);
    if(inp==1)
    {
        system("cls");
        main();

    }

}


int main()
{
    system("color 70");
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Personal Assistant Software            |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|            [1] User log in                         |\n");
    printf("\t\t\t\t|            [2] Developer log in                    |\n");
    printf("\t\t\t\t|            [3] Developer info                      |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    first();
    system("cls");
}
int admin(int a)
{
    system("cls");
    int password;
     system("color B0");
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Personal Assistant Software            |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|             Password:                              |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|");
    scanf("%d",&password);

    pass(password);


}














//=================================start the inner part==================//


void compleated(void)
{
    system("cls");
    int inp;
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Completed Task                        |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|  Date 23-09-2023                                   |\n");
    printf("\t\t\t\t|  Meeting With DIU ACM Members                      |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|  Date 24-09-2023                                   |\n");
    printf("\t\t\t\t|  Wife Birthday                                     |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|  Date 25-09-2023                                   |\n");
    printf("\t\t\t\t|  Meeting With AR Group of Ind.                     |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|  Date 26-09-2023                                   |\n");
    printf("\t\t\t\t|  Visiting Firm House                               |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\n\n\n\n\n\n Back [1]  ");
    scanf("%d",&inp);
    if(inp==1)
    {
        system("cls");
        ui(1);

    }

}








//--------------------------------------File ---- Add task -------------------------------

void add_task()
{
    FILE * file;
    char name[25];
    char date[20];
    file = fopen("Test.txt","a");

    if(file== NULL)
    {
        printf("File dosen't Exist");
    }

    else
    {
        system("cls");
        printf("\t\t\t\t------------------------------------------------------\n");
        printf("\t\t\t\t|             Enter Your Task                        |\n");
        printf("\t\t\t\t------------------------------------------------------\n");

        printf("\t\t\t\t| Date:");
        scanf("%s",&date);



        printf("\t\t\t\t| Task name:");

        scanf("%s",&name);

        fprintf(file,"\t\t\t\t  Date %s \n\t\t\t\t  %s\n",date,name);

        printf("\t\t\t\tTask added successfully\n\n\n");
        printf("\t\t\t\tBack [1]                            Add another task [2]");
        int n;
        printf("\t\t\t\t|");
        scanf("%d",&n);

        if(n==1)
        {
            system("cls");
            ui(1);
        }
        if(n==2)
        {
            system("cls");
            add_task();
        }
        if(n==7)
        {
            system("cls");
            main();
        }


    }

}



void check_Upcoming_task()
{


    FILE * file;
    char ch;
    file = fopen("Test.txt","r");

    if(file== NULL)
    {
        printf("File dosen't Exist");
    }

    else
    {
        system("cls");
        printf("\t\t\t\t------------------------------------------------------\n");
        printf("\t\t\t\t|                 Your Tasks                          |\n");
        printf("\t\t\t\t------------------------------------------------------\n");

        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        printf("\t\t\t\tBack [1]                            Add a task [2]");
        int n;
        printf("\t\t\t\t|");
        scanf("%d",&n);

        if(n==1)
        {
            system("cls");
            ui(1);
        }
        if(n==2)
        {
            system("cls");
            add_task();
        }



    }

}


//------------------------------------Warning----------------------------------------//
//-----------------------------------------------------------------------------------//
// --------------------------------This is Developper part--------------------------//


int devadmin(int a)
{
    system("cls");

    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Developer log in                       |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|             Password:                              |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|");
    char passwod[20];
    scanf("%s",&passwod);

    devpass(passwod);


}



int devpass(char passwod[])
{
    if (strcmp(passwod,"mehedi")==0)
    {
        system("cls");
        devui();
    }



    else
    {
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\t------------------------------------------------------\n");
        printf("\t\t\t\t|             Developer log in                       |\n");

        printf("\t\t\t\t------------------------------------------------------\n");
        printf("\t\t\t\t|            Developer mode is on   (*_*)            |\n");
        printf("\t\t\t\t|                                                    |\n");
        printf("\t\t\t\t|            Incorrect Password                      |\n");
        printf("\t\t\t\t|            Enter your Correct Password             |\n");
        printf("\t\t\t\t|                                                    |\n");
        printf("\t\t\t\t|            Press 1 to Enter your correct password  |\n");
        printf("\t\t\t\t|                                                    |\n");
        printf("\t\t\t\t|                                                    |\n");
        printf("\t\t\t\t|                                                    |\n");
        printf("\t\t\t\t------------------------------------------------------\n");
        printf("\t\t\t\t|");

        int re;
        scanf("%d",&re);
        if(re==1)
        {
            system("cls");
            devadmin(3);
        }
        else
        {

            system("cls");
            devpass(passwod);
        }

    }
}





int devui()
{
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Personal Assistant project             |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|            Developer mode is on   (*_*)            |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|            [1] Change user name                    |\n");
    printf("\t\t\t\t|            [2] Change User Password                |\n");
    printf("\t\t\t\t|            [3] Change Admin Password               |\n");
    printf("\t\t\t\t|            [4] Clear data                          |\n");
    printf("\t\t\t\t|            [5] Reset Factory                       |\n");
    printf("\t\t\t\t|            [7] Log Out                             |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|");



    dev_cheek_task();


}

void dev_cheek_task(void)
{
    int task;
    scanf("%d",&task);
    if(task==1)
    {
        compleated();
        //Update(1);
    }
    if(task==3)
    {
        devinfo();
        //Update(1);
    }

    if(task==7)
    {
        system("cls");
        main();
    }

    if(task>3)
    {
        system("cls");
        printf("Enter A Correct Key \n");
        devui();

    }


}






int ui()
{
    read();
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Personal Assistant project             |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|            [1] Add Tasks                           |\n");
    printf("\t\t\t\t|            [2] Update Tasks                        |\n");
    printf("\t\t\t\t|            [3] Complete Task                       |\n");
    printf("\t\t\t\t|            [4] Cancel Task                         |\n");
    printf("\t\t\t\t|            [5] Check Upcoming task                 |\n");
    printf("\t\t\t\t|            [6] Check tasks of specific date        |\n");
    printf("\t\t\t\t|            [7] Check Completed tasks               |\n");
    printf("\t\t\t\t|            [8] Log Out                             |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|");

    cheek_task();


}

void cheek_task()
{
    int task;
    scanf("%d",&task);
    switch(task)
    {
    case 1:
        system("cls");
        addTask(1);
        break;
    case 2:
        system("cls");
        updateTask();
        break;
    case 3:
        system("cls");
        completeTask();
        break;
    case 4:
        system("cls");
        cancelTask();
        break;
    case 5:
        system("cls");
        checkUpcomingTasks();
        break;
    case 6:
        system("cls");
        checkTasksOnDate();
        break;
    case 7:
        system("cls");
        checkCompletedTasks();
        break;
    case 8:
        return 0;
    default:
        printf("Invalid choice.\n");
    }



}


//----------------------------------------warning-------------------------------------------------
//-------------------------------------it is a file part------------------------------------------


//------------------load from file ------------------------
void file()
{
    FILE *file = fopen("tasks.txt", "w");
    if (file == NULL)
    {
        printf("Error saving tasks to file.\n");
        return;
    }

    for (int i = 0; i < totalTasks; i++)
    {
        fprintf(file, "%s %s %d\n", tasks[i].date, tasks[i].task, tasks[i].completed);
    }

    fclose(file);
}




void addTask(int x)
{
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                    Add Task                         |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    if (totalTasks == 100)
    {
        printf("Cannot add more tasks.\n");
        return;
    }

    printf("\t\t\t\t|");
    printf("Enter the date (YYYY-MM-DD): \n");
    printf("\t\t\t\t|");
    scanf("%s", tasks[totalTasks].date);

    printf("\t\t\t\t|");
    printf("Enter the task information: \n");
    printf("\t\t\t\t|");
    scanf(" %99[^\n]s", tasks[totalTasks].task);

    tasks[totalTasks].completed = 0;
    totalTasks++;
//------------------file on--------------------------

    FILE *file = fopen("tasks.txt", "w");
    if (file == NULL)
    {
        printf("Error saving tasks to file.\n");
        return;
    }

    for (int i = 0; i < totalTasks; i++)
    {
        fprintf(file, "%s %s %d\n", tasks[i].date, tasks[i].task, tasks[i].completed);
    }

    fclose(file);

//------------------------file close-----------------
    printf("\n\t\t\t\t|");
    printf("Task added successfully.\n");


    printf("\t\t\t\tBack [1]                            Add another task [2]\n");
    int n;
    printf("\t\t\t\t|");
    scanf("%d",&n);

    if(n==1)
    {
        system("cls");
        ui(1);
    }
    if(n==2)
    {
        system("cls");
        addTask(x);
    }
    if(n==7)
    {
        system("cls");
        main();
    }


}

void updateTask()
{

    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                    Update task                      |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    char date[12];

    printf("Enter the date of the task to be updated (YYYY-MM-DD):\n");

    scanf("%s", date);

    int found = 0;
    for (int i = 0; i < totalTasks; i++)
    {
        if (strcmp(tasks[i].date, date) == 0)
        {
            printf("%d. %s %s\n", i, tasks[i].task, tasks[i].completed ? "(Completed)":"(Pending)");
            found = 1;
        }
    }

    if (!found)
    {
        printf("No tasks found for the given date.\n");
        return;
    }

    int choice;
    printf("Enter the index of the task to update: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < totalTasks)
    {
        printf("Enter the updated task information: ");
        scanf(" %99[^\n]s", tasks[choice].task);
        printf("Task updated successfully.\n");
    }
    else
    {
        printf("Invalid index.\n");
    }

    //------------------file on--------------------------

    FILE *file = fopen("tasks.txt", "w");
    if (file == NULL)
    {
        printf("Error saving tasks to file.\n");
        return;
    }

    for (int i = 0; i < totalTasks; i++)
    {
        fprintf(file, "%s %s %d\n", tasks[i].date, tasks[i].task, tasks[i].completed);
    }
    fclose(file);

//------------------------file close-----------------
    printf("\n\t\t\t\t|");
    printf("Task updated successfully.\n");




    printf("\t\t\t\tBack [1]                            Add another task [2]\n");
    int n;
    printf("\t\t\t\t|");
    scanf("%d",&n);

    if(n==1)
    {
        system("cls");
        ui(1);
    }
    if(n==2)
    {
        system("cls");
        updateTask();
    }
    if(n==7)
    {
        system("cls");
        main();
    }

}

void completeTask()
{
    char date[12];
    printf("Enter the date of the task to be marked as complete (YYYY-MM-DD): ");
    scanf("%s", date);

    int found = 0;
    for (int i = 0; i < totalTasks; i++)
    {
        if (strcmp(tasks[i].date, date) == 0)
        {
            printf("%d. %s %s\n", i, tasks[i].task, tasks[i].completed ?"(Completed)" : "(Pending)");
            found = 1;
        }
    }

    if (found!=1)
    {
        printf("No tasks found for the given date.\n");
        return;
    }

    int choice;
    printf("Enter the index of task to compleate: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < totalTasks)
    {
        tasks[choice].completed = 1;
        printf("Task marked as completed.\n");
    }
    else
    {
        printf("Invalid index.\n");
    }

    file();

    printf("\n\t\t\t\t|");
    printf("Task compleated successfully.\n");

    printf("Back [1]                            Add another task [2]\n");
    int n;

    scanf("%d",&n);
    if(n==1)
    {
        system("cls");
        ui(1);
    }
    if(n==2)
    {
        system("cls");
        completeTask();
    }
    if(n==7)
    {
        system("cls");
        main();
    }


}


void cancelTask()
{
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|               Cancel Your Task                      |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    char date[12];
    printf("\t\t\t\t|");
    printf("Enter the date of the task to be canceled (YYYY-MM-DD): \n");
    scanf("%s", date);

    int found = 0;
    for (int i = 0; i < totalTasks; i++)
    {
        if (strcmp(tasks[i].date, date) == 0)
        {
            printf("%d. %s %s\n", i, tasks[i].task, tasks[i].completed ? "(Completed)" : "(Pending)");
            found = 1;
        }
    }

    if (!found)
    {
        printf("No tasks found for the given date.\n");
        return;
    }

    int choice;
    printf("Enter the index of the task to cancel: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < totalTasks)
    {
        for (int i = choice; i < totalTasks - 1; i++)
        {
            tasks[i] = tasks[i + 1];
        }
        totalTasks--;
        printf("Task canceled successfully.\n");
    }
    else
    {
        printf("Invalid index.\n");
    }

    file();
}


void checkUpcomingTasks()
{
    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|          Your Upcoming Tasks                        |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    if (totalTasks == 0)
    {
        printf("No tasks found.\n");
        return;
    }

    printf("Upcoming tasks:\n");
    for (int i = 0; i < totalTasks; i++)
    {
        printf("%s %s %s\n", tasks[i].date, tasks[i].task, tasks[i].completed ? "(Completed)" : "(Pending)");
    }


    printf("\t\t\t\tBack [1]                            Add another task [2]");
    int n;
    printf("\t\t\t\t|");
    scanf("%d",&n);

    if(n==1)
    {
        system("cls");
        ui(1);
    }
    if(n==2)
    {
        system("cls");
        add_task();
    }
    else
    {
        system("cls");
        main();
    }





}

void checkTasksOnDate()
{

    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                 Cheek task                          |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    char date[12];
    printf("\t\t\t\t|");
    printf("Enter the date to check tasks (YYYY-MM-DD): \n");
    printf("\t\t\t\t|");
    scanf("%s", date);

    int found = 0;
    for (int i = 0; i < totalTasks; i++)
    {
        if (strcmp(tasks[i].date, date) == 0)
        {
            printf("%s %s %s\n", tasks[i].task, tasks[i].completed ? "(Completed)" : "(Pending)");
            found = 1;
        }
    }

    if (!found)
    {
        printf("No tasks found for the given date.\n");
    }



    printf("\t\t\t\tBack [1]                            Add another task [2]");
    int n;
    printf("\t\t\t\t|");
    scanf("%d",&n);

    if(n==1)
    {
        system("cls");
        ui(1);
    }
    if(n==2)
    {
        system("cls");
        add_task();
    }
    else
    {
        system("cls");
        main();
    }







}

void checkCompletedTasks()
{

    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|            Cheek compleate task by date              |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    char date[12];
    printf("\t\t\t\t|");
    printf("Enter the date to check tasks (YYYY-MM-DD): \n");
      printf("\t\t\t\t|");
    scanf("%s", date);






    int found = 0;
    for (int i = 0; i < totalTasks; i++)
    {
        if (tasks[i].completed)
        {
            printf("%s %s\n", tasks[i].date, tasks[i].task);
            found = 1;
        }
    }

    if (!found)
    {
        printf("\t\t\t\t|");
        printf("No completed tasks found.\n");



    }

    printf("\t\t\t\tBack [1]                            Add another task [2]");
    int n;
    printf("\t\t\t\t|");
    scanf("%d",&n);

    if(n==1)
    {
        system("cls");
        ui(1);
    }
    if(n==2)
    {
        system("cls");
        add_task();
    }
    else
    {
        system("cls");
        main();
    }






}
