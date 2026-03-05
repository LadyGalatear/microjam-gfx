#include "jpb/jpb_alien_shooter.h"

namespace jpb {
    jpb_alien_shooter::jpb_alien_shooter([[maybe_unused]] int completed_games, [[maybe_unused]] const mj::game_data& data) :
        mj::game("jpb")
    {}

    bn::string<16> jpb_alien_shooter::title() const {
        return "placeholder";
    }

    int jpb_alien_shooter::total_frames() const {
        return 300;
    }

    mj::game_result jpb_alien_shooter::play([[maybe_unused]] const mj::game_data& data) {
        mj::game_result result(victory(), false);
        return result;
    }

    bool jpb_alien_shooter::victory() const {
        return false;
    }

    void jpb_alien_shooter::fade_in([[maybe_unused]] const mj::game_data& data) {

    }

    void jpb_alien_shooter::fade_out([[maybe_unused]] const mj::game_data& data) {

    }
}