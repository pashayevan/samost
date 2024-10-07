#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
#include <algorithm>

std::string cleanWord(const std::string& word) {
	std:: string cleaned:
	for char c:word) {
		if(std::isalpha(c)) {
			cleaned +=std::to;ower(c);
		}
	}
	return cleaned;
}

int main() {
	std::unordered_set<std::string> words ;
	std::set<std::string> dublicate_words ;
	std::string word;
	int count=0;
	
	
	while(std::cin>>word)
	{
		if(word=="love") {
			count++;
		}
		if(words.contains(word))
		{
			dublicate_words.insert(word);
		}
		else
		{words.insert(word);
		}
	}
	std::cout<<" "<<count<<"\n";
	return 0;
}
