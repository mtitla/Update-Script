#include <iostream>
#include <cstdlib>
#include <string>
int main()
{	
	while(true)
	{
	std::string ChoiceUpdate;
	std::cout << "(AUR/Pacman) : ";
	std::cin >> ChoiceUpdate;
	if(ChoiceUpdate == "Pacman" || ChoiceUpdate == "pacman" || ChoiceUpdate == "PACMAN")
	{
	
	
	std::cout << R"(
 ____                                    _   _           _       _     
|  _ \ __ _  ___ _ __ ___   __ _ _ __   | | | |_ __   __| | __ _| |_ ___ 
| |_) / _` |/ __| '_ ` _ \ / _` | '_ \  | | | | '_ \ / _` |/ _` | __/ _ \
|  __/ (_| | (__| | | | | | (_| | | | | | |_| | |_) | (_| | (_| | ||  __/
|_|   \__,_|\___|_| |_| |_|\__,_|_| |_|  \___/| .__/ \__,_|\__,_|\__\___|
                                              |_|                        
)" << "\n";
	std::system("sudo pacman -Syu");
	}
	else if(ChoiceUpdate == "AUR" || ChoiceUpdate == "aur")
	{
		std::cout << R"(
    _   _   _ ____    _   _           _       _       
   / \ | | | |  _ \  | | | |_ __   __| | __ _| |_ ___ 
  / _ \| | | | |_) | | | | | '_ \ / _` |/ _` | __/ _ \
 / ___ \ |_| |  _ <  | |_| | |_) | (_| | (_| | ||  __/
/_/   \_\___/|_| \_\  \___/| .__/ \__,_|\__,_|\__\___|
                           |_|
		
		)" << "\n";
		std::string ChoiceHelper;
		std::cout << "(Paru/Yay) : ";
		std::cin >> ChoiceHelper;
		if(ChoiceHelper == "Paru" ||  ChoiceHelper == "paru" || ChoiceHelper == "PARU")
	        {
			std::system("paru -Syu");
		}
		else if(ChoiceHelper == "Yay" ||  ChoiceHelper == "yay" || ChoiceHelper == "YAY")
	        {
			std::system("yay -Syu");
		}
		else {
			std::cerr << "Choice Error\n";
		}

	}
	else {
		std::cerr << "Choice Error\n";
	}
	std::cout << "\n";
	std::cout << "Press Ctrl C to quit\n";
	std::cout << "\n";
	}
	return 0;
}
