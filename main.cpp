#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    while (true) {
        // Get current time
        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Clear the console
        system("CLS"); // or "clear" on Linux/Unix

        // Display time
        cout << "Current Time: ";
        cout << setfill('0') << setw(2) << ltm->tm_hour << ":";
        cout << setfill('0') << setw(2) << ltm->tm_min << ":";
        cout << setfill('0') << setw(2) << ltm->tm_sec << endl;

        // Wait for 1 second
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}