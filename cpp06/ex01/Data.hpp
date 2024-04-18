/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:22:18 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/18 19:06:04 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
    private:
        int         age;
        double      height;
        std::string name;
    
    public:
        Data();
        ~Data();
        Data(const Data &copy);
        Data &operator=(const Data &copy);
        Data(int age, double height, std::string name);
        
        void printData() const;
};


#endif