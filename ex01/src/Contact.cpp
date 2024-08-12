/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:36:33 by bkas              #+#    #+#             */
/*   Updated: 2024/08/12 20:19:05 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Contact.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] SET FUNCTIONS [v] ************************* */

void Contact::setFirstName(string fName) { firstName = fName; }

void Contact::setLastName(string lName) { lastName = lName; }

void Contact::setNickName(string nName) { nickName = nName; }

void Contact::setPhoneNumber(string number) { phoneNumber = number; }

void Contact::setDarkestSecret(string secret) { darkestSecret = secret; }

/* ************************* [^] SET FUNCTIONS [^] ************************* */

/* ************************* [v] GET FUNCTIONS [v] ************************* */

string Contact::getFirstName() { return firstName; }

string Contact::getLastName() { return lastName; }

string Contact::getNickName() { return nickName; }

string Contact::getPhoneNumber() { return phoneNumber; }

string Contact::getDarkestSecret() { return darkestSecret; }

/* ************************* [^] GET FUNCTIONS [^] ************************* */
