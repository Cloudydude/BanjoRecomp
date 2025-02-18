#ifndef __BANJO_SOUND_H__
#define __BANJO_SOUND_H__

namespace banjo {
    void reset_sound_settings();
    void set_main_volume(int volume);
    int get_main_volume();
    void set_bgm_volume(int volume);
    int get_bgm_volume();
}

#endif
