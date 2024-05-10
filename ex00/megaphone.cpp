/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:57:03 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 16:48:35 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef cout
# define cout std::cout
#endif

#ifndef cin
# define cin std::cin
#endif

#ifndef endl
# define endl std::endl
#endif

int main(int argc, char **argv) {
    int i = 1;
    int j = 0;
    char c;
    if (argc == 1) {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    } else {
        while (argv[i]) {
            j = 0;
            while(argv[i][j]) {
                c = toupper(argv[i][j]);
                cout << c;
                j++;
            }
            i++;
        }
    }
    cout << endl;
    return 0;
}
