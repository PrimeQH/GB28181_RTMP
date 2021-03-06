#pragma once
#include <string>

enum PTZ
{
	ZOOMIN,
	ZOOMOUT,
	UP,
	DOWN,
	LEFT,
	RIGHT,
};

// ptz str -> enum PTZ
PTZ ptzconvert(std::string x);

PTZ ptzconvert(const char* x);

// unused
/*
#define PTZ_Zoomin		"10"
#define PTZ_Zoomout		"20"
#define PTZ_Up			"08"
#define PTZ_Down		"04"
#define PTZ_Left		"02"
#define PTZ_Right		"01"

#define PTZ_CMD_HEAD	"A5"
*/
#define VERSION			0
