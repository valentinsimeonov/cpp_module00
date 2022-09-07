#include "Contact.Class.hpp"

Contact::Contact(void)
{
	// something here so it doesn't Complain
}

int	Contact::is_ascii(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((int)str[i] >= 0 && (int)str[i] <= 127)
			return (1);
		i++;
	}
	return (0);
}

void Contact::set_contact_detail(void)
{
	while(7)
	{
		std::cout << "Please enter your First Name" << std::endl;
		getline(std::cin, first_name);
		if (first_name.length() > 0)
		{
			if (is_ascii(first_name))
				break;
			else
				std::cout << "Please Use Ascii Characters" << std::endl;
		}
		else
			std::cout << "Please Fill out your First Name" << std::endl;
	}
	while (23)
	{
		std::cout << "Please enter your Last Name" << std::endl;
		getline(std::cin, last_name);
		if (last_name.length() > 0)
		{
			if (is_ascii(last_name))
			{
				break;
			}
			else
				std::cout << "Please Use Ascii Characters" << std::endl;
		}
		else
			std::cout << "Please Fill Out your Last Name" << std::endl;
	}
	while (44)
	{
		std::cout << "Please Fill out your Nickname" << std::endl;
		getline(std::cin, nickname);
		if (nickname.length() > 0)
		{
			if (is_ascii(nickname))
			{
				break;
			}
			else
				std::cout << "Please Use Ascii Characters" << std::endl;
		}
		else
			std::cout << "Please Fill Out your Nickname" << std::endl;
	}
	while (77)
	{
		std::cout << "Please enter your Phone Number" << std::endl;
		getline(std::cin, phone_number);
		if (phone_number.length() > 0)
		{
			if (is_ascii(phone_number))
				break;
			else
				std::cout << "Please Use Ascii Characters" << std::endl;
		}
		else
			std::cout << "Please Fill Out your Phone Number" << std::endl;
	}
	while (101)
	{
		std::cout << "Please Fill out your Darkest Secret" << std::endl;
		getline(std::cin, darkest_secret);
		if (darkest_secret.length() > 0)
		{
			if (is_ascii(darkest_secret))
				break;
			else
				std::cout << "Please Use Ascii Characters" << std::endl;	
		}
		else
			std::cout << "Please Fill Out your Darkest Secret" << std::endl;
	}
}

std::string Contact::get_contact_detail(int i)
{
	std::string detail;

	if (i == 1)
		detail = first_name;
	if (i == 2)
		detail = last_name;
	if (i == 3)
		detail = nickname;
	if (i == 4)
		detail = phone_number;
	if (i == 5)
		detail = darkest_secret;
	return (detail);
}

Contact::~Contact(void)
{
	// something here so it doesn't Complain
}