/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:32:40 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/06 14:04:44 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Bob");
    ClapTrap b("Jean");

    a.attack("a target dummy");
    a.takeDamage(5);
    a.beRepaired(3);

    a.attack("dummy again");
    a.takeDamage(20);
    a.beRepaired(5);

    b.attack("someone");

    return 0;
}
