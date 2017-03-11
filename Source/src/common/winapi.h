/*-----------------------------------------------------------------*\ 
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|    Source code          \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                      Projeto Ragnarok Online                      |
+-------------------------------------------------------------------+
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#pragma once


#define STRICT
#define NTDDI_VERSION NTDDI_WIN2K
#define _WIN32_WINNT  0x0500
#define WINVER        0x0500
#define _WIN32_IE     0x0600
#define WIN32_LEAN_AND_MEAN
#define NOCOMM
#define NOKANJI
#define NOHELP
#define NOMCX
#define NOCLIPBOARD
#define NOCOLOR
#define NONLS
#define NOMEMMGR
#define NOMETAFILE
#define NOOPENFILE
#define NOSERVICE
#define NOSOUND
#define NOTEXTMETRIC


#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <io.h>
#include <Windows.h>
#include <WinSock2.h>
#include <In6addr.h>
#include <Ws2tcpip.h>
#include <Mswsock.h>
#include <MMSystem.h>
