#include <iostream>


enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
// man kann die zahlen weg lassen bei beim enum, dann wird automatisch so nummeriert wie hier, man kann zahlen
// aber so wählen wie man will, quasi wie cases oder teile eines structs


// enums = a user-defined data type that consists
//         of paired named-integer components
//         GREAT if you have a set of potential options

int main () {


  Day today = sunday;

  switch(today) {
    case 0: // sunday würde hier z.b auch gehen also namen der elemente 

                   std::cout << "It is sunday!\n";
                   break;

                 
    case 1: 
                   std::cout << "It is monday!\n!";
                   break;
                 
    case 2: 
                  std::cout << "It is tuesday\n";
                  break;
                
    case 3: 
                      std::cout << "It is wednesday\n";
                      break;
                    
    case 4: 
                     std::cout << "It is thursday!\n";
                     break;
                   
    case 5: 
                   std::cout << "It is friday!\n";
                   break;
                 
    case 6: 
                     std::cout << "It is satuday!\n";
                     break;
  }              
  return 0;
}

///he<<<<yyyyyy
