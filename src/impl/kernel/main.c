// Config
#define OS_BUILD "1002"
#define OS_EDITION "Ultimate"

// Common
#include "utilities.h"		// Utility functions such as printing to console and other things
//#include "cryptography.h"	// For volume decription, user security and other things
//#include "lzma.h"			// For compression functionality(for files and data)
//$include "protobuf.h"		// For using google protocal buffers in our OS(amazing stuff that REALLY helps make things easier to deal with)


// Filesystem Related
//#include "filesystem.h"	// For reading and writing files, managing volumes/drives
//#include "permissions.h"	// For Read/Write/Execute permissions for files


// User Interface
//#include "keyboard.h"		// For keyboard interaction(mouse doesn't matter, not yet anyways)
//#include "cli.h"			// For command line interaction


// Networking Related
//#include "networking.h"	// For communicating with other machines and internet usage
//#include "firewall.h"		// For setting up rules for networking.h(by default it blocks anything that is not hardcoded as IMPORTANT)
//#include "ftp.h"			// For FTP access to the filesystem(read/write perms)
//$include "ssh.h"			// For running commands on the os(execute perms)


// Application Related
//#include "scripting.h"	// For application development and single use scripts(based on lua)
//#include "taskmanager.h"	// For monitoring running processes
//#include "database.h"		// Our own inhouse database engine(NoSQL based, basically saved JSON tables using filesystem and with its own optionally dedicated cache)
//#include "texteditor.h"	// For editing files manually in ssh
//#include "webserver.h"	// Our own inhouse webserver application(servering webpages and handling requests)


// Entry point for the opperating system
void kernelMain() {
	for (int i = 1; i < 500; i++) {
		printClear();
		printSetColor(PRINT_COLOR_BLACK, PRINT_COLOR_BLACK);
		printString("\n");
	}

	printClear();
	printSetColor(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
	printString("VaasOS(x86_64) Kernel TM\nBuild: ");
	printString(OS_BUILD);
	printString("\nEdition: ");
	printString(OS_EDITION);
	printString("\nTodays Date & Time: ");

	// Handle kernel main functionality
}


