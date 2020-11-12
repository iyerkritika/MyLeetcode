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
  std::cout<<"6. Merge Sort\n";
  std::cout<<"7. Mountain Array\n";
  std::cout<<"8. Move Zeroes\n";
  std::cout<<"9. Remove duplicates\n";
  std::cout<<"10. Remove elements\n";
  std::cout<<"11. Replace elements\n";
  std::cout<<"12. Sort Array by Parity\n";
  std::cout<<"13. Sort sqaures array\n";
  std::cout<<"14. Third Biggest.h Number\n";
  std::cout<<"15. Third Largest Number\n";
}

void LinkedListMenu()
{
  std::cout<<"Please select from the menu\n";
  std::cout<<"1. Add 2 numbers\n";
  std::cout<<"2. Find out if a list is cyclic and return bool\n";
  std::cout<<"3. Find out if a list is cyclic and return node\n";
  std::cout<<"4. Find an intersection of 2 lists\n";
  std::cout<<"5. Merge sort\n";
  std::cout<<"6. Remove nth Element\n";
  std::cout<<"7. Insertion sort\n";
  std::cout<<"8. Flatten a multi level Tree\n";
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
}

int main(int argc, char const *argv[])
{
  int option = 1;
  int internalOption;
  std::string yesNo;
  while(option)
  {
    Megamenu();
    std::cin>>option;
    switch (option)
    {
      case 1:
      {
        vectorMenu();
        internalOption = 1;
        while(internalOption)
        {
          std::cin>> internalOption;
          if(internalOption == 16)
          {
            vectorMenu();
            std::cin>> internalOption;
          }
          if(VectorMains(internalOption))
          {
            std::cout << "Would you like to continue in this sub module? Y/N \n";
            std::cin>>yesNo;
            if(yesNo == "Y" || yesNo == "y")
            {
              std::cout << "Please pick an option. pick 16 for the menu again" << '\n';
              continue;
            }
            else
            {
              break;
            }
          }
          else
          {
            return 0;
          }
        }
        break;
      }
      case 2:
      {
        LinkedListMenu();
        internalOption = 1;
        while(internalOption)
        {
          std::cin>> internalOption;
          if(internalOption == 9)
          {
            LinkedListMenu();
            std::cin>> internalOption;
          }
          bool passed = false;
          if(internalOption == 8)
          {
            FlattenMain();
            passed = true;
          }
          else
          {
            passed = ListNodeMains(internalOption);
          }
          if(passed)
          {
            std::cout << "Would you like to continue in this sub module? Y/N \n";
            std::cin>>yesNo;
            if(yesNo == "Y" || yesNo == "y")
            {
              std::cout << "Please pick an option. pick 9 for the menu again" << '\n';
              continue;
            }
            else
            {
              break;
            }
          }
          else
          {
            return 0;
          }
        }
        break;
      }
      case 3:
      {
        BinaryTreeMenu();
        internalOption = 1;
        while(internalOption)
        {
          std::cin>> internalOption;
          if(internalOption == 3)
          {
            BinaryTreeMenu();
            std::cin>> internalOption;
          }
          if(BinaryTreeMains(internalOption))
          {
            std::cout << "Would you like to continue in this sub module? Y/N \n";
            std::cin>>yesNo;
            if(yesNo == "Y" || yesNo == "y")
            {
              std::cout << "Please pick an option. pick 3 for the menu again" << '\n';
              continue;
            }
            else
            {
              break;
            }
          }
          else
          {
            return 0;
          }
        }
        break;
      }
      case 4:
      {
        HashTablesMenu();
        internalOption = 1;
        while(internalOption)
        {
          std::cin>> internalOption;
          if(internalOption == 7)
          {
            HashTablesMenu();
            std::cin>> internalOption;
          }
          if(HashTablesMains(internalOption))
          {
            std::cout << "Would you like to continue in this sub module? Y/N \n";
            std::cin>>yesNo;
            if(yesNo == "Y" || yesNo == "y")
            {
              std::cout << "Please pick an option. pick 7 for the menu again" << '\n';
              continue;
            }
            else
            {
              break;
            }
          }
          else
          {
            return 0;
          }
        }
        break;
      }
      case 5:
      {
        MiscMenu();
        internalOption = 1;
        while(internalOption)
        {
          std::cin>> internalOption;
          if(internalOption == 3)
          {
            MiscMenu();
            std::cin>> internalOption;
          }
          if(MiscMains(internalOption))
          {
            std::cout << "Would you like to continue in this sub module? Y/N \n";
            std::cin>>yesNo;
            if(yesNo == "Y" || yesNo == "y")
            {
              std::cout << "Please pick an option. pick 3 for the menu again" << '\n';
              continue;
            }
            else
            {
              break;
            }
          }
          else
          {
            return 0;
          }
        }
        break;
      }
      default:
        return 0;
    }
  return 0;
  }
}
