#include <iostream>
#include "HTTPRequest.hpp"

using namespace std;

void client_test(int i) {
	http::Request request{ "http://localhost:8090/v1/addLine" };
	// send a get request
	while (1) {
		const auto response = request.send("GET", "10 20 30 40");
		std::cout << std::string{ response.body.begin(), response.body.end() } << '\n';
		Sleep(1000);
	}
}

int main() {
	client_test(1);

	system("pause");
	return 0;
}