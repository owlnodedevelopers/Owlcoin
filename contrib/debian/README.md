
Debian
====================
This directory contains files used to package owlcoind/owlcoin-qt
for Debian-based Linux systems. If you compile owlcoind/owlcoin-qt yourself, there are some useful files here.

## owlcoin: URI support ##


owlcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install owlcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your owlcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/owlcoin128.png` to `/usr/share/pixmaps`

owlcoin-qt.protocol (KDE)

