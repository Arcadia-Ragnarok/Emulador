#!/bin/sh

#####################################################################
#              ____                     _                           #
#             /    |                   | |_                         #
#            /     |_ __ ____  __ _  __| |_  __ _                   #
#           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  #
#          /  __   | | |  |__| (_| | (_| | | (_| |                  #
#         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  #
#        /__/   |__|  [ Ragnarok Emulator ]                         #
#                                                                   #
#####################################################################
#                  Idealizado por: Spell Master                     #
#####################################################################
# - Este código é livre para editar, redistribuir de acordo com os  #
# termos da GNU General Public License, publicada sobre conselho    #
# pela Free Software Foundation.                                    #
#                                                                   #
# - Qualquer ato de comercialização desse software está previsto    #
# em leis internacionais, junto com este(s) código(s) você recebeu  #
# uma cópia de licença de uso.                                      #
# - Caso não tenha recebido veja: http://www.gnu.org/licenses/      #
#####################################################################

do_fail() {
	echo 'Error writing output file'
	exit 1
}

cleanstring() {
	if [ "$( echo "x x" | sed -e 's/[[:space:]]//g' )" = "x x" ]; then
		# Workaround for non-POSIX-compliant systems that lack [[:space:]] (Solaris)
		echo "$@" | sed -e 's/"/ /g' -e 's/[ 	][ 	]*/ /g' -e 's/^[ 	]*//g' -e 's/[ 	]*$//g'
	else
		echo "$@" | sed -e 's/"/ /g' -e 's/[[:space:]][[:space:]]*/ /g' -e 's/^[[:space:]]*//g' -e 's/[[:space:]]*$//g'
	fi
}

if [ -z "$1" ]; then
	echo 'No output file specified'
	exit 1
fi

OUTFILE="$1"
shift

if ! touch "$OUTFILE"; then
	echo 'Cannot create output file'
	exit 1
fi

YEAR="$(date +%Y)"
cat > "$OUTFILE" << EOF
/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
|                  Idealizado por: Spell Master                     |
+-------------------------------------------------------------------+
| - Este código é livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercialização desse software está previsto    |
| em leis internacionais, junto com este(s) código(s) você recebeu  |
| uma cópia de licença de uso.                                      |
| - Caso não tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

// This file was automatically generated. Any edit to it will be lost.

EOF
[ $? -eq 0 ] || do_fail

ARCADIA_PLATFORM="$( uname -s )"
ARCADIA_CORES="0"
ARCADIA_CPU="Unknown"

case $ARCADIA_PLATFORM in
	Linux)
		DIST=''
		DESCRIPTION=''
		REV=''

		if type lsb_release >/dev/null 2>&1; then
			LSBINFO="$( lsb_release -a 2>/dev/null )"
			DIST="$( cleanstring "$( echo "$LSBINFO" | grep '^Distributor ID:' | cut -d: -f2- )" )"
			DESCRIPTION="$( echo "$LSBINFO" | grep '^Description:' | cut -d: -f2- | sed 's/Enterprise Linux Enterprise Linux/Oracle Linux/' )"
		fi

		if [ -z "$DIST" ] || [ "$DIST" = "Gentoo" ]; then
			if [ -f /etc/gentoo-release ]; then
				# "Gentoo Base System release 2.2"
				DIST='Gentoo'
				DESCRIPTION="$( head -n 1 /etc/gentoo-release )"
				REV=''
			elif [ -f /etc/arch-release ]; then
				# empty release file
				DIST='ArchLinux'
				DESCRIPTION=''
				REV=''
			elif [ -f /etc/vmware-release ]; then
				# "VMware ESX Server 3" or "VMware ESX 4.0 (Kandinsky)"
				DIST="VMWare"
				DESCRIPTION="$( head -n 1 /etc/vmware-release )"
				REV=''
			elif [ -f /etc/debian_version ]; then
				# "wheezy/sid"
				DIST="Debian"
				DESCRIPTION="Debian GNU/Linux $( head -n 1 /etc/debian_version )"
				REV=''
			elif [ -f /etc/fedora-release ]; then
				# "Fedora release 9 (Sulphur)"
				DIST="Fedora"
				DESCRIPTION="$( head -n 1 /etc/fedora-release )"
				REV=''
			elif [ -f /etc/knoppix_version ]; then
				# "3.2 2003-04-15"
				DIST="Knoppix"
				REV="Knoppix GNU/Linux $( head -n 1 /etc/knoppix_version )"
				DESCRIPTION=''
			elif [ -f /etc/mandriva-release ]; then
				# "Mandriva Linux release 2010.1 (Official) for x86_64"
				DIST="Mandriva"
				DESCRIPTION="$( head -n 1 /etc/mandriva-release )"
				REV=''
			elif [ -f /etc/mandrake-release ]; then
				# "Mandrakelinux release 10.1 (Community) for i586"
				DIST="Mandrake"
				DESCRIPTION="$( head -n 1 /etc/mandrake-release )"
				REV=''
			elif [ -f /etc/oracle-release ]; then
				# "Oracle Linux Server release 6.3"
				DIST="Oracle"
				DESCRIPTION="$( head -n 1 /etc/oracle-release )"
				REV=''
			elif [ -f /etc/centos-release ]; then
				# "CentOS Linux release 6.0 (Final)"
				DIST="CentOS"
				DESCRIPTION="$( head -n 1 /etc/centos-release )"
				REV=''
			elif [ -f /etc/redhat-release ]; then
				# "Red Hat Enterprise Linux Server release 5 (Tikanga)"
				DIST="RedHat"
				DESCRIPTION="$( head -n 1 /etc/redhat-release )"
				REV=''
			elif [ -f /etc/slackware-version ]; then
				DIST="Slackware"
				DESCRIPTION="$( head -n 1 /etc/slackware-version )"
				REV=''
			elif [ -f /etc/slackware-release ]; then
				DIST="Slackware"
				DESCRIPTION="$( head -n 1 /etc/slackware-release )"
				REV=''
			elif [ -f /etc/SuSE-release ]; then
				# "SUSE Linux Enterprise Server 11 (x86_64)"
				# Note: it may contain several extra lines
				DIST="SuSE"
				DESCRIPTION="$( head -n 1 /etc/SuSE-release )"
				REV=''
			elif [ -f /etc/trustix-release ]; then
				# "Trustix Secure Linux release 2.0 (Cloud)"
				DIST="Trustix"
				DESCRIPTION="$( head -n 1 /etc/trustix-release )"
				REV=''
			else
				DIST='Unknown'
				DESCRIPTION=''
				REV=''
			fi
		fi
		if [ -n "$DESCRIPTION" ]; then
			DIST="$DESCRIPTION"
		fi
		ARCADIA_OSVERSION="$DIST"

		ARCADIA_CPU="$( cat /proc/cpuinfo | grep "model name" | head -n 1 | cut -d: -f2- )"
		ARCADIA_CORES="$( grep '^processor' /proc/cpuinfo | wc -l )"
		;;
	Darwin)
		ARCADIA_PLATFORM="Mac OS X"
		if type sw_vers >/dev/null 2>&1; then
			ARCADIA_OSVERSION="$( sw_vers -productName ) $( sw_vers -productVersion ) $( sw_vers -buildVersion )"
		else
			ARCADIA_OSVERSION="Unknown"
		fi
		if type system_profiler >/dev/null 2>&1; then
			HWDATA="$( system_profiler SPHardwareDataType )"
			HWDATA_CPU="$( echo "$HWDATA" | grep "Processor Name:" | cut -d: -f2- )"
			HWDATA_CPUSPEED="$( cleanstring "$( echo "$HWDATA" | grep "Processor Speed:" | cut -d: -f2- )" )"
			ARCADIA_CORES="$( echo "$HWDATA" | grep "Total Number of Cores:" | cut -d: -f2- )"
			ARCADIA_CPU="${HWDATA_CPU} (${HWDATA_CPUSPEED})"
		fi
		;;
	SunOS)
		ARCADIA_PLATFORM="Solaris"
		ARCADIA_OSVERSION="${ARCADIA_PLATFORM} $( uname -r ) ($( uname -p) $(uname -v))"
		;;
	AIX)
		ARCADIA_OSVERSION="AIX $( oslevel ) ($(`oslevel -r`))"
		;;
	CYGWIN*)
		ARCADIA_PLATFORM="Cygwin Windows"
		ARCADIA_OSVERSION="$( cleanstring "$( uname -s )" )"
		ARCADIA_CPU="$( cat /proc/cpuinfo | grep "model name" | head -n 1 | cut -d: -f2- )"
		ARCADIA_CORES="$( grep '^processor' /proc/cpuinfo | wc -l )"
		;;
	OpenBSD)
		ARCADIA_OSVERSION="${ARCADIA_PLATFORM} $( uname -r ) ($( uname -p) $(uname -v))"
		ARCADIA_CPU="$( sysctl hw.model | cut -d= -f2- )"
		ARCADIA_CORES="$( sysctl hw.ncpu | cut -d= -f2- )"
		;;
	FreeBSD)
		ARCADIA_OSVERSION="${ARCADIA_PLATFORM} $( uname -r ) ($( uname -p))"
		ARCADIA_CPU="$( sysctl hw.model | cut -d: -f2- )"
		ARCADIA_CORES="$( sysctl hw.ncpu | cut -d: -f2- )"
		;;
	NetBSD)
		ARCADIA_OSVERSION="${ARCADIA_PLATFORM} $( uname -r ) ($( uname -p))"
		ARCADIA_CPU="$( sysctl hw.model | cut -d= -f2- )"
		ARCADIA_CORES="$( sysctl hw.ncpu | cut -d= -f2- )"
		;;
	*)
		ARCADIA_OSVERSION="Unknown"
		;;
esac

cat >> "$OUTFILE" << EOF
// Platform (uname -s)
#define SYSINFO_PLATFORM "$( cleanstring "${ARCADIA_PLATFORM}" )"

// Operating System version (Platform-dependent)
#define SYSINFO_OSVERSION "$( cleanstring "${ARCADIA_OSVERSION}" )"

// CPU Model (Platform-dependent)
#define SYSINFO_CPU "$( cleanstring "${ARCADIA_CPU}" )"

// CPU Cores (Platform-dependent)
#define SYSINFO_CPUCORES ( $( cleanstring "${ARCADIA_CORES}" ) )

EOF
[ $? -eq 0 ] || do_fail

ARCADIA_ARCH="$( uname -m )"

cat >> "$OUTFILE" << EOF
// OS Architecture (uname -m)
#define SYSINFO_ARCH "$( cleanstring "${ARCADIA_ARCH}" )"

EOF
[ $? -eq 0 ] || do_fail

ARCADIA_CFLAGS="$@"
ARCADIA_CFLAGS="$( echo "${ARCADIA_CFLAGS}" | sed 's/"//g' )"

cat >> "$OUTFILE" << EOF
// Compiler Flags
#define SYSINFO_CFLAGS "$( cleanstring "${ARCADIA_CFLAGS}" )"

EOF
[ $? -eq 0 ] || do_fail

ARCADIA_VCSREV=""
if [ -d .git ]; then
	ARCADIA_VCSTYPE="VCSTYPE_GIT"
	if type git >/dev/null 2>&1; then
		ARCADIA_VCSREV="$( git rev-parse HEAD )"
	else
		ARCADIA_VCSREV="Unknown"
	fi
elif [ -d .svn ]; then
	ARCADIA_VCSTYPE="VCSTYPE_SVN"
	if type svnversion >/dev/null 2>&1; then
		ARCADIA_VCSREV="$( svnversion )"
	else
		ARCADIA_VCSREV="Unknown"
	fi
else
	ARCADIA_VCSTYPE="VCSTYPE_NONE"
fi

cat >> "$OUTFILE" << EOF
// VCS Type
#define SYSINFO_VCSTYPE ${ARCADIA_VCSTYPE}

// VCS Revision
#define SYSINFO_VCSREV "$( cleanstring "${ARCADIA_VCSREV}" )"

EOF
[ $? -eq 0 ] || do_fail

