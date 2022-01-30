## Introduction
So before getting into this thing fully, this OS will need to be altered to be built as C++ instead of C, but I'm not bothering with that right now. This needs to be done for convenience, that and I prefer writing with OOP stuff instead(I'm sure many others would agree aswell) This should make things not only easier for continuing this project but also make it easier for others to extend the OS further a bit easier.

I want this OS to be easy to work with both for me and others. This doesn't mean I'll support every feature everybody wants however. Stuff that I personally don't see as having a purpose anymore(ancient network protocals, fax and printer support) won't get any features from me. I also won't be doing anything regarding GPUs, as this is mostly meant for server use. You can add this sort of thing in yourself later, if you want it can also be a package for the main OS itself that people can enable during install. But as for me, CLI with basic stuff is perfect enough.


## Features
	- Boots up
	- Prints OS info
	- Litterally nothing else


## Todo List:
	- Networking
	- Utilities
	- Interface
	- FTP/SSH
	- Storage Management
	- Storage Permissions(rwx)
	- User Permissions and login stuff
	- Firewall
	- Taskmanager
	- Possibly a web interface
	- Linux App Compatibility(for handling apps originally meant for linux, might not support everything but hopefully should support the essentials such as gameservers, webservers, mysql, redis and maybe its own database solution)
	- Custom Database Solution
	- Custom Webserver Solution
	- hardware support stuff???(network cards, ram drives, maybe NVMe drives? Not 100% sure yet but hopefully I don't have to write too many drivers. Might also make a way to where if people need new drivers its not TOO hard to make them?)


## Prerequisites
	- [Docker](https://www.docker.com/) for creating our build-environment.
	- [Qemu](https://www.qemu.org/) for emulating our operating system.
		- Remember to add Qemu to the path so that you can access it from your command-line. ([Windows instructions here](https://dev.to/whaleshark271/using-qemu-on-windows-10-home-edition-4062))


## Setup build-environment:
	- `docker build buildenv -t vaasos-buildenv`


## Enter build environment:
	- Windows (CMD): `docker run --rm -it -v "%cd%":/root/env vaasos-buildenv`


## Build for x86 (other architectures may come in the future):
	- `make build-x86_64`
		- If you are using Qemu, please close it before running this command to prevent errors.


## To leave the build environment, enter `exit`.


## Emulate operating system using QEMU
	- `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
		- Note: Close the emulator when finished, so as to not block writing to `kernel.iso` for future builds.

Alternatively, you should be able to load the operating system on a USB drive and boot into it when you turn on your computer. (I haven't actually tested this yet.)


## Cleanup
Remove the build-evironment image:
	- `docker rmi vaasos-buildenv -f`


## Notes:
	- https://www.youtube.com/watch?v=1rnA6wpF0o4&list=PLHh55M_Kq4OApWScZyPl5HhgsTJS9MZ6M
	- https://www.youtube.com/watch?v=MwPjvJ9ulSc
