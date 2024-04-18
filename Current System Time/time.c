#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;    // Declare a variable to hold the current time
    struct tm *local_time;  // Declare a variable to hold the formatted time
    char time_buffer[100];  // Declare a buffer to hold the formatted time string
    time(&current_time);    // Get the current time
    local_time = localtime(&current_time);      // Convert the time to local time format
    strftime(time_buffer, sizeof(time_buffer), "%Y-%m-%d %H:%M:%S", local_time);    // Format the time into a human-readable string
    printf("Current time: %s\n", time_buffer);     // Print the current time
    return 0;
}
