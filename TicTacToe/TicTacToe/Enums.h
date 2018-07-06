#pragma once

class Enums {

public:

	enum AppState :int
	{
		APP_START = 2,
		APP_INITIALIZE = 4,
		EXIT_RUNLOOP = 12,
		RUNLOOP_CLOSED = 16
	};

	enum InputCommand :char
	{
		YES = 'y',
		NO = 'n',
		EXIT_APP = 'q',
		HELP = 'h',
		NEW_MATCH = 'm',
		ILLEGAL_CMD = 'I'
	};

};