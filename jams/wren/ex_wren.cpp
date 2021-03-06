
#include <wren/ex_wren.h>
#include <toy/toy.h>

#include <wren/Api.h>
#include <meta/wren/Module.h>

#ifdef _EX_WREN_EXE
int main(int argc, char *argv[])
{
	cstring example_path = TOY_RESOURCE_PATH "examples/ex_wren/";
	GameShell app(carray<cstring, 2>{ TOY_RESOURCE_PATH, example_path }, argc, argv);
	
	app.run_script(_wren::m(), "ex_wren.wren");
}
#endif
