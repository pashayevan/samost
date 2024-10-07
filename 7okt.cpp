#include <iostream>
#include <string>
#include <list>
#include <deque>

void doTrain(std::deque<int>& vg) {
	std::string nvag;
	int value; 
	std::string command;	
	while(true) {
		std::cin>>command;
		
		if(command=="+l"){
			std::cin>>value;
			vg.push_back(value);
		}else if(command == "+r"){
			std::cin>>(value);
			vg.push_front(value);
		}
		else if(command=="-l"){
			std::cin>>value;
			vg.pop_front();
		}else if(command=="-r"){
			std::cin>>value;
			vg.pop_front();
		}
		else if (command =="exit"){
		break;
	}
	

	}

}
			
int main() {
	std::deque<int> vg{10,5,7};
	doTrain(vg);
	{
		for(const auto el: vg)
		{
		std::cout<<el<<" ";
	}
}
	return 0;
}
