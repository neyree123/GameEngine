#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main( int argc, char** argv )
{
	printf("Entry Point for Game Engine \n");

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif