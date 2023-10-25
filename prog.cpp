#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void cls()
{
   system("cls");
}

int core()
{
   std::string website;
   std::string size;

   
   cout << "Website: "; 
   cin >> website;

   cout << "Load Size (Bytes): "; 
   cin >> size;

   if (website == "" || size == "") {
      cout << "Load/Website cannot be empty!" << endl;
   }

   std::string command = "ping " + website + " -l " + size;

   int out = system(command.c_str());

   if (!out == 0) {
      cout << "An error has occured. Make sure the website URL/Domain is correct.\n";

      Sleep(4 * 1000);
      cls();
   } else {
      Sleep(8 * 1000);
      cls();
   }

   return 0;
}

int main()
{
   while (true) {
      core();
   }
}