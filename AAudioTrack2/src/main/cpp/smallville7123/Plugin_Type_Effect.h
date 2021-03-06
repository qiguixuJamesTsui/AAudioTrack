//
// Created by matthew good on 28/11/20.
//

#ifndef AAUDIOTRACK_PLUGIN_TYPE_EFFECT_H
#define AAUDIOTRACK_PLUGIN_TYPE_EFFECT_H

#include "Plugin_Base.h"

class Plugin_Type_Effect : public Plugin_Base {
public:
    virtual bool requires_sample_count() override {
        return Plugin_Base::requires_sample_count();
    }

    virtual bool requires_mixer() override {
        return Plugin_Base::requires_mixer();
    }

    virtual int write(HostInfo *hostInfo, PortUtils2 *in, Plugin_Base *mixer, PortUtils2 *out,
                      unsigned int samples) override {
        return Plugin_Base::write(hostInfo, in, mixer, out, samples);
    }

    virtual void stopPlayback() override {
        Plugin_Base::stopPlayback();
    }
};

#endif //AAUDIOTRACK_PLUGIN_TYPE_EFFECT_H
