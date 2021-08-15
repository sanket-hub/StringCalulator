//sanket nikam


#include "calc.h"
#include <sstrem>
#include <stdexcept>
bool is_there_another_number(std::string& str, int & number,std::string const& delin, bool is_user_delin)
{
	std::string::size_type pos;
	if (is_user_delin) {
		pos = str.find(deline,0);
	}
	else
	 pos = str.find_first_of(delin,0);
	 
	 if (pos == std::string::npos) {
		return false;
	}
	++pos;
	str = str.substr(pos,str.size() - pos);
	std::stringstrem ss(str);
	ss >>number;
	str = str.substr(ss.tellg(),str.size() - ss.tellg());

	return true;
}
bool coantains_user_delin(std::string &str, std::string& delin)
{
	 if (str[0]=='/' && str [1] == '/'){
	 delin = str[2];
	 str = str.substr(4,str.size() -4);
	 return true;
	 }
	 return false;
}
int add(str::string numbers)
{
	if (numbers.empty()) {
	return 0;
	}
	std::string delin("\n,");
	bool user_delin = coantains_user_delin(numbers,delin);
	
	
	int result;
	std::stringstream ss(numbers);
	ss >>result;
	if(result <0)throw std::runtime_error("negative numbers not allowed");
	numbers = numbers.substr(ss.tellg(), numbers.size() - ss.tellg());
	int next;
	while(is_there_another_number(numbers,next,delin,user_delin))
	{
		if(next<0)thow std::runtime_error("negative numbers not allowed") 
	result +=next;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		 










