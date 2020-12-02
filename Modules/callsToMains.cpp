#include "ListNode.h"
#include "ListTree.h"
#include "TreeNode.h"
#include "VectorOperations.h"
#include "HashTables.h"
#include "Misc.h"

void Megamenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Vector Operations\n";
  std::cout<<"2. Linked List Operations\n";
  std::cout<<"3. Binary Tree Operations\n";
  std::cout<<"4. Hash Table Operations\n";
  std::cout<<"5. Misc Programs\n";
}

void vectorMenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Find Disappeared numbers\n";
  std::cout<<"2. Duplicating Zeroes\n";
  std::cout<<"3. Even number of digits in an array\n";
  std::cout<<"4. Height Checker\n";
  std::cout<<"5. Maximum consecutive ones\n";
  std::cout<<"6. Maximum consecutive ones after flipping atmost 1 0\n";
  std::cout<<"7. Merge Sort\n";
  std::cout<<"8. Mountain Array\n";
  std::cout<<"9. Move Zeroes\n";
  std::cout<<"10. Remove duplicates\n";
  std::cout<<"11. Remove elements\n";
  std::cout<<"12. Replace elements\n";
  std::cout<<"13. Sort Array by Parity\n";
  std::cout<<"14. Sort sqaures array\n";
  std::cout<<"15. Third Biggest Number\n";
  std::cout<<"16. Product except self\n";
  std::cout<<"17. Minimum cost to stack all coins onto one column\n";
  std::cout<<"18. Find the Smallest Divisor Given a Threshold\n";
  std::cout<<"19. Find the Shortest distance between 2 words in a vector\n";
}

void LinkedListMenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Add 2 numbers given in reverse\n";
  std::cout<<"2. Add 2 numbers given as written\n";
  std::cout<<"3. Find out if a list is cyclic and return bool\n";
  std::cout<<"4. Find out if a list is cyclic and return node\n";
  std::cout<<"5. Find an intersection of 2 lists\n";
  std::cout<<"6. Merge sort\n";
  std::cout<<"7. Remove nth Element\n";
  std::cout<<"8. Insertion sort\n";
  std::cout<<"9. Convert binary to integer\n";
  std::cout<<"10. Remove elements from a List\n";
  std::cout<<"11. Rotate the List to the right\n";
  std::cout<<"12. Flatten a multi level Tree\n";
}

void BinaryTreeMenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Pre order Traversal\n";
  std::cout<<"2. In order Traversal\n";
}

void HashTablesMenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Contains duplicate\n";
  std::cout<<"2. First unique character\n";
  std::cout<<"3. Happy Number\n";
  std::cout<<"4. Intersection of two vectors\n";
  std::cout<<"5. Find the single number in the array\n";
  std::cout<<"6. Find 2 numbers in a vector to make a sum\n";
}

void MiscMenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Convert int to wordds\n";
  std::cout<<"2. Check version Number\n";
  std::cout<<"3. consecutive letters in a string\n";
}

template <class T>
T getOption()
{
  T input;
  std::string line;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  if(stream >> input)
    return input;
}

void submodule( void (*menu)(),bool (*mains)(int),int max)
{
  (*menu)();
  int internalOption = 1;
  std::string yesNo;
  while(internalOption)
  {
    internalOption = getOption<int>();
    if(internalOption == max)
    {
      (*menu)();
      internalOption = getOption<int>();
    }

    if((*mains)(internalOption))
    {
      std::cout << "Would you like to continue in this sub module? Y/N \n";
      yesNo = getOption<std::string>();
      if(yesNo == "Y" || yesNo == "y")
      {
        std::cout << "Please pick an option. pick " << max <<" for the menu again" << '\n';
        continue;
      }
      else
      {
        break;
      }
    }
    else
    {
      return;
    }
  }
}

int main(int argc, char const *argv[])
{
  int option = 1;
  while(option)
  {
    Megamenu();
    option=getOption<int>();
    switch (option)
    {
      case 1:
      {
        submodule(vectorMenu,VectorMains,20);
        break;
      }
      case 2:
      {
        submodule(LinkedListMenu,ListNodeMains,13);
        break;
      }
      case 3:
      {
        submodule(BinaryTreeMenu,BinaryTreeMains,3);
        break;
      }
      case 4:
      {
        submodule(HashTablesMenu,HashTablesMains,7);
        break;
      }
      case 5:
      {
        submodule(MiscMenu,MiscMains,4);
        break;
      }
      default:
        return 0;
    }
  }
  return 0;
}
