
#ifdef VERSION_STRING
	#define VER     " "VERSION_STRING
#else
	#define VER     ""
#endif


const char Version[]      = AUTHOR_STRING VER;
const char UART_Version[] = "UV-K5 Firmware, VK3QWP Edition, " AUTHOR_STRING VER "\r\n";

