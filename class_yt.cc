#include <iostream>
#include <list>
#include <string>

//introduction to classes in OOP
class YoutubeChannel {  //classes are user defined datatypes
public:
    std::string Name;
    std::string OwnerName;
    int SubscribersCount;
    std::list<std::string> PublishedVideoTitles = {"Tutorial 1", "tutorial 2"};
};

int main(int argc, char *argv[])
{
  //create an object of that class
  YoutubeChannel ytChannel;
  ytChannel.Name = "Bingus";
  ytChannel.OwnerName = "Russman";
  ytChannel.SubscribersCount = 100;
  
  std::cout << "Name: " << ytChannel.Name << '\n';
  std::cout << "Owner of channel: " << ytChannel.OwnerName << '\n';
  std::cout << "Amount of subscribers: " << ytChannel.SubscribersCount << '\n';
  std::cout << "My videos are: ";
  // iterates through list using a for each loop
  for (std::string titles : ytChannel.PublishedVideoTitles) {
    std::cout << titles << " " << '\n';
  }
    return 0;
}
