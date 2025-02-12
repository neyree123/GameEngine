#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main( int argc, char** argv )
{
	printf("Entry Point for Game Engine \n");

	GameEngine::Log::init();
	GE_CORE_WARN("Initialized Log!");
	GE_CLIENT_INFO("Hello");

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif