#ifndef TRANSMIT_CONTROL_IMPL_H
#define TRANSMIT_CONTROL_IMPL_H

#include "transmit_control_base.h"

class transmit_control_i;

class transmit_control_i : public transmit_control_base
{
    ENABLE_LOGGING
    public:
        transmit_control_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl);
        transmit_control_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, char *compDev);
        transmit_control_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities);
        transmit_control_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities, char *compDev);
        ~transmit_control_i();
        int serviceFunction();

    private:
        void _construct();
        void _set_transmit_enable(const std::string& id);
        void _set_audio_enable(const std::string& id);
};

#endif
