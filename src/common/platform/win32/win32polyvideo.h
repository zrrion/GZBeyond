#pragma once

#include "win32basevideo.h"
#include "c_cvars.h"
#include "poly_framebuffer.h"

EXTERN_CVAR(Bool, vid_fullscreen)

class Win32PolyVideo : public Win32BaseVideo
{
public:
	void Shutdown() override
	{
	}

	DFrameBuffer *CreateFrameBuffer(bool fullscreen) override
	{
		auto fb = new PolyFrameBuffer(m_hMonitor, fullscreen);
		return fb;
	}
};
