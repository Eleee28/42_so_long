/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 05:59:20 by ele               #+#    #+#             */
/*   Updated: 2024/04/09 20:43:48 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSITION_H
# define POSITION_H

/* ************************************************************************** */
/*                 DATA STRUCTURES DEFINITIONS                                */
/* ************************************************************************** */

/** @brief Position structure
 * 
 *  @param x x coordinate
 *  @param y y coordinate
*/
typedef struct s_pos
{
	int	x;
	int	y;
}		t_pos;

/* ************************************************************************** */
/*                 FUNCTIONS DEFINITIONS                                      */
/* ************************************************************************** */

/** @brief Compare two positions
 * 
 *  @param pos1 first position
 *  @param pos2 second position
 * 
 *  @retval 1 if the positions are equal
 *  @retval 0 otherwise
*/
int	equal_pos(t_pos pos1, t_pos pos2);

#endif