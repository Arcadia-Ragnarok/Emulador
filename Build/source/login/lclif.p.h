/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|                                                |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Athena & Hercules                                    |
| - Copyright: Spell master (Source Mod)                            |
\*-----------------------------------------------------------------*/

#ifndef LOGIN_LCLIF_P_H
#define LOGIN_LCLIF_P_H

/** @file
 * Private header for the login client interface.
 */

#include "login/lclif.h"

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/mmo.h"

/* Definitions and macros */
/// Maximum amount of packets processed at once from the same client
#ifndef MAX_PROCESSED_PACKETS
#define MAX_PROCESSED_PACKETS (3)
#endif

// Packet DB
#ifndef MIN_PACKET_DB
#define MIN_PACKET_DB 0x0064
#endif
#ifndef MAX_PACKET_LOGIN_DB
#define MAX_PACKET_LOGIN_DB 0x0ad0
#endif

/**
 * Login Client Interface additional data
 */
struct lclif_interface_dbs {
	struct login_packet_db packet_db[MAX_PACKET_LOGIN_DB + 1]; ///< Packet database.
};

/**
 * Login Client Interface Private Interface
 */
struct lclif_interface_private {
	struct lclif_interface_dbs *dbs;

	/**
	 * Populates the packet database.
	 */
	void (*packetdb_loaddb)(void);

	/**
	 * Attempts to validate and parse a received packet.
	 *
	 * @param fd  Client connection file descriptor.
	 * @param sd  Session data.
	 * @return Parse result error code.
	 */
	enum parsefunc_rcode (*parse_sub)(int fd, struct login_session_data *sd);

	LoginParseFunc *parse_CA_CONNECT_INFO_CHANGED; ///< Packet handler for #PACKET_CA_CONNECT_INFO_CHANGED.
	LoginParseFunc *parse_CA_EXE_HASHCHECK;        ///< Packet handler for #PACKET_CA_EXE_HASHCHECK.
	LoginParseFunc *parse_CA_LOGIN;                ///< Packet handler for #PACKET_CA_LOGIN.
	LoginParseFunc *parse_CA_LOGIN2;               ///< Packet handler for #PACKET_CA_LOGIN2.
	LoginParseFunc *parse_CA_LOGIN3;               ///< Packet handler for #PACKET_CA_LOGIN3.
	LoginParseFunc *parse_CA_LOGIN4;               ///< Packet handler for #PACKET_CA_LOGIN4.
	LoginParseFunc *parse_CA_LOGIN_PCBANG;         ///< Packet handler for #PACKET_CA_LOGIN_PCBANG.
	LoginParseFunc *parse_CA_LOGIN_HAN;            ///< Packet handler for #PACKET_CA_LOGIN_HAN.
	LoginParseFunc *parse_CA_SSO_LOGIN_REQ;        ///< Packet handler for #PACKET_CA_SSO_LOGIN_REQ.
	LoginParseFunc *parse_CA_LOGIN_OTP;            ///< Packet handler for #PACKET_CA_LOGIN_OTP.
	LoginParseFunc *parse_CA_ACK_MOBILE_OTP;       ///< Packet handler for #PACKET_CA_ACK_MOBILE_OTP.
	LoginParseFunc *parse_CA_OTP_CODE;             ///< Packet handler for #PACKET_CA_OTP_CODE.
	LoginParseFunc *parse_CA_REQ_HASH;             ///< Packet handler for #PACKET_CA_REQ_HASH.
	LoginParseFunc *parse_CA_CHARSERVERCONNECT;    ///< Packet handler for #PACKET_CA_CHARSERVERCONNECT.
};

#endif // LOGIN_LCLIF_P_H
