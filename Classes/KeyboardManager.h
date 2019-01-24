#ifndef KEYBOARD_MANAGER
#define KEYBOARD_MANAGER

#include <ctime>
#include "cocos2d.h"

namespace Retry {

enum class KeyCode;

class Keyboard abstract {
public:
	static void refresh(float delta);

	static void createListener(cocos2d::EventDispatcher* dispatcher, cocos2d::Node* node);

	static void updateKey(KeyCode key, bool isPressed);

	static bool isKeyPressed(KeyCode key);
	static bool isKeyDown(KeyCode key);
	static bool isKeyUp(KeyCode key);

	static float keyPressedDuration(KeyCode key);

	//KeyCode lastKeyPressed();

private:
	static std::unordered_map<KeyCode, clock_t> keys;
	static std::unordered_map<KeyCode, bool> keysLast;

	static clock_t currentTime;
	static char refreshCheck;
};

enum class KeyCode {
	NONE,
	PAUSE,
	SCROLL_LOCK,
	PRINT,
	SYSREQ,
	BREAK,
	ESCAPE,
	BACK = ESCAPE,
	BACKSPACE,
	TAB,
	BACK_TAB,
	RETURN,
	CAPS_LOCK,
	SHIFT,
	LEFT_SHIFT = SHIFT,
	RIGHT_SHIFT,
	CTRL,
	LEFT_CTRL = CTRL,
	RIGHT_CTRL,
	ALT,
	LEFT_ALT = ALT,
	RIGHT_ALT,
	MENU,
	HYPER,
	INSERT,
	HOME,
	PG_UP,
	DELETE,
	END,
	PG_DOWN,
	LEFT_ARROW,
	RIGHT_ARROW,
	UP_ARROW,
	DOWN_ARROW,
	NUM_LOCK,
	KP_PLUS,
	KP_MINUS,
	KP_MULTIPLY,
	KP_DIVIDE,
	KP_ENTER,
	KP_HOME,
	KP_UP,
	KP_PG_UP,
	KP_LEFT,
	KP_FIVE,
	KP_RIGHT,
	KP_END,
	KP_DOWN,
	KP_PG_DOWN,
	KP_INSERT,
	KP_DELETE,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	SPACE,
	EXCLAM,
	QUOTE,
	NUMBER,
	DOLLAR,
	PERCENT,
	CIRCUMFLEX,
	AMPERSAND,
	APOSTROPHE,
	LEFT_PARENTHESIS,
	RIGHT_PARENTHESIS,
	ASTERISK,
	PLUS,
	COMMA,
	MINUS,
	PERIOD,
	SLASH,
	KEY_0,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,
	COLON,
	SEMICOLON,
	LESS_THAN,
	EQUAL,
	GREATER_THAN,
	QUESTION,
	AT,
	CAPITAL_A,
	CAPITAL_B,
	CAPITAL_C,
	CAPITAL_D,
	CAPITAL_E,
	CAPITAL_F,
	CAPITAL_G,
	CAPITAL_H,
	CAPITAL_I,
	CAPITAL_J,
	CAPITAL_K,
	CAPITAL_L,
	CAPITAL_M,
	CAPITAL_N,
	CAPITAL_O,
	CAPITAL_P,
	CAPITAL_Q,
	CAPITAL_R,
	CAPITAL_S,
	CAPITAL_T,
	CAPITAL_U,
	CAPITAL_V,
	CAPITAL_W,
	CAPITAL_X,
	CAPITAL_Y,
	CAPITAL_Z,
	LEFT_BRACKET,
	BACK_SLASH,
	RIGHT_BRACKET,
	UNDERSCORE,
	GRAVE,
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	LEFT_BRACE,
	BAR,
	RIGHT_BRACE,
	TILDE,
	EURO,
	POUND,
	YEN,
	MIDDLE_DOT,
	SEARCH,
	DPAD_LEFT,
	DPAD_RIGHT,
	DPAD_UP,
	DPAD_DOWN,
	DPAD_CENTER,
	ENTER,
	PLAY
};
}

#endif