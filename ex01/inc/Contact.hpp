/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:36:40 by bkas              #+#    #+#             */
/*   Updated: 2024/08/12 20:19:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"
#define RESET "\033[0m"

#define LIGHT_RED "\033[1;31m"
#define LIGHT_GREEN "\033[1;32m"
#define LIGHT_YELLOW "\033[1;33m"
#define LIGHT_BLUE "\033[1;34m"
#define LIGHT_MAGENTA "\033[1;35m"
#define LIGHT_CYAN "\033[1;36m"
#define LIGHT_WHITE "\033[1;37m"

#define string std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl
#define setw std::setw

/* **************************** [^] DEFINES [^] **************************** */

/* ************************* [v] CONTACT CLASS [v] ************************* */

class Contact {
   private:
    string firstName;
    string lastName;
    string nickName;
    string phoneNumber;
    string darkestSecret;

   public:
    void setFirstName(string fName);
    void setLastName(string lName);
    void setNickName(string nName);
    void setPhoneNumber(string number);
    void setDarkestSecret(string secret);
    string getFirstName();
    string getLastName();
    string getNickName();
    string getPhoneNumber();
    string getDarkestSecret();
};

/* ************************* [^] CONTACT CLASS [^] ************************* */

#endif