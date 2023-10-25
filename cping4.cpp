#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void cls()
{
   system("cls"); // Clears the screen
}

int core()
{
   std::string website; // String: Website
   std::string size; // String: Size Bytes

   
   cout << "Website: "; // Adds context for the input
   cin >> website; // Ask the user for the website

   cout << "Load Size (Bytes): "; 
   cin >> size; // Ask the user for the load size

   if (website == "" || size == "") { // Website nor size variables can be empty.
      cout << "Load/Website cannot be empty!" << endl;
   }

   std::string command = "ping " + website + " -l " + size; // Builds the command

   int out = system(command.c_str()); // Runs the command

   if (!out == 0) { // This will detect if the website dosen't exist or if the user does not have an internet connection.
      cout << "An error has occured. Make sure the website URL/Domain is correct.\n";

      Sleep(4 * 1000); // 4 (seconds). The first number will be multiplied by 1000, which will give an output of x000 milliseconds
      cls(); // Clears the screen

   } else {
      Sleep(8 * 1000); // ^^^^
      cls();
   }

   return 0; // Computer: Any errors? Program: 0 (False)
}

int main()
{
   while (true) { // Main loop
      core(); // Runs the core function
   }
}

/*
   Code is messy but gets the job done.
   
   GITHUB/jansel1
*/