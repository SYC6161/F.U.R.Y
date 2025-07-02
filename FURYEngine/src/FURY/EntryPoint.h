#pragma once

#ifdef FURY_PLATFORM_WINDOWS

extern  FURY::Application* FURY::CreateApplication();

int main(int argc,char** argv)
{
	printf("F.U.R.Y engine initialized \n");
	auto app = FURY::CreateApplication();
	app->Run();
	delete app;

}

#endif