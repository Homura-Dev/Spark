#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Spark::Application* Spark::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hazel Engine launched.\n");
	auto app = Spark::CreateApplication();
	app->Run();
	delete app;

}

#endif
