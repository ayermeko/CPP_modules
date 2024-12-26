/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:48:22 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/26 14:39:37 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static std::vector<int> argv_to_vector(int argc, char** argv)
{
    std::vector<int> res;
    res.reserve(argc - 1);
    for (int i = 1; i < argc; i++)
    {
        res.push_back(atoi(argv[i]));
    }
    return res;
}

static std::string validate_arg(std::string arg)
{
    if (arg[0] == '-')
        return "Negative numbers are not allowed";
    long nbr = strtol(arg.c_str(), NULL, 10);
    if (nbr == 0 && arg != "0")
        return "Non-number arguments not allowed";
    if (nbr > INT_MAX || errno == ERANGE)
        return "Too big arguments are not allowed";
    return "";
}

static std::stirng validate(int argc, char **argv)
{
    if (argc == 1)
        return "Arguments were not found.";
    for (int i = 0; i < argc; i++)
    {
        std::string status = validate_arg(argv[i]);
        if (status != "")
            return (status);        
    }
    return "";
}

int main(int argc, char *argv[])
{
    PmergeMe pm;
    std::string status = check_args(argc, argv);
    if (status != "")
    {
        std::cerr << "Error: " << status << std::endl;
        return (EXIT_FAILURE);
    }
    
    clock_t start_vec = clock();
    std::vector<int> vec = argv_to_vector(argc, argv);
    pm.sort_vec(vec);
    clock_t end_vec = clock();
    double time_elapsed_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC;
    
    return 0;
}
