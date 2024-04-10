/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:07:08 by ejuarros          #+#    #+#             */
/*   Updated: 2024/04/10 11:48:20 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void init_background_imgs(t_game *game, t_sprites *sprites)
{
    int w;
    int h;
    
    sprites->black = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        BLACK, &w, &h);
    sprites->blue = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        BLUE, &w, &h);
    sprites->grass = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr, 
        GRASS, &w, &h);
    
    if (!sprites->black || !sprites->blue || !sprites->grass)
    {
        ft_free_matrix(game->map.map);
        mlx_destroy_window(game->mlx.mlx_data.mlx_ptr, game->mlx.mlx_data.mlx_win);
        print_error("Couldn't load background images\n");
    }
}

void init_tree_sprites(t_game *game, t_sprites *sprites)
{
    int w;
    int h;
    
    sprites->tree1 = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        TREE1, &w, &h);
    sprites->tree2 = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        TREE2, &w, &h);
    sprites->tree3 = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        TREE3, &w, &h);
    sprites->tree4 = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        TREE4, &w, &h);

    if (!sprites->tree1 || !sprites->tree2 || !sprites->tree3 || !sprites->tree4)
    {
        ft_free_matrix(game->map.map);
        mlx_destroy_window(game->mlx.mlx_data.mlx_ptr, game->mlx.mlx_data.mlx_win);
        print_error("Couldn't load tree images\n");
    }
}

void init_collec_sprites(t_game *game, t_sprites *sprites)
{
    int w;
    int h;
    
    sprites->collec1 = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        COIN_ON, &w, &h);
    /*sprites->collec2 = mlx_xpm_file_to_image(game->mlx.mlx_data.mlx_ptr,
        COIN_OFF, &w, &h);*/
    if (!sprites->collec1 /*|| !sprites->collec2*/)
    {
        ft_free_matrix(game->map.map);
        mlx_destroy_window(game->mlx.mlx_data.mlx_ptr, game->mlx.mlx_data.mlx_win);
        print_error("Couldn't load collectibles images\n");
    }
}

t_sprites   init_sprites(t_game *game)
{
    t_sprites   sprites;

    init_background_imgs(game, &sprites);
    init_tree_sprites(game, &sprites);
    init_collec_sprites(game, &sprites);
    init_door_sprites(game, &sprites);
    init_enemy_sprites(game, &sprites);
    init_extra_sprites(game, &sprites);
    init_player_sprites(game, &sprites);

    return (sprites);
}