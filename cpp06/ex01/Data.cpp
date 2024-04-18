/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:00 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/18 19:07:04 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

Data::Data()
{
}

Data::~Data()
{
}

Data::Data(const Data &copy)
{
    *this = copy;
}

Data &Data::operator=(const Data &copy)
{
    if (this == &copy)
        return (*this);
    age = copy.age;
    height = copy.height;
    name = copy.name;
    return (*this);
}

Data::Data(int age, double height, std::string name) : age(age), height(height), name(name)
{
}

void Data::printData() const
{
    std::cout << "Data: age=" << age << ", height=" << height << ", name=" << name << std::endl;
}