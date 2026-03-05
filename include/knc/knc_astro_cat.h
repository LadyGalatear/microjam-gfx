#include "mj/mj_game.h"
#include "knc/knc_astro_cat_game.h"
#define KNC_ASTRO_CAT_H 
#endif

namespace knc {
    class knc_astro_cat : public mj::game {
    public:
     knc_astro_cat(); 
    knc_astro_cat(int completed_games, const mj::game_data& data);

    bn::string_view title() const override; //title
    int total_frames() const override; //total_frames
    mj::game_result play(const mj::game_data& data) override; //play
    bool victory() const override; //victory
    void fade_in(const mj::game_data& data) override; //fade_in
    void fade_out(const mj::game_data& data) override; //fade_out
    };
}
