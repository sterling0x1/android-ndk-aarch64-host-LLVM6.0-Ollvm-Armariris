NDK Version: 17
LLVM Version: 6.0

This project was built and tested in Kali Nethunter environment, but in theory it should work in termux and/or any linux proot/chroot environment.
Possibly on Raspberry PI too as it is aarch64 aswell.

To use it, clone the git to kali nethunter main folder, or anywhere you want really within kali-arm64 filesystem.
your path should be: 
/data/local/nhsystem/kali-arm64/

so open keli terminal:

cd ..

git clone https://github.com/sterling0x1/android-ndk-aarch64-host-LLVM6.0-Ollvm-Armariris.git

You can also download the tarball and use the command added at release to unpack it.

add ndk to path, use terminal or filemanager. .bashrc is in your "root" folder.

cd

nano .bashrc

add this line to the bottom:

PATH="/usr/sbin:/usr/bin:/sbin:/bin:/system/xbin:/system/bin:/android-ndk-r17/"

restart your terminal session and you're good to go.

