#pragma once

#ifdef SX_PLATFORM_WINDOWS

extern Simulux::Application* Simulux::CreateApplication();

int main(int argc , char** argv)
{
	//printf("Simulux Engine :) \n");
	auto app = Simulux::CreateApplication();
	app->Run();
	delete app;
}

#endif