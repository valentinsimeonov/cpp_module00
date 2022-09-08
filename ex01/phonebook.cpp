/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:49:02 by vsimeono          #+#    #+#             */
/*   Updated: 2022/09/08 18:49:18 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

int	check_input(std::string str, int index, int count)
{
	int	i;

	if (str.length() > 1 || str.length() < 1)
		return (1);
	if (!isdigit(str[0]))
		return (1);
	if (count == 8)
	{
		if (str[0] > '8' || str[0] < '1')
			return (1);
		else
			return (0);
	}
	else
	{
		i = stoi(str);
		if (i > index || str[0] < '1')
			return (1);
		else
			return (0);
	}
}

int main(void)
{
	PhoneBook	book;
	std::string input;
	std::string c;
	int			i;
	int			j;
	int			x;
	int			count;

	i = 0;
	j = 0;
	x = 0;
	count = 0;
	input = "ONE";
	while (input.compare("EXIT"))
	{
		std::cout << "To Add new Contact enter \"ADD\".\nTo Search for a Contact enter \"SEARCH\".\nTo Exit the Phonebook enter \"EXIT\"" << std::endl;
		getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			i = book.add_entry(i);
			if (i > 7)
			{
				i = 0;
				count = 8;
			}
		}
		if (!input.compare("SEARCH"))
		{
			if (i == 0 && count == 0)
				std::cout << "PhoneBook is Empty" << std::endl;
			else
			{
				while (j < i || j < count)
				{
					book.contact_search(j);
					j++;
				}
				while (x > j || x < 1)
				{
					std::cout << "Please Enter the Index Number: " << std::endl;
					getline(std::cin, c);
					if (!check_input(c, i, count))
						x = stoi(c);
				}
				book.output_details(x - 1);
				x = 0;
				j = 0;
			}
		}
	}
	return (0);
}
