/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:33:17 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/06 14:18:20 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "[ Creating FragTrap ]" << std::endl;
    FragTrap f("Bob");

    std::cout << "[ Actions ]" << std::endl;
    f.attack("a terrorist");
    f.highFivesGuys();
    f.takeDamage(30);
    f.beRepaired(20);

    std::cout << "[ End of main ]" << std::endl;
    return (0);
}
