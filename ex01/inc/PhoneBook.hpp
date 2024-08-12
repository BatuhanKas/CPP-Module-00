/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:22:19 by bkas              #+#    #+#             */
/*   Updated: 2024/08/12 20:08:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Contact.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************ [v] PHONEBOOK CLASS [v] ************************ */

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

/* ************************ [^] PHONEBOOK CLASS [^] ************************ */

#endif