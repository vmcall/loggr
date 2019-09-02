#include "loggr.hpp"

int main()
{
	auto logger = loggr();


	logger.log("Handling jcc");
	logger.log_indented<2>("Patched hybrid", 4912);
	logger.log_indented<2>("Patched near", 1245);
	logger.log_indented<2>("Patched short", 9211);

	logger.log("Handling flags");
	logger.log_indented<2>("Patched", 1827);

	logger.log("Handling constants");
	logger.log_indented<2>("Patched", 7921);


	logger.log("Handling strings");

	fmt::print("test");
	logger.clear_line();

	logger.log_indented<2>("Decrypted", 4793);

	logger.log("Handling predicates");
	logger.log_indented<2>("Patched", 1425);




	while (true) {

		constexpr auto wait_time = 150;

		logger.clear_line();
		fmt::print("[|]");
		Sleep(wait_time);
		logger.clear_line();
		fmt::print("[/]");
		Sleep(wait_time);
		logger.clear_line();
		fmt::print("[-]");
		Sleep(wait_time);
		logger.clear_line();
		fmt::print("[\\]");
		Sleep(wait_time);
	}

	return 0;
}