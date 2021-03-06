#pragma once

#include <string>
#include <SDL_mixer.h>

class Sound
{

public:

	Sound();

	bool Load(const std::string& filename);
	void Unload();

	void SetVolume(int volume);

	void Play(int loop = 0);   //0 plays it once, 1 plays it twice, etc...
	void Stop();

private:

	Mix_Chunk* m_sound;

};

