#include <iostream>
#include <string>
#include <list>
#include <deque>

void doTrain(std::deque<int>& vg) {
	std::string nvag;
	int value; 
	std::string command;	
	while(std::cin>>command) {
		
		if(command=="+l"){
			std::cin>>value;
			vg.push_front(value);
		}else if(command == "+r"){
			std::cin>>(value);
			vg.push_back(value);
		}
		else if(command=="-l"){
			std::cin>>value;
			while(!vg.empty() && value > 0){
				vg.pop_front();
				--value;
			}
			
		}else if(command=="-r"){
			std::cin>>value;
			while(!vg.empty() && value > 0){
				vg.pop_back();
				--value;
		}}
		else if (command =="exit"){
			break;
		}
	

	}

}
			
int main() {
	std::deque<int> vg;
	doTrain(vg);
	for(const auto el: vg)
	{
		std::cout<<el<<" ";
	}
	return 0;
}
