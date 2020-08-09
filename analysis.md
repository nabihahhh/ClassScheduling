# Introduction

In CPU scheduling, it is important to choose the right algorithm, so that it will take a shorter time to execute all the processes in a queue.  
In this context, choosing the right solution to schedule the classes is essential to save resources.

The chosen algorithms are:

1. **First Come First Serve (FCFS) Scheduling**

	This algorithm executes processes based on which process comes first in the queue.


2. **Shortest Job First (SJF) Scheduling**

	This algorithm executes processes based on which process in the queue has a shorter burst time. In this case, the duration of the class.


3. **Priority Scheduling**

	This algorithm executes processes based on which process in the queue has a higher priority (lower integer = higher priority).

# Consideration

For this analysis, we considered a few scenarios that would provide more clarity for each scheduling algorithm and made our input accordingly.

* For FCFS scheduling, it only depends on which class comes first in the array.
* For SJF scheduling, we considered classes that have the same duration.
* As for priority scheduling, we considered classes that have the same priority.

Hence, the input is as follows:  
(Course code - Duration - Priority - Arrival time)

* CSC 2201 &nbsp;&nbsp;- 3 - 2 - 1
* CSC 2706 &nbsp;&nbsp;- 2 - 2 - 4
* INFO 2302 - 3 - 2 - 5
* CSC 4905 &nbsp;&nbsp;- 9 - 4 - 1
* CSC 1401 &nbsp;&nbsp;- 2 - 1 - 4
* CSC 1100 &nbsp;&nbsp;- 1 - 1 - 3
* INFO 3401 - 2 - 3 - 3
* CSC 3401 &nbsp;&nbsp;- 2 - 3 - 2
* CSC 1103 &nbsp;&nbsp;- 1 - 1 - 3
* INFO 4993 - 4 - 4 - 6

*Do note that the arrival time for the classes are neglected, as the algorithms chosen are non-preemptive.*

# Analysis

## FCFS

For FCFS scheduling, the data is as follows:

**Average waiting time = 14.3**  
**Average turnaround time = 17.2**

From the averages provided, FCFS is the least efficient algorithm as some processes had to wait a long time to execute, despite having shorter duration than others.

It only executes processes according to their order in the queue, hence if longer classes come earlier in the queue, it will be time consuming.  
Hence, it is why FCFS is slower than SJF and Priority Scheduling.

## SJF

For SJF scheduling, the data is as follows:

**Average waiting time = 8**  
**Average turnaround time = 10.9**

From the averages provided, SJF is the most efficient algorithm as the waiting times for the processes are the shortest overall, compared to FCFS and Priority Scheduling.

It executes processes according to their duration, hence it is the most efficient. However, the duration of each classes must be known prior for this algorithm to be usable.

## Priority Scheduling

For priority scheduling, the data is as follows:

**Average waiting time = 9.2**  
**Average turnaround time = 12.1**

From the averages provided, Priority Scheduling is faster than FCFS, albeit slower than SJF.  
It executes processes according to their priorities, hence providing advantages for classes that are more important.

However, for classes having the same priority, the algorithm only executes them according to which classes come first, hence it will be less efficient if classes with longer durations come first.

If the input is sorted such that the classes with shorter durations come first, this is how the averages would look like:

**Average waiting time = 8.4**  
**Average turnaround time = 11.3**

The averages are definitely lower than if the first input is used, however it still takes longer to execute as compared to SJF.

# Conclusion

From the analysis, it is shown that **Shortest Job First (SJF)** algorithm is the best non-preemptive algorithm to implement class scheduling.  
It is the most efficient algorithm time-wise, based on the constraints given. Arrival time is neglected as it will only be considered in preemptive scheduling algorithms, as mentioned.  
However, it is important to note again that the durations for the classes must be known beforehand, so that the algorithm can be used.  

# Group Members

* Muhammad Nur Haikal bin Mohd Rosli (1813779)
* Siti Aminah binti Mohd Izazi (1817580)
* Nur Nabihah binti Kassim (1819516)
* Muhammad Syahmi Aiman bin Mohd Shahrin (1811893)