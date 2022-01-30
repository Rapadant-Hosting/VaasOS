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