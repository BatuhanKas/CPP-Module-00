/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:22:19 by bkas              #+#    #+#             */
/*   Updated: 2024/05/08 13:36:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {
   private:
    Contact book[8];
    int index;

   public:
    void addContact();
    void searchContact();
    void printContactMembers(int i);
    void printUserInformation(int i);
};

#endif