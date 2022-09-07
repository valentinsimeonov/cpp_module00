#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include "Contact.Class.hpp"

class PhoneBook
{
	private:
		Contact details[8];

	public:
		int			add_entry(int index);
		void		contact_search(int index);
		std::string	format_contact(std::string str);
		void		output_details(int i);
		PhoneBook(void);
		~PhoneBook(void);
};

#endif