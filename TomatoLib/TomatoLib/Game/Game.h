#pragma once
#ifndef __TL__GAME_H_
#define __TL__GAME_H_

#include "../Graphics/Render.h"

namespace TomatoLib {
	class Game {
	public:
		bool ShouldShutdown;
		Render RenderObject;

		virtual void Init();
		virtual void RegisterConsoleStuff();
		virtual void Quit();

		virtual void Update();
		virtual void Draw(Render& r);

		void EnterGameLoop();

		Game();
		~Game();
	};
}

#endif