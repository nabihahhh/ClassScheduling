// Priority Scheduling

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Process
{
   string ccode;        // course code
   int duration;        // class duration
   int priority;        // priority
   int arrival_time;    // arrival time
};

// function to compare priority between two classes
bool prioComp(Process a, Process b)
{
    return a.priority < b.priority;
} 

// function to find the waiting time for all processes
void findWaitingTime(Process proc[], int n, int wt[])
{
    // waiting time for first process will be 0
    wt[0] = 0;
 
    // calculating waiting time
    for (int i = 1; i < n ; i++)
        wt[i] =  proc[i-1].duration + wt[i-1];
}
 
// function to calculate turn around time
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[])
{
    // calculating turnaround time by adding
    // proc[i].duration + wt[i]
    for (int i = 0; i < n ; i++)
        tat[i] = proc[i].duration + wt[i];
}
 
// function to calculate average time
void findAverageTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    // function to find waiting time of all processes
    findWaitingTime(proc, n, wt);
 
    // function to find turnaround time for all processes
    findTurnAroundTime(proc, n, wt, tat);
 
    cout << "Course Code  "<< " Priority  " << " Duration  "<< " Waiting time  " << " Turnaround time\n";
 
    // calculating total waiting time and total turnaround time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << left << setw(9) << proc[i].ccode << "       " << proc[i].priority << "          " << proc[i].duration << "            "<< setw(3) << left << wt[i] <<"             " << tat[i] << "\n";;
    }
 
    cout << "\nAverage waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turnaround time = "<< (float)total_tat / (float)n;
}
 
int main()
{
    Process proc[] = {{"CSC 2201", 3, 2, 1}, {"CSC 2706", 2, 2, 4}, {"INFO 2302", 3, 2, 5},  {"CSC 4905", 9, 4, 1}, {"CSC 1401", 2, 1, 4},
                      {"CSC 1100", 1, 1, 3}, {"INFO 3401", 2, 3, 3}, {"CSC 3401", 2, 3, 2}, {"CSC 1103", 1, 1, 3}, {"INFO 4993", 4, 4, 6}};
                      
    int n = sizeof proc / sizeof proc[0];
 
    cout << "Priority Scheduling: \n\n";

    // sorting the classes according to priority
    sort(proc, proc + n, prioComp);

    findAverageTime(proc, n);
    
    return 0;
}