/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:56:16 by bkas              #+#    #+#             */
/*   Updated: 2024/05/10 12:07:30 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iomanip>
#include <iostream>

#define cout std::cout
#define endl std::endl
#define setw std::setw
#define setfill std::setfill

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::_displayTimestamp(void) {
    time_t currentTime = time(NULL);
    struct tm *local = localtime(&currentTime);

    cout << setfill('0') << "[" << local->tm_year + 1900 << setw(2)
         << local->tm_mon + 1 << setw(2) << local->tm_mday << "_" << setw(2)
         << local->tm_hour << setw(2) << local->tm_min << setw(2)
         << local->tm_sec << "] ";
}

Account::Account(void) {
    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account(int initial_deposit) {
    ++_nbAccounts;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << checkAmount()
         << ";created" << endl;
}

int Account::checkAmount(void) const { return _amount; }

void Account::makeDeposit(int deposit) {
    _displayTimestamp();

    cout << "index:" << _accountIndex << ";p_amount:" << _amount
         << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += _amount;
    cout << ";amount:" << _amount;
    cout << ";nb_deposits:" << ++_nbDeposits << endl;
    _totalNbDeposits++;
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
         << ";deposits:" << getNbDeposits()
         << ";withdrawals:" << getNbWithdrawals() << endl;
    _totalAmount = 0;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << checkAmount()
         << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
         << endl;
}

Account::~Account(void) {
    _displayTimestamp();

    cout << "index:" << _accountIndex << ";amount:" << checkAmount()
         << ";closed" << endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();

    cout << "index:" << _accountIndex << ";p_amount:" << checkAmount()
         << ";withdrawal:";
    if (checkAmount() < withdrawal) {
        cout << "refused" << endl;
        _totalAmount += checkAmount();
        return false;
    }
    cout << withdrawal;
    _amount -= withdrawal;
    _totalAmount += _amount;
    cout << ";amount:" << checkAmount()
         << ";nb_withdrawals:" << ++_nbWithdrawals << endl;
    _totalNbWithdrawals++;
    return true;
}