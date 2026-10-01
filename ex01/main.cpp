/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:33:17 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/16 00:35:45 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "[ Creating ScavTrap ]" << std::endl;
    ScavTrap s("Bob");

    std::cout << "[ Actions ]" << std::endl;
    s.attack("a terrorist");
    s.guardGate();
    s.takeDamage(30);
    s.beRepaired(20);

    std::cout << "[ End of main ]" << std::endl;
    return (0);
}
