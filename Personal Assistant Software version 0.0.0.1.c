#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TASKS 100

struct Task
{
    char date[12];
    char task[100];
    int completed;
};

struct Task tasks[MAX_TASKS];
int totalTasks=0;

int main()
{
    system("color A0");
    printf("\n\n\n\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|             Personal Assistant Software            |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|            [1] User log in                         |\n");
    printf("\t\t\t\t|            [2] Developer info                      |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    first();

}



void first()
{
    int chose;

    printf("                                |");

    scanf("%d",&chose);
    if(chose==1)
    {
        admin(1);
    }
    if(chose==2)
    {
        devinfo(3);
    }
    if(chose==3)
    {
        system("cls");
        ui(3);
    }

    if(chose>3)
    {
        system("cls");
        printf("Enter A Correct Key \n");

    }

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





void devinfo()
{
    system("cls");

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
    printf("\t\t\t\t------------------------------------------------------\n");
    int inp;
    printf("\n\n\n\n\n\n \t\t\t\t Back [1]  ");
    scanf("%d",&inp);
    if(inp==1)
    {
        system("cls");
        main();

    }

}


int ui()
{

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
    read();

    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addTask();
        break;
    case 2:
        updateTask();
        break;
    case 3:
        completeTask();
        break;
    case 4:
        cancelTask();
        break;
    case 5:
        checkUpcomingTasks();
        break;
    case 6:
        checkTasksOnDate();
        break;
    case 7:
        checkCompletedTasks();
        break;
    case 8:

        break;
    default:
        printf("Invalid choice. Please try again.\n");
    }

}



int write()
{
    FILE *file = fopen("tasks.txt","w");
    if (file == NULL)
    {
        printf("\t\t\t\t|");
        printf("Error saving tasks to file.\n");
        return;
    }

    for(int i=0;i<totalTasks;i++)
    {
        fprintf(file,"%s %s %d\n",tasks[i].date,tasks[i].task,tasks[i].completed);
    }

    fclose(file);
}
 int read()
{
    FILE *file=fopen("tasks.txt","r");

    if(file==NULL)
    {
        printf("\t\t\t\t|");
        printf("No previous tasks found.\n");
        return 0;
    }

    char line[150];
    totalTasks = 0;
    while(fgets(line, sizeof(line),file)!= NULL)
    {
        sscanf(line,"%s %99[^\n]s %d",tasks[totalTasks].date, tasks[totalTasks].task,&tasks[totalTasks].completed);
        totalTasks++;
    }

    fclose(file);
    return 1;
}


void addTask()
{

    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                    Add Task                         |\n");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|");

    printf("Enter the date (YYYY-MM-DD): \n");
    printf("\t\t\t\t|");
    scanf("%s", tasks[totalTasks].date);
    printf("\n\t\t\t\t|");
    printf("Enter the task information: \n");
    printf("\t\t\t\t|");
    scanf(" %99[^\n]s", tasks[totalTasks].task);

    tasks[totalTasks].completed = 0;
    totalTasks++;
    write();
    printf("\t\t\t\t|");
    printf("Task added successfully.\n");

    printf("\n\n\n\n");
    printf("\t\t\t\t|");
    printf("[1] Back                                       [2] Add another Task\n");

    int s;

    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }




}

void updateTask()
{

    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                    Update task                      |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\t\t\t\t|");
    printf("Enter the date of the task to be updated (YYYY-MM-DD): \n");
    char date[12];
    printf("\t\t\t\t|");
    scanf("%s",date);


    int found=0;

    for(int i=0; i<totalTasks; i++)
    {
        if (strcmp(tasks[i].date,date)==0)
        {
            printf("\t\t\t\t|");
            printf("Current task: %s\n",tasks[i].task);
            printf("\t\t\t\t|");
            printf("Enter the updated task information: \n");
            printf("\t\t\t\t|");
            scanf(" %99[^\n]s", tasks[i].task);
            printf("\n\t\t\t\t|");
            printf("Task updated successfully.\n");
            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("\t\t\t\t|");
        printf("No tasks found for the given date.\n");
    }

    write();


    printf("\t\t\t\t|");
    printf("[1] Back                                [2] Add another Task |\n");
    printf("\t\t\t\t|");
    printf("[3] Log out                             [4] Update Task      |\n");

    int s;
    printf("\n\n\n\n");
    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }
    if(s==3)
    {
        main();
    }

    if(s==4)
    {
        updateTask();
    }




}








void completeTask()
{
    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                  Complete task                      |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\t\t\t\t|");
    printf("Enter the date to mark as complete Task (YYYY-MM-DD): \n");
    char date[12];
    printf("\t\t\t\t|");
    scanf("%s",date);

    int found=0;
    for (int i=0; i<totalTasks; i++)
    {
        if(strcmp(tasks[i].date,date)==0)
        {
            tasks[i].completed=1;
            printf("\t\t\t\t|");
            printf("Task marked as completed.\n");
            found=1;
            break;
        }
    }

    if (!found)
    {
        printf("\n\t\t\t\t|");
        printf("No tasks found for the given date.\n");
    }

    write();

    printf("\n\n\n\n");
    printf("\t\t\t\t|");
    printf("[1] Back                                [2] Add another Task |\n");
    printf("\t\t\t\t|");
    printf("[3] Compleate another task              [4] Update Task      |\n");

    int s;
    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }
    if(s==3)
    {
        completeTask();
    }

    if(s==4)
    {
        updateTask();
    }










}

void cancelTask()
{
    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                   Cancel task                      |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\t\t\t\t|");

    printf("Enter the date of the task to be canceled (YYYY-MM-DD): \n");
    char date[12];
    printf("\t\t\t\t|");
    scanf("%s",date);

    int found=0;
    for(int i=0; i<totalTasks; i++)
    {
        if(strcmp(tasks[i].date,date)==0)
        {
            for(int j=i; j<totalTasks-1; j++)
            {
                tasks[j]=tasks[j+1];
            }
            totalTasks--;
            printf("\t\t\t\t|");
            printf("Task canceled successfully.\n");
            found=1;
            break;
        }
    }

    if (!found)
    {
        printf("\t\t\t\t|");
        printf("No tasks found for the given date.\n");
    }

    write();

    printf("\n\n\n\n");
    printf("\t\t\t\t|");
    printf("[1] Back                             [2] Add a Task          |\n");
    printf("\t\t\t\t|");
    printf("[3] Log out                          [4] Cancel another Task |\n");

    int s;
    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }
    if(s==3)
    {
        main();
    }

    if(s==4)
    {
        cancelTask();
    }

}

void checkUpcomingTasks()
{

    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                Cheek Upcoming task                  |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\t\t\t\t|");
    printf("Upcoming tasks:\n");
    for (int i = 0; i < totalTasks; i++)
    {
        if (!tasks[i].completed)
        {
            printf("\t\t\t\t|");
            printf("%s %s %s\n", tasks[i].date, tasks[i].task, tasks[i].completed ? "(Completed)":"(Pending)");
        }
    }



    printf("\n\n\n\n");
    printf("\t\t\t\t|");
    printf("[1] Back                             [2] Add a Task          |\n");
    printf("\t\t\t\t|");
    printf("[3] Log out                          [4] Cancel another Task |\n");

    int s;
    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }
    if(s==3)
    {
        main();
    }

    if(s==4)
    {
        cancelTask();
    }
}

void checkTasksOnDate()
{
    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|              Search Task by Date                   |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\t\t\t\t|");
    printf("Enter the date to check tasks (YYYY-MM-DD): \n");
    char date[12];
    scanf("%s",date);

    int found=0;
    for (int i=0; i<totalTasks; i++)
    {
        if (strcmp(tasks[i].date,date)==0)
        {
            printf("\t\t\t\t|");
            printf("%s %s %s\n",tasks[i].date,tasks[i].task,tasks[i].completed ?"(Completed)":"(Pending)");
            found = 1;
        }
    }

    if(!found)
    {
        printf("\t\t\t\t|");
        printf("No tasks found for the given date.\n");
    }
    printf("\n\n\n\n");

    printf("\t\t\t\t|");
    printf("[1] Back                             [2] Add a Task    |\n");
    printf("\t\t\t\t|");
    printf("[3] Log out                          [4] Cancel a Task |\n");

    int s;
    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }
    if(s==3)
    {
        main();
    }

    if(s==4)
    {
        cancelTask();
    }



}

void checkCompletedTasks()
{
    system("cls");
    printf("\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t|                   Cancel task                      |\n");
    printf("\t\t\t\t------------------------------------------------------\n");

    printf("\t\t\t\t|");
    printf("Completed tasks:\n");

    for (int i=0;i<totalTasks;i++)
    {
        if (tasks[i].completed)
        {
            printf("\t\t\t\t|");
            printf("%s %s\n", tasks[i].date,tasks[i].task);
        }
    }
    printf("\n\n\n\n");

    printf("\t\t\t\t|");
    printf("[1] Back                             [2] Add a Task    |\n");
    printf("\t\t\t\t|");
    printf("[3] Log out                          [4] Cancel a Task |\n");

    int s;
    printf("\t\t\t\t|");
    scanf("%d",&s);
    if(s==1)
    {
        system("cls");
        ui();
    }
    if(s==2)
    {
        addTask();
    }
    if(s==3)
    {
        main();
    }

    if(s==4)
    {
        cancelTask();
    }







}


