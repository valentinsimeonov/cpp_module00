/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:48:57 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/08 18:48:58 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

PhoneBook::PhoneBook(void)
{
	// something here so this doesn't complain
}

PhoneBook::~PhoneBook(void)
{
	// something here so this doesn't complain
}

int		PhoneBook::add_entry(int index)
{
	details[index].set_contact_detail();
	index++;
	return (index);
}

std::string PhoneBook::format_contact(std::string str)
{
	std::string detail;
	int			i;
	int			j;

	detail = "          ";
	i = str.length() - 1;
	j = 9;
	if (i > 9)
	{
		detail = str.substr(0, 10);
		detail[9] = '.';
	}
	else if (i < 9)
	{
		while (j >= 0)
		{
			while (i >= 0)
			{
				detail[j--] = str[i--];
			}
			detail[j] = '.';
			j--;
		}
	}
	return (detail);
}

void	PhoneBook::contact_search(int index)
{
	std::string s_first_name;
	std::string s_last_name;
	std::string s_nickname;

	s_first_name = format_contact(details[index].get_contact_detail(1));
	s_last_name = format_contact(details[index].get_contact_detail(2));
	s_nickname = format_contact(details[index].get_contact_detail(3));
	std::cout << "          " << index + 1 << "|" << s_first_name << "|" << s_last_name << s_nickname << std::endl;
}

void	PhoneBook::output_details(int i)
{
	std::cout << "First Name: " << details[i].get_contact_detail(1) << std::endl;
	std::cout << "Last Name: " << details[i].get_contact_detail(2) << std::endl;
	std::cout << "NickName: " << details[i].get_contact_detail(3) << std::endl;
	std::cout << "Phone Number: " << details[i].get_contact_detail(4) << std::endl;
	std::cout << "Darkest Secret: " << details[i].get_contact_detail(5) << std::endl;
}
