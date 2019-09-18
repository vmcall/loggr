#include "loggr.hpp"
#include "spinner.hpp"

int main()
{
	auto logger = loggr();
	auto spin_object = spinner(&logger);

	spin_object.start();

	while (true) {

		spin_object.update();

		constexpr auto wait_time = 1;
		Sleep(wait_time);
	}

	return 0;
}