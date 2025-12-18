#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  string reward[5] = {"You have received Super Ultra Rare Unit!!!\n","You have received 5 gems.\n",
    "You have received 1 gems.\n","You have received 2000 coins.\n",
    "You have received very KAK items.\n"};
  if (rank=='S'){
    int i = 0;
    while (i < 5){
      cout << reward[i];
      i++;
  }
  }
  if (rank=='A'){
    int i = 1;
    while (i < 5){
      cout << reward[i];
      i++;
  }
  }
  if (rank=='B'){
    int i = 2;
    while (i < 5){
      cout << reward[i];
      i++;
  }
  }
  if (rank=='C'){
    int i = 3;
    while (i < 5){
      cout << reward[i];
      i++;
  }
  }
  if (rank=='D'){
    int i = 4;
    while (i < 5){
      cout << reward[i];
      i++;
  }
  }
  
  return 0;
}
