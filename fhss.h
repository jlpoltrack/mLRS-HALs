//*******************************************************
// Copyright (c) MLRS project
// GPL3
// https://www.gnu.org/licenses/gpl-3.0.de.html
// OlliW @ www.olliw.eu
//*******************************************************
// FHSS
//*******************************************************
#ifndef FHSS_H
#define FHSS_H
#pragma once



#include <stdint.h>
#include "hal/device_conf.h"
#include "sx-drivers/sx12xx.h"
#include "common_conf.h"
#include "setup_types.h"


#define FHSS_MAX_NUM            32
#define FHSS_FREQ_LIST_MAX_LEN  80 // 2.4 GHz is 68

//-------------------------------------------------------
// Frequency list
//-------------------------------------------------------

#ifdef FREQUENCY_BAND_433_MHZ
#define FHSS_HAS_CONFIG_433_MHZ
#endif
#ifdef FREQUENCY_BAND_70_CM_HAM
#define FHSS_HAS_CONFIG_70_CM_HAM
#endif
#ifdef FREQUENCY_BAND_868_MHZ
#define FHSS_HAS_CONFIG_868_MHZ
#endif
#ifdef FREQUENCY_BAND_915_MHZ_FCC
#define FHSS_HAS_CONFIG_915_MHZ_FCC
#endif
#ifdef FREQUENCY_BAND_2P4_GHZ
#define FHSS_HAS_CONFIG_2P4_GHZ
#endif


#ifdef DEVICE_HAS_SX126x
#define SX12XX_FREQ_MHZ_TO_REG(f_mhz)  SX126X_FREQ_MHZ_TO_REG(f_mhz)
#elif defined DEVICE_HAS_SX127x
#define SX12XX_FREQ_MHZ_TO_REG(f_mhz)  SX127X_FREQ_MHZ_TO_REG(f_mhz)
#endif


#ifdef FHSS_HAS_CONFIG_433_MHZ
// 433.050 ... 434.790 in 0.506 MHz steps

const uint32_t fhss_freq_list_433[] = {
    SX12XX_FREQ_MHZ_TO_REG(433.360),
    SX12XX_FREQ_MHZ_TO_REG(433.920),
    SX12XX_FREQ_MHZ_TO_REG(433.480),
};

const uint8_t fhss_bind_channel_list_433[] = {
    0 // just pick some
};

#endif
#ifdef FHSS_HAS_CONFIG_70_CM_HAM
// USA Ham Bands w/ Tech License
// https://www.arrl.org/files/file/Tech%20Band%20Chart/US%20Amateur%20Radio%20Technician%20Privileges.pdf
// 33 Channels w/ 0.6 MHz spacing

const uint32_t fhss_freq_list_70_cm_ham[] = {
    SX12XX_FREQ_MHZ_TO_REG(430.4),
    SX12XX_FREQ_MHZ_TO_REG(431.0),
    SX12XX_FREQ_MHZ_TO_REG(431.6),
    SX12XX_FREQ_MHZ_TO_REG(432.2),
    SX12XX_FREQ_MHZ_TO_REG(432.8),
    SX12XX_FREQ_MHZ_TO_REG(433.4),
    SX12XX_FREQ_MHZ_TO_REG(434.0),
    SX12XX_FREQ_MHZ_TO_REG(434.6),
    SX12XX_FREQ_MHZ_TO_REG(435.2),
    SX12XX_FREQ_MHZ_TO_REG(435.8),

    SX12XX_FREQ_MHZ_TO_REG(436.4),
    SX12XX_FREQ_MHZ_TO_REG(437.0),
    SX12XX_FREQ_MHZ_TO_REG(437.6),
    SX12XX_FREQ_MHZ_TO_REG(438.2),
    SX12XX_FREQ_MHZ_TO_REG(438.8),
    SX12XX_FREQ_MHZ_TO_REG(439.4),
    SX12XX_FREQ_MHZ_TO_REG(440.0),
    SX12XX_FREQ_MHZ_TO_REG(440.6),
    SX12XX_FREQ_MHZ_TO_REG(441.2),
    SX12XX_FREQ_MHZ_TO_REG(441.8),

    SX12XX_FREQ_MHZ_TO_REG(442.4),
    SX12XX_FREQ_MHZ_TO_REG(443.0),
    SX12XX_FREQ_MHZ_TO_REG(443.6),
    SX12XX_FREQ_MHZ_TO_REG(444.2),
    SX12XX_FREQ_MHZ_TO_REG(444.8),
    SX12XX_FREQ_MHZ_TO_REG(445.4),
    SX12XX_FREQ_MHZ_TO_REG(446.0),
    SX12XX_FREQ_MHZ_TO_REG(446.6),
    SX12XX_FREQ_MHZ_TO_REG(447.2),
    SX12XX_FREQ_MHZ_TO_REG(447.8),

    SX12XX_FREQ_MHZ_TO_REG(448.4),
    SX12XX_FREQ_MHZ_TO_REG(449.0),
    SX12XX_FREQ_MHZ_TO_REG(449.6),
};

const uint8_t fhss_bind_channel_list_70_cm_ham[] = {
    10, 20 // picked 2
};

#endif
#ifdef FHSS_HAS_CONFIG_868_MHZ
// 863.275 ... 869.575  in 0.525 MHz steps

const uint32_t fhss_freq_list_868[] = {
    SX12XX_FREQ_MHZ_TO_REG(863.275),
    SX12XX_FREQ_MHZ_TO_REG(863.800),
    SX12XX_FREQ_MHZ_TO_REG(864.325),
    SX12XX_FREQ_MHZ_TO_REG(864.850),
    SX12XX_FREQ_MHZ_TO_REG(865.375),
    SX12XX_FREQ_MHZ_TO_REG(865.900),
    SX12XX_FREQ_MHZ_TO_REG(866.425),
    SX12XX_FREQ_MHZ_TO_REG(866.950),
    SX12XX_FREQ_MHZ_TO_REG(867.475),
    SX12XX_FREQ_MHZ_TO_REG(868.000),

    // SX12XX_FREQ_MHZ_TO_REG(868.525), // overlap with Alarmanlagen
    // SX12XX_FREQ_MHZ_TO_REG(869.050), // overlap with Alarmanlagen
    // SX12XX_FREQ_MHZ_TO_REG(869.575), // overlap with Alarmanlagen
};

const uint8_t fhss_bind_channel_list_868[] = {
    0, // just pick some
};

#endif
#ifdef FHSS_HAS_CONFIG_915_MHZ_FCC
// 902-928Mhz w/ 0.6MHz spacing means 26 / 0.6 = 43(.3) channels
// Start at 902.4MHz to use the middle of the frequency range

const uint32_t fhss_freq_list_915_fcc[] = {
    SX12XX_FREQ_MHZ_TO_REG(902.4),
    SX12XX_FREQ_MHZ_TO_REG(903.0),
    SX12XX_FREQ_MHZ_TO_REG(903.6),
    SX12XX_FREQ_MHZ_TO_REG(904.2),
    SX12XX_FREQ_MHZ_TO_REG(904.8),
    SX12XX_FREQ_MHZ_TO_REG(905.4),
    SX12XX_FREQ_MHZ_TO_REG(906.0),
    SX12XX_FREQ_MHZ_TO_REG(906.6),
    SX12XX_FREQ_MHZ_TO_REG(907.2),
    SX12XX_FREQ_MHZ_TO_REG(907.8),

    SX12XX_FREQ_MHZ_TO_REG(908.4),
    SX12XX_FREQ_MHZ_TO_REG(909.0),
    SX12XX_FREQ_MHZ_TO_REG(909.6),
    SX12XX_FREQ_MHZ_TO_REG(910.2),
    SX12XX_FREQ_MHZ_TO_REG(910.8),
    SX12XX_FREQ_MHZ_TO_REG(911.4),
    SX12XX_FREQ_MHZ_TO_REG(912.0),
    SX12XX_FREQ_MHZ_TO_REG(912.6),
    SX12XX_FREQ_MHZ_TO_REG(913.2),
    SX12XX_FREQ_MHZ_TO_REG(913.8),

    SX12XX_FREQ_MHZ_TO_REG(914.4),
    SX12XX_FREQ_MHZ_TO_REG(915.0),
    SX12XX_FREQ_MHZ_TO_REG(915.6),
    SX12XX_FREQ_MHZ_TO_REG(916.2),
    SX12XX_FREQ_MHZ_TO_REG(916.8),
    SX12XX_FREQ_MHZ_TO_REG(917.4),
    SX12XX_FREQ_MHZ_TO_REG(918.0),
    SX12XX_FREQ_MHZ_TO_REG(918.6),
    SX12XX_FREQ_MHZ_TO_REG(919.2),
    SX12XX_FREQ_MHZ_TO_REG(919.8),

    SX12XX_FREQ_MHZ_TO_REG(920.4),
    SX12XX_FREQ_MHZ_TO_REG(921.0),
    SX12XX_FREQ_MHZ_TO_REG(921.6),
    SX12XX_FREQ_MHZ_TO_REG(922.2),
    SX12XX_FREQ_MHZ_TO_REG(922.8),
    SX12XX_FREQ_MHZ_TO_REG(923.4),
    SX12XX_FREQ_MHZ_TO_REG(924.0),
    SX12XX_FREQ_MHZ_TO_REG(924.6),
    SX12XX_FREQ_MHZ_TO_REG(925.2),
    SX12XX_FREQ_MHZ_TO_REG(925.8),

    SX12XX_FREQ_MHZ_TO_REG(926.4),
    SX12XX_FREQ_MHZ_TO_REG(927.0),
    SX12XX_FREQ_MHZ_TO_REG(927.6),
};

const uint8_t fhss_bind_channel_list_915_fcc[] = {
    19 // just pick some
};

#endif
#ifdef FHSS_HAS_CONFIG_2P4_GHZ
// 2400.4 to 2449.4 in 1 MHz steps
// 50 Channels

const uint32_t fhss_freq_list_2p4[] = {
    SX1280_FREQ_GHZ_TO_REG(2.4004),
    SX1280_FREQ_GHZ_TO_REG(2.4014),
    SX1280_FREQ_GHZ_TO_REG(2.4024),
    SX1280_FREQ_GHZ_TO_REG(2.4034),
    SX1280_FREQ_GHZ_TO_REG(2.4044),
    SX1280_FREQ_GHZ_TO_REG(2.4054),
    SX1280_FREQ_GHZ_TO_REG(2.4064),
    SX1280_FREQ_GHZ_TO_REG(2.4074),
    SX1280_FREQ_GHZ_TO_REG(2.4084),
    SX1280_FREQ_GHZ_TO_REG(2.4094),

    SX1280_FREQ_GHZ_TO_REG(2.4104),
    SX1280_FREQ_GHZ_TO_REG(2.4114),
    SX1280_FREQ_GHZ_TO_REG(2.4124),
    SX1280_FREQ_GHZ_TO_REG(2.4134),
    SX1280_FREQ_GHZ_TO_REG(2.4144),
    SX1280_FREQ_GHZ_TO_REG(2.4154),
    SX1280_FREQ_GHZ_TO_REG(2.4164),
    SX1280_FREQ_GHZ_TO_REG(2.4174),
    SX1280_FREQ_GHZ_TO_REG(2.4184),
    SX1280_FREQ_GHZ_TO_REG(2.4194),

    SX1280_FREQ_GHZ_TO_REG(2.4204),
    SX1280_FREQ_GHZ_TO_REG(2.4214),
    SX1280_FREQ_GHZ_TO_REG(2.4224),
    SX1280_FREQ_GHZ_TO_REG(2.4234),
    SX1280_FREQ_GHZ_TO_REG(2.4244),
    SX1280_FREQ_GHZ_TO_REG(2.4254),
    SX1280_FREQ_GHZ_TO_REG(2.4264),
    SX1280_FREQ_GHZ_TO_REG(2.4274),
    SX1280_FREQ_GHZ_TO_REG(2.4284),
    SX1280_FREQ_GHZ_TO_REG(2.4294),
    
    SX1280_FREQ_GHZ_TO_REG(2.4304),
    SX1280_FREQ_GHZ_TO_REG(2.4314),
    SX1280_FREQ_GHZ_TO_REG(2.4324),
    SX1280_FREQ_GHZ_TO_REG(2.4334),
    SX1280_FREQ_GHZ_TO_REG(2.4344),
    SX1280_FREQ_GHZ_TO_REG(2.4354),
    SX1280_FREQ_GHZ_TO_REG(2.4364),
    SX1280_FREQ_GHZ_TO_REG(2.4374),
    SX1280_FREQ_GHZ_TO_REG(2.4384),
    SX1280_FREQ_GHZ_TO_REG(2.4394),
    
    SX1280_FREQ_GHZ_TO_REG(2.4404),
    SX1280_FREQ_GHZ_TO_REG(2.4414),
    SX1280_FREQ_GHZ_TO_REG(2.4424),
    SX1280_FREQ_GHZ_TO_REG(2.4434),
    SX1280_FREQ_GHZ_TO_REG(2.4444),
    SX1280_FREQ_GHZ_TO_REG(2.4454),
    SX1280_FREQ_GHZ_TO_REG(2.4464),
    SX1280_FREQ_GHZ_TO_REG(2.4474),
    SX1280_FREQ_GHZ_TO_REG(2.4484),
    SX1280_FREQ_GHZ_TO_REG(2.4494),
};

const uint8_t fhss_bind_channel_list_2p4[] = {
    5, 20, 35 // just pick some
};
#endif


//-------------------------------------------------------
// FHSS Class
//-------------------------------------------------------

typedef enum {
    FHSS_CONFIG_2P4_GHZ = 0,
    FHSS_CONFIG_915_MHZ_FCC,
    FHSS_CONFIG_868_MHZ,
    FHSS_CONFIG_433_MHZ,
    FHSS_CONFIG_70_CM_HAM,
    FHSS_CONFIG_NUM,
} FHSS_CONFIG_ENUM;


typedef struct {
    const uint32_t* freq_list;
    uint8_t freq_list_len;
    const uint8_t* bind_channel_list;
    uint8_t bind_channel_list_len;
} tFhssConfig;


// this must be in exactly the same order as FHSS_CONFIG_ENUM
const tFhssConfig fhss_config[] = {
#ifdef FHSS_HAS_CONFIG_2P4_GHZ
    {
        .freq_list = fhss_freq_list_2p4,
        .freq_list_len = (uint8_t)(sizeof(fhss_freq_list_2p4) / sizeof(uint32_t)),
        .bind_channel_list = fhss_bind_channel_list_2p4,
        .bind_channel_list_len = (uint8_t)(sizeof(fhss_bind_channel_list_2p4) / sizeof(uint8_t))
    },
#else
    { .freq_list = nullptr },
#endif
#ifdef FHSS_HAS_CONFIG_915_MHZ_FCC
    {
        .freq_list = fhss_freq_list_915_fcc,
        .freq_list_len = (uint8_t)(sizeof(fhss_freq_list_915_fcc) / sizeof(uint32_t)),
        .bind_channel_list = fhss_bind_channel_list_915_fcc,
        .bind_channel_list_len = (uint8_t)(sizeof(fhss_bind_channel_list_915_fcc) / sizeof(uint8_t))
    },
#else
    { .freq_list = nullptr },
#endif
#ifdef FHSS_HAS_CONFIG_868_MHZ
    {
        .freq_list = fhss_freq_list_868,
        .freq_list_len = (uint8_t)(sizeof(fhss_freq_list_868) / sizeof(uint32_t)),
        .bind_channel_list = fhss_bind_channel_list_868,
        .bind_channel_list_len = (uint8_t)(sizeof(fhss_bind_channel_list_868) / sizeof(uint8_t))
    },
#else
    { .freq_list = nullptr },
#endif
#ifdef FHSS_HAS_CONFIG_433_MHZ
    {
        .freq_list = fhss_freq_list_433,
        .freq_list_len = (uint8_t)(sizeof(fhss_freq_list_433) / sizeof(uint32_t)),
        .bind_channel_list = fhss_bind_channel_list_433,
        .bind_channel_list_len = (uint8_t)(sizeof(fhss_bind_channel_list_433) / sizeof(uint8_t))
    },
#else
    { .freq_list = nullptr },
#endif
#ifdef FHSS_HAS_CONFIG_70_CM_HAM
    {
        .freq_list = fhss_freq_list_70_cm_ham,
        .freq_list_len = (uint8_t)(sizeof(fhss_freq_list_70_cm_ham) / sizeof(uint32_t)),
        .bind_channel_list = fhss_bind_channel_list_70_cm_ham,
        .bind_channel_list_len = (uint8_t)(sizeof(fhss_bind_channel_list_70_cm_ham) / sizeof(uint8_t))
    },
#else
    { .freq_list = nullptr },
#endif
};


class FhssBase
{
  public:
    void Init(uint8_t fhss_num, uint32_t seed, uint8_t frequency_band)
    {
        if (fhss_num > FHSS_MAX_NUM) while (1) {} // should not happen, but play it safe

        switch (frequency_band) {
        case SETUP_FREQUENCY_BAND_2P4_GHZ: config_i = FHSS_CONFIG_2P4_GHZ; break;
        case SETUP_FREQUENCY_BAND_915_MHZ_FCC: config_i = FHSS_CONFIG_915_MHZ_FCC; break;
        case SETUP_FREQUENCY_BAND_868_MHZ: config_i = FHSS_CONFIG_868_MHZ; break;
        case SETUP_FREQUENCY_BAND_433_MHZ: config_i = FHSS_CONFIG_433_MHZ; break;
        case SETUP_FREQUENCY_BAND_70_CM_HAM: config_i = FHSS_CONFIG_70_CM_HAM; break;
        default:
            while (1) {} // should not happen, but play it safe
        }

        if (fhss_config[config_i].freq_list == nullptr) while (1) {} // should not happen, but play it safe

        fhss_freq_list = fhss_config[config_i].freq_list;
        FREQ_LIST_LEN = fhss_config[config_i].freq_list_len;
        fhss_bind_channel_list = fhss_config[config_i].bind_channel_list;
        BIND_CHANNEL_LIST_LEN = fhss_config[config_i].bind_channel_list_len;
        curr_bind_config_i = config_i; // we start with what setup suggests

        cnt = fhss_num;

        uint8_t cnt_max = (FREQ_LIST_LEN - BIND_CHANNEL_LIST_LEN);
        if (cnt > cnt_max) cnt = cnt_max;

        generate(seed);

        is_in_binding = false;

        curr_i = 0;
    }

    void Start(void)
    {
        curr_i = 0;
    }

    uint8_t Cnt(void)
    {
        return cnt;
    }

    uint8_t CurrI(void)
    {
        return curr_i;
    }

    uint32_t GetCurrFreq(void)
    {
        if (is_in_binding) {
            const uint32_t* curr_bind_freq_list = fhss_config[curr_bind_config_i].freq_list;
            const uint8_t* curr_bind_channel_list = fhss_config[curr_bind_config_i].bind_channel_list;
            return curr_bind_freq_list[curr_bind_channel_list[0]];
        }

        return fhss_list[curr_i];
    }

    void HopToNext(void)
    {
        curr_i++;
        if (curr_i >= cnt) curr_i = 0;
    }

    void SetToBind(uint16_t frame_rate_ms = 1) // preset so it is good for transmitter
    {
        is_in_binding = true;
        bind_listen_cnt = (5000 / frame_rate_ms); // should be 5 secs
        bind_listen_i = 0;
    }

    // only used by receiver, bool determines if it needs to switch back to LINK_STATE_RECEIVE
    bool HopToNextBind(void)
    {
        if (!is_in_binding) return false;

        bind_listen_i++;
        if (bind_listen_i >= bind_listen_cnt) {
            bind_listen_i = 0;
            // find next bind frequency
            uint8_t iii = curr_bind_config_i;
            for (uint8_t i = 0; i < FHSS_CONFIG_NUM; i++) { // we give it at most that much attempts
                iii++;
                if (iii >= FHSS_CONFIG_NUM) iii = 0;
                if (fhss_config[iii].freq_list != nullptr) { curr_bind_config_i = iii; return true; }
            }
        }

        return false;
    }

    // only used by receiver
    uint8_t GetCurrFrequencyBand(void)
    {
        switch (curr_bind_config_i) {
        case FHSS_CONFIG_2P4_GHZ: return SETUP_FREQUENCY_BAND_2P4_GHZ;
        case FHSS_CONFIG_915_MHZ_FCC: return SETUP_FREQUENCY_BAND_915_MHZ_FCC;
        case FHSS_CONFIG_868_MHZ: return SETUP_FREQUENCY_BAND_868_MHZ;
        case FHSS_CONFIG_433_MHZ: return SETUP_FREQUENCY_BAND_433_MHZ;
        case FHSS_CONFIG_70_CM_HAM: return SETUP_FREQUENCY_BAND_70_CM_HAM;
        }
        while (1) {} // should not happen, but play it safe
        return 0;
    }

    uint32_t bestX(void)
    {
        uint8_t i_best = 0;
        for (uint8_t i = 0; i < cnt; i++) {
          if (fhss_last_rssi[i] > fhss_last_rssi[i_best]) i_best = i;
        }

        curr_i = i_best;
        return fhss_list[curr_i];
    }

  private:
    uint32_t _seed;

    uint8_t config_i;
    uint8_t FREQ_LIST_LEN;
    const uint32_t* fhss_freq_list;
    uint8_t BIND_CHANNEL_LIST_LEN;
    const uint8_t* fhss_bind_channel_list;

    uint8_t curr_i;
    uint8_t cnt;
    uint8_t ch_list[FHSS_MAX_NUM]; // that's our list of randomly selected channels
    uint32_t fhss_list[FHSS_MAX_NUM]; // that's our list of randomly selected frequencies

    int8_t fhss_last_rssi[FHSS_MAX_NUM];

    bool is_in_binding;
    uint8_t curr_bind_config_i;
    uint16_t bind_listen_cnt;
    uint16_t bind_listen_i;

    uint16_t prng(void);
    void generate(uint32_t seed);
};


#endif // FHSS_H
