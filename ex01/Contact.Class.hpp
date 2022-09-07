#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		int is_ascii(std::string str);
		void set_contact_detail(void);
		std::string get_contact_detail(int i);
};

#endif