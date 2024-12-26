/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:48:28 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/26 14:23:25 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cerrno>
#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostram>
#include <sstream>
#include <algorithm>
#include <deque>
#include <vector>

class PmergeMe
{
    private:
        /* data */
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& pm);
        PmergeMe& operator=(const PmergeMe& pm);
        ~PmergeMe();
};
