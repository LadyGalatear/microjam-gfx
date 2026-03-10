#ifndef JPB_PLAYER_H
#define JPB_PLAYER_H

#include <bn_fixed_point.h>
#include <bn_sprite_ptr.h>
#include <bn_display.h>
#include <bn_rect.h>
#include <bn_size.h>

namespace jpb {

bn::rect create_bounding_box(bn::sprite_ptr sprite, bn::size box_size);

static constexpr bn::size PLAYER_SIZE = {8, 8};

class jpb_player {
    public:
        jpb_player(bn::fixed_point player_position, bn::fixed_point enemy_position, bn::size player_size, bn::fixed _speed);

        void update();

        bool enemy_intersect() const;
    
    private:
        bn::sprite_ptr player_sprite;
        bn::size player_size;
        bn::fixed speed;
};

}

#endif