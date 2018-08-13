/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|      Source Script                             |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Emulator                                    |
| - Copyright: Athena (Original Emulator)                           |
\*-----------------------------------------------------------------*/

#ifndef MAP_MESSAGES_ZERO_H
#define MAP_MESSAGES_ZERO_H

/*
Latest version: 20180725
*/

enum clif_messages {
/*20171018 to latest
ë™ì˜ í•˜ì‹­ë‹ˆê¹Œ?
Do you agree?
*/
	MSG_DO_YOU_AGREE = 0x0,
/*20171018 to latest
ì„œë²„ ì—°ê²° ì‹¤íŒ¨
Failed to Connect to Server.
*/
	MSG_SERVER_CONNECTION_FAILED = 0x1,
/*20171018 to latest
ì„œë²„ì™€ ì—°ê²°ì´ ëŠì–´ì¡ŒìŠµë‹ˆë‹¤.
Disconnected from Server.
*/
	MSG_UNABLE_TO_CONNECT_SERVER = 0x2,
/*20171018 to latest
ì„œë²„ì™€ ì—°ê²°ì´ ëŠì–´ì¡ŒìŠµë‹ˆë‹¤!
Disconnected from Server!
*/
	MSG_BANNED = 0x3,
/*20171018 to latest
ì„œë²„ ì¢…ë£Œë¨
Server Closed.
*/
	MSG_SERVER_OFF = 0x4,
/*20171018 to latest
ê°™ì€ ê³„ì •ìœ¼ë¡œ ë‹¤ë¥¸ ì‚¬ìš©ìžê°€ ë¡œê·¸ì¸ í•˜ì˜€ìŠµë‹ˆë‹¤.
Someone has Logged in with this ID.
*/
	MSG_DOUBLE_LOGIN_PROHIBITED = 0x5,
/*20171018 to latest
ë“±ë¡ë˜ì§€ ì•Šì€ ê³„ì •ìž…ë‹ˆë‹¤. ë‹¤ì‹œ í™•ì¸ ë°”ëžë‹ˆë‹¤.
Unregistered ID. Please make sure you have a registered account and you have correctly typed in the user ID.
*/
	MSG_INCORRECT_USERID = 0x6,
/*20171018 to latest
ìž…ë ¥í•˜ì‹  ë¹„ë°€ë²ˆí˜¸ê°€ ì˜¬ë°”ë¥´ì§€ ì•ŠìŠµë‹ˆë‹¤.
Incorrect User ID or Password. Please try again.
*/
	MSG_INCORRECT_PASSWORD = 0x7,
/*20171018 to latest
ë³¸ ID ëŠ” ì‚¬ìš©ê¸°ê°„ì´ ë§Œë£Œ ë˜ì—ˆìŠµë‹ˆë‹¤
This ID is expired.
*/
	MSG_ID_EXPIRED = 0x8,
/*20171018 to latest
ì„œë²„ ì ‘ê·¼ ê±°ë¶€
Rejected from Server.
20171117 to 20171117
2017ë…„ 11ì›” 20ì¼ 11:00 ë¶€í„° ì ‘ì†ì´ ê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ACCESS_DENIED = 0x9,
/*20171018 to latest
ê°™ì€ ìºë¦­í„° ì´ë¦„ì´ ìžˆìŠµë‹ˆë‹¤.
Character Name already exists.
*/
	MSG_CHARACTER_NAME_ALREADY_EXISTS = 0xa,
/*20171018 to latest
ìºë¦­í„° ìƒì„± ê±°ë¶€ë¨
Character Creation is denied.
*/
	MSG_CHARACTER_CREATION_DENIED = 0xb,
/*20171018 to latest
ìºë¦­í„° ì‚­ì œ ê±°ë¶€
Character Deletion is denied.
*/
	MSG_CANNOT_DELETE_CHARACTER = 0xc,
/*20171018 to latest
ë°©ì œëª©ë¥¼ ìž…ë ¥í•˜ì„¸ìš”.
Please Enter Room Title.
*/
	MSG_ENTER_ROOM_TITLE = 0xd,
/*20171018 to latest
ë¶ˆëŸ‰ë‹¨ì–´ê°€ ê²€ì¶œë˜ì—ˆìŠµë‹ˆë‹¤.
Foul Language Detected.
*/
	MSG_BAD_SENTANGE = 0xe,
/*20171018 to latest
ì•”í˜¸ë¥¼ ìž…ë ¥í•˜ì„¸ìš”.
Please enter Password.
*/
	MSG_ENTER_PASSWORD = 0xf,
/*20171018 to latest
ì•”í˜¸ë¥¼ ì˜ë¬¸ 4ìž ì´ìƒ ìž…ë ¥í•˜ì„¸ìš”.
Please enter Password. Passwords must be at least 4 characters long.
*/
	MSG_Enter_Password_more_than_4_char = 0x10,
/*20171018 to latest
ì¢…ë£Œ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure that you want to quit?
*/
	MSG_DO_YOU_REALLY_WANT_TO_QUIT = 0x11,
/*20171018 to latest
4ìž ì´ìƒ ìž…ë ¥í•´ì£¼ì„¸ìš”. ì‚¬ìš©ìž ê³„ì •ì´ ì—†ìœ¼ì‹ ë¶„ë“¤ì€ ì™¼ìª½ í•˜ë‹¨ì˜ [ì‹ ì²­] ë²„íŠ¼ì„ ëˆŒëŸ¬ ê³„ì •ì„ ë§Œë“œì‹œê¸° ë°”ëžë‹ˆë‹¤.
Passwords are at least 4 characters long. Please try again.
*/
	MSG_NAME_MUST_EXCEED_4_CHAR = 0x12,
/*20171018 to latest
í•œ ë²ˆ ì‚­ì œëœ ìºë¦­í„° ë° ê´€ë ¨ ì •ë³´ëŠ”      ë‹¤ì‹œ ë³µêµ¬ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.                                 ìºë¦­í„°ë¥¼ ì‚­ì œí•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure that you want to delete this character?
*/
	MSG_DELETE_CHARACTER = 0x13,
/*20171018 to latest
ë¶ˆëŸ‰ë‹¨ì–´ê°€ ê²€ì¶œë˜ì—ˆìŠµë‹ˆë‹¤.
Foul Language Detected.
*/
	MSG_BAD_NAME = 0x14,
/*20171018 to latest
ì´ë¦„ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”.(í•œê¸€ 2ìž ì˜ë¬¸ 4ìž ì´ìƒ)
Character Name must be at least 4 characters long.
*/
	MSG_ENTER_NAME_MORE_THAN_4_CHAR = 0x15,
/*20171018 to latest
ëª…ë ¹ì–´ ì¼ëžŒ: /h
Command List: /h | /help
*/
	MSG_LIST_COMMAND = 0x16,
/*20171018 to latest
ì´íŽ™íŠ¸ On
Effects On
*/
	MSG_EFFECT_ON = 0x17,
/*20171018 to latest
ì´íŽ™íŠ¸ Off
Effects Off
*/
	MSG_EFFECT_OFF = 0x18,
/*20171018 to latest
ì‚¬ìš´ë“œ ë³¼ë¥¨
Sound Volume
*/
	MSG_VOLUME_OF_SOUND = 0x19,
/*20171018 to latest
ë°°ê²½ìŒì•… ë³¼ë¥¨
BGM Volume
*/
	MSG_VOLUME_OF_BGM = 0x1a,
/*20171018 to latest
íš¨ê³¼ìŒ On
Sound Effects On
*/
	MSG_SOUND_ON = 0x1b,
/*20171018 to latest
íš¨ê³¼ìŒ Off
Sound Effects Off
*/
	MSG_SOUND_OFF = 0x1c,
/*20171018 to latest
í”„ë ˆìž„ìŠ¤í‚µ On
Frame Skip On
*/
	MSG_FRAME_SKIP_ON = 0x1d,
/*20171018 to latest
í”„ë ˆìž„ìŠ¤í‚µ Off
Frame Skip Off
*/
	MSG_FRAME_SKIP_OFF = 0x1e,
/*20171018 to latest
ë°°ê²½ìŒì•… On
BGM On
*/
	MSG_BGM_ON = 0x1f,
/*20171018 to latest
ë°°ê²½ìŒì•… Off
BGM Off
*/
	MSG_BGM_OFF = 0x20,
/*20171018 to latest
/h or /help: ëª…ë ¹ì–´ ì¼ëžŒ
/h or /help: Shows this Command Help List
*/
	MSG_EXPLAIN_HELP = 0x21,
/*20171018 to latest
/w or /who or /ì ‘ì†ìž or /ëˆ„êµ¬: í˜„ìž¬ ì ‘ì†ìžìˆ˜ ë³´ê¸°
/w or /who or /player or /who: wiew current the number of player
*/
	MSG_EXPLAIN_WHO = 0x22,
/*20171018 to latest
/ìŒì•… : ë°°ê²½ìŒì•… On Off
/music: Turns BGM On or Off
*/
	MSG_EXPLAIN_MUSIC = 0x23,
/*20171018 to latest
/íš¨ê³¼ìŒ : íš¨ê³¼ìŒ On Off
/sound: Turns Sound Effects On or Off
*/
	MSG_EXPLAIN_SOUND = 0x24,
/*20171018 to latest
/ì´íŽ™íŠ¸ : ì´íŽ™íŠ¸ On Off
/effect: Effects On or Off
*/
	MSG_EXPLAIN_EFFECT = 0x25,
/*20171018 to latest
/ì¢Œí‘œ or /ìž¥ì†Œ: í˜„ìž¬ ìœ„ì¹˜ í‘œì‹œ
/where: Shows your present location
*/
	MSG_EXPLAIN_POS = 0x26,
/*20171018 to latest
/skip : í”„ëž˜ìž„ìŠ¤í‚µ On Off
/skip: Turns Frame Skip On or Off
*/
	MSG_EXPLAIN_FRAMESKIP = 0x27,
/*20171018 to latest
/v (0~127): íš¨ê³¼ìŒ ë³¼ë¥¨ì¡°ì •
/v (0~127): Controls the volume of the Sound Effects
*/
	MSG_EXPLAIN_SOUNDVOLUME = 0x28,
/*20171018 to latest
/bv (0~127): ë°°ê²½ìŒì•… ë³¼ë¥¨ì¡°ì •
/bv (0~127): Controls the volume of the BGM
*/
	MSG_EXPLAIN_BGMVOLUME = 0x29,
/*20171018 to latest
/ex (ìºë¦­í„°ì´ë¦„) or /ì°¨ë‹¨ (ìºë¦­í„°ì´ë¦„) : í•´ë‹¹ìºë¦­í„°ì— ëŒ€í•´ ê·“ë§ì°¨ë‹¨
/ex (Character Name): Blocks whispering from the Character
*/
	MSG_EXPLAIN_SAYISOLATION = 0x2a,
/*20171018 to latest
/ex or /ì°¨ë‹¨ : ê·“ë§ì°¨ë‹¨ ìºë¦­í„° ë¦¬ìŠ¤íŠ¸
/ex: View a list of Characters you have Blocked
*/
	MSG_EXPLAIN_LIST_SAYISOLATION_CHAR = 0x2b,
/*20171018 to latest
/in (ìºë¦­í„°ì´ë¦„) or /í•´ì œ (ìºë¦­í„°ì´ë¦„) : í•´ë‹¹ìºë¦­í„°ì— ëŒ€í•´ ê·“ë§í—ˆìš©
/in (Character Name): Allows whispering from the Character
*/
	MSG_EXPLAIN_SAY_PERMIT = 0x2c,
/*20171018 to latest
/inall or /í•´ì œì „ë¶€ : ëª¨ë‘ì—ê²Œ ê·“ë§í—ˆìš©
/inall: Allows whispers from anyone
*/
	MSG_EXPLAIN_SAY_PERMITALL = 0x2d,
/*20171018 to latest
/exall or /ì°¨ë‹¨ì „ë¶€ : ëª¨ë‘ì—ê²Œ ê·“ë§ì°¨ë‹¨
/exall: Blocks whispers from everyone
*/
	MSG_EXPLAIN_SAY_ISOLATEALL = 0x2e,
/*20171018 to latest
ë‹¤ë¥¸ìœ ì € ìºë¦­í„°ë¥¼ ë§ˆìš°ìŠ¤ ì˜¤ë¥¸ë²„íŠ¼ì„ ëˆ„ë¥´ê³  ìžˆëŠ” ìƒíƒœì—ì„œ ì™¼ë²„íŠ¼ìœ¼ë¡œ í´ë¦­í•˜ë©´ ê·¸ìºë¦­í„°ì´ë¦„ì´ ê·“ë§ì½¤ë³´ë°•ìŠ¤ì— ì €ìž¥ë©ë‹ˆë‹¤.
Right click on a character and select [Register as a Friend] to add a person to your Friend List.
*/
	MSG_EXPLAIN_TIP1 = 0x2f,
/*20171018 to latest
ë‹¨ì¶•ì•„ì´íƒ¬ì°½(F12) ì†Œë¹„ìž¥ë¹„ ì•„ì´í…œì„ ë“œëž˜ê·¸í•œí›„ ì‚¬ìš©í•˜ì„¸ìš”. ì‚¬ìš©í‚¤(F1F2F3F4F5F6F7F8F9)
F12 Brings up a Hotkey Window which allows you to drag and drop Recovery Items, Equipment and Skills into it for faster access.
*/
	MSG_EXPLAIN_TIP2 = 0x30,
/*20171018 to latest
ê°™ì€ë§ì„ 3ë²ˆì´ìƒ ì—°ì†í•´ì„œ ì „ì†¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't type the same word/phrase more than 3 times.
*/
	MSG_NO_SAME_SENTANCE = 0x31,
/*20171018 to latest
ë¶ˆëŸ‰ë‹¨ì–´ ê²€ì¶œë¡œ ì „ì†¡ì´ ì¤‘ë‹¨ ë˜ì—ˆìŠµë‹ˆë‹¤.
Chat Filter: Yeah, uh, I don't think so buddy...
*/
	MSG_NO_SEND_BECAUSE_INSULT = 0x32,
/*20171018 to latest
ê°™ì€ì•„ì´í…œì€ í•œë²ˆë§Œ ì˜¬ë¦´ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
You cannot overlap items on a window.
*/
	MSG_CAN_DRAG_ITEM_OLNY_ONETIME = 0x33,
/*20171018 to latest
ë¬´ê²Œê°€ ì´ˆê³¼í•˜ì—¬ ì•„ì´í…œì„ ê°€ì§ˆ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot carry more items because you are overweight.
*/
	MSG_CANT_GET_ITEM_BECAUSE_WEIGHT = 0x34,
/*20171018 to latest
ì•„ì´í…œì„ ê°€ì§ˆ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot get the item.
*/
	MSG_CANT_GET_ITEM = 0x35,
/*20171018 to latest
ê±°ëž˜ê°€ ìž˜ ì´ë£¨ì–´ì¡ŒìŠµë‹ˆë‹¤.
The deal has successfully completed.
*/
	MSG_DEAL_SECCESS = 0x36,
/*20171018 to latest
ëˆì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
You do not have enough zeny.
*/
	MSG_INSUFFICIENT_MONEY = 0x37,
/*20171018 to latest
ë¬´ê²Œê°€ ì´ˆê³¼ ë˜ì—ˆìŠµë‹ˆë‹¤.
You are over your Weight Limit.
*/
	MSG_OVER_WEIGHT = 0x38,
/*20171018 to latest
ê±°ëž˜ê°€ ì‹¤íŒ¨ í–ˆìŠµë‹ˆë‹¤.
The deal has failed.
*/
	MSG_DEAL_FAIL = 0x39,
/*20171018 to latest
ëª¨ë‘ì—ê²Œ ê·“ë§ê±°ë¶€ìƒíƒœë¡œë¨
You've blocked whispers from everyone.
*/
	MSG_REFUSE_HEAR_ALL = 0x3a,
/*20171018 to latest
ëª¨ë‘ì—ê²Œ ê·“ë§ê±°ë¶€ìš”ì²­ ì‹¤íŒ¨í•¨
You've failed to block all whispers.
*/
	MSG_REQ_REFUSE_HEAR_ALL_FAIL = 0x3b,
/*20171018 to latest
ëª¨ë‘ì—ê²Œ ê·“ë§ê°€ëŠ¥ìƒíƒœê°€ë¨
You've allowed whispers from everyone.
*/
	MSG_HEAR_ALL = 0x3c,
/*20171018 to latest
ëª¨ë‘ì—ê²Œ ê·“ë§ê°€ëŠ¥ìš”ì²­ ì‹¤íŒ¨í•¨
You've failed to allow all whispers.
*/
	MSG_REQ_HEAR_ALL_FAIL = 0x3d,
/*20171018 to latest
ê·“ë§ ê±°ë¶€ ë¦¬ìŠ¤íŠ¸ê°€ ì—†ìŠµë‹ˆë‹¤
You have no Block List.
*/
	MSG_NO_REFUSE_HEAR_LIST = 0x3e,
/*20171018 to latest
-ê·“ë§ ê±°ë¶€ ë¦¬ìŠ¤íŠ¸-
[ Character Block List ]
*/
	MSG_REFUSE_HEAR_LIST = 0x3f,
/*20171018 to latest
ë°©ì´ ìž˜ ë§Œë“¤ì–´ ì¡ŒìŠµë‹ˆë‹¤.
Room has been successfully created.
*/
	MSG_ROOM_IS_MADE = 0x40,
/*20171018 to latest
ë°©ê°¯ìˆ˜ê°€ í—ˆìš©ê°¯ìˆ˜ë¥¼ ì´ˆê³¼ í•˜ì˜€ìŠµë‹ˆë‹¤.
Room Limit Exceeded.
*/
	MSG_TOO_MANY_ROOM = 0x41,
/*20171018 to latest
ê°™ì€ ë°©ì œëª©ì´ ìžˆìŠµë‹ˆë‹¤.
Same Room exists.
*/
	MSG_SAME_ROOM_TITLE = 0x42,
/*20171018 to latest
ì¸ì›ì´ˆê³¼ë¡œ ë°©ì— ë“¤ì–´ê°ˆ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
The Room is full.
*/
	MSG_TOO_MANY_PEOPLE_IN_ROOM = 0x43,
/*20171018 to latest
ê°•ì œë¡œ í‡´ìž¥ëœ ë°©ìž…ë‹ˆë‹¤.
You have been kicked out of this room.
*/
	MSG_YOU_HAVE_BANNED_FROM_THE_ROOM = 0x44,
/*20171018 to latest
êµí™˜ìš”ì²­ì„ ê±°ì ˆ í–ˆìŠµë‹ˆë‹¤.
The deal has been rejected.
*/
	MSG_REJECT_DEAL = 0x45,
/*20171018 to latest
êµí™˜ê°€ëŠ¥ê±°ë¦¬ë¥¼ ë²—ì–´ë‚¬ìŠµë‹ˆë‹¤.
You are too far away from the person to trade.
*/
	MSG_TOO_FAR_TO_DEAL = 0x46,
/*20171018 to latest
í•´ë‹¹ ìºë¦­í„°ê°€ ì—†ìŠµë‹ˆë‹¤.
The Character is not currently online or does not exist.
*/
	MSG_CHARACTER_IS_NOT_EXIST = 0x47,
/*20171018 to latest
ë‹¤ë¥¸ìºë¦­í„°ì™€ êµí™˜ì¤‘ìž…ë‹ˆë‹¤.
The person is in another deal.
*/
	MSG_CHARACTER_IS_DEALING = 0x48,
/*20171018 to latest
ìƒëŒ€ ìºë¦­í„° ì¤‘ëŸ‰ì´ˆê³¼ë¡œ ì˜¬ë ¤ë†“ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot trade because this character will exceed his weight limit.
*/
	MSG_CHARACTER_IS_OVER_WEIGHT = 0x49,
/*20171018 to latest
ê±°ëž˜ê°€ ì·¨ì†Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
The deal has been canceled.
*/
	MSG_DEAL_IS_CANCELED = 0x4a,
/*20171018 to latest
ì•„ì´í…œ êµí™˜ì´ ìž˜ ë˜ì—ˆìŠµë‹ˆë‹¤.
The deal has successfully completed.
*/
	MSG_DEAL_SUCCESS = 0x4b,
/*20171018 to latest
ì•„ì´í…œ êµí™˜ì´ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
The deal has failed.
*/
	MSG_DEAL_FAILED = 0x4c,
/*20171018 to latest
íŒŒí‹°ê°€ ë§Œë“¤ì–´ì¡ŒìŠµë‹ˆë‹¤.
Party has successfully been organized.
*/
	MSG_PARTY_MAKE_SUCCEED = 0x4d,
/*20171018 to latest
ê°™ì€ íŒŒí‹°ì´ë¦„ì´ ìžˆìŠµë‹ˆë‹¤.
That Party Name already exists.
*/
	MSG_SAME_PARTY_NAME = 0x4e,
/*20171018 to latest
ì´ë¯¸ íŒŒí‹°ì— ì†í•´ìžˆìŠµë‹ˆë‹¤.
The Character is already in a party.
*/
	MSG_YOU_ARE_ALREADY_IN_PARTY = 0x4f,
/*20171018 to latest
ë‹¤ë¥¸íŒŒí‹°ì— ê°€ìž…ë˜ì–´ ìžˆìŠµë‹ˆë‹¤.
The Character already joined another party.
*/
	MSG_CHARACTER_IS_ALREADY_IN_PARTY = 0x50,
/*20171018 to latest
íŒŒí‹°ê°€ìž…ì„ ê±°ë¶€í–ˆìŠµë‹ˆë‹¤.
Request for party rejected.
*/
	MSG_CHARACTER_REJECT_JOIN = 0x51,
/*20171018 to latest
íŒŒí‹°ê°€ìž…ì„ ìˆ˜ë½í–ˆìŠµë‹ˆë‹¤.
Request for party accepted.
*/
	MSG_CHARACTER_ACCEPT_JOIN = 0x52,
/*20171018 to latest
íŒŒí‹°ì •ì›ì„ ì´ˆê³¼í–ˆìŠµë‹ˆë‹¤.
Party Capacity exceeded.
*/
	MSG_TOO_MANY_PEOPLE_IN_PARTY = 0x53,
/*20171018 to latest
íŒŒí‹°ì—ì„œ íƒˆí‡´í•˜ì˜€ìŠµë‹ˆë‹¤.
You left the party.
*/
	MSG_YOU_LEAVE_FROM_PARTY = 0x54,
/*20171018 to latest
ì „ì²´ì—ê²Œ ë³´ëƒ„
Send to All
*/
	MSG_SEND_TO_ALL = 0x55,
/*20171018 to latest
íŒŒí‹°ì—ê²Œ ë³´ëƒ„
Send to Party
*/
	MSG_SEND_TO_PARTY = 0x56,
/*20171018 to latest
ë‹˜ê³¼ì˜ ê±°ëž˜ìš”ì²­
Request a deal with %s
*/
	MSG_REQ_DEAL_WITH = 0x57,
/*20171018 to latest
ë‹˜ íŒŒí‹°ì— ê°€ìž…ìš”ì²­
Ask %s to join your party
*/
	MSG_REQ_JOIN_PARTY = 0x58,
/*20171018 to latest
ë¹„ê³µê°œ : 
Pri:
*/
	MSG_ROOM_PRIVATE = 0x59,
/*20171018 to latest
ê³µê°œ : 
Pub:
*/
	MSG_ROOM_PUBLIC = 0x5a,
/*20171018 to latest
ë§ˆì§€ë§‰ ì²´í¬ì§€ì ë¶€í„° ì‹œìž‘í•˜ë ¤ë©´ 'ìž¬ì‹œìž‘'ì„ ìºë¦­í„° ì„ íƒìœ¼ë¡œ ëŒì•„ê°€ë ¤ë©´ 'ì¢…ë£Œ'ë¥¼ ëˆŒëŸ¬ì£¼ì„¸ìš”.
Click ''Restart'' to go back to your save point or click ''Exit'' to select another character.
*/
	MSG_RESTART_MSG = 0x5b,
/*20171018 to latest
ì›í•˜ëŠ” ê±°ëž˜ë¥¼ ì„ íƒí•˜ì„¸ìš”.
Please select a Deal Type.
*/
	MSG_SELECT_DEAL_TYPE = 0x5c,
/*20171018 to latest
ë‹˜ì´ ê±°ëž˜ë¥¼ ìš”ì²­í–ˆìŠµë‹ˆë‹¤.
 requests a deal.
*/
	MSG_SUGGEST_DEAL = 0x5d,
/*20171018 to latest
 íŒŒí‹°ì—ì„œ ì´ˆì²­ ë©”ì‹œì§€ê°€ ì™”ìŠµë‹ˆë‹¤. í•©ë¥˜í•˜ê² ìŠµë‹ˆê¹Œ?
 Party has sent you an invitation. Would you like to join?
*/
	MSG_SUGGEST_JOIN_PARTY = 0x5e,
/*20171018 to latest
ëª…ë ¹ì´ í‹€ë ¸ìŠµë‹ˆë‹¤.
Invalid Command
*/
	MSG_INVALID_COMMAND = 0x5f,
/*20171018 to latest
íƒˆí‡´í•˜ê¸°
Leave party
*/
	MSG_LEAVE_PARTY = 0x60,
/*20171018 to latest
ì œëª…ì‹œí‚¤ê¸°
Expel
*/
	MSG_EXPEL = 0x61,
/*20171018 to latest
ìª½ì§€ë³´ë‚´ê¸°
Send Message
*/
	MSG_MSG = 0x62,
/*20171018 to latest
1:1 ëŒ€í™”
1:1 Chat
*/
	MSG_1ON1 = 0x63,
/*20171018 to latest
ì •ë³´
Information
*/
	MSG_CHARACTER_INFO = 0x64,
/*20171018 to latest
íŒŒí‹°ì„¤ì •
Party Setup
*/
	MSG_PARTY_SETTING = 0x65,
/*20171018 to latest
ì¹œêµ¬
Friend
*/
	MSG_FRIEND = 0x66,
/*20171018 to latest
íŒŒí‹°
Party
*/
	MSG_PARTY = 0x67,
/*20171018 to latest
ìž¥ì°©ì•„ì´í…œ
Equipment
*/
	MSG_EQUIPED_ITEM = 0x68,
/*20171018 to latest
ìŠ¤í…Œì´í„°ìŠ¤
Status
*/
	MSG_STATUS_ = 0x69,
/*20171018 to latest
ì†Œì§€ì•„ì´í…œ
Inventory
*/
	MSG_ITEM = 0x6a,
/*20171018 to latest
/ê²°ì„± [íŒŒí‹°ì´ë¦„] : íŒŒí‹°ê²°ì„± /íƒˆí‡´ : íŒŒí‹°íƒˆí‡´
/organize ''Party Name'' To organize a party. Type /leave To leave a Party.
*/
	MSG_EXPLAIN_PARTY = 0x6b,
/*20171018 to latest
ìžì‹ ì´ íŒŒí‹°ë¦¬ë”ì¼ë•Œ ìºë¦­í„°ë¥¼ ì˜¤ë¥¸ë²„íŠ¼ìœ¼ë¡œ í´ë¦­í•˜ë©´ íŒŒí‹°ì— ê°€ìž…ìš”ì²­í•˜ê¸° ë©”ë‰´ê°€ ëœ¹ë‹ˆë‹¤.
If you are the party master, you can invite someone into your party by right-clicking on a Character.
*/
	MSG_EXPLAIN_TIP3 = 0x6c,
/*20171018 to latest
íšŒë³µ
Consumables
*/
	MSG_RESTORE = 0x6d,
/*20171018 to latest
ê³µê²©
Attack
*/
	MSG_ATTACK = 0x6e,
/*20171018 to latest
ë³´ì¡°
Support
*/
	MSG_SUPPORT = 0x6f,
/*20171018 to latest
ì „ì²´
All
*/
	MSG_ALL = 0x70,
/*20171018 to latest
ë¬´ê¸°
Weapons
*/
	MSG_WEAPON = 0x71,
/*20171018 to latest
ë°©ì–´
Defense
*/
	MSG_DEFENCE = 0x72,
/*20171018 to latest
ìˆ˜
Water
*/
	MSG_WATER = 0x73,
/*20171018 to latest
ì§€
Earth
*/
	MSG_EARTH = 0x74,
/*20171018 to latest
í™”
Fire
*/
	MSG_FIRE = 0x75,
/*20171018 to latest
í’
Wind
*/
	MSG_WIND = 0x76,
/*20171018 to latest
ê°™ì€ì¢…ë¥˜ì˜ ìž¥ë¹„ì•„ì´í…œì€ í•œë²ˆì— í•œê°œë§Œ ì‚´ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Please avoid buying 2 of the same items at one time.
*/
	MSG_EQUIPITEM_OLNY_ONE = 0x77,
/*20171018 to latest
ì°½ëª¨ë“œì—ì„œ ì‹¤í–‰ í• ë•ŒëŠ” 16ë¹„íŠ¸ ì»¬ëŸ¬ë¡œ ë§žì¶°ì£¼ì„¸ìš”.
Please change your desktop Color Depth to 16-bit when running Ragnarok in windowed mode.
*/
	MSG_ONLY_16BIT_WHEN_WINDOWMODE = 0x78,
/*20171018 to latest
ìž ì‹œë§Œ ê¸°ë‹¤ë ¤ ì£¼ì„¸ìš”.
Please wait...
*/
	MSG_PLEASE_BE_PATIENT = 0x79,
/*20171018 to latest
ìž ì‹œë§Œ ê¸°ë‹¤ë ¤ ì£¼ì„¸ìš”.
Please wait...
*/
	MSG_WAITING_RESPONSE_FROM_SERVER = 0x7a,
/*20171018 to latest
ìž ì‹œë§Œ ê¸°ë‹¤ë ¤ ì£¼ì„¸ìš”.
Please wait...
*/
	MSG_MAKING_CHARACTER = 0x7b,
/*20171018 to latest
ìž ì‹œë§Œ ê¸°ë‹¤ë ¤ ì£¼ì„¸ìš”.
Please wait...
*/
	MSG_DELETING_CHARACTER = 0x7c,
/*20171018 to latest
ë°© ë§Œë“¤ê¸°
Make a Room
*/
	MSG_MAKING_ROOM = 0x7d,
/*20171018 to latest
ë°©ì…‹íŒ… ë°”ê¾¸ê¸°
Room Setup
*/
	MSG_CHANGE_ROOM_SETTING = 0x7e,
/*20171018 to latest
ê°•í‡´ì‹œí‚¤ê¸°
Kick Character Out
*/
	MSG_BAN = 0x7f,
/*20171018 to latest
ë°©ìž¥ê¶Œí•œ ì£¼ê¸°
Give Master Authority
*/
	MSG_GIVE_GIVE_ROOM_POWER = 0x80,
/*20171018 to latest
ì •ë³´ë³´ê¸°
View Information
*/
	MSG_SEE_INFORMATION_OF_CHARACTER = 0x81,
/*20171018 to latest
ëŒ€í™”ë°©
Chat Room
*/
	MSG_CHAT_ROOM = 0x82,
/*20171018 to latest
ëª…
Ppl
*/
	MSG_COUNT_UNIT_OF_PEOPLE = 0x83,
/*20171018 to latest
/ì•‰ê¸° or /sit : ì•‰ê¸°. ì•‰ì•„ìžˆì„ë•Œ ì„œê¸°
/sit: Sit command. If you are sitting, you will stand instead.
*/
	MSG_EXPLAIN_SIT = 0x84,
/*20171018 to latest
/ì„œê¸° or /stand : ì„œê¸°. ì„œìžˆì„ë•Œ ì•‰ê¸°
/stand: Stand command. If you are standing, you will sit instead.
*/
	MSG_EXPLAIN_STAND = 0x85,
/*20171018 to latest
/ì±„íŒ…ë°© or /chat : ì±„íŒ…ë°© ë§Œë“¤ê¸°ì°½ ë„ìš°ê¸°
/chat: Creates a Chat Room
*/
	MSG_EXPLAIN_MAKE_CHAT = 0x86,
/*20171018 to latest
/q : ì±„íŒ…ë°© ë‚˜ê°€ê¸°.
/q: Leaves a Chat Room
*/
	MSG_EXPLAIN_EXIT_CHAT_ROOM = 0x87,
/*20171018 to latest
/ê±°ëž˜ [ìºë¦­í„°ì´ë¦„] or /êµí™˜ [ìºë¦­í„°ì´ë¦„] or /deal [ìºë¦­í„°ì´ë¦„] : í•´ë‹¹ ìºë¦­í„°ì™€ ê±°ëž˜ìš”ì²­
/deal ''Character Name'' Requests a deal with a character
*/
	MSG_EXPLAIN_DEAL = 0x88,
/*20171018 to latest
/ê²°ì„± [íŒŒí‹°ì´ë¦„] or /organize [íŒŒí‹°ì´ë¦„] : íŒŒí‹°ê²°ì„±
/organize ''Party Name'' Organizes a party
*/
	MSG_EXPLAIN_ORGANIZE_PARTY = 0x89,
/*20171018 to latest
/íƒˆí‡´ or /leave : íŒŒí‹° íƒˆí‡´
/leave: Leaves a party
*/
	MSG_EXPLAIN_LEAVE_PARTY = 0x8a,
/*20171018 to latest
/ì œëª… [ìºë¦­í„°ì´ë¦„] or /expel [ìºë¦­í„°ì´ë¦„] : í•´ë‹¹ìºë¦­í„°ë¥¼ íŒŒí‹°ì—ì„œ ì œëª…ì‹œí‚´
/expel ''Character Name'' kicks a Character out of your party
*/
	MSG_EXPLAIN_EXPEL_PARTY_MEMBER = 0x8b,
/*20171018 to latest
[Alt] + [End] : í”Œë ˆì´ì–´ hp/sp ê²Œì´ì§€ On Off
[Alt] + [End]: Turns HP/SP Bar On or Off
*/
	MSG_EXPLAIN_TIP4 = 0x8c,
/*20171018 to latest
[Alt] + [Home] : ì§€ë©´ ì»¤ì„œ í‘œì‹œ On Off
[Alt] + [Home]: Turns Ground Cursor On or Off
*/
	MSG_EXPLAIN_TIP5 = 0x8d,
/*20171018 to latest
[Insert] : ì•‰ê¸° ì„œê¸°
[Insert]: Makes you sit or stand. (Hotkey to toggle between /sit and /stand)
*/
	MSG_EXPLAIN_TIP6 = 0x8e,
/*20171018 to latest
MVPê°€ ë˜ì…¨ìŠµë‹ˆë‹¤!! MVP ì•„ì´í…œì€ 
Congratulations! You are the MVP! Your reward item is 
*/
	MSG_YOU_RECEIVE_MVP_ITEM = 0x8f,
/*20171018 to latest
 !!
!!
*/
	MSG_YOU_RECEIVE_MVP_ITEM2 = 0x90,
/*20171018 to latest
MVPê°€ ë˜ì…¨ìŠµë‹ˆë‹¤!! íŠ¹ë³„ê²½í—˜ì¹˜ 
Congratulations! You are the MVP! Your reward EXP Points are 
*/
	MSG_YOU_RECEIVE_MVP_EXP = 0x91,
/*20171018 to latest
 íšë“!!
!!
*/
	MSG_YOU_RECEIVE_MVP_EXP2 = 0x92,
/*20171018 to latest
MVPê°€ ë˜ì…¨ìŠµë‹ˆë‹¤ë§Œ ë¬´ê²Œì´ˆê³¼ë¡œ MVP ì•„ì´í…œì„ ê°€ì§ˆ ìˆ˜ ì—†ì—ˆìŠµë‹ˆë‹¤!!
You are the MVP, but you can't take the reward because you are over your weight limit.
*/
	MSG_YOU_THROW_MVPITEM = 0x93,
/*20171018 to latest
 ì—†ëŠ” ìºë¦­í„° ì´ë¦„ ìž…ë‹ˆë‹¤.
There is no such character name or the user is offline.
*/
	MSG_NOT_EXIST_CHARACTER = 0x94,
/*20171018 to latest
 ìˆ˜ì‹  ê±°ë¶€ ìƒíƒœìž…ë‹ˆë‹¤.
 doesn't want to receive your messages.
*/
	MSG_NO_RECEIVE_MODE = 0x95,
/*20171018 to latest
 ëª¨ë“  ìºë¦­í„°ì— ëŒ€í•´ ìˆ˜ì‹  ê±°ë¶€ ìƒíƒœ ìž…ë‹ˆë‹¤.
 is not in the mood to talk with anyone.
*/
	MSG_NO_RECEIVE_MODE_FOR_ALL = 0x96,
/*20171018 to latest
ìºë¦­í„° ì ‘ì†ëŠê¸° ì„±ê³µ.
Killed/Disconnected User.
*/
	MSG_SUCCESS_DISCONNECT_CHARACTER = 0x97,
/*20171018 to latest
ìºë¦­í„° ì ‘ì†ëŠê¸° ì‹¤íŒ¨.
Kill has failed.
*/
	MSG_FAIL_DISCONNECT_CHARACTER = 0x98,
/*20171018 to latest
%s %d ê°œ íšë“
You got %s (%d).
*/
	MSG_GET_ITEM = 0x99,
/*20171018 to latest
[Alt] + [=] : ì•ŒíŒŒë²³ ê°„ê²©ì´ ë„“ì–´ì¡Œì„ë•Œ ë˜ëŒë¦¬ê¸°.
[Alt] + [=]: Fix the interval error between letters.
*/
	MSG_EXPLAIN_TIP7 = 0x9a,
/*20171018 to latest
[F10] : ì±„íŒ…ì°½ í¬ê¸°ì¡°ì • [Alt] + [F10] : ì±„íŒ…ì°½ On Off
[F10]: To toggle Chat Window size; [Alt] + [F10]: Toggle Chat Window On or Off
*/
	MSG_EXPLAIN_TIP8 = 0x9b,
/*20171018 to latest
ê·“ì†ë§ í•˜ëŠ”ë²• : ì±„íŒ…ì°½ ì™¼ìª½ ìž…ë ¥ëž€ì— ìºë¦­í„°ì´ë¦„ì„ ìž…ë ¥í•˜ê³  ì˜¤ë¥¸ìª½ ìž…ë ¥ëž€ì— ë§ì„ ìž…ë ¥í•˜ë©´ ë©ë‹ˆë‹¤. TABí‚¤ë¡œ ë‘ìž…ë ¥ëž€ ì‚¬ì´ë¡œ ì»¤ì„œë¥¼ ì´ë™í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
How to Whisper: Enter a Character's Name on the left side of chat window and type your message on the right side. The Tab key helps you move between these boxes.
*/
	MSG_EXPLAIN_TIP9 = 0x9c,
/*20171018 to latest
/! /? /ê¸°ì¨ /í•˜íŠ¸ /ë•€ /ì•„í•˜ /ì§œì¦ /í™” /ëˆ /... /ê°€ìœ„ /ë°”ìœ„ /ë³´ : Alt + (1~9) Ctrl + (-=\) ì— ëŒ€ì‘ë˜ëŠ” ëª…ë ¹ì–´ ìž…ë‹ˆë‹¤.
/!,/?,/ho,/lv,/lv2,/swt,/ic,/an,/ag,/$,/â€¦.,/thx,/wah,/sry,/heh,/swt2,/hmm,/no1,/??,/omg,/oh,/X,/hp,/go,/sob,/gg,/kis,/kis2,/pif,/ok: Emotion icons corresponding to Alt + (1~9) Ctrl + (-=\\)
*/
	MSG_EXPLAIN_TIP10 = 0x9d,
/*20171018 to latest
íŒŒí‹°ì›ì—ê²Œ ë§í•˜ëŠ”ë²• : ë§ì˜ ì œì¼ì•žì— '%'ë¥¼ ë¶™ì´ë©´ íŒŒí‹°ì›ì—ê²Œ ë§ì´ ê°‘ë‹ˆë‹¤. (ì˜ˆ: "%ì•ˆë…•")
How to Speak to Party: Add % in front of every message.(Example: \%Hello\)
*/
	MSG_EXPLAIN_TIP11 = 0x9e,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. êµí™˜ ë¶ˆëŠ¥.
You haven't learned enough Basic Skills to Trade.
*/
	MSG_NOT_ENOUGH_SKILLLEVE1 = 0x9f,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. ì´ëª¨ì…˜ ë¶ˆëŠ¥.
You haven't learned enough Basic Skills to use Emotion icons.
*/
	MSG_NOT_ENOUGH_SKILLLEVE2 = 0xa0,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. ì•‰ê¸° ë¶ˆëŠ¥.
You haven't learned enough Basic Skills to Sit.
*/
	MSG_NOT_ENOUGH_SKILLLEVE3 = 0xa1,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. ì±„íŒ…ë°©ë§Œë“¤ê¸° ë¶ˆëŠ¥.
You haven't learned enough Basic Skills to create a chat room.
*/
	MSG_NOT_ENOUGH_SKILLLEVE4 = 0xa2,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. íŒŒí‹°ë§Œë“¤ê¸° ë¶ˆëŠ¥
You haven't learned enough Basic Skills to Party.
*/
	MSG_NOT_ENOUGH_SKILLLEVE5 = 0xa3,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. ì™¸ì¹˜ê¸° ë¶ˆëŠ¥
You haven't learned enough skills to Shout.
*/
	MSG_NOT_ENOUGH_SKILLLEVE6 = 0xa4,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. pk ë¶ˆëŠ¥
You haven't learned enough skills for Pking.
*/
	MSG_NOT_ENOUGH_SKILLLEVE7 = 0xa5,
/*20171018 to latest
ì‚¬ê³ ìží•˜ëŠ” í’ˆëª©
Buying Items
*/
	MSG_ITEMS_FOR_BUY = 0xa6,
/*20171018 to latest
ì•„ì´í…œ ìƒì 
Item Shop
*/
	MSG_ITEM_STORE = 0xa7,
/*20171018 to latest
íŒ”ê³ ìží•˜ëŠ” í’ˆëª©
Selling Items
*/
	MSG_ITEMS_FOR_SELL = 0xa8,
/*20171018 to latest
ë³´ê´€ì•„ì´í…œ
Storage
*/
	MSG_ITEMS_THAT_IS_STORED = 0xa9,
/*20171018 to latest
 ìž¥ë¹„ê°€ ìž¥ì°© ë˜ì—ˆìŠµë‹ˆë‹¤.
 is put on.
*/
	MSG_ITEM_IS_EQUIPED = 0xaa,
/*20171018 to latest
 ìž¥ë¹„ê°€ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
 is taken off.
*/
	MSG_ITEM_IS_REMOVED = 0xab,
/*20171018 to latest
ê·“ë§ë¦¬ìŠ¤íŠ¸ì— ì´ë¦„ë„£ê¸°
To add names on the Whispering List
*/
	MSG_ADD_TO_WHISPER_CHAR_LIST = 0xac,
/*20171018 to latest
ìŠ¤í¬ë¦°ìƒ· ì°ëŠ”ë²• : [Print Screen]í‚¤ë‚˜ [Scroll Lock]í‚¤ë¥¼ ëˆ„ë¥´ë©´ ë©ë‹ˆë‹¤.
How to Take Screen Shots: Press [Print Screen] or [Scroll Lock]
*/
	MSG_EXPLAIN_TIP12 = 0xad,
/*20171018 to latest
ì˜¤ëŠ˜ì˜ íŒ
Tip of the Day
*/
	MSG_TIPOFTHEDAY = 0xae,
/*20171018 to latest
^3850a0ì•Œê³  ê³„ì…¨ìŠµë‹ˆê¹Œ... ^000000  //^709fed
^3850a0Did you know...?^709fed
*/
	MSG_DIDYOUKNOW = 0xaf,
/*20171018 to latest
ì‹œìž‘í• ë•Œ ì—´ê¸°
Display at startup
*/
	MSG_SHOWTIPSATSTARTUP = 0xb0,
/*20171018 to latest
/tip : ì˜¤ëŠ˜ì˜íŒ ì—´ê¸°
/tip: Opens ''Tip of the Day''
*/
	MSG_EXPLAIN_OPENTIP = 0xb1,
/*20171018 to latest
í˜„ìž¬ ì ‘ì†ìž %dëª…
There are %d Players Currently Connected.
*/
	MSG_NUMPEOPLE = 0xb2,
/*20171018 to latest
(%s)ë‹˜ì´ ìž…ìž¥ í•˜ì˜€ìŠµë‹ˆë‹¤.
(%s) has entered.
*/
	MSG_USERGETINTHEROOM = 0xb3,
/*20171018 to latest
(%s)ë‹˜ì´ í‡´ìž¥ í•˜ì˜€ìŠµë‹ˆë‹¤.
(%s) has left.
*/
	MSG_USERGETOUTOFTHEROOM = 0xb4,
/*20171018 to latest
(%s)ë‹˜ì´ ê°•ì œ í‡´ìž¥ ë˜ì—ˆìŠµë‹ˆë‹¤.
(%s) was kicked out.
*/
	MSG_USERGETOUTOFTHEROOMBYFORCE = 0xb5,
/*20171018 to latest
 %d ê°œ
%d ea.
*/
	MSG_EA = 0xb6,
/*20171018 to latest
%s : %d ê°œ
%s: %d ea.
*/
	MSG_EA2 = 0xb7,
/*20171018 to latest
%s %s : %d ê°œ
%s %s: %d
*/
	MSG_EA3 = 0xb8,
/*20171018 to latest
íŒ” ìˆ˜ ìžˆëŠ” í’ˆëª©
Available Items to sell
*/
	MSG_ITEMSYOUCANSELL = 0xb9,
/*20171018 to latest
ìƒì ì—ì„œ íŒŒëŠ” í’ˆëª©
Shop Items
*/
	MSG_SHOPITEMS = 0xba,
/*20171018 to latest
ì•Œ ìˆ˜ ì—†ëŠ”ê³³
Unknown Area
*/
	MSG_NOWHERE = 0xbb,
/*20171018 to latest
ì„œë²„ì™€ ì–¸ì–´ê°€ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤.
Your Client language doesn't match the Server language.
*/
	MSG_CLIENTTYPEMISMATCH = 0xbc,
/*20171018 to latest
ì•„ì´í…œì„ ë²„ë¦´ë ¤ë©´ ìž¥ë¹„ì°½ì„ ë‹«ìœ¼ì„¸ìš”.
Please move your equipment to the inventory. And close the equipment window.
*/
	MSG_CLOSEEQUIPWND = 0xbd,
/*20171018 to latest
ì˜ì–´ë§Œ ë©ë‹ˆë‹¤.
This server provides English Text Characters Only.
*/
	MSG_ENGLISHONLY = 0xbe,
/*20171018 to latest
ì§€ê¸ˆì€ ì§€ì›ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
This is not implemented yet.
*/
	MSG_NOTSUPPORTEDYET = 0xbf,
/*20171018 to latest
ê·“ë§ ë¦¬ìŠ¤íŠ¸ê°€ ì—†ìŠµë‹ˆë‹¤.
No Whisper List.
*/
	MSG_NOWHISPERLIST = 0xc0,
/*20171018 to latest
 ì—ê²Œ ê·“ë§ê±°ë¶€ìƒíƒœë¡œë¨
: Whispering Blocked.
*/
	MSG_WHISPERIGNORESUCCESS = 0xc1,
/*20171018 to latest
 ì—ê²Œ ê·“ë§ê±°ë¶€ ìš”ì²­ì‹¤íŒ¨í•¨
: Whispering Block has failed.
*/
	MSG_WHISPERIGNOREFAILED1 = 0xc2,
/*20171018 to latest
 ì—ê²Œ ê·“ë§ê±°ë¶€ ìš”ì²­ì‹¤íŒ¨í•¨ (ì¸ì›ì´ˆê³¼)
: Whispering Block has failed. Block List is full.
*/
	MSG_WHISPERIGNOREFAILED2 = 0xc3,
/*20171018 to latest
 ì—ê²Œ ê·“ë§ê°€ëŠ¥ìƒíƒœë¡œë¨
: Whispering accepted.
*/
	MSG_WHISPERNOIGNORESUCCESS = 0xc4,
/*20171018 to latest
 ì—ê²Œ ê·“ë§ê°€ëŠ¥ ìš”ì²­ì‹¤íŒ¨í•¨
: Command has failed.
*/
	MSG_WHISPERNOIGNOREFAILED1 = 0xc5,
/*20171018 to latest
 ì—ê²Œ ê·“ë§ê°€ëŠ¥ ìš”ì²­ì‹¤íŒ¨í•¨ (ì¸ì›ì´ˆê³¼)
: Command has failed. Block List is full.
*/
	MSG_WHISPERNOIGNOREFAILED2 = 0xc6,
/*20171018 to latest
ì´ë¦„ì˜ ì²˜ìŒê³¼ ë§ˆì§€ë§‰ì—ëŠ” ê³µë°±ë¬¸ìžë¥¼ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot put a space at the beginning or end of a name.
*/
	MSG_NO_SPACE_IN_NAME = 0xc7,
/*20171018 to latest
ë¹„ê³µê°œ
Private
*/
	MSG_ROOM_PRIVATE2 = 0xc8,
/*20171018 to latest
ê³µê°œ
Public
*/
	MSG_ROOM_PUBLIC2 = 0xc9,
/*20171018 to latest
SPê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not Enough SP
*/
	MSG_USESKILL_FAIL_SP_INSUFFICIENT = 0xca,
/*20171018 to latest
HPê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not Enough HP
*/
	MSG_USESKILL_FAIL_HP_INSUFFICIENT = 0xcb,
/*20171018 to latest
ìŠ¤í‚¬ì‚¬ìš© ì‹¤íŒ¨.
Skill has failed.
*/
	MSG_NOT_ENOUGH_SKILLLEVE8 = 0xcc,
/*20171018 to latest
í›”ì¹˜ê¸° ì‹¤íŒ¨.
Steal has failed.
*/
	MSG_FAIL_STEAL = 0xcd,
/*20171018 to latest
êµí™˜ì°½
Trade
*/
	MSG_EXCHANGE = 0xce,
/*20171018 to latest
ë…ê±¸ê¸° ì‹¤íŒ¨.
Envenom skill has failed.
*/
	MSG_FAIL_POISON = 0xcf,
/*20171018 to latest
ì´ ì•„ì´ë””ë¡œëŠ” ì´ ì„œë²„ì— ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot use this ID on this server.
*/
	MSG_ID_MISMATCH = 0xd0,
/*20171018 to latest
ìŠ¤í”¼ë“œê°€ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
Your Speed has increased.
*/
	MSG_SPEEDUP = 0xd1,
/*20171018 to latest
ìŠ¤í”¼ë“œê°€ ê°ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
Your Speed has decreased.
*/
	MSG_SPEEDDOWN = 0xd2,
/*20171018 to latest
/ê¸°ì–µ : ì›Œí”„í•  ìž¥ì†Œ ê¸°ì–µ(ì›Œí”„ ìŠ¤í‚¬ì´ ìžˆëŠ”ê²½ìš°)
/memo: To memorize a place as Warp Point (If you are an Acolyte Class character)
*/
	MSG_EXPLAIN_TIP13 = 0xd3,
/*20171018 to latest
ìž„ì˜ì˜ ìœ„ì¹˜
Random Area
*/
	MSG_RANDOM_POS = 0xd4,
/*20171018 to latest
ì›Œí”„ í•  ìœ„ì¹˜ë¥¼ ì„ íƒí•˜ì„¸ìš”.
Select an Area to Warp
*/
	MSG_SELECTWHERETOWARP = 0xd5,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
Skill Level is not high enough
*/
	MSG_NOTENOUGHSKILLLEVEL = 0xd6,
/*20171018 to latest
ì €ìž¥ëœ ì›Œí”„í•  ìž¥ì†Œê°€ ì—†ìŠµë‹ˆë‹¤.
There are no memorized locations (Memo Points).
*/
	MSG_NO_STORED_PLACE_TO_WARP = 0xd7,
/*20171018 to latest
ì›Œí”„ ê´€ë ¨ ìŠ¤í‚¬ì´ ì—†ìŠµë‹ˆë‹¤.
You haven't learned Warp.
*/
	MSG_NOWARPSKILL = 0xd8,
/*20171018 to latest
ì›Œí”„ ìž¥ì†Œë¡œ ì €ìž¥ë¨.
Saved location as a Memo Point for Warp Skill.
*/
	MSG_WARPPOINTSTORED = 0xd9,
/*20171018 to latest
ì·¨ì†Œ
Cancel
*/
	MSG_CANCEL = 0xda,
/*20171018 to latest
ìŠ¤í‚¬ ì‚¬ìš©í›„ ì‹œê°„ì´ ì¶©ë¶„ížˆ ì§€ë‚˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
There is a Delay after using a Skill.
*/
	MSG_SKILLINTERVAL = 0xdb,
/*20171018 to latest
í•œë²ˆì— ê°€ì§ˆ ìˆ˜ ìžˆëŠ” ì•„ì´í…œ ì¢…ë¥˜ìˆ˜ë¥¼ ì´ˆê³¼í•˜ì—¬ ì•„ì´í…œì„ ê°€ì§ˆ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't have this item because you will exceed the weight limit.
*/
	MSG_CANT_GET_ITEM_BECAUSE_COUNT = 0xdc,
/*20171018 to latest
ì•„ì´í…œ ìµœëŒ€ ì¢…ë¥˜ìˆ˜ë¥¼ ì´ˆê³¼ í•˜ì˜€ìŠµë‹ˆë‹¤.
Out of the maximum capacity
*/
	MSG_INSUFFICIENT_OVER_COUNT = 0xdd,
/*20171018 to latest
ìˆ˜ë ˆì•„ì´í…œ
Cart Items
*/
	MSG_MERCHANTITEM = 0xde,
/*20171018 to latest
ìˆ˜ë ˆ ë²—ê¸°
Take off Cart
*/
	MSG_CARTOFF = 0xdf,
/*20171018 to latest
ë…¸ì  ê°œì„¤
Opening a stall
*/
	MSG_MERCHANTSHOPMAKER = 0xe0,
/*20171018 to latest
ë…¸ì ì´ë¦„ì„ ìž…ë ¥í•˜ì„¸ìš”.
Please Name your Shop.
*/
	MSG_ENTER_SHOP_TITLE = 0xe1,
/*20171018 to latest
ë‚˜ì˜ ë…¸ì 
My Shop
*/
	MSG_ITEM_MY_STORE = 0xe2,
/*20171018 to latest
ìƒì¸ ì•„ì´í…œ ìƒì 
Merchant Shop
*/
	MSG_ITEM_MERCHANT_STORE = 0xe3,
/*20171018 to latest
ìƒì¸ì—ê²Œ ì‚¬ê³ ìží•˜ëŠ” í’ˆëª©
Buying Items
*/
	MSG_ITEMS_FOR_BUY_FROM_MERCHANT = 0xe4,
/*20171018 to latest
%s êµ¬ìž… ì‹¤íŒ¨ %s
%s Purchase Failed %s
*/
	MSG_FAIL_BUY_ITEM_FROM_MERCHANT = 0xe5,
/*20171018 to latest
ìž¬ê³  ë¶€ì¡±.
Out of Stock
*/
	MSG_INSUFFICIENT_STOCK = 0xe6,
/*20171018 to latest
%s %d ê°œ íŒ”ë¦¼.
%s %d sold.
*/
	MSG_ITEM_IS_SOLD = 0xe7,
/*20171018 to latest
ë…¸ì ì—ì„œ íŒ” ìˆ˜ ìžˆëŠ” ì•„ì´í…œ
Available Items for Vending
*/
	MSG_MERCHANTMIRRORITEM = 0xe8,
/*20171018 to latest
ì œë‹ˆê°€ ë¶€ì¡±í•´ì„œ ìŠ¤í‚¬ì„ ì‚¬ìš© í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Skill has failed because you do not have enough zeny.
*/
	MSG_SKILL_FAIL_MONEY = 0xe9,
/*20171018 to latest
ì‚¬ìš©í•  ëŒ€ìƒì„ ì„ íƒí•˜ì„¸ìš”
Select a Target.
*/
	MSG_SELECTTARGET = 0xea,
/*20171018 to latest
/pk on : pk On /pk off : pk Off
/pk on: Turns PK On. /pk off: Turns PK Off.
*/
	MSG_EXPLAIN_TIP14 = 0xeb,
/*20171018 to latest
ë…¸ì 
Shop
*/
	MSG_STREETSHOP = 0xec,
/*20171018 to latest
ìˆ˜ë ˆ ì•„ì´í…œ [Alt+W]
Cart Items [Alt+W]
*/
	MSG_OPENCARTWINDOW = 0xed,
/*20171018 to latest
ê¸°ë³¸ì •ë³´
Basic Information
*/
	MSG_BASICINFOWND = 0xee,
/*20171018 to latest
ì´ë¬´ê¸°ë¡œëŠ” ì´ìŠ¤í‚¬ì„ ì‚¬ìš©í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
The skill cannot be used with this weapon.
*/
	MSG_USESKILL_FAIL_NOT_SUITABLE_WEAPON = 0xef,
/*20171018 to latest
%s ì‚¬ê¸° ì‹¤íŒ¨ ìž¬ê³  ë¶€ì¡± í˜„ìž¬ ìž¬ê³  %d ê°œ.
Buying %s has been failed. Out of Stock. Current Stock %d.
*/
	MSG_FAIL_BUY_ITEM_FROM_MERCHANT_NO_STOCK = 0xf0,
/*20171018 to latest
ì„œë²„ì™€ ë™ê¸°í™”ê°€ í‹€ë ¤ ì—°ê²°ì´ ëŠì–´ì¡ŒìŠµë‹ˆë‹¤.
You've been disconnected due to a time gap between you and the server.
*/
	MSG_SPEEDHACK = 0xf1,
/*20171018 to latest
í™”ì‚´ì„ ìž¥ì°©í•˜ì„¸ìš”
Please equip the proper ammunition first.
*/
	MSG_ERR_ATTACK_ARROW = 0xf2,
/*20171018 to latest
ì¤‘ëŸ‰ê³¼ë‹¤ë¡œ ê³µê²©ì´ë‚˜ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't attack or use skills because you've exceeded the Weight Limit.
*/
	MSG_ERR_ATTACK_WEIGHT = 0xf3,
/*20171018 to latest
ì¤‘ëŸ‰ê³¼ë‹¤ë¡œ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't use skills because you've exceeded the Weight Limit.
*/
	MSG_ERR_SKILL_WEIGHT = 0xf4,
/*20171018 to latest
í™”ì‚´ì´ ìž¥ì°©ë˜ì—ˆìŠµë‹ˆë‹¤.
Ammunition has been equipped.
*/
	MSG_MSG_ARROW_EQUIPMENT_SUCCESS = 0xf5,
/*20171018 to latest
ë ˆë“œì ¬ìŠ¤í†¤ì´ í•„ìš”í•©ë‹ˆë‹¤.
Red Gemstone required.
*/
	MSG_NEED_REDJAMSTONE = 0xf6,
/*20171018 to latest
ë¸”ë£¨ì ¬ìŠ¤í†¤ì´ í•„ìš”í•©ë‹ˆë‹¤.
Blue Gemstone required.
*/
	MSG_NEED_BLUEJAMSTONE = 0xf7,
/*20171018 to latest
íž˜ íŒŒë¼ë©”í„°
Strength
*/
	MSG_DESC_STR = 0xf8,
/*20171018 to latest
ë¯¼ì²©ì„± íŒŒë¼ë©”í„°
Agility
*/
	MSG_DESC_AGI = 0xf9,
/*20171018 to latest
ì²´ë ¥ íŒŒë¼ë©”í„°
Vitality
*/
	MSG_DESC_VIT = 0xfa,
/*20171018 to latest
ì§€ë ¥ íŒŒë¼ë©”í„°
Intelligence
*/
	MSG_DESC_INT = 0xfb,
/*20171018 to latest
ì†ìž¬ì£¼ íŒŒë¼ë©”í„°
Dexterity
*/
	MSG_DESC_DEX = 0xfc,
/*20171018 to latest
ìš´ íŒŒë¼ë©”í„°
Luck
*/
	MSG_DESC_LUK = 0xfd,
/*20171018 to latest
ê³µê²©ë ¥
Hit Point
*/
	MSG_DESC_ATK = 0xfe,
/*20171018 to latest
ë°©ì–´ë ¥
Defence Rate
*/
	MSG_DESC_DEF = 0xff,
/*20171018 to latest
ëª…ì¤‘ë¥ 
Accuracy
*/
	MSG_DESC_HIT = 0x100,
/*20171018 to latest
í•„ì‚´ê³µê²©ë¥ 
Critical Attack
*/
	MSG_DESC_CRI = 0x101,
/*20171018 to latest
ì†Œì†ê¸¸ë“œ
Affiliated Guild
*/
	MSG_DESC_GUILD = 0x102,
/*20171018 to latest
ê° íŒŒë¼ë©”í„° ë ˆë²¨ì—…ì— ì‚¬ìš©ë˜ëŠ” í¬ì¸íŠ¸
Points to level up each Parameter
*/
	MSG_DESC_POINT = 0x103,
/*20171018 to latest
ë§ˆë²•ê³µê²©ë ¥
Magic Attack
*/
	MSG_DESC_MATK = 0x104,
/*20171018 to latest
ë§ˆë²•ë°©ì–´ë ¥
Magic Defense
*/
	MSG_DESC_MDEF = 0x105,
/*20171018 to latest
íšŒí”¼ìœ¨
Dodge
*/
	MSG_DESC_FLEE = 0x106,
/*20171018 to latest
ê³µê²©ìŠ¤í”¼ë“œ
Attack Speed
*/
	MSG_DESC_ASPD = 0x107,
/*20171018 to latest
ì§€ì—­ë‹¹ ìˆ˜ìš©ì¸ì› ì´ˆê³¼ë¡œ ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Server is jammed due to over population. Please try again shortly.
*/
	MSG_PC_OVERFLOW = 0x108,
/*20171018 to latest
ì˜µì…˜
Option
*/
	MSG_OPTIONWND = 0x109,
/*20171018 to latest
E-MAIL ì¸ì¦ì´ ë˜ì§€ì•Šì•˜ê±°ë‚˜ ë¸”ëŸ­ëœ ê³„ì •ìž…ë‹ˆë‹¤.
Account ID blocked by the Game Master Team.
*/
	MSG_ID_EMAIL_CONFIRM_NEEDED = 0x10a,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ê°€ í‹€ë¦½ë‹ˆë‹¤.
Incorrect User ID or Password. Please try again.
*/
	MSG_INCORRECT_LOGIN_PASSWORD = 0x10b,
/*20171018 to latest
ë¨¸ë¦¬ëª¨ì–‘ ì„ íƒ
Choose Hairstyle
*/
	MSG_SELECT_HAIR_STYLE = 0x10c,
/*20171018 to latest
ê³µê²©ë ¥
Hit Point
*/
	MSG_ATK = 0x10d,
/*20171018 to latest
ë°©ì–´ë ¥
Defence Rate
*/
	MSG_DEF = 0x10e,
/*20171018 to latest
ê³µê²©ìŠ¤ëƒ… On
Attack Snap On
*/
	MSG_ATTACK_SNAP_ON = 0x10f,
/*20171018 to latest
ê³µê²©ìŠ¤ëƒ… Off
Attack Snap Off
*/
	MSG_ATTACK_SNAP_OFF = 0x110,
/*20171018 to latest
ìŠ¤í‚¬ìŠ¤ëƒ… On
Skill Snap On
*/
	MSG_SKILL_SNAP_ON = 0x111,
/*20171018 to latest
ìŠ¤í‚¬ìŠ¤ëƒ… Off
Skill Snap Off
*/
	MSG_SKILL_SNAP_OFF = 0x112,
/*20171018 to latest
/ìŠ¤ëƒ… or /snap: ëª¬ìŠ¤í„° ê³µê²©ì‹œ ìŠ¤ëƒ… On Off  /ìŠ¤í‚¬ìŠ¤ëƒ… or /skillsnap: ìŠ¤í‚¬ë¡œ ëª¬ìŠ¤í„° ê³µê²©ì‹œ ìŠ¤ëƒ… On Off  /ì•„ì´í…œìŠ¤ëƒ… or /itemsnap: ì•„ì´í…œ ì£¼ìš¸ë•Œ ìŠ¤ëƒ… On Off
/snap: Turns snap On | Off for fights, /skillsnap: Turns snap On | Off for skills. /itemsnap: Turns snap On | Off for items on the grounds.
*/
	MSG_EXPLAIN_SNAP = 0x113,
/*20171018 to latest
ì•„ì´í…œìŠ¤ëƒ… On
Item Snap On
*/
	MSG_ITEM_SNAP_ON = 0x114,
/*20171018 to latest
ì•„ì´í…œìŠ¤ëƒ… Off
Item Snap Off
*/
	MSG_ITEM_SNAP_OFF = 0x115,
/*20171018 to latest
ìŠ¤ëƒ…
Snap
*/
	MSG_SNAP = 0x116,
/*20171018 to latest
í•œê°€ì§€ ì•„ì´í…œì„ 3ë§Œê°œ ì´ìƒ ê°€ì§ˆìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot carry more than 30,000 of one kind of item.
*/
	MSG_CANT_GET_ITEM_OVERCOUNT_ONEITEM = 0x117,
/*20171018 to latest
ë ˆë²¨ 30ì´ìƒì˜ ìºë¦­í„°ëŠ” ì‚­ì œí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ì‚­ì œë¥¼ ì›í•˜ì‹œë©´ ê´€ê³„ìžì—ê²Œ ë¬¸ì˜ í•˜ì„¸ìš”.
You cannot delete a Character with a level greater than 30. If you want to delete the character please contact a Game Master.
*/
	MSG_CANT_DELETE_CHARACTER_OVER_30_LEVEL = 0x118,
/*20171018 to latest
ì•„ì´í…œ êµí™˜ì¤‘ì—ëŠ” ì•„ì´í…œì„ ì‚¬ê³  íŒ” ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot use an NPC shop while in a trade.
*/
	MSG_FAIL_BUY_ITEM_ITEM_EXCHANGING = 0x119,
/*20171018 to latest
ìƒì ëª…
Shop Name
*/
	MSG_STALL_NAME = 0x11a,
/*20171018 to latest
ìŠ¤í‚¬ëª©ë¡
Skill Tree
*/
	MSG_SKILLLIST = 0x11b,
/*20171018 to latest
ìŠ¤í‚¬í¬ì¸íŠ¸ : %d
Skill Point: %d
*/
	MSG_SKILLPOINT = 0x11c,
/*20171018 to latest
ìŠ¤í‚¬ì‚¬ìš© ì‹¤íŒ¨
Skill has failed.
*/
	MSG_USESKILL_FAIL = 0x11d,
/*20171018 to latest
íŒ¨ì‹œë¸Œ
Passive
*/
	MSG_PASSIVE = 0x11e,
/*20171018 to latest
ê°ìž ì·¨ë“
Individual
*/
	MSG_EXPDIV1 = 0x11f,
/*20171018 to latest
ê· ë“±í•˜ê²Œ ë¶„ë°°
Shared
*/
	MSG_EXPDIV2 = 0x120,
/*20171018 to latest
ê°ìž ì·¨ë“
Individual
*/
	MSG_ITEMCOLLECT1 = 0x121,
/*20171018 to latest
íŒŒí‹° ì „ì²´ ê³µìœ 
Party Share
*/
	MSG_ITEMCOLLECT2 = 0x122,
/*20171018 to latest
íŒŒí‹° ì„¤ì •
Party Setup
*/
	MSG_PARTYSETTING = 0x123,
/*20171018 to latest
ê²½í—˜ì¹˜ ë¶„ë°°ë°©ì‹
How to share EXP
*/
	MSG_HOWEXPDIV = 0x124,
/*20171018 to latest
ì•„ì´í…œ ìˆ˜ì§‘ë°©ì‹
How to share Items
*/
	MSG_HOWITEMCOLLECT = 0x125,
/*20171018 to latest
íŒŒí‹° ë¦¬ë”ë§Œ ì„¤ì •í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Only the Party Leader can change this setting.
*/
	MSG_ONLY_PARTYMASTER = 0x126,
/*20171018 to latest
ì•„ì´í…œ ê°¯ìˆ˜ ì•ˆë¬¼ì–´ë³´ê¸°
Toggle Item Amount.
*/
	MSG_NOQUESTION_ITEMCOUNT = 0x127,
/*20171018 to latest
^ff0000%d^000000 ì´ˆ í›„ì— ìºë¦­í„°ê°€ ì§€ì›Œì§‘ë‹ˆë‹¤. ì·¨ì†Œ í•˜ë ¤ë©´ ì·¨ì†Œ ë²„íŠ¼ì„ ëˆ„ë¥´ì„¸ìš”.
Character will be deleted after ^ff0000%d^000000 seconds. Press Cancel to quit.
*/
	MSG_CHARARATER_DELETE_COUNT = 0x128,
/*20171018 to latest
êµí™˜í•  ìˆ˜ ìžˆëŠ” ìµœëŒ€ ì•„ì´í…œ ê°¯ìˆ˜ëŠ” 10ê°€ì§€ ìž…ë‹ˆë‹¤.
You cannot trade more than 10 types of items per trade.
*/
	MSG_MAXEXCHANGE_IS_10_KIND = 0x129,
/*20171018 to latest
ì´ì„œë²„ë¥¼ ì´ìš©í•  ìˆ˜ ì—†ëŠ” ë‚˜ì´ìž…ë‹ˆë‹¤.
You are underaged.
*/
	MSG_LIMIT_AGE = 0x12a,
/*20171018 to latest
ì´ë©”ì¼ ì£¼ì†Œë¥¼ ìž…ë ¥í•˜ì„¸ìš”.
Please enter the deletion password.
*/
	MSG_ENTER_EMAIL = 0x12b,
/*20171018 to latest
ì´ë©”ì¼ ì£¼ì†Œ ìž…ë ¥í•˜ê¸°
E-mail Address (Case Sensitive).
*/
	MSG_ENTER_EMAIL_TOOLTIP = 0x12c,
/*20171018 to latest
ì´ë©”ì¼ ì£¼ì†Œê°€ í‹€ë ¤ì„œ ìºë¦­í„°ê°€ ì‚­ì œ ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
Character Deletion has failed because you have entered an incorrect e-mail address.
*/
	MSG_CANNOT_DELETE_CHARACTER_EMAIL = 0x12d,
/*20171018 to latest
ê³„ì • ë¹„ë°€ë²ˆí˜¸ë¥¼ ìž…ë ¥í•˜ì„¸ìš”.
Enter Second Serial Cord of your Social Security number.
*/
	MSG_ENTER_PEOPLE_REG_NUMBER = 0x12e,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ê°€ í‹€ë ¤ì„œ ìºë¦­í„°ê°€ ì‚­ì œ ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
Character Deletion has failed because you have entered an incorrect SSN.
*/
	MSG_CANNOT_DELETE_CHARACTER_PEOPLE_REG_NUMBER = 0x12f,
/*20171018 to latest
í•œë²ˆì— 15ê°€ì§€ ì´ìƒì˜ ì•„ì´í…œì„ íŒ” ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't sell more than 15 types of Items at one time.
*/
	MSG_CANT_SELL_OVER_15 = 0x130,
/*20171018 to latest
ë‚˜ì´ì œí•œ ë•Œë¬¸ì— ì´ê³„ì •ìœ¼ë¡œ ì´ì„œë²„ì— ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
The age limit from commandment tables cannot connect to this server.
*/
	MSG_UNDER_AGE = 0x131,
/*20171018 to latest
ë¬´ê²Œê°€ 50 í¼ì„¼íŠ¸ ì´ìƒì¼ë•ŒëŠ” HP SPê°€ ìžì—°ì ìœ¼ë¡œ íšŒë³µì´ ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
HP/SP will not be restored when your carried weight is over 50% of the Weight Limit.
*/
	MSG_NO_RECOVER_OVERWEIGHT = 0x132,
/*20171018 to latest
ë¬´ê²Œê°€ 90 í¼ì„¼íŠ¸ ì´ìƒì¼ë•ŒëŠ” ê³µê²©ê³¼ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't use Skills or Attack while your carried weight is over 90% of your Weight Limit.
*/
	MSG_NO_ATTACK_OVERWEIGHT = 0x133,
/*20171018 to latest
HP SPê°€ ìžì—°ì ìœ¼ë¡œ íšŒë³µì´ ê°€ëŠ¥í•œ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Your HP/SP are now being restored naturally.
*/
	MSG_NO_RECOVER_OVERWEIGHT_RELEASED = 0x134,
/*20171018 to latest
ê³µê²©ê³¼ ìŠ¤í‚¬ì´ ê°€ëŠ¥í•œ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Attack and Skills are now available.
*/
	MSG_NO_ATTACK_OVERWEIGHT_RELEASED = 0x135,
/*20171018 to latest
ì„œë²„ ì ê²€ì¤‘ìž…ë‹ˆë‹¤.
Your Game's Exe File is not the latest version.
*/
	MSG_INVALID_VERSION = 0x136,
/*20171018 to latest
ì•„ì´í…œì´ ëª¨ë‘ íŒ”ë ¸ìŠµë‹ˆë‹¤.
Items are sold out.
*/
	MSG_ITEM_IS_SOLD_OUT = 0x137,
/*20171018 to latest
ì±„íŒ…ë‚´ìš© íŒŒì¼ë¡œ ì €ìž¥í•˜ê¸°
Save Chat as Text File
*/
	MSG_WRITE_CHAT_TO_FILE = 0x138,
/*20171018 to latest
/ê°ˆë¬´ë¦¬ or /savechat : ì±„íŒ… ë‚´ìš© íŒŒì¼ë¡œ ì €ìž¥í•˜ê¸°.
/savechat: Save a Chat Log
*/
	MSG_EXPLAIN_SAVE_CHAT = 0x139,
/*20171018 to latest
ê³„ì • ë§Œë“¤ê¸°
Register
*/
	MSG_MAKEACCOUNT = 0x13a,
/*20171018 to latest
ìˆ˜ì‹ ê±°ë¶€í•˜ê¸°
Reject Whispering
*/
	MSG_REQ_EX_LIST = 0x13b,
/*20171018 to latest
ìˆ˜ì‹ ê±°ë¶€í•´ì œí•˜ê¸°
Allow Whispering
*/
	MSG_REQ_IN = 0x13c,
/*20171018 to latest
ë¯¸ìŠ¤í‘œì‹œ On
Shows ''Miss''
*/
	MSG_MISS_EFFECT_ON = 0x13d,
/*20171018 to latest
ë¯¸ìŠ¤í‘œì‹œ Off
Shows ''Miss''
*/
	MSG_MISS_EFFECT_OFF = 0x13e,
/*20171018 to latest
ì¹´ë©”ë¼ê³ ì • On
Camera Zooming On
*/
	MSG_FIXED_CAMERA_ON = 0x13f,
/*20171018 to latest
ì¹´ë©”ë¼ê³ ì • Off
Camera Zooming Off
*/
	MSG_FIXED_CAMERA_OFF = 0x140,
/*20171018 to latest
/camera : í”Œë ˆì´ì–´ì—ê²Œ ì¹´ë©”ë¼ê³ ì • On Off /miss : ë¯¸ìŠ¤ì´íŽ™íŠ¸ On Off
/camera: Camera Zooming On or Off. /miss: Toggle ''Miss'' display
*/
	MSG_EXPLAIN_CAMERA_MISS = 0x141,
/*20171018 to latest
ìŠ¤í‚¬ì •ë³´ë³´ê¸°
View Skill Info
*/
	MSG_SEE_INFORMATION_OF_SKILL = 0x142,
/*20171018 to latest
ìŠ¤í‚¬ì´ë¦„ë°”ê¾¸ê¸°
Change Skill
*/
	MSG_CHANGE_SKILL_NAME = 0x143,
/*20171018 to latest
ìŠ¤í”„ë¼ì´íŠ¸ í•´ìƒë„
Sprite Resolution
*/
	MSG_SPRITE_RESOLUTION = 0x144,
/*20171018 to latest
í…ìŠ¤ì³ í•´ìƒë„
Texture Resolution
*/
	MSG_TEXTURE_RESOLUTION = 0x145,
/*20171018 to latest
ë””í…Œì¼ ì¡°ì •
Arrange Detail
*/
	MSG_DETAILLEVELWND = 0x146,
/*20171018 to latest
%s Zeny íšë“
You got %s Zeny
*/
	MSG_GET_ZENY = 0x147,
/*20171018 to latest
ê¸¸ë“œëª…
Guild Name
*/
	MSG_GUILDNAME = 0x148,
/*20171018 to latest
ê¸¸ë“œë ˆë²¨
Guild lvl
*/
	MSG_GUILDLEVEL = 0x149,
/*20171018 to latest
ë§ˆìŠ¤í„°ì´ë¦„
ClanMaster Name
*/
	MSG_GUILD_MASTER_NAME = 0x14a,
/*20171018 to latest
ì¡°í•©ì›ìˆ˜
Number of Members
*/
	MSG_GUILD_NUM_MEMBER = 0x14b,
/*20171018 to latest
ì¡°í•©ì› í‰ê· ë ˆë²¨
Avg.lvl of Guildsmen
*/
	MSG_GUILD_AVG_MEMBER_LEVEL = 0x14c,
/*20171018 to latest
ê´€ë¦¬ì˜ì§€
Castles Owned
*/
	MSG_GUILD_MANAGE_LAND = 0x14d,
/*20171018 to latest
ì„±í–¥
Tendency
*/
	MSG_GUILD_FAIR = 0x14e,
/*20171018 to latest
ê²½í—˜ì¹˜
EXP
*/
	MSG_GUILD_EXP = 0x14f,
/*20171018 to latest
ê¸¸ë“œì— ë¸”ë ˜
Emblem
*/
	MSG_GUILD_EMBLEM = 0x150,
/*20171018 to latest
ê¸¸ë“œìƒë‚©í¬ì¸íŠ¸
Tax Point
*/
	MSG_GUILD_POINT = 0x151,
/*20171018 to latest
ë™ë§¹ê¸¸ë“œ
Alliances
*/
	MSG_ALLY_GUILD = 0x152,
/*20171018 to latest
ì ëŒ€ê¸¸ë“œ
Antagonists
*/
	MSG_HOSTILITY_GUILD = 0x153,
/*20171018 to latest
ê¸¸ë“œì •ë³´
Guild Info
*/
	MSG_GUILDINFOMANAGE = 0x154,
/*20171018 to latest
ì¡°í•©ì›ì •ë³´
Guildsmen Info
*/
	MSG_GUILDMEMBERMANAGE = 0x155,
/*20171018 to latest
ì§ìœ„ì„¤ì •
Position
*/
	MSG_GUILDPOSITIONMANAGE = 0x156,
/*20171018 to latest
ê¸¸ë“œìŠ¤í‚¬
Guild Skill
*/
	MSG_GUILDSKILL = 0x157,
/*20171018 to latest
ì¶”ë°©ìž ë¦¬ìŠ¤íŠ¸
Expel History
*/
	MSG_GUILDBANISHEDMEMBER = 0x158,
/*20171018 to latest
ê³µì§€ì‚¬í•­
Guild Notice
*/
	MSG_GUILDNOTICE = 0x159,
/*20171018 to latest
ì „ì²´ê¸¸ë“œ ë¦¬ìŠ¤íŠ¸
Entire Guild List
*/
	MSG_GUILDTOTALINFO = 0x15a,
/*20171018 to latest
ê·“ë§ ë¦¬ìŠ¤íŠ¸
Whispering List
*/
	MSG_WHISPERLISTWND = 0x15b,
/*20171018 to latest
ê·“ë§ì°½ ì—´ê¸°
Open Whispering Window
*/
	MSG_OPENWHISPERLISTWND = 0x15c,
/*20171018 to latest
ê·“ë§ ë¦¬ìŠ¤íŠ¸ ì°½ ì—¬ëŠ”ë²• : [Alt] + [H] ë¥¼ ëˆ„ë¥´ë©´ ê·“ë§ ë¦¬ìŠ¤íŠ¸ ì°½ì´ ì—´ë¦½ë‹ˆë‹¤.
How to Open Whispering List: Press [Alt] + [H]
*/
	MSG_EXPLAIN_WHISPER_LIST_WND = 0x15d,
/*20171018 to latest
ìžë™ìœ¼ë¡œ ê·“ë§ì°½ ì—´ê¸°
Open Whispering List Automatically
*/
	MSG_AUTOOPENWHISPERLISTWND = 0x15e,
/*20171018 to latest
ì§€ìš°ê¸°
Delete
*/
	MSG_DELETE = 0x15f,
/*20171018 to latest
ë‹¤ìŒë¶€í„° ì—´ë¦¬ì§€ ì•ŠìŒ
Close since next
*/
	MSG_DONTOPEN = 0x160,
/*20171018 to latest
ë§ˆì§€ë§‰ìœ¼ë¡œ ì ‘ì†í•œ ì‹œê°„
Last Log-in Time
*/
	MSG_LAST_LOGIN_TIME = 0x161,
/*20171018 to latest
ë§ˆì§€ë§‰ìœ¼ë¡œ ì ‘ì†í•œ IP
Last Log-in IP
*/
	MSG_LAST_LOGIN_IP = 0x162,
/*20171018 to latest
ì¹œêµ¬ ì„¤ì •
Friend Setup
*/
	MSG_FRIEND_SETTING = 0x163,
/*20171018 to latest
ì •ë§ ì§€ìš°ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure that you want to delete?
*/
	MSG_DO_YOU_REALLY_WANT_DELETE = 0x164,
/*20171018 to latest
ì •ë§ íƒˆí‡´í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure that you want to leave?
*/
	MSG_DO_YOU_REALLY_WANT_LEAVE = 0x165,
/*20171018 to latest
ì¹œêµ¬ë¡œ ë“±ë¡í•˜ê¸°
Register as a Friend
*/
	MSG_ADD_TO_FRIEND_CHAR_LIST = 0x166,
/*20171018 to latest
ì¹œêµ¬ì¼ë•Œ ìžë™ìœ¼ë¡œ 1:1ì°½ ì—´ê¸°
Open 1:1 Chat between Friends
*/
	MSG_AUTOOPENWHISPERLISTWND_FRIEND = 0x167,
/*20171018 to latest
1:1ì°½ ì—´ê¸°
Open 1:1 Chat
*/
	MSG_OPEN_1ON1_WINDOW = 0x168,
/*20171018 to latest
ì¹œêµ¬ê°€ ì•„ë‹ë•Œ ìžë™ìœ¼ë¡œ 1:1ì°½ ì—´ê¸°
Open 1:1 Chat between Strangers
*/
	MSG_AUTOOPEN_1ON1_WINDOW = 0x169,
/*20171018 to latest
1:1ì°½ ì—´ë¦´ë•Œ ì†Œë¦¬ë¡œ ì•Œë¦¼
Alarm when you recieve a 1:1 Chat
*/
	MSG_WHISPER_OPEN_SOUND = 0x16a,
/*20171018 to latest
ì •ë§ ì œëª…ì‹œí‚¤ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure that you want to expel?
*/
	MSG_DO_YOU_REALLY_WANT_EXPEL = 0x16b,
/*20171018 to latest
%s ë‹˜ì´ ê¸¸ë“œë¥¼ íƒˆí‡´í–ˆìŠµë‹ˆë‹¤.
%s has withdrawn from the guild.
*/
	MSG_USER_LEFT_GUILD = 0x16c,
/*20171018 to latest
íƒˆí‡´ì‚¬ìœ  : %s
Secession Reason: %s
*/
	MSG_REASON_LEAVE_GUILD = 0x16d,
/*20171018 to latest
ê¸¸ë“œëª…ì´ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤
You have failed to disband the guild.
*/
	MSG_DISORGANIZE_GUILD_FAILURE = 0x16e,
/*20171018 to latest
ê¸¸ë“œí•´ì²´ì‚¬ìœ  : %s
Disband Reason: %s
*/
	MSG_DISORGANIZATION_REASON = 0x16f,
/*20171018 to latest
í•´ë‹¹ ê³„ì •ì€ ì‚­ì œëœ ì•„ì´ë”” ìž…ë‹ˆë‹¤.
This ID has been removed.
*/
	MSG_DELETED_ACCOUNT = 0x170,
/*20171018 to latest
íŒë§¤ê°€ :
Price: 
*/
	MSG_SELLPRICE = 0x171,
/*20171018 to latest
%s ë‹˜ì´ ê¸¸ë“œì—ì„œ ì¶”ë°©ë˜ì—ˆìŠµë‹ˆë‹¤.
%s has been expelled from our guild.
*/
	MSG_BAN_GUILD = 0x172,
/*20171018 to latest
ì¶”ë°©ì‚¬ìœ  : %s
Expulsion Reason: %s
*/
	MSG_REASON_BAN_GUILD = 0x173,
/*20171018 to latest
ì•„ì´í…œì„ ì°©ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't put this item on.
*/
	MSG_CAN_NOT_EQUIP_ITEM = 0x174,
/*20171018 to latest
íŒŒí‹°ì„¤ì •ì„ ë³€ê²½í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't modify Party Setup.
*/
	MSG_PARTYSETTING_CHANGE_IMPOSSIBLE = 0x175,
/*20171018 to latest
ê¸¸ë“œê°€ ë§Œë“¤ì–´ ì¡ŒìŠµë‹ˆë‹¤.
Guild has been Created.
*/
	MSG_GUILD_MAKE_SUCCESS = 0x176,
/*20171018 to latest
ì´ë¯¸ ê¸¸ë“œì— ì†í•´ìžˆìŠµë‹ˆë‹¤.
You are already in a Guild.
*/
	MSG_GUILD_MAKE_ALREADY_MEMBER = 0x177,
/*20171018 to latest
ê°™ì€ì´ë¦„ì˜ ê¸¸ë“œê°€ ì¡´ìž¬í•©ë‹ˆë‹¤.
That Guild Name already exists.
*/
	MSG_GUILD_MAKE_GUILD_EXIST = 0x178,
/*20171018 to latest
 ê¸¸ë“œì—ì„œ ì´ˆì²­ ë©”ì‹œì§€ê°€ ì™”ìŠµë‹ˆë‹¤. ê°€ìž…í•˜ê² ìŠµë‹ˆê¹Œ?
 Guild has sent you an invitation. Would you like to join this Guild?
*/
	MSG_SUGGEST_JOIN_GUILD = 0x179,
/*20171018 to latest
ë‹¤ë¥¸ê¸¸ë“œì— ê°€ìž…ë˜ì–´ ìžˆìŠµë‹ˆë‹¤.
He/She is already in a Guild.
*/
	MSG_CHARACTER_IS_ALREADY_IN_GUILD = 0x17a,
/*20171018 to latest
ê¸¸ë“œê°€ìž…ì„ ê±°ì ˆ í–ˆìŠµë‹ˆë‹¤.
Offer Rejected
*/
	MSG_CHARACTER_REJECT_JOIN_GUILD = 0x17b,
/*20171018 to latest
ê¸¸ë“œê°€ìž…ì„ ìˆ˜ë½í–ˆìŠµë‹ˆë‹¤.
Offer Accepted
*/
	MSG_CHARACTER_ACCEPT_JOIN_GUILD = 0x17c,
/*20171018 to latest
ê¸¸ë“œì •ì›ì„ ì´ˆê³¼í–ˆìŠµë‹ˆë‹¤.
Your Guild is Full.
*/
	MSG_TOO_MANY_PEOPLE_IN_GUILD = 0x17d,
/*20171018 to latest
(%s)ë‹˜ ê¸¸ë“œì— ê°€ìž…ìš”ì²­
Send (%s) a Guild invitation
*/
	MSG_REQ_JOIN_GUILD = 0x17e,
/*20171018 to latest
ìŠ¤í‚¬ ë ˆë²¨ì´ ëª¨ìžë¼ì„œ ë§¤ë„ˆí¬ì¸íŠ¸ë¥¼ ì¤„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You haven't learned enough skills for aligning.
*/
	MSG_NOT_ENOUGH_FOR_MANNER_POINT = 0x17f,
/*20171018 to latest
ë§¤ë„ˆ í¬ì¸íŠ¸ ì£¼ê¸° ì„±ê³µ
Aligning completed.
*/
	MSG_GIVING_MANNER_POINT_SUCCESS = 0x180,
/*20171018 to latest
ì˜¤ëŠ˜ ì´ë¯¸ ì‚¬ìš©í–ˆìŠµë‹ˆë‹¤.
You already spent your point for today.
*/
	MSG_YOU_USE_TODAY_ALREADY = 0x181,
/*20171018 to latest
ì´ìºë¦­í„°ì—ê²Œ ì§€ê¸‰í•œì§€ í•œë‹¬ì´ ì§€ë‚˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
Hasn't been a month yet since you aligned this person.
*/
	MSG_ONE_MONTH_NOT_PASSED = 0x182,
/*20171018 to latest
%s ë‹˜ìœ¼ë¡œë¶€í„° í”ŒëŸ¬ìŠ¤ ë§¤ë„ˆ í¬ì¸íŠ¸ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.
Remember, Spamming isn't nice.
*/
	MSG_RECEIVE_PLUS_MANNER_POINT = 0x183,
/*20171018 to latest
%s ë‹˜ìœ¼ë¡œë¶€í„° ë§ˆì´ë„ˆìŠ¤ ë§¤ë„ˆ í¬ì¸íŠ¸ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.
Please refrain from ill-mannered conduct, thank you.
*/
	MSG_RECEIVE_MINUS_MANNER_POINT = 0x184,
/*20171018 to latest
ì±„íŒ… ê¸ˆì§€ ì‹œê°„ ì¤„ì´ê¸°(í’€ê¸°)
Align with a Good Point
*/
	MSG_GIVE_PLUS_MANNER_POINT = 0x185,
/*20171018 to latest
ì±„íŒ… ê¸ˆì§€ ì‹œê°„ ëŠ˜ì´ê¸°(ê±¸ê¸°)
Align with a Bad Point
*/
	MSG_GIVE_MINUS_MANNER_POINT = 0x186,
/*20171018 to latest
(%s)ë‹˜ê³¼ì˜ ê±°ëž˜ìš”ì²­
Request a deal with (%s)
*/
	MSG_REQ_DEAL_WITH2 = 0x187,
/*20171018 to latest
(%s)ë‹˜ íŒŒí‹°ì— ê°€ìž…ìš”ì²­
Ask (%s) to join your party
*/
	MSG_REQ_JOIN_PARTY2 = 0x188,
/*20171018 to latest
 ê¸¸ë“œì—ì„œ ë™ë§¹ìš”ì²­ ë©”ì‹œì§€ê°€ ì™”ìŠµë‹ˆë‹¤. ë™ë§¹í•˜ê² ìŠµë‹ˆê¹Œ?
 Guild is asking you to agree to an Alliance with them. Do you accept?
*/
	MSG_SUGGEST_ALLY_GUILD = 0x189,
/*20171018 to latest
ì´ë¯¸ ë™ë§¹ë˜ì–´ ìžˆìŠµë‹ˆë‹¤.
This Guild is already your Ally.
*/
	MSG_REQALLYGUILD_ALREADY_ALLIED = 0x18a,
/*20171018 to latest
ë™ë§¹ì„ ê±°ì ˆ í–ˆìŠµë‹ˆë‹¤.
You reject the offer
*/
	MSG_REQALLYGUILD_REJECT = 0x18b,
/*20171018 to latest
ë™ë§¹ì„ ìˆ˜ë½ í–ˆìŠµë‹ˆë‹¤.
You accept the offer
*/
	MSG_REQALLYGUILD_ACCEPT = 0x18c,
/*20171018 to latest
ìƒëŒ€ê¸¸ë“œì˜ ë™ë§¹ê¸¸ë“œì˜ ìˆ˜ê°€ ì´ˆê³¼ ë˜ì—ˆìŠµë‹ˆë‹¤.
They have too many Alliances.
*/
	MSG_REQALLYGUILD_OVERSIZE = 0x18d,
/*20171018 to latest
ê¸¸ë“œì˜ ë™ë§¹ê¸¸ë“œì˜ ìˆ˜ê°€ ì´ˆê³¼ ë˜ì—ˆìŠµë‹ˆë‹¤.
You have too many Alliances.
*/
	MSG_REQALLYMYGUILD_OVERSIZE = 0x18e,
/*20171018 to latest
ê¸¸ë“œ ë™ë§¹ ìš”ì²­
Set this guild as an Alliance
*/
	MSG_REQ_ALLY_GUILD = 0x18f,
/*20171018 to latest
ê¸¸ë“œê°€ ì„±ê³µì ìœ¼ë¡œ í•´ì²´ ë˜ì—ˆìŠµë‹ˆë‹¤.
Guild was successfully disbanded.
*/
	MSG_DISORGANIZE_GUILD_SUCCESS = 0x190,
/*20171018 to latest
ì£¼ë¯¼ë“±ë¡ë²ˆí˜¸ê°€ í‹€ë ¤ì„œ ê¸¸ë“œê°€ í•´ì²´ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
You have failed to disband the guild due to your incorrect SSN.
*/
	MSG_DISORGANIZE_GUILD_INVALIDKEY = 0x191,
/*20171018 to latest
ê¸¸ë“œë§´ë²„ê°€ ì¡´ìž¬í•´ì„œ ê¸¸ë“œê°€ í•´ì²´ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
You have failed to disband the guild because there are guildsmen still present.
*/
	MSG_DISORGANIZE_GUILD_MEMBEREXIST = 0x192,
/*20171018 to latest
ê¸¸ë“œ ì ëŒ€ ìš”ì²­
Set this guild as an Antagonist
*/
	MSG_REQ_HOSTILE_GUILD = 0x193,
/*20171018 to latest
ë¨¸ë¦¬ìƒ‰ê¹” ì„ íƒ
Choose Hair Color
*/
	MSG_SELECT_HAIR_COLOR = 0x194,
/*20171018 to latest
ê¸¸ë“œê²°ì„±ì‹œ í•„ìš”í•œ ì•„ì´í…œì´ ì—†ìŠµë‹ˆë‹¤.
You don't have necessary item to create a Guild.
*/
	MSG_GUILD_MAKE_GUILD_NONE_ITEM = 0x195,
/*20171018 to latest
ëª¬ìŠ¤í„° ì •ë³´
Monster Info
*/
	MSG_MONSTER_INFO_WINDOW = 0x196,
/*20171018 to latest
ì´ë¦„
Name
*/
	MSG_NAME = 0x197,
/*20171018 to latest
ë ˆë²¨
Level
*/
	MSG_LEVEL = 0x198,
/*20171018 to latest
HP
*/
	MSG_HP = 0x199,
/*20171018 to latest
í¬ê¸°
Size
*/
	MSG_SIZE = 0x19a,
/*20171018 to latest
ì¢…ì¡±
Type
*/
	MSG_RACETYPE = 0x19b,
/*20171018 to latest
MDEF
*/
	MSG_MDEFPOWER = 0x19c,
/*20171018 to latest
ì†ì„±
Attribute
*/
	MSG_PROPERTY = 0x19d,
/*20171018 to latest
ç„¡
Neutral
*/
	MSG_PROPERTY_NEUTURAL = 0x19e,
/*20171018 to latest
æ°´
Water
*/
	MSG_PROPERTY_WATER = 0x19f,
/*20171018 to latest
åœ°
Earth
*/
	MSG_PROPERTY_EARTH = 0x1a0,
/*20171018 to latest
ç«
Fire
*/
	MSG_PROPERTY_FIRE = 0x1a1,
/*20171018 to latest
é¢¨
Wind
*/
	MSG_PROPERTY_WIND = 0x1a2,
/*20171018 to latest
æ¯’
Poison
*/
	MSG_PROPERTY_POISON = 0x1a3,
/*20171018 to latest
è–
Holy
*/
	MSG_PROPERTY_SAINT = 0x1a4,
/*20171018 to latest
æš—
Shadow
*/
	MSG_PROPERTY_DARK = 0x1a5,
/*20171018 to latest
ï¦£
Ghost
*/
	MSG_PROPERTY_MENTAL = 0x1a6,
/*20171018 to latest
æ­»
Undead
*/
	MSG_PROPERTY_UNDEAD = 0x1a7,
/*20171018 to latest
í˜„ìž¬ëŠ” ì•„ì´í…œì„ ë§Œë“¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't create items yet.
*/
	MSG_CANT_MAKE_ITEM = 0x1a8,
/*20171018 to latest
ì œì¡° ëª©ë¡
Item List you can craft
*/
	MSG_MAKE_LIST = 0x1a9,
/*20171018 to latest
 ë§Œë“¤ê¸°
 Create
*/
	MSG_MAKE_TARGET = 0x1aa,
/*20171018 to latest
 ì— í•„ìš”í•œ ìž¬ë£Œ:
's materials
*/
	MSG_REQUIRE_FOR_MAKE_TARGET = 0x1ab,
/*20171018 to latest
 ë§Œë“¤ê¸° ì‹¤íŒ¨
 item creation failed.
*/
	MSG_MAKE_TARGET_FAIL = 0x1ac,
/*20171018 to latest
 ë§Œë“¤ê¸° ì„±ê³µ
 item created successfully.
*/
	MSG_MAKE_TARGET_SUCCEESS = 0x1ad,
/*20171018 to latest
%s ë§Œë“¤ê¸°ë¥¼ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
 item creation failed.
*/
	MSG_MAKE_TARGET_FAIL_MSG = 0x1ae,
/*20171018 to latest
%s ë§Œë“¤ê¸°ë¥¼ ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
 item created successfully.
*/
	MSG_MAKE_TARGET_SUCCEESS_MSG = 0x1af,
/*20171018 to latest
ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
You are not the required lvl.
*/
	MSG_NOT_ENOUGH_LEVEL = 0x1b0,
/*20171018 to latest
ë ˆë²¨ì´ ë„ˆë¬´ ë†’ìŠµë‹ˆë‹¤.
Too high lvl for this job.
*/
	MSG_TOO_HIGH_LEVEL = 0x1b1,
/*20171018 to latest
ì§ì—…ì´ ì í•©í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Not the suitable job for this type of work.
*/
	MSG_NOT_ACCEPTABLE_JOB = 0x1b2,
/*20171018 to latest
í† í‚¤ ë°•ìŠ¤ íŠ¸ëž© ë©”ì„¸ì§€
Record a message in the Talkie Box
*/
	MSG_TALKBOX_WINDOW = 0x1b3,
/*20171018 to latest
ê¸°ë¡í•  ë©”ì„¸ì§€ë¥¼ ìž…ë ¥í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please type a message for the Talkie Box
*/
	MSG_TALKBOX_WINDOW_MSG = 0x1b4,
/*20171018 to latest
ê¸¸ë“œì—ê²Œ ë³´ëƒ„
Send to Guild
*/
	MSG_SEND_TO_GUILD = 0x1b5,
/*20171018 to latest
ê²°ì œëœ ê³„ì •ì´ ì•„ë‹™ë‹ˆë‹¤. ê²°ì œ íŽ˜ì´ì§€ë¡œ ì´ë™í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You didn't pay for this ID. Would you like to pay for it now?
*/
	MSG_NOT_SETTLED = 0x1b6,
/*20171018 to latest
ì„œë²„ê°€ í˜¼ìž¡í•œ ê´€ê³„ë¡œ ìž ì‹œí›„ ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Server is jammed due to overpopulation. Please try again after few minutes.
*/
	MSG_ACCOUNT_BUSY = 0x1b7,
/*20171018 to latest
ì§€ë‚œ ì ‘ì† ì •ë³´ê°€ ë‚¨ì•„ ìžˆìŠµë‹ˆë‹¤. 30ì´ˆì •ë„ ì§€ë‚œë’¤ì— ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Server still recognizes your last log-in. Please try again after a few minutes.
*/
	MSG_INFORMATION_REMAINED = 0x1b8,
/*20171018 to latest
ë§¤ í’€ì–´ì£¼ê¸°
Release Falcon
*/
	MSG_BIRDOFF = 0x1b9,
/*20171018 to latest
íŽ˜ì½”íŽ˜ì½” ë‚´ë¦¬ê¸°
Dismount
*/
	MSG_CHIKENOFF = 0x1ba,
/*20171018 to latest
å°
Small
*/
	MSG_SIZE_SMALL = 0x1bb,
/*20171018 to latest
ä¸­
Med
*/
	MSG_SIZE_MIDDLE = 0x1bc,
/*20171018 to latest
å¤§
Big
*/
	MSG_SIZE_BIG = 0x1bd,
/*20171018 to latest
ë”ë¸”
Double
*/
	MSG_DOUBLE = 0x1be,
/*20171018 to latest
íŠ¸ë¦¬í”Œ
Triple
*/
	MSG_TRIPLE = 0x1bf,
/*20171018 to latest
ì¿¼ë“œë¡œí”Œ
Quadruple
*/
	MSG_QUADROPLE = 0x1c0,
/*20171018 to latest
%s ê¹Œì§€ ë¡œê·¸ì¸ì„ ê¸ˆì§€í•˜ê³  ìžˆìŠµë‹ˆë‹¤.
You are prohibited to log in until %s.
*/
	MSG_LOGIN_REFUSE_BLOCKED_UNTIL = 0x1c1,
/*20171018 to latest
ì˜ 
's 
*/
	MSG_MANUFACTURED_NORMAL_ITEM = 0x1c2,
/*20171018 to latest
ì˜ íŒŒì´ì–´ 
's Fire 
*/
	MSG_MANUFACTURED_FIRE_ITEM = 0x1c3,
/*20171018 to latest
ì˜ ì•„ì´ìŠ¤ 
's Ice 
*/
	MSG_MANUFACTURED_ICE_ITEM = 0x1c4,
/*20171018 to latest
ì˜ ìœˆë“œ 
's Wind 
*/
	MSG_MANUFACTURED_WIND_ITEM = 0x1c5,
/*20171018 to latest
ì˜ ì–´ìŠ¤ 
's Earth 
*/
	MSG_MANUFACTURED_EARTH_ITEM = 0x1c6,
/*20171018 to latest
211.239.161.246
38.144.194.2
*/
	MSG_ACCOUNT_ADDRESS = 0x1c7,
/*20171018 to latest
6900
*/
	MSG_ACCOUNT_PORT = 0x1c8,
/*20171018 to 20171206
http://www.ragnarok.co.kr
20171208 to latest
http://roz.gnjoy.com/
http://www.ragnarok.co.kr
*/
	MSG_REGISTRATION_WEB_URL = 0x1c9,
/*20171018 to latest
%s ì‚¬ìš©ìž ê°•ì œ ì¢…ë£Œ
Kill %s
*/
	MSG_BAN_USER = 0x1ca,
/*20171018 to latest
ë¬´ì§€ìŽˆ 
Very Strong
*/
	MSG_ONE_STARPIECE = 0x1cb,
/*20171018 to latest
ë¬´ì§€ë¬´ì§€ìŽˆ 
Very Very Strong
*/
	MSG_TWO_STARPIECE = 0x1cc,
/*20171018 to latest
ë¬´ë¬´ë¬´ìŽˆ 
Very Very Very Strong
*/
	MSG_THREE_STARPIECE = 0x1cd,
/*20171018 to latest
ê¸¸ë“œ ì¶”ë°© ì‚¬ìœ 
The Reason of Expulsion
*/
	MSG_GUILD_KICK_REASON = 0x1ce,
/*20171018 to latest
 ê³µê²© ì†ë„ê°€ ì¦ê°€í–ˆìŠµë‹ˆë‹¤.
Attack Speed is up.
*/
	MSG_INCATTACKSPEED = 0x1cf,
/*20171018 to latest
 ê³µê²© ì†ë„ê°€ ê°ì†Œí–ˆìŠµë‹ˆë‹¤.
Attack Speed is down.
*/
	MSG_DECATTACKSPEED = 0x1d0,
/*20171018 to latest
 ë¬´ê¸°ì˜ ê³µê²©ë ¥ì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
Weapon Damage is improved.
*/
	MSG_INCWEAPONATTACK = 0x1d1,
/*20171018 to latest
 ë¬´ê¸°ì˜ ê³µê²©ë ¥ì´ ê°ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
Weapon Damage is reduced.
*/
	MSG_DECWEAPONATTACK = 0x1d2,
/*20171018 to latest
 ì‹œì „ ë”œë ˆì´ê°€ ì¤„ì—ˆìŠµë‹ˆë‹¤.
Cast Delay is reduced.
*/
	MSG_FASTPREDELAY = 0x1d3,
/*20171018 to latest
 ì‹œì „ ë”œë ˆì´ê°€ ì •ìƒìœ¼ë¡œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Cast Delay has returned to normal.
*/
	MSG_NORMALPREDELAY = 0x1d4,
/*20171018 to latest
 ë¬´ê¸°ì— ë…ì†ì„±ì´ ë¶€ì—¬ë˜ì—ˆìŠµë‹ˆë‹¤.
Weapon is temporarily enchanted with Poison.
*/
	MSG_WEAPONPROPERTYPOISON = 0x1d5,
/*20171018 to latest
 ë¬´ê¸°ì— ì„±ì†ì„±ì´ ë¶€ì—¬ë˜ì—ˆìŠµë‹ˆë‹¤.
Weapon is temporarily enchanted with an elemental property.
*/
	MSG_WEAPONPROPERTYSAINT = 0x1d6,
/*20171018 to latest
 ë¬´ê¸°ì˜ ì›ëž˜ì†ì„±ì´ ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
Weapon has changed back to normal.
*/
	MSG_WEAPONPROPERTYORIGINAL = 0x1d7,
/*20171018 to latest
 ë°©ì–´êµ¬ì— ì„±ì†ì„±ì´ ë¶€ì—¬ë˜ì—ˆìŠµë‹ˆë‹¤.
Armor has been enchanted with the Holy Ghost.
*/
	MSG_ARMORPROPERTYSAINT = 0x1d8,
/*20171018 to latest
 ë°©ì–´êµ¬ì˜ ì›ëž˜ì†ì„±ì´ ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
Armor has changed back to normal.
*/
	MSG_ARMORPROPERTYORIGINAL = 0x1d9,
/*20171018 to latest
 ë°°ë¦¬ì–´ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Barrier Formed.
*/
	MSG_BARRIOR = 0x1da,
/*20171018 to latest
 ë°°ë¦¬ì–´ ìƒíƒœê°€ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Barrier Canceled.
*/
	MSG_DISAPPEARBARRIOR = 0x1db,
/*20171018 to latest
 ì†Œí˜•, ì¤‘í˜•, ëŒ€í˜• ëª¬ìŠ¤í„°ì—ê²Œ 100% ê³µê²©ë ¥ì„ ì¤ë‹ˆë‹¤.
Weapon Perfection Initiated.
*/
	MSG_PERFECTDAMAGE = 0x1dc,
/*20171018 to latest
 ì›¨í°í¼íŽ™ì…˜ ëª¨ë“œê°€ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Weapon perfection Canceled.
*/
	MSG_DISAPPEARPERFECTDAMAGE = 0x1dd,
/*20171018 to latest
 ë¬´ê¸°ê°€ íŒŒê´´ë  ê°€ëŠ¥ì„±ì´ ë†’ì•„ì§„ ëŒ€ì‹  ë¬´ê¸°ì˜ ê³µê²©ë ¥ì´ ì¦ê°€í•˜ì˜€ìŠµë‹ˆë‹¤.
Power-Thrust Initiated.
*/
	MSG_OVERTHRUSTING = 0x1de,
/*20171018 to latest
 ì˜¤ë²„íŠ¸ëŸ¬ìŠ¤íŠ¸ ìƒíƒœê°€ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Power-Thrust Canceled.
*/
	MSG_DISAPPEAROVERTHRUSTING = 0x1df,
/*20171018 to latest
 ë¬´ê¸°ì˜ ìµœëŒ€ ì„±ëŠ¥ì„ ëŒì–´ëƒ…ë‹ˆë‹¤.
Maximize-Power Initiated.
*/
	MSG_MAXIMIZE = 0x1e0,
/*20171018 to latest
 ë§¥ì‹œë§ˆì´ì¦ˆ ìƒíƒœê°€ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Maximize-Power Canceled.
*/
	MSG_DISAPPEARMAXIMIZE = 0x1e1,
/*20171018 to latest
[ì‹ ì„œë²„] 
[New Server]
*/
	MSG_SERVER_PROPERTY_NEW = 0x1e2,
/*20171018 to latest
(%d ëª…)
(%d players)
*/
	MSG_SERVER_USER_COUNT = 0x1e3,
/*20171018 to latest
(ì ê²€ì¤‘)
(On the maintenance)
*/
	MSG_SERVER_INSPECTING = 0x1e4,
/*20171018 to latest
ê¸¸ë“œë©¤ë²„ %së‹˜ì´ ì ‘ì†í•˜ì…¨ìŠµë‹ˆë‹¤.
Guild member %s has connected.
*/
	MSG_GUILD_MEMBER_STATUS_ONLINE = 0x1e5,
/*20171018 to latest
ê¸¸ë“œë©¤ë²„ %së‹˜ì´ ì¢…ë£Œí•˜ì…¨ìŠµë‹ˆë‹¤.
Guild member %s has disconnected.
*/
	MSG_GUILD_MEMBER_STATUS_OFFLINE = 0x1e6,
/*20171018 to latest
ê²½í—˜ì¹˜ %d ì–»ìŒ
You got %d Base EXP.
*/
	MSG_GOT_EXPERIENCE_POINT = 0x1e7,
/*20171018 to latest
ìž¡ê²½í—˜ì¹˜ %d ì–»ìŒ
You got %d Job EXP.
*/
	MSG_GOT_JOB_EXPERIENCE_POINT = 0x1e8,
/*20171018 to latest
ê¸¸ë“œì—ì„œ íƒˆí‡´ í–ˆìŠµë‹ˆë‹¤.
You left the guild.
*/
	MSG_LEFT_GUILD = 0x1e9,
/*20171018 to latest
ê¸¸ë“œì—ì„œ ì¶”ë°© ë‹¹í–ˆìŠµë‹ˆë‹¤.
You have been expelled from the Guild.
*/
	MSG_BAN_FROM_GUILD = 0x1ea,
/*20171018 to latest
ì•„ì´í…œ ê°ì • ì„±ê³µ
Item Appraisal has completed successfully.
*/
	MSG_ITEM_IDENTIFY_SUCCEESS = 0x1eb,
/*20171018 to latest
ì•„ì´í…œ ê°ì • ì‹¤íŒ¨
Item appraisal has failed.
*/
	MSG_ITEM_IDENTIFY_FAIL = 0x1ec,
/*20171018 to latest
ì•„ì´í…œ ì¡°í•© ì„±ê³µ
Compounding has completed successfully.
*/
	MSG_ITEM_COMPOUNDING_SUCCEESS = 0x1ed,
/*20171018 to latest
ì•„ì´í…œ ì¡°í•© ì‹¤íŒ¨
Compounding has failed.
*/
	MSG_ITEM_COMPOUNDING_FAIL = 0x1ee,
/*20171018 to latest
ê¸¸ë“œ ì ëŒ€ ì„±ê³µ
Antagonist has been set.
*/
	MSG_HOSTILE_GUILD_SUCCEESS = 0x1ef,
/*20171018 to latest
ì ëŒ€ ê¸¸ë“œìˆ˜ ì´ˆê³¼ë¡œ ê¸¸ë“œ ì ëŒ€ ì‹¤íŒ¨
Guild has too many Antagonists.
*/
	MSG_TOO_MANY_HOSTILE_GUILD = 0x1f0,
/*20171018 to latest
ì´ë¯¸ ì ëŒ€ ê¸¸ë“œ ìž…ë‹ˆë‹¤
Already set as an Antagonist
*/
	MSG_ALREADY_REGISTERED_HOSTILE_GUILD = 0x1f1,
/*20171018 to latest
ì œë ¨ì´ ì„±ê³µì ìœ¼ë¡œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Upgrade has been completed successfully.
*/
	MSG_ITEM_REFINING_SUCCEESS = 0x1f2,
/*20171018 to latest
ì œë ¨ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Upgrade has failed.
*/
	MSG_ITEM_REFINING_FAIL = 0x1f3,
/*20171018 to latest
ì´ê³³ì—ì„œëŠ” ìˆœê°„ì´ë™ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Unavailable Area to Teleport
*/
	MSG_IMPOSSIBLE_TELEPORT_AREA = 0x1f4,
/*20171018 to latest
ì´ ìž¥ì†ŒëŠ” ê¸°ì–µí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to memorize this place as Warp Point
*/
	MSG_POSSIBLE_TELEPORT_AREA = 0x1f5,
/*20171018 to latest
ì§€ê¸ˆì€ ì¢…ë£Œí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Please wait 10 seconds before trying to log out.
*/
	MSG_CANT_EXIT_NOW = 0x1f6,
/*20171018 to latest
ì§ìœ„
Position
*/
	MSG_POSITION = 0x1f7,
/*20171018 to latest
ì§ì—…
Job
*/
	MSG_JOB = 0x1f8,
/*20171018 to latest
ë©”ëª¨
Note
*/
	MSG_MEMO = 0x1f9,
/*20171018 to latest
ê¸°ì—¬
Devotion
*/
	MSG_CONTRIBUTION = 0x1fa,
/*20171018 to latest
ìƒë‚©ê²½í—˜ì¹˜
Tax Point
*/
	MSG_EXP_CONTIRIBUTION = 0x1fb,
/*20171018 to latest
ê¸¸ë“œíƒˆí‡´
Leave Guild
*/
	MSG_LEAVE_GUILD = 0x1fc,
/*20171018 to latest
ì œëª…ì‹œí‚¤ê¸°
Expel
*/
	MSG_EXPEL_GUILD = 0x1fd,
/*20171018 to latest
ì„œì—´
Rank
*/
	MSG_GRADE = 0x1fe,
/*20171018 to latest
ì§ìœ„ëª…
Position Title
*/
	MSG_POSITION_NAME = 0x1ff,
/*20171018 to latest
ê°€ìž…ê¶Œí•œ
Invitation
*/
	MSG_JOIN_AUTHORITY = 0x200,
/*20171018 to latest
ì²˜ë²Œê¶Œí•œ
Punish
*/
	MSG_PENALTY_AUTORITY = 0x201,
/*20171018 to latest
ìƒë‚©%
Tax %
*/
	MSG_CONTRIBUTION_PERCENT = 0x202,
/*20171018 to latest
ì œëª©
Title
*/
	MSG_TITLE = 0x203,
/*20171018 to latest
ë‚´ìš©
For
*/
	MSG_CONTENTS = 0x204,
/*20171018 to latest
ê¸¸ë“œì´ë¦„
Guild Name
*/
	MSG_GUILD_NAME = 0x205,
/*20171018 to latest
ê¸¸ë“œë ˆë²¨
Guild lvl
*/
	MSG_GUILD_LEVEL = 0x206,
/*20171018 to latest
ì¡°í•©ì›ìˆ˜
Number of Members
*/
	MSG_GUILD_PEOPLE_COUNT = 0x207,
/*20171018 to latest
ëž­í‚¹
Ranking
*/
	MSG_RANKING = 0x208,
/*20171018 to latest
ì•„ì´í…œ ê°ì •
Item Appraisal
*/
	MSG_ITEM_IDENTIFY = 0x209,
/*20171018 to latest
ì•„ì´í…œ ì¡°í•©
Insert Card
*/
	MSG_ITEM_COMPOUNDING = 0x20a,
/*20171018 to latest
íƒˆí‡´ ì‚¬ìœ ë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter the reason of Secession.
*/
	MSG_PLEASE_INPUT_WHY_LEAVING = 0x20b,
/*20171018 to latest
ì¶”ë°© ì‚¬ìœ ë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter the reason of Expulsion.
*/
	MSG_PELASE_INPUT_WHY_EXPEL = 0x20c,
/*20171018 to latest
ìƒì ì„ ë‹«ìœ¼ì„¸ìš”.
Please close Shop.
*/
	MSG_PLEASE_CLOSE_STORE = 0x20d,
/*20171018 to latest
ìŠ¤í‚¬ ì´ë¦„
Skill 
*/
	MSG_SKILL_NAME = 0x20e,
/*20171018 to latest
ì•„ì´í…œ ì´ë¦„
Item Name
*/
	MSG_ITEM_NAME = 0x20f,
/*20171018 to latest
https://payment.ragnarok.co.kr
https://pay.ragnarok.co.kr (Billing Web)
*/
	MSG_SETTLE_WEB_URL = 0x210,
/*20171018 to latest
ê²Œìž„ë°©ì—ì„œ ì‚¬ìš©ê°€ëŠ¥í•œ IPê°œìˆ˜ê°€ ëª¨ë‘ ì‚¬ìš©ì¤‘ìž…ë‹ˆë‹¤. ê°œì¸ ê³„ì •ìœ¼ë¡œ ê²°ì œ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
IP capacity of this Internet Cafe is full. Would you like to pay the personal base?
*/
	MSG_BAN_IP_OVERFLOW = 0x211,
/*20171018 to latest
ê²°ì œì‹œê°„ì´ ë‹¤ë˜ì–´ ê²Œìž„ì„ ì¢…ë£Œí•©ë‹ˆë‹¤.
You are out of available paid playing time. Game will be shut down automatically.
*/
	MSG_BAN_PAY_OUT = 0x212,
/*20171018 to latest
ì´ë¦„ì´ ë„ˆë¬´ ê¹ë‹ˆë‹¤. í•œê¸€ 11ìž ì˜ë¬¸ 23ìž ì´ë‚´ë¡œ ì¨ì£¼ì‹­ì‹œì˜¤.
Name is too long. Please enter a name no greater than 23 english characters.
*/
	MSG_NAMELENGTH_TOO_LONG = 0x213,
/*20171018 to latest
deleted
Character will be deleted in %d seconds.
*/
	MSG_DELETE_AFTER_10_SECOND = 0x214,
/*20171018 to latest
ê·€í•˜ëŠ” ê°œì¸ ì •ì•¡ì œ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You paid with the personal regular base.
*/
	MSG_BILLING_100 = 0x215,
/*20171018 to latest
ê·€í•˜ëŠ” ê°œì¸ì •ëŸ‰ì œ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You paid with the personal regular base. Available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_200 = 0x216,
/*20171018 to latest
ê·€í•˜ëŠ” ê°œì¸ ë¬´ë£Œ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You are free!
*/
	MSG_BILLING_300 = 0x217,
/*20171018 to latest
ê·€í•˜ëŠ” ê°œì¸ ë¬´ë£Œ í—ˆìš©ê¸°ê°„ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You are free for the test, your available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_400 = 0x218,
/*20171018 to latest
ê·€í•˜ëŠ” ê²Œìž„ë°© ì •ì•¡ì œ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You paid with the Internet Cafe regular base. Available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_500 = 0x219,
/*20171018 to latest
ê·€í•˜ëŠ” ê²Œìž„ë°© ì •ëŸ‰ì œ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You paid with the Time Limit for Internet Cafe. Available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_501 = 0x21a,
/*20171018 to latest
ê·€í•˜ëŠ” ê²Œìž„ë°© ë¬´ë£Œ í—ˆìš©ê¸°ê°„ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You are free for the test of Internet Cafe version .
*/
	MSG_BILLING_600 = 0x21b,
/*20171018 to latest
ê·€í•˜ëŠ” ê²Œìž„ë°© ë¬´ë£Œ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
You are free for the Internet Cafe version.
*/
	MSG_BILLING_700 = 0x21c,
/*20171018 to latest
ê·€í•˜ëŠ” ì¢…ëŸ‰ì œ ì‚¬ì´íŠ¸ ì´ìš©ìžìž…ë‹ˆë‹¤.
You paid on the Time Limit Website.
*/
	MSG_BILLING_800 = 0x21d,
/*20171018 to latest
ì´ëª¨ì…˜ ëª©ë¡
Emotion icon List
*/
	MSG_EMOTION_LIST = 0x21e,
/*20171018 to latest
/ì´ëª¨ì…˜
/emo
*/
	MSG_VIEW_EMOTION = 0x21f,
/*20171018 to latest
/!
*/
	MSG_EMOTION_SURPRISE = 0x220,
/*20171018 to latest
/?
*/
	MSG_EMOTION_QUESTION = 0x221,
/*20171018 to latest
/ê¸°ì¨
/ho
*/
	MSG_EMOTION_DELIGHT = 0x222,
/*20171018 to latest
/í•˜íŠ¸
/lv
*/
	MSG_EMOTION_THROB = 0x223,
/*20171018 to latest
/ì™•í•˜íŠ¸
/lv2
*/
	MSG_EMOTION_BIGTHROB = 0x224,
/*20171018 to latest
/ë•€
/swt
*/
	MSG_EMOTION_SWEAT = 0x225,
/*20171018 to latest
/ì•„í•˜
/ic
*/
	MSG_EMOTION_AHA = 0x226,
/*20171018 to latest
/ì§œì¦
/an
*/
	MSG_EMOTION_FRET = 0x227,
/*20171018 to latest
/í™”
/ag
*/
	MSG_EMOTION_ANGER = 0x228,
/*20171018 to latest
/ëˆ
/$
*/
	MSG_EMOTION_MONEY = 0x229,
/*20171018 to latest
/...
*/
	MSG_EMOTION_THINK = 0x22a,
/*20171018 to latest
/ê°ì‚¬
/thx
*/
	MSG_EMOTION_THANKS = 0x22b,
/*20171018 to latest
/ê½¥
/wah
*/
	MSG_EMOTION_KEK = 0x22c,
/*20171018 to latest
/ì£„ì†¡
/sry
*/
	MSG_EMOTION_SORRY = 0x22d,
/*20171018 to latest
/ì›ƒìŒ
/heh
*/
	MSG_EMOTION_SMILE = 0x22e,
/*20171018 to latest
/ë»˜ë»˜
/swt2
*/
	MSG_EMOTION_PROFUSELY_SWEAT = 0x22f,
/*20171018 to latest
/ê¸ì 
/hmm
*/
	MSG_EMOTION_SCRATCH = 0x230,
/*20171018 to latest
/ìµœê³ 
/no1
*/
	MSG_EMOTION_BEST = 0x231,
/*20171018 to latest
/ë‘ë¦¬ë²ˆ
/??
*/
	MSG_EMOTION_STARE_ABOUT = 0x232,
/*20171018 to latest
/í—‰
/omg
*/
	MSG_EMOTION_HUK = 0x233,
/*20171018 to latest
/ì˜¤
/oh
*/
	MSG_EMOTION_O = 0x234,
/*20171018 to latest
/ì—‘ìŠ¤
/X
*/
	MSG_EMOTION_X = 0x235,
/*20171018 to latest
/í—¬í”„
/hlp
*/
	MSG_EMOTION_HELP = 0x236,
/*20171018 to latest
/ê°€
/go
*/
	MSG_EMOTION_GO = 0x237,
/*20171018 to latest
/ì—‰ì—‰
/sob
*/
	MSG_EMOTION_CRY = 0x238,
/*20171018 to latest
/í‚¥í‚¥
/gg
*/
	MSG_EMOTION_KIK = 0x239,
/*20171018 to latest
/ìª½
/kis
*/
	MSG_EMOTION_CHUP = 0x23a,
/*20171018 to latest
/ìª½ìª½
/kis2
*/
	MSG_EMOTION_CHUPCHUP = 0x23b,
/*20171018 to latest
/í¥
/pif
*/
	MSG_EMOTION_HNG = 0x23c,
/*20171018 to latest
/ì‘
/ok
*/
	MSG_EMOTION_OK = 0x23d,
/*20171018 to latest
ë‹¨ì¶•í‚¤ ëª©ë¡
Shortcut List
*/
	MSG_SHORTCUT_LIST = 0x23e,
/*20171018 to latest
ê·€í•˜ì˜ ê³„ì •ì€ ë³´ë¥˜ë˜ì—ˆìŠµë‹ˆë‹¤.
Your account is suspended.
*/
	MSG_BAN_PAY_SUSPEND = 0x23f,
/*20171018 to latest
ê³¼ê¸ˆ ì •ì±… ë³€ê²½ìœ¼ë¡œ ì¸í•´ ì¼ì‹œ ì¢…ë£Œë©ë‹ˆë‹¤. ë‹¤ì‹œ ì ‘ì†í•˜ì—¬ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Your connection is terminated due to change in the billing policy. Please connect again.
*/
	MSG_BAN_PAY_CHANGE = 0x240,
/*20171018 to latest
ì–´ì¹´ìš´íŠ¸ ì„œë²„ì— ì¸ì¦ëœ IPì™€ ê·€í•˜ì˜ IPê°€ ë‹¬ë¼ ì—°ê²°ì„ ì¢…ë£Œí•©ë‹ˆë‹¤.
Your connection is terminated because your IP doesn't match the authorized IP from the account server.
*/
	MSG_BAN_PAY_WRONGIP = 0x241,
/*20171018 to latest
ê²Œìž„ë°© IPì—ì„œ ê°œì¸ ì¢…ëŸ‰ì œ ê³¼ê¸ˆì„ ë§‰ê¸° ìœ„í•´ ì—°ê²°ì„ ì¢…ë£Œí•©ë‹ˆë‹¤. ê°œì¸ ì¢…ëŸ‰ì œ ê³¼ê¸ˆì„ ì‚¬ìš©í•˜ê¸° ìœ„í•´ì„œëŠ” ê²Œìž„ë°©IPë¡œ ë“±ë¡ì´ ë˜ì§€ ì•Šì€ IPë¥¼ ì‚¬ìš©í•´ ì£¼ì„¸ìš”.
Your connection is terminated to prevent charging from your account's play time.
*/
	MSG_BAN_PAY_PNGAMEROOM = 0x242,
/*20171018 to latest
ê·€í•˜ëŠ” ìš´ì˜ìžì— ì˜í•´ ê°•ì œ ì¢…ë£Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
You have been forced to disconnect by the Game Master Team.
*/
	MSG_BAN_OP_FORCE = 0x243,
/*20171018 to latest
ë¬´ê²Œê°€ 90%ë¥¼ ì´ˆê³¼í•˜ì—¬ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't use this Skill because you are over your Weight Limit.
*/
	MSG_USESKILL_FAIL_WEIGHTOVER = 0x244,
/*20171018 to latest
ë¬´ëª…
Nameless
*/
	MSG_NAMELESS_USER = 0x245,
/*20171018 to latest
ì¶•í•˜í•©ë‹ˆë‹¤. %së‹˜ì˜ í˜„ìž¬ ëž­í‚¹ì´ %dìœ„ë¡œ ìƒìŠ¹í•˜ì˜€ìŠµë‹ˆë‹¤.
Congratulations! %s ranking has gone up to %d.
*/
	MSG_RANK_IN_TEN = 0x246,
/*20171018 to latest
ì•ˆíƒ€ê¹ê²Œë„ %së‹˜ì˜ í˜„ìž¬ ëž­í‚¹ì´ %dìœ„ë¡œ í•˜ë½í•˜ì˜€ìŠµë‹ˆë‹¤.
What a pity! %s ranking has gone down to %d.
*/
	MSG_RANK_OUT_TEN = 0x247,
/*20171018 to latest
Pet Info
*/
	MSG_PET_INFO = 0x248,
/*20171018 to latest
ë§Œë³µë„
Hunger
*/
	MSG_PET_HUNGRY = 0x249,
/*20171018 to latest
ì¹œë°€ë„
Intimacy
*/
	MSG_PET_FRIENDLY = 0x24a,
/*20171018 to latest
ìƒì ê³¼ ì±„íŒ…ë°©ì„ ë™ì‹œì— ì—´ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Please avoid opening a chatroom while vending.
*/
	MSG_CANT_OPEN_STORE_WHILE_CHAT = 0x24b,
/*20171018 to latest
ê°œ
Total
*/
	MSG_EA4 = 0x24c,
/*20171018 to latest
%s ë¥¼ ì „íˆ¬ë¶ˆëŠ¥ìœ¼ë¡œ ë§Œë“¤ì—ˆìŠµë‹ˆë‹¤.
You have knocked down %s.
*/
	MSG_SLAIN = 0x24d,
/*20171018 to latest
%s ë‹˜ì— ì˜í•´ ì „íˆ¬ë¶ˆëŠ¥ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
You have been knocked down by %s.
*/
	MSG_SLAINBY = 0x24e,
/*20171018 to latest
ë¨¹ì´ - '%s' ì•„ì´í…œì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤..
Feed - "%s" is not available.
*/
	MSG_NOT_EXIST_PET_FOOD = 0x24f,
/*20171018 to latest
ë¨¹ì´ ì£¼ê¸°
Feed Pet
*/
	MSG_PET_FEEDING = 0x250,
/*20171018 to latest
í¼í¬ë¨¼ìŠ¤
Performance
*/
	MSG_PET_PERFORMANCE = 0x251,
/*20171018 to latest
ì•Œë¡œ ë˜ëŒë¦¬ê¸°
Return to Egg Shell
*/
	MSG_PET_RETURN_EGG = 0x252,
/*20171018 to latest
ì•…ì„¸ì‚¬ë¦¬ í•´ì œ
Unequip Accessory
*/
	MSG_PET_ACC_OFF = 0x253,
/*20171018 to latest
Pet ìƒíƒœ ë³´ê¸°
Check Pet Status
*/
	MSG_PET_SHOWINFO = 0x254,
/*20171018 to latest
ì•…ì„¸ì‚¬ë¦¬
Accessory
*/
	MSG_PET_ACCESSARY = 0x255,
/*20171018 to latest
ìž¥ì°©ë¨
Equipped
*/
	MSG_ITEM_EQUIPED = 0x256,
/*20171018 to latest
íŽ« ë¦¬ìŠ¤íŠ¸
Pet List
*/
	MSG_PET_EGG_LIST = 0x257,
/*20171018 to latest
ìž¥ì°© ì•ˆë¨
Unequipped
*/
	MSG_ITEM_UNEQUIPED = 0x258,
/*20171018 to latest
ì •ë§ë¡œ ë¨¹ì´ë¥¼ ì£¼ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure that you want to feed your pet?
*/
	MSG_SURE_TO_FEED_PET = 0x259,
/*20171018 to latest
ê°€ê²©ì„ ì“°ì‹¤ë• ìˆ«ìž(0~9)ë§Œ ì¨ì£¼ì‹­ì‹œì˜¤.
Only the numbers (0~9) are available.
*/
	MSG_CAN_INPUT_NUMBER_ONLY = 0x25a,
/*20171018 to latest
ê°ì •ë˜ì§€ ì•Šì€ ì•„ì´í…œì€ íŒë§¤í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot sell unidentified items.
*/
	MSG_CANT_SELL_UNIDENTIFIED_ITEM = 0x25b,
/*20171018 to latest
ê°€ê²©ì´ 0 Zenyì¸ ì•„ì´í…œì´ ì¡´ìž¬í•©ë‹ˆë‹¤. ê³„ì† í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Item at 0 Zeny exists. Do you wish to continue?
*/
	MSG_YOU_HAVE_FREE_ITEM_ON_SHOP = 0x25c,
/*20171018 to latest
[ìƒˆë¡œ ì¶”ê°€ëœ ì´ëª¨ì…˜ ë¦¬ìŠ¤íŠ¸]
[New Emotion List]
*/
	MSG_NEW_EMOTION_LIST = 0x25d,
/*20171018 to latest
ì¼ë³¸ìª½ ë² íƒ€ ì‚¬ìš©ìžë“¤ì—ê²Œ ì „í•˜ëŠ” ë©”ì„¸ì§€. -> ê²…í˜¸ì—ì„œ ìž¬ê°€ìž… í•˜ì„¸ìš”.
N/A
*/
	MSG_BAN_JAPAN_REFUSE1 = 0x25e,
/*20171018 to latest
ì¼ë³¸ìª½ ê³¼ê¸ˆì´ ì¢…ë£Œëœ ì‚¬ìš©ìžë“¤ì—ê²Œ ì „í•˜ëŠ” ë©”ì„¸ì§€. -> ëˆë‚´ë¼. ë‘ ë²ˆë‚´ë¼.
N/A
*/
	MSG_BAN_JAPAN_REFUSE2 = 0x25f,
/*20171018 to latest
ê°™ì€ ê³„ì •ì˜ ìºë¦­í„°ê°€ ì´ë¯¸ ê°€ìž…ë˜ì–´ìžˆìŠµë‹ˆë‹¤.
Character in the same account already joined.
*/
	MSG_ALREADY_SAME_AID_JOINED = 0x260,
/*20171018 to latest
(%d ëª…) - ë§Œ18ì„¸ì´ìƒ
(%d ppl) - over the age 18
*/
	MSG_SERVER_PROPERTY_ADULT = 0x261,
/*20171018 to latest
 í”„ë¡œë³´í¬ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Provoke initiated.
*/
	MSG_ENST_PROVOKE = 0x262,
/*20171018 to latest
 í”„ë¡œë³´í¬ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Provoke canceled.
*/
	MSG_DSST_PROVOKE = 0x263,
/*20171018 to latest
 ì¸ë“€ì–´ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Endure initiated.
*/
	MSG_ENST_ENDURE = 0x264,
/*20171018 to latest
 ì¸ë“€ì–´ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Endure canceled.
*/
	MSG_DSST_ENDURE = 0x265,
/*20171018 to latest
 ì§‘ì¤‘ë ¥ í–¥ìƒ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Improve Concentration initiated.
*/
	MSG_ENST_CONCENTRATION = 0x266,
/*20171018 to latest
 ì§‘ì¤‘ë ¥ í–¥ìƒ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Improve Concentration canceled.
*/
	MSG_DSST_CONCENTRATION = 0x267,
/*20171018 to latest
 í•˜ì´ë”© ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Hiding Initiated.
*/
	MSG_ENST_HIDING = 0x268,
/*20171018 to latest
 í•˜ì´ë”© ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Hiding Canceled.
*/
	MSG_DSST_HIDING = 0x269,
/*20171018 to latest
 í´ë¡œí‚¹ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Cloaking initiated.
*/
	MSG_ENST_CLOAKING = 0x26a,
/*20171018 to latest
 í´ë¡œí‚¹ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Cloaking canceled.
*/
	MSG_DSST_CLOAKING = 0x26b,
/*20171018 to latest
 ë…ì„ ë°˜ì‚¬ í•  ìˆ˜ ìžˆëŠ” ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Poison React initiated.
*/
	MSG_ENST_POISONREACT = 0x26c,
/*20171018 to latest
 í¬ì´ì¦Œ ë¦¬ì•¡íŠ¸ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Poison React canceled.
*/
	MSG_DSST_POISONREACT = 0x26d,
/*20171018 to latest
 ì´ë™ì†ë„ê°€ ê°ì†Œí•˜ì˜€ìŠµë‹ˆë‹¤.
Speed reduced.
*/
	MSG_ENST_QUAGMIRE = 0x26e,
/*20171018 to latest
 ì½°ê·¸ë§ˆì´ì–´ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Quagmire canceled.
*/
	MSG_DSST_QUAGMIRE = 0x26f,
/*20171018 to latest
 ë°©ì–´ë ¥ì´ ì¦ê°€ë˜ì—ˆìŠµë‹ˆë‹¤.
Defense increased.
*/
	MSG_ENST_ANGELUS = 0x270,
/*20171018 to latest
 ì•ˆì ¤ë£¨ìŠ¤ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Angelus canceled.
*/
	MSG_DSST_ANGELUS = 0x271,
/*20171018 to latest
 íž˜ê³¼ ì§€ëŠ¥, ë±ìŠ¤ê°€ ì¦ê°€í•˜ì˜€ìŠµë‹ˆë‹¤.
Blessing aligned.
*/
	MSG_ENST_BLESSING = 0x272,
/*20171018 to latest
 ë¸”ë ˆì‹± ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Blessing canceled.
*/
	MSG_DSST_BLESSING = 0x273,
/*20171018 to latest
 ì‹œê·¸ë„˜ í¬ë£¨ì‹œìŠ¤ë¥¼ ì‚¬ìš©í•˜ì˜€ìŠµë‹ˆë‹¤.
Signum Crusis initiated.
*/
	MSG_ENST_CRUCIS = 0x274,
/*20171018 to latest
 ì‹œê·¸ë„˜ í¬ë£¨ì‹œìŠ¤ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Signum Crusis canceled.
*/
	MSG_DSST_CRUCIS = 0x275,
/*20171018 to latest
 ë…ì´ í¼ì§€ëŠ” ì†ë„ê°€ ëŠë ¤ì¡ŒìŠµë‹ˆë‹¤.
Slow Poison initiated.
*/
	MSG_ENST_SLOWPOISON = 0x276,
/*20171018 to latest
 ìŠ¬ë¡œìš° í¬ì´ì¦Œ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Slow Poison Canceled.
*/
	MSG_DSST_SLOWPOISON = 0x277,
/*20171018 to latest
 SPì˜ íšŒë³µ ì†ë„ê°€ í–¥ìƒ ë˜ì—ˆìŠµë‹ˆë‹¤.
HP/SP recovery increased.
*/
	MSG_ENST_MAGNIFICAT = 0x278,
/*20171018 to latest
 ë§ˆë‹ˆí”¼ìº‡ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Magnificat canceled.
*/
	MSG_DSST_MAGNIFICAT = 0x279,
/*20171018 to latest
 í–‰ìš´ì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
Luck increased.
*/
	MSG_ENST_GLORIA = 0x27a,
/*20171018 to latest
 ê¸€ë¡œë¦¬ì•„ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Gloria canceled.
*/
	MSG_DSST_GLORIA = 0x27b,
/*20171018 to latest
 1íšŒ ê³µê²©ì— ë‘ ë°° ë°ë¯¸ì§€ë¥¼ ë°›ëŠ” ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
You will received double damage from all attacking opponents.
*/
	MSG_ENST_LEXAETERNA = 0x27c,
/*20171018 to latest
 ë ‰ìŠ¤ì—í…Œë¥´ë‚˜ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Lex Eterna canceled.
*/
	MSG_DSST_LEXAETERNA = 0x27d,
/*20171018 to latest
 ê³µê²©ì†ë„ê°€ ì¦ê°€í•˜ì˜€ìŠµë‹ˆë‹¤.
Attack Speed increased.
*/
	MSG_ENST_ADRENALINE = 0x27e,
/*20171018 to latest
 ê³µê²©ì†ë„ê°€ ê°ì†Œí•˜ì˜€ìŠµë‹ˆë‹¤.
Attack Speed reduced.
*/
	MSG_DSST_ADRENALINE = 0x27f,
/*20171018 to latest
 íŽ˜ì½”ì— ì˜¬ë¼ íƒ”ìŠµë‹ˆë‹¤.
You've just been on a Peco Peco.
*/
	MSG_ENST_RIDING = 0x280,
/*20171018 to latest
 íŽ˜ì½”ì—ì„œ ë‚´ë ¸ìŠµë‹ˆë‹¤.
You've just got off of a Peco Peco.
*/
	MSG_DSST_RIDING = 0x281,
/*20171018 to latest
 íŒ”ì½˜ì„ ìž¥ì°©í•˜ì˜€ìŠµë‹ˆë‹¤.
You've just carried a Falcon with.
*/
	MSG_ENST_FALCON = 0x282,
/*20171018 to latest
 íŒ”ì½˜ì„ í’€ì–´ì£¼ì—ˆìŠµë‹ˆë‹¤.
You've just released a Falcon.
*/
	MSG_DSST_FALCON = 0x283,
/*20171018 to latest
 ì£½ì€ì²™í•˜ê¸° ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Play Dead initiated.
*/
	MSG_ENST_TRICKDEAD = 0x284,
/*20171018 to latest
 ì£½ì€ì²™í•˜ê¸° ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Play Dead canceled.
*/
	MSG_DSST_TRICKDEAD = 0x285,
/*20171018 to latest
 íž˜ì´ ê°•í•´ì¡ŒìŠµë‹ˆë‹¤.
STR improved.
*/
	MSG_ENST_SHOUT = 0x286,
/*20171018 to latest
 íž˜ì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
STR turned back to normal.
*/
	MSG_DSST_SHOUT = 0x287,
/*20171018 to latest
 ì—ë„ˆì§€ì½”íŠ¸ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Energy Coat initiated.
*/
	MSG_ENST_ENERGYCOAT = 0x288,
/*20171018 to latest
 ì—ë„ˆì§€ì½”íŠ¸ ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Energy Coat canceled.
*/
	MSG_DSST_ENERGYCOAT = 0x289,
/*20171018 to latest
 ë°©ì–´êµ¬ê°€ íŒŒê´´ë˜ì—ˆìŠµë‹ˆë‹¤.
Armor destroyed.
*/
	MSG_ENST_BROKENAMOR = 0x28a,
/*20171018 to latest
 ...
Weapon has just been released from destroyed status.
*/
	MSG_DSST_BROKENAMOR = 0x28b,
/*20171018 to latest
 ë¬´ê¸°ê°€ íŒŒê´´ë˜ì—ˆë‹ˆë‹¤.
Weapon destroyed.
*/
	MSG_ENST_BROKENWEAPON = 0x28c,
/*20171018 to latest
 ...
Weapon has just been released from destroyed status.
*/
	MSG_DSST_BROKENWEAPON = 0x28d,
/*20171018 to latest
 í™˜ì˜ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Invisibility initiated.
*/
	MSG_ENST_ILLUSION = 0x28e,
/*20171018 to latest
 í™˜ì˜ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Invisibility canceled.
*/
	MSG_DSST_ILLUSION = 0x28f,
/*20171018 to latest
ê³¼ê¸ˆ ì •ë³´ ì²˜ë¦¬ê°€ ëŠ¦ì–´ì§€ê³  ìžˆì–´ ì ‘ì†ì´ ì§€ì—°ë˜ê³  ìžˆìŠµë‹ˆë‹¤. ìž ì‹œ í›„ì— ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Sorry. It is delayed due to the process of payment. Please re-connect in a minute.
*/
	MSG_REFUSE_BLOCK_TEMPORARY = 0x290,
/*20171018 to latest
ìž¥ì°©ëœ í™”ì‚´/íƒ„í™˜/ìˆ˜ë¦¬ê²€ ì„ í•´ì œí•´ì•¼í•©ë‹ˆë‹¤.
You must unequip ammunition first.
*/
	MSG_UNEQUIP_ARROW = 0x291,
/*20171018 to latest
í™”ì‚´ ëª©ë¡
Arrow List
*/
	MSG_ARROW_LIST = 0x292,
/*20171018 to latest
ì¹´íŠ¸ ëª©ë¡
Cart List
*/
	MSG_CART_LIST = 0x293,
/*20171018 to latest
ì¹´íŠ¸ë¥¼ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
You must have a Pushcart.
*/
	MSG_MUST_EQUIP_CART = 0x294,
/*20171018 to latest
ì±„íŒ…ë°©ì„ ê°œì„¤ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot open a Chat Window.
*/
	MSG_CANT_MAKE_CHAT_ROOM = 0x295,
/*20171018 to latest
ë¼ê·¸ë‚˜ë¡œí¬ í™ˆíŽ˜ì´ì§€ë¡œ ì ‘ì†í•˜ì—¬ ê³„ì •ì„ ë§Œë“­ë‹ˆë‹¤. ì²˜ìŒ ê³„ì •ì„ ë§Œë“œì‹œë©´ 3ì¼ ë™ì•ˆì€ ë¬´ë£Œë¡œ ì´ìš©í•˜ì‹¤ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Registering an account is the first step to accessing the game. Do you want to visit the registration page now?
*/
	MSG_3DAY_FREE = 0x296,
/*20171018 to latest
ì•‰ì€ ìƒíƒœì—ì„œëŠ” ì´ ì•„ì´í…œì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot use this item while sitting.
*/
	MSG_CANT_USE_WHEN_SITDOWN = 0x297,
/*20171018 to latest
ì±„íŒ…, ìŠ¤í‚¬, ì•„ì´í…œ ì‚¬ìš©ê¸ˆì§€ê°€ %d ë¶„ê°„ ë‚¨ì•„ ìžˆìŠµë‹ˆë‹¤.
Your use of skills and chat will be blocked for the next %d minutes.
*/
	MSG_BAD_MANNER_REMAIN = 0x298,
/*20171018 to latest
ì±„íŒ…, ìŠ¤í‚¬, ì•„ì´í…œ ì‚¬ìš©ê¸ˆì§€ê°€ í•´ì§€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Your use of skills and chat have been reinstated.
*/
	MSG_BAD_MANNER_END = 0x299,
/*20171018 to latest
-[ìž¥ì°©ì•ˆë¨]
- [Not equipped]
*/
	MSG_REF_UNEQUIP = 0x29a,
/*20171018 to latest
ë°°ê³ í””
Very Hungry
*/
	MSG_VERY_HUNGRY = 0x29b,
/*20171018 to latest
ì¶œì¶œí•¨
Hungry
*/
	MSG_HUNGRY = 0x29c,
/*20171018 to latest
ë³´í†µ
Normal
*/
	MSG_NORMAL = 0x29d,
/*20171018 to latest
ë°°ë¶€ë¦„
Satisfied
*/
	MSG_REPLETE = 0x29e,
/*20171018 to latest
ì•„ì£¼ ë°°ë¶€ë¦„
Stuffed
*/
	MSG_VERY_REPLETE = 0x29f,
/*20171018 to latest
ì„œë¨¹ì„œë¨¹í•¨
Awkward
*/
	MSG_VERY_AWKWARD = 0x2a0,
/*20171018 to latest
ì–´ìƒ‰í•¨
Shy
*/
	MSG_AWKWARD = 0x2a1,
/*20171018 to latest
ì¹œí•¨
Cordial
*/
	MSG_FRIENDLY = 0x2a2,
/*20171018 to latest
ì ˆì¹œí•¨
Loyal
*/
	MSG_VERY_FRIENDLY = 0x2a3,
/*20171018 to latest
ì•Œìˆ˜ ì—†ìŒ
Unknown
*/
	MSG_UNKNOWN = 0x2a4,
/*20171018 to latest
ê·€í•˜ëŠ” ì•žìœ¼ë¡œ %ì¼ %dì‹œê°„ %dë¶„ ì‚¬ìš©ì´ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Your account has play time of %d day %d hour %d minute.
*/
	MSG_BILLING_DAY_HOUR_MINUTES = 0x2a5,
/*20171018 to latest
ì´ ê³„ì •ì€ ì´ë¯¸ ë‹¤ë¥¸ ì–´ì¹´ìš´íŠ¸ ì„œë²„ë¡œ ì ‘ì†í•œ ìƒíƒœìž…ë‹ˆë‹¤.
Your account is already connected to account server.
*/
	MSG_BAN_INFORMATION_REMAINED_ANOTHER_ACCOUNT = 0x2a6,
/*20171018 to latest
ê·€í•˜ëŠ” ì•žìœ¼ë¡œ %dì‹œê°„ %dë¶„ ì‚¬ìš©ì´ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Your account has play time of %d hour %d minute.
*/
	MSG_BILLING_HOUR_MINUTES = 0x2a7,
/*20171018 to latest
ê·€í•˜ëŠ” ë¬´ë£Œ ì‚¬ìš©ìž ìž…ë‹ˆë‹¤.
Your account is a free account.
*/
	MSG_BILLING_FREE_USER = 0x2a8,
/*20171018 to latest
ì´ ê³„ì •ìœ¼ë¡œ ì‚¬í¬ë¼ì´ì— ì ‘ì†í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
This account can't connect the Sakray server.
*/
	MSG_REFUSE_NONSAKRAY_ID_BLOCKED = 0x2a9,
/*20171018 to latest
íŽ«ì˜ ì´ë¦„ì€ ì˜ë¬¸ 23, í•œê¸€ 11ìž ì´ë‚´ë¡œ ì •í•´ ì£¼ì„¸ìš”.
Your pet name must be 23 characters or less.
*/
	MSG_PETNAME_IN23 = 0x2aa,
/*20171018 to latest
ì´ë¦„ì€ ë‹¨ í•œë²ˆë§Œ ë°”ê¿€ìˆ˜ ìžˆìŠµë‹ˆë‹¤. íŽ« ì´ë¦„ì„ ^0000ff^0000ff %s^000000^000000 ë¡œ ìˆ˜ì •í•©ë‹ˆë‹¤. ê³„ì† í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You may change your pet's name only once. Your pet's name will be changed to ^0000ff^0000ff %s^000000^000000.  Do you wish to continue?
*/
	MSG_PETNAME_CHANGE_ONLYONCE = 0x2ab,
/*20171018 to latest
/í°íŠ¸
/font
*/
	MSG_NAMEBALLOON_TYPE = 0x2ac,
/*20171018 to latest
ê¸¸ë“œì— ë‚¨ì€ ì œë‹ˆê°€ ë¶€ì¡±í•˜ì—¬ ìž‘ì—…ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Your guild lacks the funds to pay for this venture.
*/
	MSG_GUILDZENY_NOT_ENOUGH = 0x2ad,
/*20171018 to latest
ê¸¸ë“œê°€ ì†Œìœ í•  ìˆ˜ ìžˆëŠ” ìµœëŒ€ ê¸ˆì•¡ì„ ì´ˆê³¼í•˜ì—¬ ìž‘ì—…ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Your guild zeny limit prevents you from performing this action.
*/
	MSG_GUILDZENY_OVER = 0x2ae,
/*20171018 to latest
ì´íŽ™íŠ¸ ê°„ëžµí™” On
Simplified effects have been activated.
*/
	MSG_MINEFFECT_ON = 0x2af,
/*20171018 to latest
ì´íŽ™íŠ¸ ê°„ëžµí™” Off
Simplified effects have been deactivated.
*/
	MSG_MINEFFECT_OFF = 0x2b0,
/*20171018 to latest
ìžë³¸ê¸ˆ
Required Fee
*/
	MSG_CAPITAL = 0x2b1,
/*20171018 to latest
ì•„ì´í…œì„ ë°”ë‹¥ì— ë²„ë¦¬ë ¤ë©´, ì•„ì´í…œ ì°½ì„ ì—´ì–´ ì£¼ì‹­ì‹œì˜¤.
If you wish to drop an item, you must first open your Item Window (alt+e).
*/
	MSG_OPEN_ITEMWND_TO_THROW = 0x2b2,
/*20171018 to latest
PCë°© ìš”ê¸ˆì´ ì¢…ë£Œí•˜ì—¬ ê°œì¸ ìš”ê¸ˆì œë¡œ ì „í™˜í•©ë‹ˆë‹¤. ê°œì¸ ìš”ê¸ˆìœ¼ë¡œ ê²Œìž„ì„ ê³„ì† í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Internet Cafe Time Plan has been ended. Would you like to continue the game with your personal play time?
*/
	MSG_ASK_PNGAMEROOM = 0x2b3,
/*20171018 to latest

Current admission application state.
*/
	MSG_REPLY_REMAINTIME = 0x2b4,
/*20171018 to latest

Current admission application state.
*/
	MSG_INFO_REMAINTIME = 0x2b5,
/*20171018 to latest
ëˆì´ ëª¨ìžë¼ê±°ë‚˜, ê°€ì§ˆ ìˆ˜ ìžˆëŠ” ìµœëŒ€ ê¸ˆì•¡ì„ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤.
Your lack of zeny or your zeny limit have prevented you from performing this action.
*/
	MSG_OVER_OR_LOW_MONEY = 0x2b6,
/*20171018 to latest
ì „íˆ¬ë¶ˆëŠ¥ ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤. escí‚¤ë¥¼ ëˆ„ë¥´ì‹œë©´ ì„ íƒì°½ì´ ëœ¹ë‹ˆë‹¤.
Your character has fainted. Push the ESC key to restart.
*/
	MSG_PRESS_ESC_TO_RESTART = 0x2b7,
/*20171018 to latest
  %d ê°œ íšë“
- %d obtained.
*/
	MSG_EA_OBTAIN = 0x2b8,
/*20171018 to latest
ìŠ¤íŽ  ë¦¬ìŠ¤íŠ¸
Spell List
*/
	MSG_SPELL_LIST = 0x2b9,
/*20171018 to latest
/ìµœì†Œí™”
/minimize
*/
	MSG_MINEFFECT = 0x2ba,
/*20171018 to latest
ì´ ì•„ì´í…œì€ ì†ìƒë˜ì–´ ìžˆìŠµë‹ˆë‹¤..
This item has been damaged.
*/
	MSG_DAMAGED_ITEM = 0x2bb,
/*20171018 to latest
/noshift : ì‰¬í”„íŠ¸ë¥¼ ëˆ„ë¥´ì§€ì•Šê³  ížë¡œ ì ì„ ê³µê²©í• ìˆ˜ìžˆê²Œë©ë‹ˆë‹¤ On Off
/noshift: You may use your ''force heal'' ability without the Shift key. On | Off
*/
	MSG_EXPLAIN_NOSHIFT = 0x2bc,
/*20171018 to latest
ì‹œí”„íŠ¸ë¥¼ ëˆ„ë¥´ì§€ ì•Šê³ ë„ ížë¡œ ì–¸ë°ë“œë¥¼ ê³µê²©í• ìˆ˜ ìžˆìŠµë‹ˆë‹¤ [/ns ON]
[no shift] option activated. [ON]
*/
	MSG_NOSHIFT_ON = 0x2bd,
/*20171018 to latest
ì‹œí”„íŠ¸ë¥¼ ëˆŒëŸ¬ì•¼ ížë¡œ ì–¸ë°ë“œë¥¼ ê³µê²©í• ìˆ˜ ìžˆìŠµë‹ˆë‹¤ [/ns OFF]
[no shift] option deactivated. [OFF]
*/
	MSG_NOSHIFT_OFF = 0x2be,
/*20171018 to latest
MSI_REFUSE_BAN_BY_DBA
*/
	MSG_REFUSE_BAN_BY_DBA = 0x2bf,
/*20171018 to latest
MSI_REFUSE_EMAIL_NOT_CONFIRMED
*/
	MSG_REFUSE_EMAIL_NOT_CONFIRMED = 0x2c0,
/*20171018 to latest
MSI_REFUSE_BAN_BY_GM
*/
	MSG_REFUSE_BAN_BY_GM = 0x2c1,
/*20171018 to latest
MSI_REFUSE_TEMP_BAN_FOR_DBWORK
*/
	MSG_REFUSE_TEMP_BAN_FOR_DBWORK = 0x2c2,
/*20171018 to latest
MSI_REFUSE_SELF_LOCK
*/
	MSG_REFUSE_SELF_LOCK = 0x2c3,
/*20171018 to latest
MSI_REFUSE_NOT_PERMITTED_GROUP
*/
	MSG_REFUSE_NOT_PERMITTED_GROUP = 0x2c4,
/*20171018 to latest
MSI_REFUSE_WAIT_FOR_SAKRAY_ACTIVE
*/
	MSG_REFUSE_WAIT_FOR_SAKRAY_ACTIVE = 0x2c5,
/*20171018 to latest
/aura : ì˜¤ì˜¤ë¼ë¥¼ ê°„ëžµí™” ì‹œí‚¬ìˆ˜ìžˆìŠµë‹ˆë‹¤ On Off
/aura: Simplify Aura effect On | Off
*/
	MSG_EXPLAIN_AURA = 0x2c6,
/*20171018 to latest
ì˜¤ì˜¤ë¼ê°€ ì •ìƒì ìœ¼ë¡œ í‘œì‹œë©ë‹ˆë‹¤ [ì˜¤ì˜¤ë¼ ON]
Turn On Aura [Aura ON]
*/
	MSG_AURA_ON = 0x2c7,
/*20171018 to latest
ì˜¤ì˜¤ë¼ê°€ ê°„ëžµí™”ë˜ì„œ í‘œì‹œë©ë‹ˆë‹¤ [ì˜¤ì˜¤ë¼ OFF]
Simplify Aura enabled. [ON]
*/
	MSG_AURA_OFF = 0x2c8,
/*20171018 to latest
ì±„íŒ…ê¸ˆì§€ ê¸°ë¡ %d íšŒ
Chat block record %d times
*/
	MSG_PROHIBIT_LOG = 0x2c9,
/*20171018 to latest
ì±„íŒ… ê¸ˆì§€ ë¦¬ìŠ¤íŠ¸
Chat block list
*/
	MSG_PROHIBIT_LIST = 0x2ca,
/*20171018 to latest
/ì´ë¦„í‘œì‹œ or /showname : ìºë¦­í„°ì˜ ì´ë¦„ í‘œì‹œ ë°©ì‹ì„ ë³€ê²½í•©ë‹ˆë‹¤.
/showname: Change the name font type.
*/
	MSG_EXPLAIN_SHOWNAMETYPE = 0x2cb,
/*20171018 to latest
/noctrl : ì½˜íŠ¸ë¡¤ì„ ëˆ„ë¥´ì§€ì•Šì•„ë„ ìžë™ê³µê²©ì´ ë©ë‹ˆë‹¤. On Off
/noctrl | /nc: Auto attack without pressing ctrl key. On | Off
*/
	MSG_EXPLAIN_NOCTRL = 0x2cc,
/*20171018 to latest
ì½˜íŠ¸ë¡¤ì„ ëˆ„ë¥´ì§€ ì•Šì•„ë„ ìžë™ê³µê²©ì„ í•©ë‹ˆë‹¤ [/nc ON]
Use auto attack without Ctrl. [Auto attack ON]
*/
	MSG_NOCTRL_ON = 0x2cd,
/*20171018 to latest
ì½˜íŠ¸ë¡¤ì„ ëˆŒëŸ¬ì•¼ ìžë™ê³µê²©ì„ í•©ë‹ˆë‹¤ [/nc OFF]
Use auto attack with Ctrl. [Auto attack OFF]
*/
	MSG_NOCTRL_OFF = 0x2ce,
/*20171018 to latest
ì±„íŒ… ê¸ˆì§€ ì£¼ê¸°
Mute this player.
*/
	MSG_APPEND_PROHIBIT = 0x2cf,
/*20171018 to latest
ì±„íŒ… ê¸ˆì§€ ì™„ì „ í’€ê¸° & ë¡œê·¸ ì‚­ì œ
Unmute player & Erase mute time.
*/
	MSG_ERASE_PROHIBIT = 0x2d0,
/*20171018 to latest
ì±„íŒ… ê¸ˆì§€ ì‹œê°„ ì¤„ì´ê¸°(ë¡œê·¸ ì‚­ì œ ì•ˆë¨)
Decrease Player Mute time.
*/
	MSG_REDUCE_PROHIBIT = 0x2d1,
/*20171018 to latest
í°íŠ¸ê°€ ì •ìƒì ìœ¼ë¡œ ë°”ë€Œì—ˆìŠµë‹ˆë‹¤ [ì´ë¦„í‘œì‹œë°©ì‹ 1]
Normal Font Displayed. [showname type 1]
*/
	MSG_SHOWNAME_ON = 0x2d2,
/*20171018 to latest
í°íŠ¸ê°€ ê°€ëŠ˜ê²Œ ë°”ë€Œë©´ì„œ íŒŒí‹°ëª…ë„ í‘œì‹œë©ë‹ˆë‹¤ [ì´ë¦„í‘œì‹œë°©ì‹ 2]
Font will be thin and party name will be shown [showname type 2]
*/
	MSG_SHOWNAME_OFF = 0x2d3,
/*20171018 to latest
/doridori : ì—°ì†í•´ì„œ ì´ ëª…ë ¹ì–´ë¥¼ ì³ì£¼ë©´ ìºë¦­í„°ê°€ ë„ë¦¬ë„ë¦¬ ^^;;
/doridori: Shake head
*/
	MSG_EXPLAIN_DORIDORI = 0x2d4,
/*20171018 to latest
ì¸í„°ë„· ì¹´íŽ˜ì—ì„œ ê³¼ê¸ˆì„ í•˜ê³  ìžˆìŠµë‹ˆë‹¤.
Internet room is paying now.
*/
	MSG_BILLING_INTERNET_CAFE = 0x2d5,
/*20171018 to latest
ì •ì•¡ì œ ê³¼ê¸ˆì€ %dì¼ %dì‹œê°„ %dë¶„ì´ ë‚¨ì•˜ìŠµë‹ˆë‹¤.
ì¢…ëŸ‰ì œ ê³¼ê¸ˆì€ %dì‹œê°„ %dë¶„ì´ ë‚¨ì•˜ìŠµë‹ˆë‹¤.
Prepaid voucher validate until %d days %d hours %d minutes later.
Time limit voucher validate untill %d hours %d minutes later.
*/
	MSG_BILLING_BOTH = 0x2d6,
/*20171018 to latest
/bingbing : ì—°ì†í•´ì„œ ì´ ëª…ë ¹ì–´ë¥¼ ì³ì£¼ë©´ ìºë¦­í„°ê°€ ë¹™ê¸€ë¹™ê¸€ ^^;;
/bingbing: Rotates player counter clockwise.
*/
	MSG_EXPLAIN_BINGBING = 0x2d7,
/*20171018 to latest
/bangbang : ì—°ì†í•´ì„œ ì´ ëª…ë ¹ì–´ë¥¼ ì³ì£¼ë©´ ìºë¦­í„°ê°€ ë±…ê¸€ë±…ê¸€ ^^;;
/bangbang: Rotates player clockwise.
*/
	MSG_EXPLAIN_BANGBANG = 0x2d8,
/*20171018 to latest
/skillfail : ë¹¨ê°„ìƒ‰ì˜ ìŠ¤í‚¬ì‚¬ìš© ì‹¤íŒ¨ ë©”ì„¸ì§€ë¥¼ í‘œì‹œí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤ On Off
/skillfail: Display red font message when skill fails. On | Off
*/
	MSG_EXPLAIN_SKILLFAIL = 0x2d9,
/*20171018 to latest
ìŠ¤í‚¬ì‚¬ìš© ì‹¤íŒ¨ ë©”ì„¸ì§€ë¥¼ í‘œì‹œí•©ë‹ˆë‹¤ [/sf ON]
Skill fail messages will be displayed. [Display On]
*/
	MSG_SKILLFAIL_ON = 0x2da,
/*20171018 to latest
ìŠ¤í‚¬ì‚¬ìš© ì‹¤íŒ¨ ë©”ì„¸ì§€ë¥¼ í‘œì‹œí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤ [/sf OFF]
Skill fail messages will not be displayed. [Display OFF]
*/
	MSG_SKILLFAIL_OFF = 0x2db,
/*20171018 to latest
/notalkmsg : ì±„íŒ…ë‚´ìš©ì„ ì±„íŒ…ì°½ì— í‘œì‹œí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤ On Off
/notalkmsg: Chat will not be displayed in chat window. On | Off
*/
	MSG_EXPLAIN_NOTALKMSG = 0x2dc,
/*20171018 to latest
ì±„íŒ…ë‚´ìš©ì„ ì±„íŒ…ì°½ì— í‘œì‹œí•©ë‹ˆë‹¤ [/nm ON]
Chat content will be displayed in the chat window. [Display ON]
*/
	MSG_NOTALKMSG_ON = 0x2dd,
/*20171018 to latest
ì±„íŒ…ë‚´ìš©ì„ ì±„íŒ…ì°½ì— í‘œì‹œí•˜ì§€ì•ŠìŠµë‹ˆë‹¤ [/nm OFF]
Chat content will not be displayed in the chat window. [Display OFF]
*/
	MSG_NOTALKMSG_OFF = 0x2de,
/*20171018 to latest
/set1 : /nc + /showname + /sf + /wi, /set2 : + /q3
/set1: /noctrl + /showname + /skillfail
*/
	MSG_EXPLAIN_SET1 = 0x2df,
/*20171018 to latest
/fog : FOGì´íŽ™íŠ¸ë¥¼ í‚¤ê±°ë‚˜ ëŒìˆ˜ìžˆìŠµë‹ˆë‹¤ On Off
/fog: Fog effect. On | Off
*/
	MSG_EXPLAIN_FOG = 0x2e0,
/*20171018 to latest
  ì²­í˜¼ì„ í•´ì™”ìŠµë‹ˆë‹¤. ìŠ¹ë‚™í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You have received a marriage proposal. Do you accept?
*/
	MSG_SUGGEST_COUPLE = 0x2e1,
/*20171018 to latest
ì•„ì´í…œ ë¶„ë°° ë°©ì‹
Item sharing type
*/
	MSG_HOWITEMDIV = 0x2e2,
/*20171018 to latest
ê°ìž ì·¨ë“
Individual
*/
	MSG_ITEMDIV1 = 0x2e3,
/*20171018 to latest
ê· ë“±í•˜ê²Œ ë¶„ë°°
Shared
*/
	MSG_ITEMDIV2 = 0x2e4,
/*20171018 to latest
nProtect KeyCrypt
*/
	MSG_KEYCRYPT = 0x2e5,
/*20171018 to latest
Keyboard Driverê°€ ê²€ì¶œë˜ì—ˆìŠµë‹ˆë‹¤. 

í‚¤ë³´ë“œ ë³´ì•ˆ ìž…ë ¥ì„ ìœ„í•´ ì¶”ê°€ê¸°ëŠ¥ì„ ì„¤ì¹˜í•˜ì‹œê² ìŠµë‹ˆê¹Œ?    

(ì¶”ê°€ê¸°ëŠ¥ ì„¤ì¹˜í›„, ì‹œìŠ¤í…œ reboot í•„ìˆ˜)
Keyboard Driver has been detected. 

Do you want to install a program for keyboard security?    

(After installation, System Reboot is required)
*/
	MSG_KEYCRYPT_INSTALL_KEYDRIVER = 0x2e6,
/*20171018 to latest
ì„¤ì¹˜ê°€ ì™„ë£Œ ë˜ì—ˆìŠµë‹ˆë‹¤. 

ì‹œìŠ¤í…œì„ Reboot í•©ë‹ˆë‹¤.    
Installation has been completed.  

System will be rebooted.
*/
	MSG_KEYCRYPT_REBOOT = 0x2e7,
/*20171018 to latest
ì„¤ì¹˜ ì‹¤íŒ¨. 
Installation has been failed.
*/
	MSG_KEYCRYPT_INSTALLFAIL = 0x2e8,
/*20171018 to latest
í‚¤ë³´ë“œ ë³´ì•ˆì„ ì ìš©í•˜ì§€ ì•Šê³  ê³„ì†í•©ë‹ˆë‹¤.
Keyboard Security will be skipped.
*/
	MSG_KEYCRYPT_SKIPKEYCRYPT = 0x2e9,
/*20171018 to latest
í‚¤ë³´ë“œ ë³´ì•ˆì— í•„ìš”í•œ íŒŒì¼ì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.  

(npkeyc.vxd, npkeyc.sys, npkeycs.sys)
Required file for Keyboard Security is not existing.  

(npkeyc.vxd, npkeyc.sys, npkeycs.sys)
*/
	MSG_KEYCRYPT_NOKEYCRYPTFILE = 0x2ea,
/*20171018 to latest
USB Keyboardê°€ ê²€ì¶œë˜ì—ˆìŠµë‹ˆë‹¤. 

í‚¤ë³´ë“œ ë³´ì•ˆ ìž…ë ¥ì„ ìœ„í•´ ì¶”ê°€ê¸°ëŠ¥ì„ ì„¤ì¹˜í•˜ì‹œê² ìŠµë‹ˆê¹Œ?    

(ì¶”ê°€ê¸°ëŠ¥ ì„¤ì¹˜í›„, ì‹œìŠ¤í…œ reboot í•„ìˆ˜)
USB Keyboard has been detected. 

Do you want to install a program for keyboard security?    

(After installation, System Reboot is required)
*/
	MSG_KEYCRYPT_USBKEYBOARD = 0x2eb,
/*20171018 to latest
ftp://ragnarok.nefficient.co.kr/pub/ragnarok/ragnarok0526.exe
*/
	MSG_FINDHACK_PATH = 0x2ec,
/*20171018 to latest
FindHackì´ ì •ìƒì ìœ¼ë¡œ ì„¤ì¹˜ê°€ ë˜ì–´ìžˆì§€ ì•ŠìŠµë‹ˆë‹¤. ragnarok0226.exe ë¥¼ ë‹¤ìš´ë¡œë“œ í•˜ì—¬ ë¼ê·¸ë‚˜ë¡œí¬ê°€ ì„¤ì¹˜ëœ í´ë”ì— ì„¤ì¹˜í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.(%d).
FindHack is not installed correctly. Please download ragnarok0226.exe and install it in RagnarokOnline directory.(%d).
*/
	MSG_FINDHACK_NOTINSTALLED = 0x2ed,
/*20171018 to latest
í•´í‚¹íˆ´ì´ ì¡´ìž¬í•˜ì§€ë§Œ ì¹˜ë£Œê°€ ì •ìƒì ìœ¼ë¡œ ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤. ë¼ê·¸ë‚˜ë¡œí¬ê°€ ì‹¤í–‰ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Hacking tool is existing but it hasn't been cleaned. Rangarok Online will not be executed.
*/
	MSG_FINDHACK_HACKTOOLEXIST = 0x2ee,
/*20171018 to latest
í•´í‚¹íˆ´ ì§„ë‹¨ í”„ë¡œê·¸ëž¨ì´ ì •ìƒì ìœ¼ë¡œ ë‹¤ìš´ë¡œë“œ ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤. ragnarok0226.exe ë¥¼ ë‹¤ìš´ë¡œë“œ í•˜ì—¬ ë¼ê·¸ë‚˜ë¡œí¬ê°€ ì„¤ì¹˜ëœ í´ë”ì— ì„¤ì¹˜í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Hacking tool scan program has not been downloaded correctly. Please download ragnarok0226.exe and install it in RagnarokOnline directory.
*/
	MSG_FINDHACK_CANTDOWNLOAD = 0x2ef,
/*20171018 to latest
NPX.DLL ë“±ë¡ì—ëŸ¬ ì´ê±°ë‚˜ FindHack êµ¬ë™ì— í•„ìš”í•œ íŒŒì¼ì´ ì—†ìŠµë‹ˆë‹¤. ragnarok0226.exe ë¥¼ ë‹¤ìš´ë¡œë“œ í•˜ì—¬ ë¼ê·¸ë‚˜ë¡œí¬ê°€ ì„¤ì¹˜ëœ í´ë”ì— ì„¤ì¹˜í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
NPX.DLL register error or there is no necessary file to run FindHack. Please download ragnarok0226.exe and install it in RagnarokOnline directory.
*/
	MSG_FINDHACK_NOFILE = 0x2f0,
/*20171018 to latest
ì˜ˆì™¸ì‚¬í•­ì´ ë°œìƒí–ˆìŠµë‹ˆë‹¤. (02-3281-0361)ë¡œ ë¬¸ì˜í•´ì£¼ì„¸ìš”. ë¦¬í„´ê°’(%d)
Exceptional Error. Please contact the customer support. Return Value: (%d)
*/
	MSG_FINDHACK_EXCEPTION = 0x2f1,
/*20171018 to latest
ì¢…ë£Œë²„íŠ¼ì„ í´ë¦­ í•˜ì…¨ìŠµë‹ˆë‹¤.
Exit button has been clicked.
*/
	MSG_FINDHACK_EXITPRESSED = 0x2f2,
/*20171018 to latest
Findhack ì—…ë°ì´íŠ¸ ì„œë²„ì ‘ê·¼ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ìž ì‹œ í›„ì— ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê±°ë‚˜ ê·¸ë¼ë¹„í‹° ìš´ì˜íŒ€ìœ¼ë¡œ ì—°ë½í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Unable to connect Findhack Update Server. Please try again or contact the customer support.
*/
	MSG_FINDHACK_UPDATEFAILED = 0x2f3,
/*20171018 to latest
ì‚¬ëž‘ë°›ê³ ìžˆëŠ” 
Beloved
*/
	MSG_NAMED_PET = 0x2f4,
/*20171018 to latest
/report or /ì‹ ê³  : ì‹ ê³ ìš© ê°ˆë¬´ë¦¬ íŒŒì¼ì„ ì €ìž¥í•©ë‹ˆë‹¤.
/report: Save a chat log file.
*/
	MSG_REPORTCOMMAND_EXPLANATION = 0x2f5,
/*20171018 to latest
ì´ íŒŒì¼ì€ (ì£¼)ê·¸ë¼ë¹„í‹°ì˜ ìš´ì˜íŒ€ì—ì„œ ê²Œìž„ë‚´ì˜ ë¶€ì •í–‰ìœ„ë‚˜ ë¹„ë§¤ë„ˆ í–‰ìœ„ì— ëŒ€í•œ
ì¦ê±°ìžë£Œë¡œ ì‚¬ìš©í•˜ê²Œ ë©ë‹ˆë‹¤.
ë¬¸ì„œë¥¼ ë‹¤ë¥¸ ë¬¸ì„œ í˜•ì‹ìœ¼ë¡œ ì €ìž¥í•˜ê±°ë‚˜ ë‚´ìš©ì„ ë³€ê²½í•˜ì—¬ ì›ë³¸ê³¼ ì¼ì¹˜í•˜ì§€ ì•Šê²Œ
 ë  ê²½ìš° ê·¸ ë¬¸ì„œëŠ” ì¦ê±° íš¨ë ¥ì„ ìƒì‹¤í•˜ê²Œ ë©ë‹ˆë‹¤.
Chat logs are not accepted as evidence for any ill-mannered violation on account of possible file modifications. However this feature is provided for players' personal reference.
*/
	MSG_REPORTTEXT_HEADER = 0x2f6,
/*20171018 to latest
ë‹¹ì‹ ì„ ì‚¬ëž‘í•´ìš” â™¡
I love you.
*/
	MSG_LOVE_SKILL = 0x2f7,
/*20171018 to latest
í™”ë©´ ë˜ëŠ” ì´íŽ™íŠ¸ê°€ ë°ì•„ì„œ ëˆˆì— ë¶€ë‹´ì´ ë˜ì‹œëŠ”ë¶„ë“¤ì€ ëª¨ë‹ˆí„°ì˜ ë°ê¸°ë¥¼ ì¡°ì •í•´ì£¼ì‹œê¸°ë°”ëžë‹ˆë‹¤.
Please adjust your monitor/video brightness if effects appear too bright.
*/
	MSG_EXPLAIN_BRIGHT = 0x2f8,
/*20171018 to latest
ì „ì²´í™”ë©´ëª¨ë“œê°€ ìž˜ì•ˆë˜ëŠ” ê²½ìš°ì— ê²Œìž„ì‹¤í–‰í›„ ALT+TABìœ¼ë¡œ í™”ë©´ì„ ì „í™˜í•˜ë©´ ìž˜ë˜ëŠ” ê¸°ì¢…ë„ ìžˆìŠµë‹ˆë‹¤
If full screen mode fails to work, it is suggested you alt+tab [or ctrl+esc] to inactivate and reactivate the Ragnarok Client.
*/
	MSG_EXPLAIN_ALTTAB = 0x2f9,
/*20171018 to latest
(%d ëª…) - ìœ ë£Œì„œë²„
(%d players) - Pay to Play Server
*/
	MSG_SERVER_PROPERTY_PAY = 0x2fa,
/*20171018 to latest
(%d ëª…) - ë¬´ë£Œì„œë²„
(%d players) - Free Server
*/
	MSG_SERVER_PROPERTY_FREE = 0x2fb,
/*20171018 to latest
ë¬´ë£Œ íšŒì›ì€ ìœ ë£Œ ì„œë²„ë¡œ ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Trial players can't connect Pay to Play Server.
*/
	MSG_CANT_CONNECT_TO_PAY_SERVER = 0x2fc,
/*20171018 to latest
ë§ˆìš°ìŠ¤ ìš°í´ë¦­ìœ¼ë¡œ F9ì— ì €ìž¥í•œ ìŠ¤í‚¬ì„ ì“¸ìˆ˜ìžˆìŠµë‹ˆë‹¤ [/q1 ON]
Right click menu skills for F9 are Enabled.[/q1 ON]
*/
	MSG_QUICKSPELL_ON = 0x2fd,
/*20171018 to latest
ë§ˆìš°ìŠ¤ ìš°í´ë¦­ìœ¼ë¡œ ìŠ¤í‚¬ì„ ì‚¬ìš©í•˜ì§€ ëª»í•©ë‹ˆë‹¤ [/q1 OFF]
Right click menu skills for F9 are Disabled.[/q1 OFF]
*/
	MSG_QUICKSPELL_OFF = 0x2fe,
/*20171018 to latest
/quickspell  : ë§ˆìš°ìŠ¤ ìš°í´ë¦­ìœ¼ë¡œ F9ì— ì €ìž¥í•œ ìŠ¤í‚¬ì„ ì‚¬ìš©í•©ë‹ˆë‹¤ On Off
/quickspell: Right-click menu enables you to use skills assigned to the F9 hotkey. On | Off
*/
	MSG_EXPLAIN_QUICKSPELL = 0x2ff,
/*20171018 to latest
ë§ˆìš°ìŠ¤ì˜ WHEELì„ ì‚¬ìš©í•´ì„œ F7 ê³¼ F8ì— ì €ìž¥í•œ ìŠ¤í‚¬ì„ ì‚¬ìš©í•©ë‹ˆë‹¤ [/q2 ON]
Mouse wheel skills for F7 and F8 are Enabled.[/q2 ON]
*/
	MSG_QUICKSPELL2_ON = 0x300,
/*20171018 to latest
ë§ˆìš°ìŠ¤ WHEELë¡œ ìŠ¤í‚¬ì„ ì‚¬ìš©í•˜ì§€ ëª»í•©ë‹ˆë‹¤ [/q2 OFF]
Mouse wheel skills for F7 and F8 are Disabled.[/q2 OFF]
*/
	MSG_QUICKSPELL2_OFF = 0x301,
/*20171018 to latest
/quickspell2 : ë§ˆìš°ìŠ¤ WHEELì„ ìœ„,ì•„ëž˜ë¡œ êµ´ë ¤ì„œ F7ê³¼F8ì— ì €ìž¥í•œ ìŠ¤í‚¬ì„ ì‚¬ìš©í•©ë‹ˆë‹¤ On Off
/quickspell2: By rolling the mouse wheel up and down, you are able to use skills registered on F7 and F8 hotkeys. On | Off
*/
	MSG_EXPLAIN_QUICKSPELL2 = 0x302,
/*20171018 to latest
/q3 : /quickspell (/q1) + /quickspell2 (/q2)
/q3: /quickspell (/q1) + /quickspell2 (/q2)
*/
	MSG_EXPLAIN_QUICKSPELL3 = 0x303,
/*20171018 to latest
/ì°Œë¦¿
/bzz
*/
	MSG_EMOTION_STARE = 0x304,
/*20171018 to latest
/ë°¥
/rice
*/
	MSG_EMOTION_HUNGRY = 0x305,
/*20171018 to latest
/ë©‹ì ¸
/awsm
*/
	MSG_EMOTION_COOL = 0x306,
/*20171018 to latest
/ë©”ë¡±
/meh
*/
	MSG_EMOTION_MERONG = 0x307,
/*20171018 to latest
/ë¶€ë„
/shy
*/
	MSG_EMOTION_SHY = 0x308,
/*20171018 to latest
/ì“±ì“±
/pat
*/
	MSG_EMOTION_GOODBOY = 0x309,
/*20171018 to latest
/ì— íƒ
/mp
*/
	MSG_EMOTION_SPTIME = 0x30a,
/*20171018 to latest
/ì§ˆì§ˆ
/slur
*/
	MSG_EMOTION_SEXY = 0x30b,
/*20171018 to latest
/ì»´ì˜¨
/com
*/
	MSG_EMOTION_COMEON = 0x30c,
/*20171018 to latest
/í•˜í’ˆ
/yawn
*/
	MSG_EMOTION_SLEEPY = 0x30d,
/*20171018 to latest
/ì¶•í•˜
/grat
*/
	MSG_EMOTION_CONGRATULATION = 0x30e,
/*20171018 to latest
/í”¼íƒ
/hp
*/
	MSG_EMOTION_HPTIME = 0x30f,
/*20171018 to latest
/ì´ëª¨ì…˜ : í˜„ìž¬ ì‚¬ìš©ê°€ëŠ¥í•œ ì´ëª¨ì…˜ì˜ ë¦¬ìŠ¤íŠ¸ë¥¼ ë³´ì—¬ì¤ë‹ˆë‹¤.
/emotion: views the emoticon list.
*/
	MSG_EXPLAIN_EMOTION = 0x310,
/*20171018 to latest
í‚¤ë³´ë“œë¥¼ ì´ìš©í•´ì„œ ìŠ¤í‚¬ë‹¨ì¶•ì°½ 1,2,3ì˜ ìŠ¤í‚¬ë“¤ì„ ì‚¬ìš©í•©ë‹ˆë‹¤. [/bm ON]
Skills assigned to shortcut windows 1, 2, 3 are Enabled. [/bm ON]
*/
	MSG_BATTLE_ON = 0x311,
/*20171018 to latest
í‚¤ë³´ë“œë¥¼ ì´ìš©í•´ì„œ ìŠ¤í‚¬ë‹¨ì¶•ì°½ 1,2,3ì˜ ìŠ¤í‚¬ë“¤ì„ ì‚¬ìš©í•˜ì§€ëª»í•©ë‹ˆë‹¤. [/bm OFF]
Skills assigned to shortcut windows 1, 2, 3 are Disabled. [/bm OFF]
*/
	MSG_BATTLE_OFF = 0x312,
/*20171018 to latest
/battlemode : Q ~ O ë¥¼ ëˆ„ë¥´ë©´ ìŠ¤í‚¬ë‹¨ì¶•ì°½2ì˜ ìŠ¤í‚¬ë“¤ì´ ì‚¬ìš©ë©ë‹ˆë‹¤.
/battlemode: allows you to use skills assigned to Shortcut Window 2 by pressing Q ~ O keys.
*/
	MSG_EXPLAIN_BATTLE = 0x313,
/*20171018 to latest
                    A ~ L ì„ ëˆ„ë¥´ë©´ ìŠ¤í‚¬ë‹¨ì¶•ì°½3ì˜ ìŠ¤í‚¬ë“¤ì´ ì‚¬ìš©ë©ë‹ˆë‹¤.
A ~ L keys allow you to use skills assigned to Shortcut Window 3.
*/
	MSG_EXPLAIN_BATTLE2 = 0x314,
/*20171018 to latest
ë¼ê·¸ë‚˜ë¡œí¬ë¥¼ ì‹¤í–‰í•˜ì‹¤ë•Œ ë‹¤ë¥¸ í”„ë¡œê·¸ëž¨ì„ ë„ìš°ì‹œë©´ ê²Œìž„ì´ ëŠë ¤ì§ˆìˆ˜ë„ìžˆìŠµë‹ˆë‹¤.
Please remember, programs running in the background while playing may affect the game's performance.
*/
	MSG_EXPLAIN_LAG = 0x315,
/*20171018 to latest
ì²œì‚¬ë‹˜ ì œ ëª©ì†Œë¦¬ ë“¤ë¦¬ì„¸ìš”? ^^;
Dear angel, can you hear my voice?
*/
	MSG_SUPERNOVICE1 = 0x316,
/*20171018 to latest
ìŠˆí¼ë…¸ë¹„ìŠ¤
Super Novice
*/
	MSG_SUPERNOVICE2 = 0x317,
/*20171018 to latest
ì˜ˆìš”~
Super Novice~
*/
	MSG_SUPERNOVICE3 = 0x318,
/*20171018 to latest
ì € ì¢€ ë„ì™€ì£¼ì„¸ìš”~ ã… _ã… 
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE4 = 0x319,
/*20171018 to latest
ë‹˜ê»˜ì„œ ë‹¹ì‹ ì„ ìž…ì–‘ì‹œí‚¤ê³  ì‹¶ì–´í•˜ì‹­ë‹ˆë‹¤. ìŠ¹ë‚™í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
 wishes to adopt you. Do you accept?
*/
	MSG_SUGGEST_BABY = 0x31a,
/*20171018 to latest
                    Z ~ > ì„ ëˆ„ë¥´ë©´ ìŠ¤í‚¬ë‹¨ì¶•ì°½1ì˜ ìŠ¤í‚¬ë“¤ì´ ì‚¬ìš©ë©ë‹ˆë‹¤. On Off
Z ~ > keys allow you to use skills assigned on shortcut window 1. On | Off
*/
	MSG_EXPLAIN_BATTLE3 = 0x31b,
/*20171018 to latest
                    Spaceë¥¼ í•œë²ˆ ëˆ„ë¥¸ë’¤ì— ê¸€ìžë¥¼ ìž…ë ¥í•˜ë©´ ì±„íŒ…ì„ í• ìˆ˜ìžˆìŠµë‹ˆë‹¤.
Press the space bar to Chat when in Battle mode [/battlemode | /bm].
*/
	MSG_EXPLAIN_BATTLE4 = 0x31c,
/*20171018 to latest
ê²Œìž„ê°€ë“œ íŒŒì¼ì´ ì—†ê±°ë‚˜ ë³€ì¡°ë˜ì—ˆìŠµë‹ˆë‹¤. ê²Œìž„ê°€ë“œ ì…‹ì—… íŒŒì¼ì„ ì„¤ì¹˜í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
"Either there's no Game Guard installed on the program or Game Guard is cracked. Please, try to reinstall Game Guard from its setup file."
*/
	MSG_NPGAMEMON_ERROR_AUTH_GAMEGUARD = 0x31d,
/*20171018 to latest
ìœˆë„ìš°ì˜ ì¼ë¶€ ì‹œìŠ¤í…œ íŒŒì¼ì´ ì†ìƒë˜ì—ˆìŠµë‹ˆë‹¤. ì¸í„°ë„· ìµìŠ¤í”Œë¡œëŸ¬(IE)ë¥¼ ë‹¤ì‹œ ì„¤ì¹˜í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Some of Windows system files have been damaged. Please re-install your Internet Explorer.
*/
	MSG_NPGAMEMON_ERROR_CRYPTOAPI = 0x31e,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì‹¤í–‰ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤. ê²Œìž„ê°€ë“œ ì…‹ì—… íŒŒì¼ì„ ë‹¤ì‹œ ì„¤ì¹˜í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
"Failed to run Game Guard. Please, try to reinstall Game Guard from its setup file."
*/
	MSG_NPGAMEMON_ERROR_EXECUTE = 0x31f,
/*20171018 to latest
ë¶ˆë²• í”„ë¡œê·¸ëž¨ì´ ë°œê²¬ë˜ì—ˆìŠµë‹ˆë‹¤. ë¶ˆí•„ìš”í•œ í”„ë¡œê·¸ëž¨ì„ ì¢…ë£Œí•œ í›„ ë‹¤ì‹œ ì‹¤í–‰í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
"At least one hazardous program has been detected. Please, terminate all the unnecessary programs before executing Game Guard."
*/
	MSG_NPGAMEMON_ERROR_ILLEGAL_PRG = 0x320,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì—…ë°ì´íŠ¸ë¥¼ ì·¨ì†Œí•˜ì…¨ìŠµë‹ˆë‹¤. ì ‘ì†ì´ ê³„ì† ë˜ì§€ ì•Šì„ ê²½ìš° ì¸í„°ë„· ë° ë°©í™”ë²½ ìƒíƒœë¥¼ ì ê²€í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
"Game Guard update is canceled. If the disconnection continues, please, check your internet or firewall settings."
*/
	MSG_NPGMUP_ERROR_ABORT = 0x321,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì—…ë°ì´íŠ¸ ì„œë²„ ì ‘ì†ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ìž ì‹œ í›„ ìž¬ì‹œë„ í•´ë³´ê±°ë‚˜, ì¸í„°ë„· ë° ë°©í™”ë²½ ìƒíƒœë¥¼ ì ê²€í•´ ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
"Failed to connect to Game Guard update server. Try to connect again later, or try to check the internet or firewall settings."
*/
	MSG_NPGMUP_ERROR_CONNECT = 0x322,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì—…ë°ì´íŠ¸ë¥¼ ì™„ë£Œí•˜ì§€ ëª» í–ˆìŠµë‹ˆë‹¤. ë°”ì´ëŸ¬ìŠ¤ ê²€ì‚¬ë¥¼ í•´ë³´ì‹œê±°ë‚˜, PC ê´€ë¦¬ í”„ë¡œê·¸ëž¨ì„ ì‚¬ìš©í•˜ì‹œë©´ ì„¤ì •ì„ ì¡°ì •í•œ í›„ ê²Œìž„ì„ ì‹¤í–‰í•´ ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
"Can't complete Game Guard update process. Please, try to execute a vaccine program to remove viruses. Or, please try to modify the settings of your PC managing tool if you are using any."
*/
	MSG_NPGMUP_ERROR_AUTH = 0x323,
/*20171018 to latest
/notrade : ê±°ëž˜ì‹ ì²­ì„ ìžë™ìœ¼ë¡œ ê±°ì ˆí•©ë‹ˆë‹¤ On Off
/notrade: Declines trade offers automatically. On | Off
*/
	MSG_EXPLAIN_NOTRADE = 0x324,
/*20171018 to latest
ê±°ëž˜ì‹ ì²­ê³¼ ì¹œêµ¬ë“±ë¡ìš”ì²­ì„ ìžë™ìœ¼ë¡œ ê±°ì ˆí•©ë‹ˆë‹¤ [/nt ON]
Auto decline trade offers has been Enabled. [/nt ON]
*/
	MSG_NOTRADE_ON = 0x325,
/*20171018 to latest
ê±°ëž˜ì‹ ì²­ê³¼ ì¹œêµ¬ë“±ë¡ìš”ì²­ì„ ì •ìƒì ìœ¼ë¡œ ë°›ìŠµë‹ˆë‹¤ [/nt OFF]
Auto decline trade offers has been Disabled. [/nt OFF]
*/
	MSG_NOTRADE_OFF = 0x326,
/*20171018 to latest
ê°™ì€ ì•„ì´í…œì€ í•œë²ˆì— 30000ê°œ ì´ìƒì€ ì‚´ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot buy more than 30,000ea items at once.
*/
	MSG_LIMIT_BUY_ITEM = 0x327,
/*20171018 to latest
ìž¬ë£Œê°€ ì¶©ë¶„í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
You do not have enough ingredients.
*/
	MSG_NOT_ENOUGH_SOURCE = 0x328,
/*20171018 to latest
%sì— ê³„ì •ì •ë³´ê°€ ë‚¨ì•„ìžˆìŠµë‹ˆë‹¤.
Login information remains at %s.
*/
	MSG_ALREADY_CONNECT = 0x329,
/*20171018 to latest
ê³„ì •ë„ìš© ì¡°ì‚¬ë¥¼ ìœ„í•´ ë¡œê·¸ì¸ì´ ê¸ˆì§€ë˜ì—ˆìŠµë‹ˆë‹¤. ìžì„¸í•œ ë¬¸ì˜ëŠ” ê³„ì •ë„ìš© ê´€ë ¨ ë¬¸ì˜ ë©”ì¼ë¡œ í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Account has been locked for a hacking investigation. Please contact the GM Team for more information.
*/
	MSG_HACKING_INVESTIGATION = 0x32a,
/*20171018 to latest
ê·€í•˜ëŠ” ë²„ê·¸ê´€ë ¨ ì¡°ì‚¬ì¤‘ì´ë¯€ë¡œ ì¼ì‹œì ìœ¼ë¡œ ì ‘ì†ì„ ê¸ˆí•©ë‹ˆë‹¤
This account has been temporarily prohibited from login due to a bug-related investigation.
*/
	MSG_BUG_INVESTIGATION = 0x32b,
/*20171018 to latest
ìˆ˜ë¦¬ê°€ëŠ¥í•œ ì•„ì´í…œ
Repairable items
*/
	MSG_REPAIRITEMLIST = 0x32c,
/*20171018 to latest
ì•„ì´í…œ ìˆ˜ë¦¬ ì„±ê³µ
Item has been successfully repaired.
*/
	MSG_ITEM_REPAIR_SUCCEESS = 0x32d,
/*20171018 to latest
ì•„ì´í…œ ìˆ˜ë¦¬ ì‹¤íŒ¨ (ìž¬ë£Œ ë˜ëŠ” ìƒëŒ€ì™€ì˜ ê±°ë¦¬ë“±ì„ í™•ì¸í•´ì£¼ì‹­ì‹œìš”)
You have failed to repair this item. Please check the distance between you and opponent.
*/
	MSG_ITEM_REPAIR_FAIL = 0x32e,
/*20171018 to latest
ì‹œìŠ¤í…œ ìƒí™©ì„ ì§€ì†ì ìœ¼ë¡œ ì²´í¬ í•©ë‹ˆë‹¤.[ìš´ì˜ìžëª¨ë“œ] [/sc ON]
System process enabled [GM mode] [/sc ON]
*/
	MSG_SYSTEM_CHECK_ON = 0x32f,
/*20171018 to latest
ì‹œìŠ¤í…œ ìƒí™©ì„ ì§€ì†ì ìœ¼ë¡œ ì²´í¬ í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.[ìš´ì˜ìžëª¨ë“œ] [/sc OFF]
System process disabled [GM mode] [/sc OFF]
*/
	MSG_SYSTEM_CHECK_OFF = 0x330,
/*20171018 to latest
/systemcheck : ì‹œìŠ¤í…œ ìƒí™©ì„ ì§€ì†ì ìœ¼ë¡œ ì²´í¬ í•©ë‹ˆë‹¤.[ìš´ì˜ìžëª¨ë“œ] 
/systemcheck: Check the system process [GM mode] On | Off
*/
	MSG_EXPLAIN_SYSTEM_CHECK = 0x331,
/*20171018 to latest
(%s)ë‹˜ì´ ì¹œêµ¬ ì‹ ì²­ì„ í•˜ì…¨ìŠµë‹ˆë‹¤. ì¹œêµ¬ê°€ ë˜ì‹œê² ìŠµë‹ˆê¹Œ?
(%s) wishes to be friends with you. Would you like to accept?
*/
	MSG_SUGGEST_JOIN_FRIEND = 0x332,
/*20171018 to latest
ë” ì´ìƒ ì¹œêµ¬ ë“±ë¡ì„ í•˜ì‹¤ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Your Friend List is full.
*/
	MSG_FRIEND_ADD_ME_OVERSIZE = 0x333,
/*20171018 to latest
(%s)ë‹˜ì´ ë” ì´ìƒ ì¹œêµ¬ ë“±ë¡ì„ í•˜ì‹¤ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
(%s)'s Friend List is full.
*/
	MSG_FRIEND_ADD_OTHER_OVERSIZE = 0x334,
/*20171018 to latest
(%s)ë‹˜ê³¼ ì¹œêµ¬ê°€ ë˜ì…¨ìŠµë‹ˆë‹¤.
You have become friends with (%s).
*/
	MSG_FRIEND_ADD_SUCCEED = 0x335,
/*20171018 to latest
(%s)ë‹˜ì´ ì¹œêµ¬ ë˜ê¸°ë¥¼ ì›í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
(%s) does not want to be friends with you.
*/
	MSG_FRIEND_ADD_FALSE = 0x336,
/*20171018 to latest
ì´ ìºë¦­í„°ëŠ” %s ê¹Œì§€ ë¸”ëŸ­ë˜ì–´ìžˆìŠµë‹ˆë‹¤.
This character will be blocked to use until %s.
*/
	MSG_BLOCKED = 0x337,
/*20171018 to latest
ì²œë§Œì œë‹ˆ ì´ìƒ ìž…ë ¥í•˜ì…”ë„ ê°€ê²©ì€ ì²œë§Œì œë‹ˆë¡œ íŒë§¤ë©ë‹ˆë‹¤.
Price will be fixed at 10,000,000 zeny, even if you enter higher price.
*/
	MSG_OVERPRICE = 0x338,
/*20171018 to latest
(ì ìŒ)
(Very low)
*/
	MSG_LITTLEUSER = 0x339,
/*20171018 to latest
(ì•½ê°„ ì ìŒ)
(Low)
*/
	MSG_ALITTLEUSER = 0x33a,
/*20171018 to latest
(ë³´í†µ)
(Normal)
*/
	MSG_NORMLEUSER = 0x33b,
/*20171018 to latest
(ë§ŽìŒ)
(High)
*/
	MSG_MANYUSER = 0x33c,
/*20171018 to latest
(ë§¤ìš° ë§ŽìŒ)
(Very high)
*/
	MSG_VERYMANYUSER = 0x33d,
/*20171018 to latest
ë¹„ë§¤ë„ˆì— ì˜í•´ ìš´ì˜ìžë¡œë¶€í„° ì±„íŒ…ê¸ˆì§€ê°€ ì ìš©ë©ë‹ˆë‹¤.
You have been blocked from using chat and skills for %d minutes by the GM Team.
*/
	MSG_GM_BAD_MANNER_START = 0x33e,
/*20171018 to latest
GMì— ì˜í•œ ì±„íŒ…ê¸ˆì§€ê°€ %d ë¶„ ë‚¨ì•„ ìžˆìŠµë‹ˆë‹¤.
%d minutes remain until release from the GM penalty.
*/
	MSG_GM_BAD_MANNER_REMAIN = 0x33f,
/*20171018 to latest
GMì— ì˜í•œ ì±„íŒ…ê¸ˆì§€ê°€ í•´ì§€ ë˜ì—ˆìŠµë‹ˆë‹¤.
You have been released from the GM penalty.
*/
	MSG_GM_BAD_MANNER_END = 0x340,
/*20171018 to latest
ë„ë°° ë°©ì§€ ì‹œìŠ¤í…œìœ¼ë¡œ ì¸í•œ ìžë™ ì±„íŒ…ê¸ˆì§€ê°€ ì ìš©ë©ë‹ˆë‹¤.
You have been blocked from using chat and skills for %d as an automatic penalty.
*/
	MSG_AUTO_BAD_MANNER_START = 0x341,
/*20171018 to latest
ë„ë°° ë°©ì§€ ì‹œìŠ¤í…œìœ¼ë¡œ ì¸í•œ ì±„íŒ…ê¸ˆì§€ê°€ %d ë¶„ ë‚¨ì•„ ìžˆìŠµë‹ˆë‹¤.
%d minutes remain until release from auto penalty.
*/
	MSG_AUTO_BAD_MANNER_REMAIN = 0x342,
/*20171018 to latest
ë„ë°° ë°©ì§€ ì‹œìŠ¤í…œìœ¼ë¡œ ì¸í•œ ì±„íŒ…ê¸ˆì§€ê°€ í•´ì§€ë˜ì—ˆìŠµë‹ˆë‹¤. ê²Œìž„ì§„í–‰ ì‹œì—ëŠ” ë„ë°°ì— ëŒ€í•´ì„œ ì£¼ì˜í•˜ì—¬ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
You have been released from the auto penalty. Please refrain from spamming in-game.
*/
	MSG_AUTO_BAD_MANNER_END = 0x343,
/*20171018 to latest
%së‹˜ê³¼ %së‹˜ì´ ì´í˜¼í•˜ì…¨ìŠµë‹ˆë‹¤.
%s and %s have divorced from each other.
*/
	MSG_DIVORCE = 0x344,
/*20171018 to latest
æ‹³è– %sì˜ íƒœì–‘ì˜ ìž¥ì†Œë¡œ %s ê°€ ì§€ì •ëìŠµë‹ˆë‹¤.
%s has been designated as Gravity %s's Solar Space.
*/
	MSG_STARPLACE1 = 0x345,
/*20171018 to latest
æ‹³è– %sì˜ ë‹¬ì˜ ìž¥ì†Œë¡œ %s ê°€ ì§€ì •ëìŠµë‹ˆë‹¤.
%s has been designated as Gravity %s's Luna Space.
*/
	MSG_STARPLACE2 = 0x346,
/*20171018 to latest
æ‹³è– %sì˜ ë³„ì˜ ìž¥ì†Œë¡œ %s ê°€ ì§€ì •ëìŠµë‹ˆë‹¤.
%s has been designated as Gravity %s's Stellar Space.
*/
	MSG_STARPLACE3 = 0x347,
/*20171018 to latest
æ‹³è– %sì˜ íƒœì–‘ì˜ ìž¥ì†ŒëŠ” %s ìž…ë‹ˆë‹¤
Gravity %s's Solar Space: %s
*/
	MSG_STARPLACE4 = 0x348,
/*20171018 to latest
æ‹³è– %sì˜ ë‹¬ì˜ ìž¥ì†ŒëŠ” %s ìž…ë‹ˆë‹¤
Gravity %s's Luna Space: %s
*/
	MSG_STARPLACE5 = 0x349,
/*20171018 to latest
æ‹³è– %sì˜ ë³„ì˜ ìž¥ì†ŒëŠ” %s ìž…ë‹ˆë‹¤
Gravity %s's Stellar Space: %s
*/
	MSG_STARPLACE6 = 0x34a,
/*20171018 to latest
æ‹³è– %sì˜ íƒœì–‘ì˜ ëª¬ìŠ¤í„°ë¡œ %s ê°€ ì§€ì •ëìŠµë‹ˆë‹¤.
%s has been designated as Gravity %s's Solar Monster.
*/
	MSG_STARMONSTER1 = 0x34b,
/*20171018 to latest
æ‹³è– %sì˜ ë‹¬ì˜ ëª¬ìŠ¤í„°ë¡œ %s ê°€ ì§€ì •ëìŠµë‹ˆë‹¤.
%s has been designated as Gravity %s's Luna Monster.
*/
	MSG_STARMONSTER2 = 0x34c,
/*20171018 to latest
æ‹³è– %sì˜ ë³„ì˜ ëª¬ìŠ¤í„°ë¡œ %s ê°€ ì§€ì •ëìŠµë‹ˆë‹¤.
%s has been designated as Gravity %s's Stellar Monster.
*/
	MSG_STARMONSTER3 = 0x34d,
/*20171018 to latest
æ‹³è– %sì˜ íƒœì–‘ì˜ ëª¬ìŠ¤í„°ëŠ” %s ìž…ë‹ˆë‹¤
Gravity %s's Solar Monster: %s
*/
	MSG_STARMONSTER4 = 0x34e,
/*20171018 to latest
æ‹³è– %sì˜ ë‹¬ì˜ ëª¬ìŠ¤í„°ëŠ” %s ìž…ë‹ˆë‹¤
Gravity %s's Luna Monster: %s
*/
	MSG_STARMONSTER5 = 0x34f,
/*20171018 to latest
æ‹³è– %sì˜ ë³„ì˜ ëª¬ìŠ¤í„°ëŠ” %s ìž…ë‹ˆë‹¤
Gravity %s's Stellar Monster: %s
*/
	MSG_STARMONSTER6 = 0x350,
/*20171018 to latest
/window : ì°½ ìœ„ì¹˜ ì´ë™ì‹œ ë‹¤ë¥¸ ì°½ê³¼ ë‹¬ë¼ë¶™ëŠ” ì†ì„±ì´ ë“¤ì–´ê°‘ë‹ˆë‹¤ On Off
/window: Display windows will snap/dock together. On | Off
*/
	MSG_EXPLAIN_WINDOW = 0x351,
/*20171018 to latest
ì°½ ìœ„ì¹˜ ì´ë™ì‹œ ë‹¤ë¥¸ ì°½ê³¼ ìž˜ ë¶™ìŠµë‹ˆë‹¤ [/wi ON]
Display window docking enabled. [/wi ON]
*/
	MSG_WINDOW_ON = 0x352,
/*20171018 to latest
ì°½ ìœ„ì¹˜ ì´ë™ì‹œ ë‹¤ë¥¸ ì°½ê³¼ ë¶™ìœ¼ë ¤ëŠ” ì†ì„±ì„ ê°€ì§€ì§€ ì•ŠìŠµë‹ˆë‹¤ [/wi OFF]
Display window docking disabled. [/wi OFF]
*/
	MSG_WINDOW_OFF = 0x353,
/*20171018 to latest
/pvpinfo : ìžì‹ ì˜ PVP ìŠ¹íŒ¨ì™€ PVP í¬ì¸íŠ¸ë¥¼ ì•Œ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
/pvpinfo: shows your PVP result and PVP points.
*/
	MSG_EXPLAIN_PVP_INFO = 0x354,
/*20171018 to latest
í˜„ìž¬ %dìŠ¹, %díŒ¨, PVPí¬ì¸íŠ¸ëŠ” %dìž…ë‹ˆë‹¤.
You have won %d times and have lost %d times in PVP. Current points %d.
*/
	MSG_PVP_INFO = 0x355,
/*20171018 to latest
ë§¤ë„ˆ í¬ì¸íŠ¸ë¥¼ ì„±ê³µì ìœ¼ë¡œ ë³´ëƒˆìŠµë‹ˆë‹¤.
A manner point has been successfully aligned.
*/
	MSG_SEND_MANNER_POINT = 0x356,
/*20171018 to latest
í˜„ìž¬ ì´ê³³ì€ PK ê°€ëŠ¥ ì§€ì—­ìž…ë‹ˆë‹¤. ë¶ˆì˜ì˜ ê³µê²©ì— ìœ ì˜ í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
You are in a PK area. Please beware of sudden attack.
*/
	MSG_PKZONE = 0x357,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì—…ë°ì´íŠ¸ê°€ ë°”ì´ëŸ¬ìŠ¤ë‚˜ ìŠ¤íŒŒì´ì›¨ì–´ì™€ì˜ ì¶©ëŒë¡œ ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤. ë°±ì‹  í”„ë¡œê·¸ëž¨/ìŠ¤íŒŒì´ì›¨ì–´ ì œê±° í”„ë¡œê·¸ëž¨ì„ ì‚¬ìš©í•œ í›„ ì ‘ì†í•´ ì£¼ì‹­ì‹œê¸° ë°”ëžë‹ˆë‹¤
Game Guard update has been failed when either Virus or Spyware conflicted with. Please, Uninstall Spyware and Virus protection program before you log in.
*/
	MSG_NPGAMEMON_ERROR_100ERROR = 0x358,
/*20171018 to latest
ìœˆë„ìš° í˜¸í™˜ì„± ë¬¸ì œë¡œ í”„ë¡œê·¸ëž¨ì„ ì¢…ë£Œí•©ë‹ˆë‹¤. ê²Œìž„ì„ ë‹¤ì‹œ ì‹¤í–‰í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤
Program has encountered an error related to Windows compatibility. Please start the game again.
*/
	MSG_NPGAMEMON_XP_COMPATIBILITY = 0x359,
/*20171018 to latest
ì±„íŒ…, ìŠ¤í‚¬, ì•„ì´í…œì„ ì‚¬ìš©í• ìˆ˜ì—†ê²Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
You have been blocked from chatting, using skills and items.
*/
	MSG_PK_HONOR = 0x35a,
/*20171018 to latest
ìºë¦­í„° ì‚­ì œ ìž‘ì—…ì¤‘ì´ë¯€ë¡œ ì ‘ì†ì´ ì¼ì‹œì ìœ¼ë¡œ ì œí•œë©ë‹ˆë‹¤.
Login is temporarily unavailable while this character is being deleted.
*/
	MSG_DELETING_CHAR = 0x35b,
/*20171018 to latest
ê²°í˜¼ ìƒëŒ€ìžì˜ ìºë¦­í„° ì‚­ì œ ìž‘ì—…ì¤‘ì´ë¯€ë¡œ ì ‘ì†ì´ ì¼ì‹œì ìœ¼ë¡œ ì œí•œë©ë‹ˆë‹¤.
Login is temporarily unavailable while your spouse character is being deleted.
*/
	MSG_DELETING_SPOUSE_CHAR = 0x35c,
/*20171018 to latest
Novice
*/
	MSG_NOVICE = 0x35d,
/*20171018 to latest
Swordman
*/
	MSG_SWORDMAN = 0x35e,
/*20171018 to latest
Magician
Mage
*/
	MSG_MAGICIAN = 0x35f,
/*20171018 to latest
Archer
*/
	MSG_ARCHER = 0x360,
/*20171018 to latest
Acolyte
*/
	MSG_ACOLYTE = 0x361,
/*20171018 to latest
Merchant
*/
	MSG_MERCHANT = 0x362,
/*20171018 to latest
Thief
*/
	MSG_THIEF = 0x363,
/*20171018 to latest
Knight
*/
	MSG_KNIGHT = 0x364,
/*20171018 to latest
Prieset
Priest
*/
	MSG_PRIEST = 0x365,
/*20171018 to latest
Wizerd
Wizard
*/
	MSG_WIZARD = 0x366,
/*20171018 to latest
Blacksmith
*/
	MSG_BLACKSMITH = 0x367,
/*20171018 to latest
Hunter
*/
	MSG_HUNTER = 0x368,
/*20171018 to latest
Assassin
*/
	MSG_ASSASSIN = 0x369,
/*20171018 to latest
Novice
*/
	MSG_NOVICE_W = 0x36a,
/*20171018 to latest
Swordman
*/
	MSG_SWORDMAN_W = 0x36b,
/*20171018 to latest
Magician
Mage
*/
	MSG_MAGICIAN_W = 0x36c,
/*20171018 to latest
Archer
*/
	MSG_ARCHER_W = 0x36d,
/*20171018 to latest
Acolyte
*/
	MSG_ACOLYTE_W = 0x36e,
/*20171018 to latest
Merchant
*/
	MSG_MERCHANT_W = 0x36f,
/*20171018 to latest
Thief
*/
	MSG_THIEF_W = 0x370,
/*20171018 to latest
Knight
*/
	MSG_KNIGHT_W = 0x371,
/*20171018 to latest
Prieset
Priest
*/
	MSG_PRIEST_W = 0x372,
/*20171018 to latest
Wizerd
Wizard
*/
	MSG_WIZARD_W = 0x373,
/*20171018 to latest
Blacksmith
*/
	MSG_BLACKSMITH_W = 0x374,
/*20171018 to latest
Hunter
*/
	MSG_HUNTER_W = 0x375,
/*20171018 to latest
Assassin
*/
	MSG_ASSASSIN_W = 0x376,
/*20171018 to latest
(%s)ë‹˜ì„ ì•„ì´ë¡œ ìž…ì–‘ì‹ ì²­
Send an adoption request to %s
*/
	MSG_REQ_JOIN_BABY = 0x377,
/*20171018 to latest
ì•„ì´ê°€ ë˜ë©´ ì „ìŠ¹ì„ í• ìˆ˜ì—†ê³  ìŠ¤í…Ÿì€ 80ì´ìƒ ì˜¬ë¦´ìˆ˜ì—†ê²Œë˜ë©° HPì™€ SPê°€ ì¤„ì–´ë“­ë‹ˆë‹¤. ê·¸ëž˜ë„ ê´œì°®ìŠµë‹ˆê¹Œ?
When you become a child, you will be unable to become a Transcendent Class character, all stats will be limited to a maximum of 80, and Max HP/SP will be reduced. Are you sure that you want to be adopted?
*/
	MSG_SUGGEST_BABY2 = 0x378,
/*20171018 to latest
ëª¨ë“  ë‚˜ìœ ìƒíƒœì´ìƒì´ ì œê±° ë˜ì—ˆìŠµë‹ˆë‹¤.
All abnormal status effects have been removed.
*/
	MSG_GOSPEL1 = 0x379,
/*20171018 to latest
1ë¶„ê°„ ëª¨ë“  ìƒíƒœì´ìƒì— ëŒ€í•´ ë©´ì—­ì´ ë©ë‹ˆë‹¤.
You will be immune to abnormal status effects for the next minute.
*/
	MSG_GOSPEL2 = 0x37a,
/*20171018 to latest
1ë¶„ê°„ ìµœëŒ€ ìƒëª…ë ¥ì´ í¬ê²Œ ëŠ˜ì–´ë‚©ë‹ˆë‹¤.
Your Max HP will stay increased for the next minute.
*/
	MSG_GOSPEL3 = 0x37b,
/*20171018 to latest
1ë¶„ê°„ ìµœëŒ€ ë§ˆë²•ë ¥ì´ í¬ê²Œ ëŠ˜ì–´ë‚©ë‹ˆë‹¤.
Your Max SP will stay increased for the next minute.
*/
	MSG_GOSPEL4 = 0x37c,
/*20171018 to latest
1ë¶„ê°„ ëª¨ë“  ëŠ¥ë ¥ì´ í¬ê²Œ ìƒìŠ¹í•©ë‹ˆë‹¤.
All of your Stats will stay increased for the next minute.
*/
	MSG_GOSPEL5 = 0x37d,
/*20171018 to latest
1ë¶„ê°„ ì‚¬ìš©í•˜ëŠ” ë¬´ê¸°ì— ì„±ìŠ¤ëŸ¬ìš´ ì†ì„±ì´ ë¶€ì—¬ë©ë‹ˆë‹¤.
Your weapon will remain blessed with Holy power for the next minute.
*/
	MSG_GOSPEL6 = 0x37e,
/*20171018 to latest
1ë¶„ê°„ ì‚¬ìš©í•˜ëŠ” ê°‘ì˜·ì— ì„±ìŠ¤ëŸ¬ìš´ ì†ì„±ì´ ë¶€ì—¬ë©ë‹ˆë‹¤.
Your armor will remain blessed with Holy power for the next minute.
*/
	MSG_GOSPEL7 = 0x37f,
/*20171018 to latest
10ì´ˆê°„ ë°©ì–´ë ¥ì´ í¬ê²Œ ìƒìŠ¹í•©ë‹ˆë‹¤.
Your Defense will stay increased for the next 10 seconds.
*/
	MSG_GOSPEL8 = 0x380,
/*20171018 to latest
1ë¶„ê°„ ê³µê²©ë ¥ì´ í¬ê²Œ ì¦ê°€í•©ë‹ˆë‹¤.
Your Attack strength will be increased for the next minute.
*/
	MSG_GOSPEL9 = 0x381,
/*20171018 to latest
1ë¶„ê°„ ëª…ì¤‘ë¥ ê³¼ íšŒí”¼ìœ¨ì´ í¬ê²Œ ìƒìŠ¹í•©ë‹ˆë‹¤.
Your Accuracy and Flee Rate will be increased for the next minute.
*/
	MSG_GOSPEL10 = 0x382,
/*20171018 to latest
ì•„ì´ë¥¼ í•œë²ˆ ìž…ì–‘í–ˆë˜ ë¶€ë¶€ëŠ” ì¶”ê°€ ìž…ì–‘ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
You cannot adopt more than 1 child.
*/
	MSG_BABY1 = 0x383,
/*20171018 to latest
ë¶€ë¶€ê°€ ë‘˜ë‹¤ ë ˆë²¨70ì´ ë„˜ì–´ì•¼ ì•„ì´ë¥¼ ìž…ì–‘í• ìˆ˜ìžˆìŠµë‹ˆë‹¤.
You must be at least character level 70 in order to adopt someone.
*/
	MSG_BABY2 = 0x384,
/*20171018 to latest
[POINT] ë¸”ëž™ìŠ¤ë¯¸ìŠ¤ ëž­í‚¹í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[Point] You have been rewarded with %d Blacksmith rank points. Your point total is %d.
*/
	MSG_BLACKSMITH_POINT = 0x385,
/*20171018 to latest
[POINT] ì•Œì¼€ë¯¸ìŠ¤íŠ¸ ëž­í‚¹í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[Point] You have been rewarded with %d Alchemist rank points. Your point total is %d.
*/
	MSG_ALCHEMIST_POINT = 0x386,
/*20171018 to latest
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE11 = 0x387,
/*20171018 to latest
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE12 = 0x388,
/*20171018 to latest
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE13 = 0x389,
/*20171018 to latest
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE14 = 0x38a,
/*20171018 to latest
/notalkmsg2 : ì±„íŒ…ë‚´ìš©ì„ ì±„íŒ…ì°½ì— í‘œì‹œí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤ (ê¸¸ë“œë§ í¬í•¨) On Off
/notalkmsg2: Hides chat messages(including guild chat). On Off
*/
	MSG_EXPLAIN_NOTALKMSG2 = 0x38b,
/*20171018 to latest
ì±„íŒ…ë‚´ìš©ì„ ì±„íŒ…ì°½ì— í‘œì‹œí•©ë‹ˆë‹¤ [/nm2 ON]
Show chat messages. [/nm2 ON]
*/
	MSG_NOTALKMSG2_ON = 0x38c,
/*20171018 to latest
ì±„íŒ…ë‚´ìš©ì„ ì±„íŒ…ì°½ì— í‘œì‹œí•˜ì§€ì•ŠìŠµë‹ˆë‹¤ (ê¸¸ë“œë§ í¬í•¨) [/nm2 OFF]
Hide chat messages(including guild chat) [/nm2 OFF]
*/
	MSG_NOTALKMSG2_OFF = 0x38d,
/*20171018 to latest
ì œë ¨ê°€ëŠ¥í•œ ì•„ì´í…œ
Upgradable Weapons
*/
	MSG_REFINEITEMLIST = 0x38e,
/*20171018 to latest
ì œë ¨í•œ ë¬´ê¸° : %s
Weapons upgraded: %s
*/
	MSG_ITEM_REFINE_SUCCEESS = 0x38f,
/*20171018 to latest
ì œë ¨í•œ ë¬´ê¸° : %s
Weapons upgraded: %s
*/
	MSG_ITEM_REFINE_FAIL = 0x390,
/*20171018 to latest
ë¬´ê¸°ì œë ¨ìŠ¤í‚¬ì˜ ë ˆë²¨ì´ ë¶€ì¡±í•´ì„œ %s ì œë ¨ì„ í• ìˆ˜ì—†ìŠµë‹ˆë‹¤.
You cannot upgrade %s until you level up your Upgrade Weapon skill.
*/
	MSG_ITEM_REFINE_FAIL_LEVEL = 0x391,
/*20171018 to latest
ì œë ¨ì— í•„ìš”í•œ ì•„ì´í…œ (%s) ì´ ì—†ìœ¼ë¯€ë¡œ ì œë ¨í• ìˆ˜ì—†ìŠµë‹ˆë‹¤.
You lack a necessary item %s to upgrade this weapon.
*/
	MSG_ITEM_REFINE_FAIL_MATERIAL = 0x392,
/*20171018 to latest
ì™„ë²½í•˜ê²Œ ì½”íŒ…ë˜ì–´ìžˆì–´ì„œ í’€ìŠ¤íŠ¸ë¦½ì´ í†µí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Full Divestment cannot pierce the target. The target is fully shielded.
*/
	MSG_FULLSTRIP = 0x393,
/*20171018 to latest
ê²°í˜¼í•œ ìºë¦­í„°ëŠ” ìž…ì–‘ì‹œí‚¬ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot adopt a married person.
*/
	MSG_BABY3 = 0x394,
/*20171018 to latest
ì¹œêµ¬ë¡œ ë“±ë¡ëœ ì´ë¦„ê³¼ ë¹„ìŠ·í•˜ì§€ë§Œ ë“±ë¡ëœ ì´ë¦„ì´ ì•„ë‹™ë‹ˆë‹¤. ì•„ëŠ”ì‚¬ëžŒì¸ì§€ í™•ì¸í•˜ì‹­ì‹œìš”.
This name is not registered in your Friend List. Please check the name again.
*/
	MSG_ID_WARNING = 0x395,
/*20171018 to latest
/hi ë˜ëŠ” /hi ë¬¸ìž¥ : ì¹œêµ¬ë¡œ ë“±ë¡ëœ ìºë¦­í„°ë“¤ì—ê²Œ ì¸ì‚¬ë¥¼ í•©ë‹ˆë‹¤.
/hi or /hi message: Send greetings to people who are online and registered on your Friend List.
*/
	MSG_EXPLAIN_HI = 0x396,
/*20171018 to latest
ê¸¸ë“œì›ì˜ ì´ë¦„ê³¼ ë¹„ìŠ·í•˜ì§€ë§Œ ê¸¸ë“œì›ì´ ì•„ë‹™ë‹ˆë‹¤. ê¸¸ë“œì›ì¸ì§€ í™•ì¸í•˜ì‹­ì‹œìš”.
This character is not your guildsman. Please check the name again.
*/
	MSG_ID_WARNING_GUILD = 0x397,
/*20171018 to latest
9999ë§Œì œë‹ˆ ì´ìƒ ìž…ë ¥í•˜ì…”ë„ ê°€ê²©ì€ 9999ë§Œì œë‹ˆë¡œ íŒë§¤ë©ë‹ˆë‹¤.
Please be aware that the maximum selling price is fixed as 2 Billion. You cannot sell an item higher than that.
*/
	MSG_OVERPRICE9999 = 0x398,
/*20171018 to latest
ì¹œêµ¬ì˜ ê·“ì†ë§ì€ [ Friend ] , ê¸¸ë“œì›ì€ [ Member ] ë¡œ í‘œì‹œë©ë‹ˆë‹¤.
Whispers from friends are displayed as [ Friend ], and ones from guildsmen are displayed as [ Member ].
*/
	MSG_EXPLAIN_SACHING1 = 0x399,
/*20171018 to latest
( From ìºë¦­í„°ì´ë¦„ : ) ì´ë¼ê³  í‘œì‹œ ë˜ëŠ” ê·“ì†ë§ì€ ì¹œêµ¬ë‚˜ ê¸¸ë“œì›ì´ ì•„ë‹™ë‹ˆë‹¤.
( From character name: ) is from an anonymous character who is neither your friend nor guildsman.
*/
	MSG_EXPLAIN_SACHING2 = 0x39a,
/*20171018 to latest
/blacksmith : ë¸”ëž™ìŠ¤ë¯¸ìŠ¤ì˜ ìƒìœ„ 10ìœ„ê¶Œ ëž­í‚¹ì„ ë³´ì—¬ì¤ë‹ˆë‹¤.
/blacksmith: Shows top 10 Blacksmiths in the server.
*/
	MSG_EXPLAIN_BLACKSMITH = 0x39b,
/*20171018 to latest
/alchemist : ì•Œì¼€ë¯¸ìŠ¤íŠ¸ì˜ ìƒìœ„ 10ìœ„ê¶Œ ëž­í‚¹ì„ ë³´ì—¬ì¤ë‹ˆë‹¤.
/alchemist: Shows top 10 Alchemists in the server.
*/
	MSG_EXPLAIN_ALCHEMIST = 0x39c,
/*20171018 to latest
ALT+Y : ì—¬ëŸ¬ê°€ì§€ ëª…ë ¹ì–´ë¥¼ ì‰½ê²Œ ì“¸ìˆ˜ìžˆëŠ” ìœˆë„ìš°ê°€ ì—´ë¦½ë‹ˆë‹¤.
ALT+Y: Opens a window which allows you to use various commands with ease.
*/
	MSG_EXPLAIN_ALTY = 0x39d,
/*20171018 to latest
[POINT] íƒœê¶Œë¯¸ì…˜ ëž­í‚¹í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[POINT] You have been rewarded with %d Tae-Kwon Mission rank points. Your point total is %d.
*/
	MSG_TAEKWON_POINT = 0x39e,
/*20171018 to latest
[íƒœê¶Œë¯¸ì…˜] Target Monster : %s (%d%%)
[Taekwon Mission] Target Monster: %s (%d%%)
*/
	MSG_TAEKWON_MISSION = 0x39f,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì´ˆê¸°í™” ì—ëŸ¬ : %lu
Error - Failed to initialize GameGuard: %lu
*/
	MSG_INIT_ERROR = 0x3a0,
/*20171018 to latest
ìŠ¤í”¼ë“œí•µì´ ê°ì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
Speed Hack has been detected.
*/
	MSG_SPEEDHACK_DETECT = 0x3a1,
/*20171018 to latest
ë¶ˆë²• í”„ë¡œê·¸ëž¨ (%s) ê°€ ë°œê²¬ë˜ì—ˆìŠµë‹ˆë‹¤
The illegal program, (%s) has been detected.
*/
	MSG_GAMEHACK_DETECT = 0x3a2,
/*20171018 to latest
ê²Œìž„ì´ë‚˜ ê²Œìž„ê°€ë“œê°€ ë³€ì¡°ë˜ì—ˆìŠµë‹ˆë‹¤.
The Game or Gameguard has been cracked.
*/
	MSG_GAMEHACK_DOUBT = 0x3a3,
/*20171018 to latest
ê²Œìž„ê°€ë“œê°€ ì‹¤í–‰ ì¤‘ ìž…ë‹ˆë‹¤. ìž ì‹œ í›„ì— ë‹¤ì‹œ ì‹¤í–‰í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
GameGuard is currently running. Please wait for sometime and restart the game.
*/
	MSG_ERROR_EXIST = 0x3a4,
/*20171018 to latest
ê²Œìž„ì´ ì¤‘ë³µ ì‹¤í–‰ë˜ì—ˆê±°ë‚˜ ê²Œìž„ê°€ë“œê°€ ì´ë¯¸ ì‹¤í–‰ ì¤‘ ìž…ë‹ˆë‹¤. ê²Œìž„ ì¢…ë£Œ í›„ ë‹¤ì‹œ ì‹¤í–‰í•´ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
The Game or GameGuard is already running. Please close the game and restart the game.
*/
	MSG_GAME_EXIST = 0x3a5,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì´ˆê¸°í™” ì—ëŸ¬ìž…ë‹ˆë‹¤. ìž¬ë¶€íŒ… í›„ ë‹¤ì‹œ ì‹¤í–‰í•´ë³´ê±°ë‚˜ ì¶©ëŒí•  ìˆ˜ ìžˆëŠ” ë‹¤ë¥¸ í”„ë¡œê·¸ëž¨ë“¤ì„ ì¢…ë£Œí•œ í›„ ì‹¤í–‰í•´ ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Failed to intialize GameGuard. Please try again after rebooting the system or closing other programs.
*/
	MSG_ERROR_INIT = 0x3a6,
/*20171018 to latest
ë°”ì´ëŸ¬ìŠ¤ ë° í•´í‚¹íˆ´ ê²€ì‚¬ ëª¨ë“ˆ ë¡œë”©ì— ì‹¤íŒ¨ í–ˆìŠµë‹ˆë‹¤. ë©”ëª¨ë¦¬ ë¶€ì¡±ì´ê±°ë‚˜ ë°”ì´ëŸ¬ìŠ¤ì— ì˜í•œ ê°ì—¼ì¼ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Failed to load the scan module of virus and hacking tool. It's caused by lack of memory or PC virus infection.
*/
	MSG_ERROR_NPSCAN = 0x3a7,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ ì •ë³´
Homunculus Info
*/
	MSG_HOMUN_INFO = 0x3a8,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ ìŠ¤í‚¬ëª©ë¡
Homunculus Skill List
*/
	MSG_HOMUN_SKILLLIST = 0x3a9,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ì˜ ì´ë¦„ì€ ì˜ë¬¸ 23, í•œê¸€ 11ìž ì´ë‚´ë¡œ ì •í•´ ì£¼ì„¸ìš”.
Please give your Homunculus a name no longer than 23 letters.
*/
	MSG_HOMUN_NAME_IN23 = 0x3aa,
/*20171018 to latest
ì´ë¦„ì€ ë‹¨ í•œë²ˆë§Œ ë°”ê¿€ìˆ˜ ìžˆìŠµë‹ˆë‹¤. í˜¸ë¬¸í´ë£¨ìŠ¤ì˜ ì´ë¦„ì„ ^0000ff^0000ff %s^000000^000000 ë¡œ ìˆ˜ì •í•©ë‹ˆë‹¤. ê³„ì† í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You can name a Homunculus only once. You have entered the name, ^0000ff%s^000000. Would you like to continue?
*/
	MSG_HOMUN_NAME_CHANGE_ONLYONCE = 0x3ab,
/*20171018 to latest
ì§€ê¸ˆì€ ë¶€ìž¬ì¤‘~
(Away)
*/
	MSG_AUTO_MSG = 0x3ac,
/*20171018 to latest
[ìžë™ì‘ë‹µ] 
[Automated Message]
*/
	MSG_AUTO_MSG2 = 0x3ad,
/*20171018 to latest
ë¶€ìž¬ì‹œ íƒ€ì¸ì˜ ê·“ë§ì— ìžë™ì‘ë‹µí•©ë‹ˆë‹¤.
Send an automated message while you are away.
*/
	MSG_AUTO_MSG_ON = 0x3ae,
/*20171018 to latest
ë¶€ìž¬ì‹œ íƒ€ì¸ì˜ ê·“ë§ì— ìžë™ì‘ë‹µí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Cancel automated away message.
*/
	MSG_AUTO_MSG_OFF = 0x3af,
/*20171018 to latest
ìžë™ ì‘ë‹µ ë©”ì‹œì§€ë¥¼ ìž…ë ¥í•˜ì„¸ìš”.
Please enter Away Message.
*/
	MSG_ENTER_AUTO_MSG = 0x3b0,
/*20171018 to latest
/ë²ˆì©
/fsh
*/
	MSG_EMOTION_SPARK = 0x3b1,
/*20171018 to latest
/ë¹™ë¹™
/spin
*/
	MSG_EMOTION_CONFUSE = 0x3b2,
/*20171018 to latest
/í•˜ì•„
/sigh
*/
	MSG_EMOTION_OHNO = 0x3b3,
/*20171018 to latest
/ë¤ë¤
/dum
*/
	MSG_EMOTION_HUM = 0x3b4,
/*20171018 to latest
/ì‹œëŒ
/crwd
*/
	MSG_EMOTION_BLABLA = 0x3b5,
/*20171018 to latest
/ì¢Œì ˆ
/desp
*/
	MSG_EMOTION_OTL = 0x3b6,
/*20171018 to latest
/ì£¼ì‚¬ìœ„
/dice
*/
	MSG_EMOTION_DICE = 0x3b7,
/*20171018 to latest
/pk : í•™ì‚´ìžì˜ ìƒìœ„ 10ìœ„ê¶Œ ëž­í‚¹ì„ ë³´ì—¬ì¤ë‹ˆë‹¤.
/pk: Shows top 10 Slayers in the server.
*/
	MSG_EXPLAIN_KILLER_RANK = 0x3b8,
/*20171018 to latest
[POINT] í•™ì‚´ìž ëž­í‚¹í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[POINT] You have been rewarded with %d Slayer rank points. Your point total is %d.
*/
	MSG_KILLER_POINT = 0x3b9,
/*20171018 to latest
ì§„í™” ê°€ëŠ¥
Evolution Available
*/
	MSG_HOMUN_EVOLVE = 0x3ba,
/*20171018 to latest
^ff0000^ff0000í˜¸ë¬¸í´ë£¨ìŠ¤ë¥¼ ì‚­ì œí•©ë‹ˆë‹¤.^000000^000000 ì‚­ì œí•˜ì‹¤ ê²½ìš° ì§€ê¸ˆê¹Œì§€ í‚¤ìš´ ë‚´ì—­ì´ ëª¨ë‘ ì‚­ì œë©ë‹ˆë‹¤. ê³„ì†í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You have decided to delete this Homunculus ^ff0000^ff0000. When deleted, the homunculus and its history will be deleted and they cannot be restored in the future. Would you like to continue?
*/
	MSG_DELETE_HOMUN = 0x3bb,
/*20171018 to latest
í˜¸ë¬¸ì˜ ìƒíƒœë¥¼ íŒŒì¼ì— ì €ìž¥í•©ë‹ˆë‹¤.
Save Homunculus status as a file.
*/
	MSG_TRACE_AI_ON = 0x3bc,
/*20171018 to latest
í˜¸ë¬¸ì˜ ìƒíƒœë¥¼ íŒŒì¼ì— ì €ìž¥í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Do not save Homunculus status as a file.
*/
	MSG_TRACE_AI_OFF = 0x3bd,
/*20171018 to latest
Crusader
*/
	MSG_CRUSADER = 0x3be,
/*20171018 to latest
Monk
*/
	MSG_MONK = 0x3bf,
/*20171018 to latest
Sage
*/
	MSG_SAGE = 0x3c0,
/*20171018 to latest
Rouge
Rogue
*/
	MSG_ROGUE = 0x3c1,
/*20171018 to latest
Alchemist
*/
	MSG_ALCHEMIST = 0x3c2,
/*20171018 to latest
Bard
*/
	MSG_BARD = 0x3c3,
/*20171018 to latest
Crusader_W
Crusader
*/
	MSG_CRUSADER_W = 0x3c4,
/*20171018 to latest
Monk_W
Monk
*/
	MSG_MONK_W = 0x3c5,
/*20171018 to latest
Sage_W
Sage
*/
	MSG_SAGE_W = 0x3c6,
/*20171018 to latest
Rouge_W
Rogue
*/
	MSG_ROGUE_W = 0x3c7,
/*20171018 to latest
Alchemist_W
Alchemist
*/
	MSG_ALCHEMIST_W = 0x3c8,
/*20171018 to latest
Dancer
*/
	MSG_DANCER = 0x3c9,
/*20171018 to latest
Novice High
High Novice
*/
	MSG_NOVICE_H = 0x3ca,
/*20171018 to latest
Swordman High
High Swordman
*/
	MSG_SWORDMAN_H = 0x3cb,
/*20171018 to latest
Magician High
High Mage
*/
	MSG_MAGICIAN_H = 0x3cc,
/*20171018 to latest
Archer High
High Archer
*/
	MSG_ARCHER_H = 0x3cd,
/*20171018 to latest
Acolyte High
High Acolyte
*/
	MSG_ACOLYTE_H = 0x3ce,
/*20171018 to latest
Merchant High
High Merchant
*/
	MSG_MERCHANT_H = 0x3cf,
/*20171018 to latest
Thief High
High Thief
*/
	MSG_THIEF_H = 0x3d0,
/*20171018 to latest
Novice High_W
High Novice
*/
	MSG_NOVICE_H_W = 0x3d1,
/*20171018 to latest
Swordman High_W
High Swordman
*/
	MSG_SWORDMAN_H_W = 0x3d2,
/*20171018 to latest
Magician High_W
High Mage
*/
	MSG_MAGICIAN_H_W = 0x3d3,
/*20171018 to latest
Archer High_W
High Archer
*/
	MSG_ARCHER_H_W = 0x3d4,
/*20171018 to latest
Acolyte High_W
High Acolyte
*/
	MSG_ACOLYTE_H_W = 0x3d5,
/*20171018 to latest
Merchant High_W
High Merchant
*/
	MSG_MERCHANT_H_W = 0x3d6,
/*20171018 to latest
Thief High_W
High Thief
*/
	MSG_THIEF_H_W = 0x3d7,
/*20171018 to latest
Lord Knight
*/
	MSG_KNIGHT_H = 0x3d8,
/*20171018 to latest
High Priest
*/
	MSG_PRIEST_H = 0x3d9,
/*20171018 to latest
High Wizard
*/
	MSG_WIZARD_H = 0x3da,
/*20171018 to latest
White Smith
WhiteSmith
*/
	MSG_BLACKSMITH_H = 0x3db,
/*20171018 to latest
Sniper
*/
	MSG_HUNTER_H = 0x3dc,
/*20171018 to latest
Saaassin Cross
Assassin Cross
*/
	MSG_ASSASSIN_H = 0x3dd,
/*20171018 to latest
Lord Knight_W
Lord Knight
*/
	MSG_KNIGHT_H_W = 0x3de,
/*20171018 to latest
High Priest_W
High Priest
*/
	MSG_PRIEST_H_W = 0x3df,
/*20171018 to latest
High Wizard_W
High Wizard
*/
	MSG_WIZARD_H_W = 0x3e0,
/*20171018 to latest
White Smith_W
WhiteSmith
*/
	MSG_BLACKSMITH_H_W = 0x3e1,
/*20171018 to latest
Sniper_W
Sniper
*/
	MSG_HUNTER_H_W = 0x3e2,
/*20171018 to latest
Saaassin Cross_W
Assassin Cross
*/
	MSG_ASSASSIN_H_W = 0x3e3,
/*20171018 to latest
Paladin
*/
	MSG_CRUSADER_H = 0x3e4,
/*20171018 to latest
Champion
*/
	MSG_MONK_H = 0x3e5,
/*20171018 to latest
Professor
Scholar
*/
	MSG_SAGE_H = 0x3e6,
/*20171018 to latest
Stalker
*/
	MSG_ROGUE_H = 0x3e7,
/*20171018 to latest
Creator
Biochemist
*/
	MSG_ALCHEMIST_H = 0x3e8,
/*20171018 to latest
Clown
Minstrel
*/
	MSG_BARD_H = 0x3e9,
/*20171018 to latest
Paladin_W
Paladin
*/
	MSG_CRUSADER_H_W = 0x3ea,
/*20171018 to latest
Champion_W
Champion
*/
	MSG_MONK_H_W = 0x3eb,
/*20171018 to latest
Professor_W
Professor
*/
	MSG_SAGE_H_W = 0x3ec,
/*20171018 to latest
Stalker_W
Stalker
*/
	MSG_ROGUE_H_W = 0x3ed,
/*20171018 to latest
Creator_W
Creator
*/
	MSG_ALCHEMIST_H_W = 0x3ee,
/*20171018 to latest
Gypsy
*/
	MSG_DANCER_H = 0x3ef,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ê°€ ì§€ì •ë˜ì–´ ìžˆì§€ ì•ŠìŠµë‹ˆë‹¤. ìƒˆë¡œìš´ ë¹„ë°€ë²ˆí˜¸ë¥¼ ì§€ì •í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You have not set a password yet. Would you like to create one now?
*/
	MSG_STORE_PASSWORD_REQ = 0x3f0,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ë¥¼ 3íšŒ í‹€ë ¤ì…¨ìŠµë‹ˆë‹¤. ë‚˜ì¤‘ì— ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì„¸ìš”.
You have incorrectly entered the password 3 times. Please try again later.
*/
	MSG_STORE_PASSWORD_PENALTY = 0x3f1,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ ë³€ê²½ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Password creation has failed.
*/
	MSG_STORE_PASSWORD_CHANGE_NG = 0x3f2,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ëŠ” 4ìžë¦¬ ì´ìƒ 8ìžë¦¬ì´í•˜ì—¬ì•¼ë§Œ í•©ë‹ˆë‹¤.
Password must be 4~8 letters long.
*/
	MSG_STORE_PASSWORD_4_8 = 0x3f3,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸
Password
*/
	MSG_STORE_PASSWORD = 0x3f4,
/*20171018 to latest
ì‹ ê·œ ë¹„ë°€ë²ˆí˜¸
New Password
*/
	MSG_STORE_NEW_PASSWORD = 0x3f5,
/*20171018 to latest
í™•ì¸ ë¹„ë°€ë²ˆí˜¸
Confirm Password
*/
	MSG_STORE_RENEW_PASSWORD = 0x3f6,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ ë³€ê²½ì´ ì™„ë£Œë˜ì—ˆìŠµë‹ˆë‹¤.
Password has been changed.
*/
	MSG_STORE_PASSWORD_CHANGE_OK = 0x3f7,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ê°€ ì„œë¡œ ë‹¤ë¦…ë‹ˆë‹¤.
Password does not match.
*/
	MSG_STORE_PASSWORD_MISMATCH = 0x3f8,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ ìž…ë ¥
Enter Password
*/
	MSG_STORE_PASSWORD_INPUT = 0x3f9,
/*20171018 to latest
í˜¸ë¬¸ì´ ì•„ì‚¬ ì§ì „ìž…ë‹ˆë‹¤! ë¨¹ì´ë¥¼ ì£¼ì§€ ì•Šìœ¼ë©´ ê°€ì¶œí•˜ê²Œë©ë‹ˆë‹¤.
Your Homunculus is starving. Please feed it, otherwise it will leave you.
*/
	MSG_HOMUN_HUNGRY = 0x3fa,
/*20171018 to latest
ê²½í—˜ì¹˜
EXP
*/
	MSG_HOMUN_EXP = 0x3fb,
/*20171018 to latest
ìˆ˜ë ¹í•˜ì§€ ì•Šì€ ì•„ì´í…œì´ ì¡´ìž¬í•©ë‹ˆë‹¤. ì•Œë² ë¥´íƒ€ì˜ ì¡´ë‹¤ ê¸°íšì‚¬ ì§ì›ì„ ì°¾ì•„ì£¼ì„¸ìš”. ^ff0000â€» ì•„ì´í…œ ìˆ˜ë ¹ ê¸°ê°„ì´ ì§€ë‚˜ë©´ ì•„ì´í…œì´ ì†Œì‹¤ ë©ë‹ˆë‹¤!^000000
[EVENT] You have won an event prize. Please claim your prize in game.
*/
	MSG_EVENT_RESULT = 0x3fc,
/*20171018 to latest
ì‹«ì–´í•¨
Hate
*/
	MSG_HATE = 0x3fd,
/*20171018 to latest
ë§¤ìš°ì‹«ì–´í•¨
Hate with a Passion
*/
	MSG_VERYHATE = 0x3fe,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ê°€ ì‚¬ìš©ìž ì¸ê³µì§€ëŠ¥ìœ¼ë¡œ ë™ìž‘í•©ë‹ˆë‹¤.
Homunculus has been customized.
*/
	MSG_HOMUN_USERAI_ON = 0x3ff,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ê°€ ê¸°ë³¸ ì¸ê³µì§€ëŠ¥ìœ¼ë¡œ ë™ìž‘í•©ë‹ˆë‹¤.
Homunculus has been activated with the basic AI.
*/
	MSG_HOMUN_USERAI_OFF = 0x400,
/*20171018 to latest
íŽ¸ì§€ëª©ë¡
Mail List
*/
	MSG_MAIL_LIST = 0x401,
/*20171018 to latest
íŽ¸ì§€ì“°ê¸°
Write Mail
*/
	MSG_MAIL_WRITE = 0x402,
/*20171018 to latest
íŽ¸ì§€ì½ê¸°
Read Mail
*/
	MSG_MAIL_READ = 0x403,
/*20171018 to latest
í•œë²ˆ ì§€ì •í•˜ì‹œë©´ ë³€ê²½ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤!     ì´ ë§µìœ¼ë¡œ ì§€ì •í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
You cannot change a map's designation once it is designated. Are you sure that you want to designate this map?
*/
	MSG_STARPLACE_ACCEPT = 0x404,
/*20171018 to latest
ë©”ì¼ ì•„ì´í…œì„ ìˆ˜ë ¹í–ˆìŠµë‹ˆë‹¤.
Item has been added in the Item Window.
*/
	MSG_MAIL_ADD_ITEM_SUCCESS = 0x405,
/*20171018 to latest
ë©”ì¼ ì•„ì´í…œì„ ìˆ˜ë ¹í•˜ì§€ ëª»í–ˆìŠµë‹ˆë‹¤.
You have failed to add the item in the Item Window.
*/
	MSG_MAIL_ADD_ITEM_FAILURE = 0x406,
/*20171018 to latest
ë©”ì¼ ë³´ë‚´ê¸°ê°€ ì„±ê³µí•˜ì˜€ìŠµë‹ˆë‹¤.
You have successfully mailed a message.
*/
	MSG_MAIL_SEND_SUCCESS = 0x407,
/*20171018 to latest
ë©”ì¼ ë³´ë‚´ê¸°ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ë°›ëŠ” ì‚¬ëžŒì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
You have failed to mail a message. Recipient does not exist.
*/
	MSG_MAIL_USER_NOT_FOUND = 0x408,
/*20171018 to latest
[íƒœì–‘ê³¼ ë‹¬ê³¼ ë³„ì˜ ì²œì‚¬] ì§€ì •í–ˆë˜ ìž¥ì†Œë“¤ê³¼ ëª¬ìŠ¤í„°ë“¤ì´ ì´ˆê¸°í™”ëìŠµë‹ˆë‹¤!
[Solar, Lunar and Stellar Angel] Designated places and monsters have been reset.
*/
	MSG_STAR_ANGEL = 0x409,
/*20171018 to latest
ê²½ë§¤ ë“±ë¡ì´ ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
The minimum starting bid for auctions is 10,000,000 zeny.
*/
	MSG_AUCTION_ADD_FALSE = 0x40a,
/*20171018 to latest
ê²½ë§¤ ë“±ë¡ì´ ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
You have successfully started a new auction.
*/
	MSG_AUCTION_ADD_TRUE = 0x40b,
/*20171018 to latest
í•´ë‹¹ ê²½ë§¤ê°€ ì·¨ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
The auction has been canceled.
*/
	MSG_AUCTION_ADD_CANCEL = 0x40c,
/*20171018 to latest
ìž…ì°°ìžê°€ ìžˆëŠ” ê²½ë§¤ëŠ” ì·¨ì†Œí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
An auction with at least one bidder cannot be canceled.
*/
	MSG_AUCTION_ADD_CANCEL_FALSE = 0x40d,
/*20171018 to latest
ë©”ì¼ ì‚­ì œê°€ ì„±ê³µí•˜ì˜€ìŠµë‹ˆë‹¤.
Mail has been successfully deleted.
*/
	MSG_MAIL_DELETE_SUCCESS = 0x40e,
/*20171018 to latest
ë©”ì¼ ì‚­ì œê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
You have failed to delete the mail.
*/
	MSG_MAIL_DELETE_FAILURE = 0x40f,
/*20171018 to latest
ë˜ì§€ëŠ” ë‹¨ê²€ì´ ìž¥ì°©ë˜ì—ˆìŠµë‹ˆë‹¤.
You have equipped throwing daggers.
*/
	MSG_MSG_KNIFE_EQUIPMENT_SUCCESS = 0x410,
/*20171018 to latest
%s ë‹˜ì´ ë¡œê·¸ì¸í–ˆìŠµë‹ˆë‹¤.
%s has logged in.
*/
	MSG_LOGIN_FRIEND = 0x411,
/*20171018 to latest
%s ë‹˜ì´ ë¡œê·¸ì•„ì›ƒí–ˆìŠµë‹ˆë‹¤.
%s has logged out.
*/
	MSG_LOGOUT_FRIEND = 0x412,
/*20171018 to latest
/loginout : ê¸¸ë“œì›ê³¼ ì¹œêµ¬ë“¤ì˜ ì ‘ì†ê´€ë ¨ ë©”ì„¸ì§€ë¥¼ ë³´ì—¬ì¤ë‹ˆë‹¤. On Off
/loginout: Shows guildsmen and friends online status. On Off
*/
	MSG_EXPLAIN_LOGINOUT = 0x413,
/*20171018 to latest
ì¹œêµ¬ë“¤ì˜ ì ‘ì†ê´€ë ¨ ë©”ì„¸ì§€ë¥¼ ëŒ€í™”ì°½ì— í‘œì‹œí•©ë‹ˆë‹¤. [/li ON]
Display online status of friends in Chat Window. [/li ON]
*/
	MSG_LOGINOUT_ON = 0x414,
/*20171018 to latest
ì¹œêµ¬ë“¤ì˜ ì ‘ì†ê´€ë ¨ ë©”ì„¸ì§€ë¥¼ ëŒ€í™”ì°½ì— í‘œì‹œí•˜ì§€ì•ŠìŠµë‹ˆë‹¤.  [/li OFF]
Do not display online status of friends in Chat Window. [/li OFF]
*/
	MSG_LOGINOUT_OFF = 0x415,
/*20171018 to latest
ì´ë¯¸ ì‹¤í–‰ì¤‘ìž…ë‹ˆë‹¤.
It is already running.
*/
	MSG_SGP_CODE_ALREADY_RUNNING = 0x416,
/*20171018 to latest
ë§¤í¬ë¡œ ì‚¬ìš©ì´ ê°ì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
Use of Macro program has been detected.
*/
	MSG_SGP_CODE_DETECTED_MACRO = 0x417,
/*20171018 to latest
ìŠ¤í”¼ë“œí•´í‚¹ì´ ê°ì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
Use of Speed hack has been detected.
*/
	MSG_SGP_CODE_DETECTED_SPEEDHACK = 0x418,
/*20171018 to latest
API í›„í‚¹ì´ ê°ì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
API Hooking has been detected.
*/
	MSG_SGP_CODE_DETECTED_APIHOOK = 0x419,
/*20171018 to latest
ë©”ì‹œì§€ í›„í‚¹ì´ ê°ì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
Message Hooking has been detected.
*/
	MSG_SGP_CODE_DETECTED_MSGHOOK = 0x41a,
/*20171018 to latest
ëª¨ë“ˆì´ ë³€ì¡° ë˜ëŠ” ì†ìƒë˜ì—ˆê±°ë‚˜ ë²„ì „ì´ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Module has been modified or damaged or its version does not match.
*/
	MSG_SGP_CODE_NOT_EQUALENCRYPTEDDATA = 0x41b,
/*20171018 to latest
(íƒœêµ­)ê·€í•˜ëŠ” ê²Œìž„ë°© ê³¼ê¸ˆìœ¼ë¡œ ë¡œê·¸ì¸ í•˜ì…¨ìŠµë‹ˆë‹¤.
(Thailand) You have logged in game with PC cafe payment.
*/
	MSG_BILLING_PCB = 0x41c,
/*20171018 to latest
ì´ì „
Prev
*/
	MSG_PREV_PAGE = 0x41d,
/*20171018 to latest
ë‹¤ìŒ
Next
*/
	MSG_NEXT_PAGE = 0x41e,
/*20171018 to latest
ê²½ë§¤
Auction
*/
	MSG_AUCTION = 0x41f,
/*20171018 to latest
ë¬¼í’ˆë³´ê¸°
Product List
*/
	MSG_AUCTION_VIEW = 0x420,
/*20171018 to latest
ë“±ë¡í•˜ê¸°
Register
*/
	MSG_AUCTION_ADD = 0x421,
/*20171018 to latest
íŒë§¤ ì§„í–‰ìƒíƒœ
Sale Status
*/
	MSG_AUCTION_SELL = 0x422,
/*20171018 to latest
êµ¬ë§¤ ì§„í–‰ìƒíƒœ
Purchase Status
*/
	MSG_AUCTION_BUY = 0x423,
/*20171018 to latest
ì•„ì´í…œ
Item
*/
	MSG_ITEM2 = 0x424,
/*20171018 to latest
ì•„ì´í…œëª…
Name
*/
	MSG_ITEM_NAME2 = 0x425,
/*20171018 to latest
ê°€ê²© / ì¦‰ì‹œêµ¬ìž…ê°€ê²©
Current Bid / Max Bid
*/
	MSG_ITEM_PRICE = 0x426,
/*20171018 to latest
íŒë§¤ìž
Seller
*/
	MSG_SELLER = 0x427,
/*20171018 to latest
êµ¬ë§¤ìž
Buyer
*/
	MSG_BUYER = 0x428,
/*20171018 to latest
ì¢…ë£Œì‹œê°„
End Time
*/
	MSG_FINISH_TIME = 0x429,
/*20171018 to latest
%mì›” %dì¼ %Hì‹œ
%m %d %H
*/
	MSG_TIME_TYPE = 0x42a,
/*20171018 to latest
ì‹œê°„ì„¤ì •
Time (Hr)
*/
	MSG_SET_TIME = 0x42b,
/*20171018 to latest
ìˆ˜ìˆ˜ë£Œ
Fee
*/
	MSG_CHARGE = 0x42c,
/*20171018 to latest
ê²€ìƒ‰ëœ ì•„ì´í…œì´ ì—†ìŠµë‹ˆë‹¤.
No items found in search.
*/
	MSG_NOTHING_SEARCH_ITEM = 0x42d,
/*20171018 to latest
í˜„ìž¬ íŒë§¤ì¤‘ì¸ ì•„ì´í…œì´ ì—†ìŠµë‹ˆë‹¤.
Your Sale List is empty.
*/
	MSG_NOTHING_SEARCH_SELL_ITEM = 0x42e,
/*20171018 to latest
í˜„ìž¬ êµ¬ë§¤ì¤‘ì¸ ì•„ì´í…œì´ ì—†ìŠµë‹ˆë‹¤.
Your Purchase List is empty.
*/
	MSG_NOTHING_SEARCH_BUY_ITEM = 0x42f,
/*20171018 to latest
ê²½ë§¤ì •ë³´ê°€ ì •í™•í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Auction Information is incorrect or incomplete.
*/
	MSG_ERROR_AUCTION_ITEM_INFO = 0x430,
/*20171018 to latest
ê²½ë§¤ì— ë“±ë¡í•  ì•„ì´í…œ ì •ë³´ê°€ ì—†ìŠµë‹ˆë‹¤.
You must drag and drop an item from your Inventory into the Register Window to begin a new auction.
*/
	MSG_NOTHING_AUCTION_ITEM_INFO = 0x431,
/*20171018 to latest
ì´ë¯¸ ë“±ë¡ëœ ê²½ë§¤ìž…ë‹ˆë‹¤.
The auction has already been registered.
*/
	MSG_ERROR_ADD_AUCTION = 0x432,
/*20171018 to latest
ì œì‹œê°€ê²©
Starting Bid
*/
	MSG_PRICE = 0x433,
/*20171018 to latest
êµ¬ìž…í¬ë§ê°€ê²©
Current Bid
*/
	MSG_PRICE2 = 0x434,
/*20171018 to latest
ì¦‰ì‹œêµ¬ìž…ê°€ê²©
Buy Now Price
*/
	MSG_PRICE3 = 0x435,
/*20171018 to latest
í˜„ìž¬ì†Œì§€ì œë‹ˆ
Your Current Zeny
*/
	MSG_PRICE4 = 0x436,
/*20171018 to latest
í˜„ìž¬ìµœê³ ê°€ê²©
Highest Bid
*/
	MSG_PRICE5 = 0x437,
/*20171018 to latest
ì´ì „ìž…ì°°ê°€ê²©
Previous Bid
*/
	MSG_PRICE6 = 0x438,
/*20171018 to latest
ì¶”ê°€ìž…ì°°ê°€ê²©
Next Bid
*/
	MSG_PRICE7 = 0x439,
/*20171018 to latest
êµ¬ìž…í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Press buy to confirm.
*/
	MSG_BUY_ACTION_ITEM = 0x43a,
/*20171018 to latest
ì´ ê°€ê²©ì— íŒë§¤í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Would you like to sell this item?
*/
	MSG_SELL_ACTION_ITEM = 0x43b,
/*20171018 to latest
ìž…ì°°í•˜ê¸°
Place Bid
*/
	MSG_BUY_AUCTION = 0x43c,
/*20171018 to latest
ì¦‰ì‹œêµ¬ë§¤í•˜ê¸°
Buy Now
*/
	MSG_BUY_AUCTION2 = 0x43d,
/*20171018 to latest
ê²½ë§¤ì¢…ë£Œí•˜ê¸°
End the Auction
*/
	MSG_BUY_AUCTION3 = 0x43e,
/*20171018 to latest
ìž¬ìž…ì°°í•˜ê¸°
Place another Bid
*/
	MSG_FINISH_AUCTION = 0x43f,
/*20171018 to latest
í•´ë‹¹ ê²½ë§¤ì— ëŒ€í•œ ìž…ì°°ì´ ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
You have placed a bid.
*/
	MSG_RESULT_BUY_TRUE = 0x440,
/*20171018 to latest
í•´ë‹¹ ê²½ë§¤ì— ëŒ€í•œ ìž…ì°°ì´ ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
You have failed to place a bid.
*/
	MSG_RESULT_BUY_FALSE = 0x441,
/*20171018 to latest
ì œë‹ˆê°€ ì¶©ë¶„í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
You do not have enough zeny.
*/
	MSG_RESULT_BUY_FALSE_MONEY = 0x442,
/*20171018 to latest
ë°©ì–´êµ¬
Armors
*/
	MSG_EQUIP = 0x443,
/*20171018 to latest
ì¹´ë“œ
Card
*/
	MSG_CARD = 0x444,
/*20171018 to latest
ê¸°íƒ€
Other
*/
	MSG_ETC = 0x445,
/*20171018 to latest
ê²½ë§¤ë²ˆí˜¸
Bid
*/
	MSG_AUCTION_NUM = 0x446,
/*20171018 to latest
ê²€ìƒ‰
Search
*/
	MSG_AUCTION_SEARCH = 0x447,
/*20171018 to latest
í•´ë‹¹ ê²½ë§¤ë¥¼ ì¢…ë£Œí–ˆìŠµë‹ˆë‹¤.
You have ended the auction.
*/
	MSG_RESULT_MY_SELL_STOP_TRUE = 0x448,
/*20171018 to latest
í•´ë‹¹ ê²½ë§¤ë¥¼ ì¢…ë£Œ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot end the auction.
*/
	MSG_RESULT_MY_SELL_STOP_FALSE = 0x449,
/*20171018 to latest
ê²½ë§¤ ë²ˆí˜¸ê°€ ì •í™•í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Bid Number is incorrect.
*/
	MSG_RESULT_AUCTION_ID_FALSE = 0x44a,
/*20171018 to latest
ë°›ëŠ”ì´
To
*/
	MSG_SENDER = 0x44b,
/*20171018 to latest
ì œ ëª©
Title
*/
	MSG_TITLE2 = 0x44c,
/*20171018 to latest
ìƒˆ ë©”ì¼ì´ ë„ì°©í•˜ì˜€ìŠµë‹ˆë‹¤.
You have received a message in the mail.
*/
	MSG_NEW_MAIL = 0x44d,
/*20171018 to latest
ê²€ìƒ‰ì¤‘ìž…ë‹ˆë‹¤.
Searching...
*/
	MSG_SEARCHING_ITEM = 0x44e,
/*20171018 to latest
ë” ì´ìƒ ê²½ë§¤ ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ê²½ë§¤ ë“±ë¡ì€ ìµœëŒ€ 5ê°œê¹Œì§€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
You cannot register more than 5 items in an auction at a time.
*/
	MSG_AUCTION_ADD_OVER = 0x44f,
/*20171018 to latest
ë” ì´ìƒ ê²½ë§¤ ë¬¼í’ˆì— ìž…ì°°í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ê²½ë§¤ ë¬¼í’ˆ ìž…ì°°ì€ ìµœëŒ€ 5ê°œê¹Œì§€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
You cannot place more than 5 bids at a time.
*/
	MSG_RESULT_BUY_OVER = 0x450,
/*20171018 to latest
ì‚­ì œí•˜ë ¤ëŠ” ë©”ì¼ì— ìˆ˜ë ¹í•˜ì§€ ì•Šì€ ì•„ì´í…œì´ ìžˆìŠµë‹ˆë‹¤.
Please accept all items from your mail before deleting.
*/
	MSG_MAIL_DELETE_ERROR = 0x451,
/*20171018 to latest
ë©”ì¼ ì œëª©ì„ ìž…ë ¥í•˜ì—¬ ì£¼ì‹­ì‹œì˜¤.
Please enter a title.
*/
	MSG_MAIL_SEND_ERROR = 0x452,
/*20171018 to latest
/shopping : í´ë¦­ í•œë²ˆìœ¼ë¡œ ìƒì ì„ ì—´ê³  ìƒì ì´ë¦„ ì˜¤ë¥¸ìª½ í´ë¦­ìœ¼ë¡œ ìƒì ì„ ë‹«ìŠµë‹ˆë‹¤ On Off
/shopping: Enables you to open a shop with a single left-click and close your shop with a single right-click. On Off
*/
	MSG_EXPLAIN_SHOPPING = 0x453,
/*20171018 to latest
í´ë¦­ í•œë²ˆìœ¼ë¡œ ìƒì ì„ ì—´ê³  ìƒì ì´ë¦„ì„ ì˜¤ë¥¸ìª½ í´ë¦­í•´ì„œ ìƒì ì„ ë‹«ì„ìˆ˜ìžˆìŠµë‹ˆë‹¤. [/sh ON]
You can now open a shop with a single left-click and close your shop with a single right-click. [sh ON].
*/
	MSG_SHOPPING_ON = 0x454,
/*20171018 to latest
ë”ë¸”í´ë¦­ ìœ¼ë¡œ ìƒì ì„ ì—´ê²Œë©ë‹ˆë‹¤.  [/sh OFF]
You can open a shop by double-clicking. [/sh OFF]
*/
	MSG_SHOPPING_OFF = 0x455,
/*20171018 to latest
ë©”ì¼ì„ ë³´ë‚´ë ¤ë©´, ì œë‹ˆ ìž…ë ¥ì„ ì™„ë£Œí•´ì•¼ í•©ë‹ˆë‹¤.
Please enter zeny amount before sending mail.
*/
	MSG_MAIL_SEND_ERROR2 = 0x456,
/*20171018 to latest
ê²½ë§¤ ìˆ˜ìˆ˜ë£Œê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
You do not have enough zeny to pay the Auction Fee.
*/
	MSG_ADD_MONEY_FALSE = 0x457,
/*20171018 to latest
ìƒíƒœë³´ê¸°
View Status
*/
	MSG_HOMUN_SHOWINFO = 0x458,
/*20171018 to latest
ë¨¹ì´ì£¼ê¸°
Feed
*/
	MSG_HOMUN_FEEDING = 0x459,
/*20171018 to latest
ëŒ€ê¸°
Stand By
*/
	MSG_HOMUN_WAITING = 0x45a,
/*20171018 to latest
ìŠˆí¼ë…¸ë¹„ìŠ¤(ë‚¨)
Super Novice (Male)
*/
	MSG_JOB_SUPERNOVICE_M = 0x45b,
/*20171018 to latest
ìŠˆí¼ë…¸ë¹„ìŠ¤(ì—¬)
Super Novice (Female)
*/
	MSG_JOB_SUPERNOVICE_F = 0x45c,
/*20171018 to latest
íƒœê¶Œì†Œë…„
Taekwon Boy
*/
	MSG_JOB_TAEKWON_M = 0x45d,
/*20171018 to latest
íƒœê¶Œì†Œë…€
Taekwon Girl
*/
	MSG_JOB_TAEKWON_F = 0x45e,
/*20171018 to latest
ê¶Œì„±(ë‚¨)
Taekwon Master (Male)
*/
	MSG_KWONSUNG_M = 0x45f,
/*20171018 to latest
ê¶Œì„±(ì—¬)
Taekwon Master (Female)
*/
	MSG_KWONSUNG_F = 0x460,
/*20171018 to latest
ì†Œìš¸ë§ì»¤(ë‚¨)
Soul Linker (Male)
*/
	MSG_SOULLINGKER_M = 0x461,
/*20171018 to latest
ì†Œìš¸ë§ì»¤(ì—¬)
Soul Linker (Female)
*/
	MSG_SOULLINGKER_F = 0x462,
/*20171018 to latest
PCë°©ìš”ê¸ˆì œë¡œ 2ê°œì´ìƒì˜ ê³„ì •ì´ ì ‘ì†ë˜ê³ ìžˆìŠµë‹ˆë‹¤. í™•ì¸í›„ ë‹¤ì‹œ ì‚¬ìš©í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please check the connection, more than 2 accounts are connected with Internet Cafe Time Plan.
*/
	MSG_BAN_PC_IP_UNFAIR = 0x463,
/*20171018 to latest
ê·€í•˜ëŠ” ì›”ì •ì•¡ ìš”ê¸ˆì œ ì‚¬ìš©ìž ìž…ë‹ˆë‹¤. (ë‚¨ì€ê¸°ê°„ : %dì¼)
Your account is using monthly payment. (Remaining day: %d day)
*/
	MSG_BILLING_1 = 0x464,
/*20171018 to latest
ê·€í•˜ëŠ” ì •ëŸ‰ ìš”ê¸ˆì œ ì‚¬ìš©ìž ìž…ë‹ˆë‹¤. (ë‚¨ì€ì‹œê°„ : %dì‹œê°„ %ë¶„ %ì´ˆ)
Your account is using time limited. (Remaining time: %d hour %d minute %d second)
*/
	MSG_BILLING_2 = 0x465,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œì€ ë©”ì¼ì— ì²¨ë¶€ í• ìˆ˜ ì—†ëŠ” ì•„ì´í…œìž…ë‹ˆë‹¤.
This item cannot be mailed.
*/
	MSG_MAIL_ITEM_ADD_FAILED = 0x466,
/*20171018 to latest
ë”ì´ìƒ ì•„ì´í…œì„ ê°€ì§ˆìˆ˜ ì—†ìŠµë‹ˆë‹¤. ì•„ì´í…œì€ ë©”ì¼ë¡œ ë³´ê´€í•˜ê² ìŠµë‹ˆë‹¤.
You cannot accept any more items. Please try again later.
*/
	MSG_MAIL_ADD_ITEM_OVER_FAILURE = 0x467,
/*20171018 to latest
ë‚¨ì„±
Male
*/
	MSG_PTSEX1 = 0x468,
/*20171018 to latest
ì—¬ì„±
Female
*/
	MSG_PTSEX2 = 0x469,
/*20171018 to latest
ìƒˆë¡œìš´ ìœ ì €ìž…ë‹ˆë‹¤
New User.
*/
	MSG_PT_NEWUSER = 0x46a,
/*20171018 to latest
E-mailì€ ìºë¦­í„°ë¥¼ ì§€ìš¸ë•Œ í•„ìš”í•©ë‹ˆë‹¤.
E-mail address is required to delete a character.
*/
	MSG_PT_ACINFO = 0x46b,
/*20171018 to latest
ì •í™•í•œ í˜•ì‹ìœ¼ë¡œ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Please enter the correct information.
*/
	MSG_PT_ACINFO2 = 0x46c,
/*20171018 to latest
ì´ í‚¤ë¥¼ ì‚¬ìš©í•˜ì„¸ìš”
Please use this key.
*/
	MSG_PT_NEWKEYINFO = 0x46d,
/*20171018 to latest
ì •í™•í•œ ì¹´ë“œ íŒ¨ìŠ¤ì›Œë“œë¥¼ ë‹¤ì‹œ ìž…ë ¥í•´ì£¼ì„¸ìš”
Please enter the correct card password.
*/
	MSG_PT_FAIL_CARDPASS = 0x46e,
/*20171018 to latest
PTì •ë³´
PT Info
*/
	MSG_PTID1 = 0x46f,
/*20171018 to latest
PT_IDëŠ” %s
PT_ID is %s
*/
	MSG_PTID2 = 0x470,
/*20171018 to latest
NUM_IDëŠ” %s
NUM_ID is %s
*/
	MSG_PTID3 = 0x471,
/*20171018 to latest
ìžŠì§€ì•Šê²Œ ì£¼ì˜í•˜ì„¸ìš”
Please don't forget this information.
*/
	MSG_PTID4 = 0x472,
/*20171018 to latest
1001
*/
	MSG_PT_ERROR_1001 = 0x473,
/*20171018 to latest
1002
*/
	MSG_PT_ERROR_1002 = 0x474,
/*20171018 to latest
1003
*/
	MSG_PT_ERROR_1003 = 0x475,
/*20171018 to latest
1004
*/
	MSG_PT_ERROR_1004 = 0x476,
/*20171018 to latest
1006
*/
	MSG_PT_ERROR_1006 = 0x477,
/*20171018 to latest
1007
*/
	MSG_PT_ERROR_1007 = 0x478,
/*20171018 to latest
1008
*/
	MSG_PT_ERROR_1008 = 0x479,
/*20171018 to latest
1009
*/
	MSG_PT_ERROR_1009 = 0x47a,
/*20171018 to latest
1012
*/
	MSG_PT_ERROR_1012 = 0x47b,
/*20171018 to latest
1013
*/
	MSG_PT_ERROR_1013 = 0x47c,
/*20171018 to latest
1014
*/
	MSG_PT_ERROR_1014 = 0x47d,
/*20171018 to latest
1015
*/
	MSG_PT_ERROR_1015 = 0x47e,
/*20171018 to latest
1019
*/
	MSG_PT_ERROR_1019 = 0x47f,
/*20171018 to latest
1020
Navigation
*/
	MSG_PT_ERROR_1020 = 0x480,
/*20171018 to latest
1021
*/
	MSG_PT_ERROR_1021 = 0x481,
/*20171018 to latest
1023
*/
	MSG_PT_ERROR_1023 = 0x482,
/*20171018 to latest
1024
*/
	MSG_PT_ERROR_1024 = 0x483,
/*20171018 to latest
1025
*/
	MSG_PT_ERROR_1025 = 0x484,
/*20171018 to latest
1027
*/
	MSG_PT_ERROR_1027 = 0x485,
/*20171018 to latest
1028
*/
	MSG_PT_ERROR_1028 = 0x486,
/*20171018 to latest
10
*/
	MSG_PT_ERROR_10 = 0x487,
/*20171018 to latest
20
*/
	MSG_PT_ERROR_20 = 0x488,
/*20171018 to latest
40
*/
	MSG_PT_ERROR_40 = 0x489,
/*20171018 to latest
50
*/
	MSG_PT_ERROR_50 = 0x48a,
/*20171018 to latest
60
*/
	MSG_PT_ERROR_60 = 0x48b,
/*20171018 to latest
70
*/
	MSG_PT_ERROR_70 = 0x48c,
/*20171018 to latest
80
*/
	MSG_PT_ERROR_80 = 0x48d,
/*20171018 to latest
90
*/
	MSG_PT_ERROR_90 = 0x48e,
/*20171018 to latest
100
*/
	MSG_PT_ERROR_100 = 0x48f,
/*20171018 to latest
110
*/
	MSG_PT_ERROR_110 = 0x490,
/*20171018 to latest
30í¬ì¸íŠ¸ë¥¼ ë°›ìœ¼ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to receive 30 points?
*/
	MSG_PT_POINT1 = 0x491,
/*20171018 to latest
30í¬ì¸íŠ¸(5ì‹œê°„)ì´ ì¶©ì „ë˜ì—ˆìŠµë‹ˆë‹¤
30 points (5 hours) have been added.
*/
	MSG_PT_POINT2 = 0x492,
/*20171018 to latest
ê°ì •ë˜ì§€ ì•Šì€ ì•„ì´í…œì€ ê²½ë§¤ì— ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot register Unidentified Items in auctions.
*/
	MSG_AUCTION_ADD_ITEM_FAILURE = 0x493,
/*20171018 to latest
ì†Œë¹„ ì•„ì´í…œì€ ê²½ë§¤ì— ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot register this Consumable Item in an auction.
*/
	MSG_AUCTION_ADD_ITEM_FAILURE2 = 0x494,
/*20171018 to latest
ë©”ì¼ì°½ì„ ì—´ë ¤ë©´ ì¹´íŠ¸ì°½ì„ ë‹«ì•„ ì£¼ì‹­ì‹œìš”.
Please close the Cart Window to open the Mail Window.
*/
	MSG_CLOSE_MERCHANTITEMWND = 0x495,
/*20171018 to latest
ì¹´íŠ¸ì°½ì„ ì—´ë ¤ë©´ ë©”ì¼ì°½ì„ ë‹«ì•„ ì£¼ì‹­ì‹œìš”.
Please close the Mail Window to open the Cart Window.
*/
	MSG_CLOSE_MAILWND = 0x496,
/*20171018 to latest
íƒ„í™˜ì´ ìž¥ì°©ë˜ì—ˆìŠµë‹ˆë‹¤.
Bullets have been equipped.
*/
	MSG_MSG_BULLET_EQUIPMENT_SUCCESS = 0x497,
/*20171018 to latest
ë©”ì¼ì´ ë°˜ì†¡ë˜ì—ˆìŠµë‹ˆë‹¤.
The mail has been returned to sender.
*/
	MSG_MAIL_RETURN_SUCCESS = 0x498,
/*20171018 to latest
ë©”ì¼ì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The mail no longer exists.
*/
	MSG_MAIL_RETURN_FAILURE = 0x499,
/*20171018 to latest
í•œì‹œê°„ ë™ì•ˆ, ë™ì¼í•œ IPë¡œ ì ‘ì†í•œ ìœ ì €ê°€ 30ê±´ ì´ìƒìž…ë‹ˆë‹¤. í™•ì¸í›„ ë‹¤ì‹œ ì‚¬ìš©í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
More than 30 players sharing the same IP have logged into the game for an hour. Please check this matter.
*/
	MSG_BAN_PC_IP_COUNT_ALL = 0x49a,
/*20171018 to latest
í•œì‹œê°„ ë™ì•ˆ, ë™ì¼í•œ IPë¡œ 10ë²ˆ ì´ìƒ ì ‘ì†ë˜ì—ˆìŠµë‹ˆë‹¤. í™•ì¸í›„ ë‹¤ì‹œ ì‚¬ìš©í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
More than 10 connections sharing the same IP have logged into the game for an hour. Please check this matter.
*/
	MSG_BAN_PC_IP_COUNT = 0x49b,
/*20171018 to latest
ê²Œìž„ì„ ìž¬ì‹œìž‘ í•˜ì‹­ì‹œì˜¤ 
Please restart the game.
*/
	MSG_GAMEGUARD_RESTART = 0x49c,
/*20171018 to latest
ìš©ë³‘ì •ë³´ - ì•„ì³íƒ€ìž…
Mercenary: Archer
*/
	MSG_MER_INFO_TYPE_ARCHER = 0x49d,
/*20171018 to latest
ìš©ë³‘ì •ë³´ - ê²€ì‚¬íƒ€ìž…
Mercenary: Swordman
*/
	MSG_MER_INFO_TYPE_SWORDMAN = 0x49e,
/*20171018 to latest
ìš©ë³‘ì •ë³´ - ì°½ë³‘íƒ€ìž…
Mercenary: Spearman
*/
	MSG_MER_INFO_TYPE_LANCER = 0x49f,
/*20171018 to latest
ì‚­ì œì‹œê°„
Expiration
*/
	MSG_LEFT_TIME = 0x4a0,
/*20171018 to latest
ì‹ ë¢°ë„
Loyalty
*/
	MSG_MER_FRIENDLY = 0x4a1,
/*20171018 to latest
ì†Œí™˜íšŸìˆ˜
Summons
*/
	MSG_MER_CALLCOUNT = 0x4a2,
/*20171018 to latest
Kill
*/
	MSG_MER_KILL = 0x4a3,
/*20171018 to latest
íŽ«ì´ ë°°ê°€ ê³ íŒŒì„œ ë‹¹ì‹ ì„ ì›ë§í•˜ê³  ìžˆë‹¤ëŠ” ëŠë‚Œì´ ë“ ë‹¤.
You can feel hatred from your pet for neglecting to feed it.
*/
	MSG_PET_STARVING = 0x4a4,
/*20171018 to latest
[POINT] í…Œì´ë°ë¯¸ì…˜ ëž­í‚¹í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[POINT] You earned %d Taming Mission Ranking Points, giving you a total of %d points.
*/
	MSG_GANGSI_POINT = 0x4a5,
/*20171018 to latest
[í…Œì´ë°ë¯¸ì…˜] Target Monster : %s
[Taming Mission] Target Monster: %s
*/
	MSG_GANGSI_MISSION = 0x4a6,
/*20171018 to latest
/hunting : ì‚¬ëƒ¥ ëª©ë¡ì„ ë³´ì—¬ì¤ë‹ˆë‹¤.
/hunting: You can check the your hunting list.
*/
	MSG_EXPLAIN_HUNTING = 0x4a7,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] ì†Œë…€ì—ê²Œ ê°€ë¥´ì³ì£¼ì‹œì–´ìš”. %sëŠ” ëª‡ ìŠ¤í‚¬ ì°ìœ¼ì…¨ë‚˜ìš”?
[Angel's Question] Please tell me, how many %s skills do you have?
*/
	MSG_DEATH_Q01 = 0x4a8,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] ì†Œë…€ì—ê²Œ ê°€ë¥´ì³ì£¼ì‹œì–´ìš”. ì†Œì§€í•˜ì‹œê³ ìžˆëŠ” ì œë‹ˆë¥¼ ì‹­ë§Œìœ¼ë¡œ ë‚˜ëˆ„ë©´ ì–¼ë§ˆê°€ ë˜ì‹œë‚˜ìš”?
[Angel's Question] Please tell me, how much zeny you'll have if you divide it by 100,000?
*/
	MSG_DEATH_Q02 = 0x4a9,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] ì†Œë…€ì—ê²Œ ê°€ë¥´ì³ì£¼ì‹œì–´ìš”. ì˜¤ëŠ˜ì´ ëª‡ì¼ì´ì‹ ì§€ ì•„ì‹œë‚˜ìš”?
[Angel's Question] Please tell me, what is today's date?
*/
	MSG_DEATH_Q03 = 0x4aa,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] ì†Œë…€ì—ê²Œ ê°€ë¥´ì³ì£¼ì‹œì–´ìš”. %sì€ ì§€ê¸ˆ ëª‡ì´ì‹ ê°€ìš”?
[Angel's Question] Please tell me, how many %s do you have?
*/
	MSG_DEATH_Q04 = 0x4ab,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ìŠˆë…¸, íƒœê¶Œê³„ì—´, ë¬´ë‚™ê³„ì—´ì„ ë‹´ë‹¹í•˜ê³ ìžˆëŠ” SiYeonì”¨ì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in SiYeon's name?
*/
	MSG_DEATH_Q05 = 0x4ac,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ê·€ì—½ê³  ì–´ì—¬ìœ ë¼ê·¸ë‚˜ë¡œí¬ì˜ ížˆë¡œì¸ Munakì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in Munak's name?
*/
	MSG_DEATH_Q06 = 0x4ad,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ì œê°€ ì–´ì—¬ë»í•˜ëŠ” Bongunì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in Bongun's name?
*/
	MSG_DEATH_Q07 = 0x4ae,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ì €í¬ê°€ ì¡´ìž¬í•˜ëŠ” ì˜¨ë¼ì¸ì„¸ê³„ Ragnarokì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, Ragnarok?
*/
	MSG_DEATH_Q08 = 0x4af,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ì–¸ì œë‚˜ Onlineìƒíƒœì¸ ì²œì‚¬ë™ë£Œë“¤ì€ í°íž˜ì´ ë˜ì–´ì£¼ì£ . Onlineì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, online?
*/
	MSG_DEATH_Q09 = 0x4b0,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ì£½ìŒë„ ë‘ë ¤ì›Œí•˜ì§€ì•ŠëŠ” ê¸°ì‚¬ë“¤ì„ ìƒì§•í•˜ëŠ” ë‹¨ì–´ì¸ Deathì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, death?
*/
	MSG_DEATH_Q10 = 0x4b1,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ê¸°ì‚¬ë“¤ì€ ë„ˆë¬´ ë©‹ì§„ë‹¤ê³  ìƒê°í•´ìš”. Knightì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, knight?
*/
	MSG_DEATH_Q11 = 0x4b2,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ì¤‘ë ¥ì„ ëœ»í•˜ëŠ” ë‹¨ì–´ì¸ Gravityì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, gravity?
*/
	MSG_DEATH_Q12 = 0x4b3,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ì–´ë‘ ì†ì—ì„œë„ ë°ê²Œ ì‚¬ëŠ”ê²Œ ì¤‘ìš”í•˜ì§€ìš”. Darkì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, dark?
*/
	MSG_DEATH_Q13 = 0x4b4,
/*20171018 to latest
[ì²œì‚¬ì˜ì§ˆë¬¸] AëŠ” 1ì´ê³  ZëŠ” 26ì´ì–´ìš”. ë­ë“ ì§€ ìˆ˜ì§‘í•˜ëŠ” Collectorì˜ ì•ŒíŒŒë²³ì„ ë”í•˜ë©´ ëª‡ì´ ë˜ë‚˜ìš”?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, collecter?
*/
	MSG_DEATH_Q14 = 0x4b5,
/*20171018 to latest
[ì²œì‚¬ì˜ëŒ€ë‹µ] ì†Œë…€ì—ê²Œ ì •í™•í•œ ì‚¬ì‹¤ì„ ê°€ë¥´ì³ì£¼ì…”ì„œ ê°ì‚¬í•˜ì˜µë‹ˆë‹¤.
[Angel's Answer] Thank you for letting me know~
*/
	MSG_DEATH_R01 = 0x4b6,
/*20171018 to latest
[ì²œì‚¬ì˜ëŒ€ë‹µ] ì‚¬ëž‘ìŠ¤ëŸ¬ìš°ì‹  ë¶„ì´ì‹œêµ°ìš”. ì†Œë…€ ê°íƒ„í–ˆì‚¬ì˜µë‹ˆë‹¤.
[Angel's Answer] I'm very pleased with your answer. You are a splendid adventurer.
*/
	MSG_DEATH_R02 = 0x4b7,
/*20171018 to latest
[ì²œì‚¬ì˜ëŒ€ë‹µ] ì†Œë…€ ì‹¤ë§í–ˆì‚¬ì˜µë‹ˆë‹¤.
[Angel's Answer] You've disappointed me...
*/
	MSG_DEATH_R05 = 0x4b8,
/*20171018 to latest
[POINT] ëž­í‚¹í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[Point] You earned %d Ranking Points, giving you a total of %d Ranking Points.
*/
	MSG_DEATH_POINT = 0x4b9,
/*20171018 to latest
[%s]ì˜ ì†Œì§€ ìºì‹œ : %d ìºì‹œ
[%s]'s Points: %d Points
*/
	MSG_POINT_SHOP = 0x4ba,
/*20171018 to latest
ì„ íƒí•˜ì§€ ì•Šì€ ìºë¦­í„°ëŠ” ì‚­ì œ ë©ë‹ˆë‹¤. ì™„ë£Œí•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Unselected Characters will be deleted. Continue?
*/
	MSG_CONFIRM_SELECT_CHARACTERS = 0x4bb,
/*20171018 to latest
9ê°œ ì´ìƒ ì„ íƒí•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot select more than 8.
*/
	MSG_ERROR_SELECT_CHARACTERS = 0x4bc,
/*20171018 to latest
ìºë¦­í„°ëª…ì„ '%s' (ìœ¼)ë¡œ ë³€ê²½í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to change your name to '%s'?
*/
	MSG_CONFIRM_TO_CHANGE_NAME = 0x4bd,
/*20171018 to latest
ìºë¦­í„°ëª…ì´ ì„±ê³µì ìœ¼ë¡œ ë³€ê²½ë˜ì—ˆìŠµë‹ˆë‹¤.
Character Name has been changed successfully.
*/
	MSG_CHANGE_NAME_SUCCESS = 0x4be,
/*20171018 to latest
ìºë¦­í„°ëª… ë³€ê²½ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
You have failed to change this character's name.
*/
	MSG_CHANGE_NAME_FAILURE = 0x4bf,
/*20171018 to latest
í•œ ë²ˆì— í•œ ì¢…ë¥˜ì˜ ì•„ì´í…œë§Œ êµ¬ë§¤í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
You can purchase only one kind of item at a time.
*/
	MSG_CAN_BUY_ONLY_ONEITEM = 0x4c0,
/*20171018 to latest
ìºë¦­í„°ê°€ í•œê°œë„ ì„ íƒë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.  ë°˜ë“œì‹œ í•œê°œ ì´ìƒì˜ ìºë¦­í„°ë¥¼ ì„ íƒí•˜ì—¬ì•¼ í•©ë‹ˆë‹¤.
No characters were selected. You must select at least one character.
*/
	MSG_NO_SELECT_CHARACTERS = 0x4c1,
/*20171018 to latest
ì´ë¯¸ ìºë¦­í„°ëª…ì„ ë³€ê²½í•œ ì ì´ ìžˆìŠµë‹ˆë‹¤. ë” ì´ìƒ ë³€ê²½ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
This character's name has already been changed. You cannot change a character's name more than once.
*/
	MSG_ALREADY_CHANGED_NAME = 0x4c2,
/*20171018 to latest
ì‚¬ìš©ìž ì •ë³´ê°€ ì •í™•í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
User Information is not correct.
*/
	MSG_NOTREGISTED_USER = 0x4c3,
/*20171018 to latest
ë‹¤ë¥¸ ì‚¬ìš©ìžê°€ ê°™ì€ ìºë¦­í„° ëª…ì„ ë¨¼ì € ì‚¬ìš©í•˜ì˜€ìŠµë‹ˆë‹¤. ë‹¤ë¥¸ ìºë¦­í„°ëª…ì„ ì‚¬ìš©í•˜ì—¬ ì£¼ì‹­ì‹œìš”.
Another user is using this character name, so please select another one.
*/
	MSG_DUPLICATED_CHAR_NAME = 0x4c4,
/*20171018 to latest
íŒŒí‹°ìž¥ ê¶Œí•œì´ ì—†ì–´ íŒŒí‹°ì›ì„ ì†Œí™˜í•˜ì§€ ëª»í–ˆìŠµë‹ˆë‹¤.
The party member was not summoned because you are not the party leader.
*/
	MSG_CANNOT_PARTYCALL = 0x4c5,
/*20171018 to latest
í˜„ìž¬ ë§µì—ëŠ” ì†Œí™˜ë  íŒŒí‹°ì›ì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
There is no party member to summon in the current map.
*/
	MSG_NO_PARTYMEM_ON_THISMAP = 0x4c6,
/*20171018 to latest
ì´ ì§€ì—­ì—ì„  ë³´ìŠ¤ëª¬ìŠ¤í„°ì˜ í”ì ì„ ì°¾ì„ ìˆ˜ê°€ ì—†ìŠµë‹ˆë‹¤.
You cannot find any trace of a Boss Monster in this area.
*/
	MSG_NOTFIND_BOSSMON = 0x4c7,
/*20171018 to latest
ë³´ìŠ¤ ëª¬ìŠ¤í„° '%s'(ì´)ê°€  %dì‹œê°„ %dë¶„ í›„ì— ë“±ìž¥í•©ë‹ˆë‹¤.
Boss Monster, '%s' will appear in %02d hour(s) and %02d minute(s).
*/
	MSG_APPEARANCE_TIME_OF_BOSSMON = 0x4c8,
/*20171018 to latest
ë³´ìŠ¤ ëª¬ìŠ¤í„° '%s'ì˜ ìœ„ì¹˜ê°€ ë¯¸ë‹ˆë§µì— í‘œì‹œë©ë‹ˆë‹¤.
The location of Boss Monster, '%s', will be displayed on your Mini-Map.
*/
	MSG_SHOW_POSITION_OF_BOSSMON = 0x4c9,
/*20171018 to latest
'%s'ë¥¼ ê°œë´‰ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?  ^ff0000ìƒìžë¥¼ ê°œë´‰í•˜ì‹œë©´ ì²­ì•½ ì² íšŒ ëŒ€ìƒì—ì„œ ì œì™¸ ë©ë‹ˆë‹¤.^000000 í•œë²ˆ ê°œë´‰ ëœ ì•„ì´í…œì€ ì°½ê³  ì €ìž¥ ì™¸ì˜ ë‹¤ë¥¸ ì´ë™ì€ ë¶ˆê°€í•˜ë©° ìž„ëŒ€ ì•„ì´í…œì€ ì°½ê³  ì €ìž¥ë„ ë¶ˆê°€í•©ë‹ˆë‹¤. í•œì • ì•„ì´í…œì€ ê±°ëž˜ ë° ì´ë™ì´ ê°€ëŠ¥ í•©ë‹ˆë‹¤. ë™ì¼í•œ ì•„ì´í…œì„ ì¤‘ë³µ ì‚¬ìš©í•˜ë”ë¼ë„ íš¨ê³¼ê°€ ì¤‘ì²©ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Do you want to open '%s'? Once opened, the contents cannot be moved to other locations aside from the Kafra Storage. The item effect isn't doubled, even if the same items are used more than once.
*/
	MSG_CONFIRM_TO_OPEN_CASH_ITEM = 0x4ca,
/*20171018 to latest
NPCê°€ ì¡´ìž¬í•˜ì§€ ì•Šì•„ êµ¬ë§¤ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
The Purchase has failed because the NPC does not exist.
*/
	MSG_BUY_CASH_FAIL_NPC = 0x4cb,
/*20171018 to latest
ë¶€ë¶„ ìœ ë£Œí™” ì‹œìŠ¤í…œì´ ì •ìƒ ìž‘ë™í•˜ì§€ ì•Šì•„ êµ¬ë§¤ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
The Purchase has failed because the Kafra Shop System is not working correctly.
*/
	MSG_BUY_CASH_FAIL_SYSTEM = 0x4cc,
/*20171018 to latest
êµí™˜ì¤‘ì—ëŠ” ì•„ì´í…œì„ êµ¬ë§¤ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot purchase items while you are in a trade.
*/
	MSG_BUY_CASH_FAIL_EXCHANGE = 0x4cd,
/*20171018 to latest
ì•„ì´í…œ ì •ë³´ê°€ ì •í™•í•˜ì§€ ì•Šì•„ êµ¬ë§¤ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
The Purchase has failed because the Item Information was incorrect.
*/
	MSG_BUY_CASH_FAIL_ITEM_ID = 0x4ce,
/*20171018 to latest
 STRì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
STR has increased.
*/
	MSG_ENST_STR = 0x4cf,
/*20171018 to latest
 STRì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
STR has returned to normal.
*/
	MSG_DSST_STR = 0x4d0,
/*20171018 to latest
 AGIì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
AGI has increased.
*/
	MSG_ENST_AGI = 0x4d1,
/*20171018 to latest
 AGIì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
AGI has returned to normal.
*/
	MSG_DSST_AGI = 0x4d2,
/*20171018 to latest
 VITì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
VIT has increased.
*/
	MSG_ENST_VIT = 0x4d3,
/*20171018 to latest
 VITì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
VIT has returned to normal.
*/
	MSG_DSST_VIT = 0x4d4,
/*20171018 to latest
 INTì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
INT has increased.
*/
	MSG_ENST_INT = 0x4d5,
/*20171018 to latest
 INTì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
INT has returned to normal.
*/
	MSG_DSST_INT = 0x4d6,
/*20171018 to latest
 DEXì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
DEX has increased.
*/
	MSG_ENST_DEX = 0x4d7,
/*20171018 to latest
 DEXì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
DEX has returned to normal.
*/
	MSG_DSST_DEX = 0x4d8,
/*20171018 to latest
 LUKì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
LUK has increased.
*/
	MSG_ENST_LUK = 0x4d9,
/*20171018 to latest
 LUKì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
LUK has returned to normal.
*/
	MSG_DSST_LUK = 0x4da,
/*20171018 to latest
 íšŒí”¼ìœ¨ì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
Flee Rate (Flee) has increased.
*/
	MSG_ENST_AVOIDANCE = 0x4db,
/*20171018 to latest
 íšŒí”¼ìœ¨ì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
Flee Rate has returned to normal.
*/
	MSG_DSST_AVOIDANCE = 0x4dc,
/*20171018 to latest
 ëª…ì¤‘ë¥ ì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
Accuracy Rate (Hit) has increased.
*/
	MSG_ENST_HIT = 0x4dd,
/*20171018 to latest
 ëª…ì¤‘ë¥ ì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
Accuracy Rate has returned to normal.
*/
	MSG_DSST_HIT = 0x4de,
/*20171018 to latest
 í¬ë¦¬í‹°ì»¬ í™•ë¥ ì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
Critical Attack (Critical) has increased.
*/
	MSG_ENST_CRITICALSUCCESSVALUE = 0x4df,
/*20171018 to latest
 í¬ë¦¬í‹°ì»¬ í™•ë¥ ì´ ì›ëž˜ëŒ€ë¡œ ëŒì•„ì™”ìŠµë‹ˆë‹¤.
Critical Attack has returned to normal.
*/
	MSG_DSST_CRITICALSUCCESSVALUE = 0x4e0,
/*20171018 to latest
 30ë¶„ê°„ ì–»ì„ ìˆ˜ ìžˆëŠ” ê²½í—˜ì¹˜ê°€ 50%% ì¦ê°€í•©ë‹ˆë‹¤.
You will receive 1.5 times more EXP from hunting monsters for the next 30 minutes.
*/
	MSG_PLUSEXP = 0x4e1,
/*20171018 to latest
 30ë¶„ë‚´ ì‚¬ë§ì‹œ 1íšŒì— í•œí•´ ê²½í—˜ì¹˜ ê°ì†Œê°€ ì¼ì–´ë‚˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
This character will not receive any EXP penalty if killed within the next 30 minutes.
*/
	MSG_DDEATHPENALTY = 0x4e2,
/*20171018 to latest
 ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” ê¸°ë³¸ ì•„ì´í…œì˜ ë“œë¡­ë¥ ì´ 30ë¶„ê°„ 2ë°°ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
Regular item drops from monsters will be doubled for the next 30 minutes.
*/
	MSG_RECEIVEITEM = 0x4e3,
/*20171018 to latest
 10ë¶„ê°„ ë§µ ë‚´ì— ì¶œí˜„ ê°€ëŠ¥í•œ ë³´ìŠ¤ ëª¬ìŠ¤í„°ì— ëŒ€í•œ ì •ë³´ë¥¼ ì•ˆë‚´í•´ ë“œë¦½ë‹ˆë‹¤.
Boss Monster Map Information for the next 10 minutes.
*/
	MSG_BOSS_ALARM = 0x4e4,
/*20171018 to latest
 ^ff0000ë³¸ ì•„ì´í…œì„ êµ¬ë§¤ í›„ 7ì¼ ì´ë‚´ì—ëŠ” ì²­ì•½ ì² íšŒê°€ ê°€ëŠ¥í•©ë‹ˆë‹¤. ë‹¤ë§Œ, 7ì¼ì´ ì§€ë‚¬ê±°ë‚˜ ì•„ì´í…œì„ ê°œë´‰í•˜ì‹œë©´ ì²­ì•½ ì² íšŒ ëŒ€ìƒì—ì„œ ì œì™¸ ë©ë‹ˆë‹¤.ë˜í•œ êµ¬ë§¤ì‹œ ì‚¬ìš©ëœ ë¬´ë£Œìºì‹œëŠ” ì²­ì•½ì² íšŒì‹œ ë°˜í™˜ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.^000000 ì •ë§ë¡œ ì•„ì´í…œì„ êµ¬ë§¤í•˜ì‹œê² ìŠµë‹ˆê¹Œ? êµ¬ë§¤í•˜ì‹¤ ê²½ìš° %dìºì‹œê°€ ì°¨ê°ë©ë‹ˆë‹¤.
Do you really want to purchase this item? %d points will be deducted from your total Kafra Credit Points.
*/
	MSG_BUY_RECONFIRM = 0x4e5,
/*20171018 to latest
 ìºì‹œê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
 You do not have enough Kafra Credit Points.
*/
	MSG_BUY_CASH_FAIL_MONEY = 0x4e6,
/*20171018 to latest
 ^ff0000íŒŒê¸°ì¼ì‹œ: %s^000000
 ^ff0000Expiration Date: %s^000000
*/
	MSG_NOTICE_TO_DELETE_TIME = 0x4e7,
/*20171018 to latest
 '%s'ì•„ì´í…œì˜ ì‚¬ìš©ì‹œê°„ì´ %dë¶„ ë‚¨ì•˜ìŠµë‹ˆë‹¤.
 The '%s' item will disappear in %d minutes.
*/
	MSG_NOTICE_TO_REMAIN_ITEMUSINGTIME = 0x4e8,
/*20171018 to latest
 1ë¶„ í›„, '%s'ì•„ì´í…œì´ ì¸ë²¤í† ë¦¬ì—ì„œ ì‚­ì œë©ë‹ˆë‹¤.
 '%s' item will be deleted from the Inventory in 1 minute.
*/
	MSG_LAST_NOTICE_TO_REMAIN_ITEMUSINGTIME = 0x4e9,
/*20171018 to latest
 '%s'ì•„ì´í…œì´ ì¸ë²¤í† ë¦¬ì—ì„œ ì‚­ì œë˜ì—ˆìŠµë‹ˆë‹¤.
  '%s' item has been deleted from the Inventory.
*/
	MSG_NOTICE_TO_DELETE_ITEM = 0x4ea,
/*20171018 to latest
Input Number
*/
	MSG_INPUT_NUMBER = 0x4eb,
/*20171018 to latest
%mì›” %dì¼ %Hì‹œ %Më¶„
%m/%d %H:%M
*/
	MSG_TIME_TYPE2 = 0x4ec,
/*20171018 to latest
ë³´ìŠ¤ ëª¬ìŠ¤í„° '%s'(ì´)ê°€ ìž ì‹œ í›„ì— ë“±ìž¥í•©ë‹ˆë‹¤.
Boss Monster '%s' will appear within 1 minute.
*/
	MSG_APPEARANCE_TIME_OF_BOSSMON2 = 0x4ed,
/*20171018 to latest
ìš©ë³‘ ìŠ¤í‚¬ëª©ë¡
Mercenary Soldier Skill List
*/
	MSG_MER_SKILLLIST = 0x4ee,
/*20171018 to latest
ë¸”ëž™ì ¬ìŠ¤í†¤ 1ê°œì™€ ë°±ë§Œì œë‹ˆë¥¼ ì†Œëª¨í•˜ëŠ” ë§ˆë²•ì˜ ì‹¤í–‰ì— ë™ì˜í•©ë‹ˆê¹Œ?
Do you agree to cast the magic spell that consumes 1 Black Gemstone and 1,000,000 Zeny?
*/
	MSG_DA_EXP_ACCEPT = 0x4ef,
/*20171018 to latest
[POINT] ì½œë ‰í„°ëž­í‚¹ í¬ì¸íŠ¸ê°€ %d ìƒìŠ¹í•´ì„œ %d í¬ì¸íŠ¸ê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
[Point] You have gained %d Collector Rank Points; you now have a total of %d Collector Rank Points.
*/
	MSG_COLLECTOR_POINT = 0x4f0,
/*20171018 to latest
[ì½œë ‰í„°ëž­í‚¹] Target Item : %s
[Collector Rank] Target Item: %s
*/
	MSG_COLLECTOR_MISSION = 0x4f1,
/*20171018 to latest
ìš©ë³‘ ì‚¬ìš©ì‹œê°„ì´ ë§Œë£Œë˜ì—ˆìŠµë‹ˆë‹¤.
The mercenary contract has expired.
*/
	MSG_MER_FINISH = 0x4f2,
/*20171018 to latest
ìš©ë³‘ì´ ì‚¬ë§í•˜ì˜€ìŠµë‹ˆë‹¤.
The mercenary has died.
*/
	MSG_MER_DIE = 0x4f3,
/*20171018 to latest
ìš©ë³‘ì´ í•´ê³ ë˜ì—ˆìŠµë‹ˆë‹¤.
You have released the mercenary.
*/
	MSG_MER_RETIRE = 0x4f4,
/*20171018 to latest
ìš©ë³‘ì´ ë„ë§ê°”ìŠµë‹ˆë‹¤.
The mercenary has run away.
*/
	MSG_MER_RUNAWAY = 0x4f5,
/*20171018 to latest
 '%s'ì•„ì´í…œì˜ ì‚¬ìš©ì‹œê°„ì´ %dì´ˆ ë‚¨ì•˜ìŠµë‹ˆë‹¤.
 The '%s' item will disappear in %d seconds.
*/
	MSG_NOTICE_TO_REMAIN_ITEMUSINGTIME2 = 0x4f6,
/*20171018 to latest
PCë°© í”„ë¦¬ë¯¸ì—„ ì„œë¹„ìŠ¤ : ê²½í—˜ì¹˜ %d%% ì¦ê°€, ì‚¬ë§ íŽ˜ë„í‹° %d%% ê°ì†Œ, ë“œë¡­ìœ¨ %d%% ì¦ê°€
IP Bonus: EXP/JEXP %d%%, Death Penalty %d%%, Item Drop %d%%
*/
	MSG_PCBANG_EVENT = 0x4f7,
/*20171018 to latest
24ì‹œê°„ ì´í›„ì— ì‹œë„í•˜ì„¸ìš”
Symbols in Character Names are forbidden.
*/
	MSG_LIMIT_CHAR_DELETE = 0x4f8,
/*20171018 to latest
ìš©ë³‘ì´ ì‚¬ìš©ìž ì¸ê³µì§€ëŠ¥ìœ¼ë¡œ ë™ìž‘í•©ë‹ˆë‹¤.
Mercenary will follow custom AI.
*/
	MSG_MER_USERAI_ON = 0x4f9,
/*20171018 to latest
ìš©ë³‘ì´ ê¸°ë³¸ ì¸ê³µì§€ëŠ¥ìœ¼ë¡œ ë™ìž‘í•©ë‹ˆë‹¤.
Mercenary will follow basic AI.
*/
	MSG_MER_USERAI_OFF = 0x4fa,
/*20171018 to latest
 %së‹˜ì˜
 %s's
*/
	MSG_CHARACTER_NAME = 0x4fb,
/*20171018 to latest
%së‹˜ì´ %s ì•„ì´í…œì„ íšë“í•˜ì…¨ìŠµë‹ˆë‹¤.
%s has acquired %s.
*/
	MSG_ITEM_PICKUP_PARTY = 0x4fc,
/*20171018 to latest
ê³µê°œ ì±„íŒ… ë©”ì‹œì§€ í‘œì‹œ
Public Chat Display
*/
	MSG_VIEW_CHAT_MSG = 0x4fd,
/*20171018 to latest
ê·“ì†ë§ ì±„íŒ… ë©”ì‹œì§€ í‘œì‹œ
Whisper Display
*/
	MSG_VIEW_WHISPER_MSG = 0x4fe,
/*20171018 to latest
íŒŒí‹° ì±„íŒ… ë©”ì‹œì§€ í‘œì‹œ
Party Chat Display
*/
	MSG_VIEW_PARTY_MSG = 0x4ff,
/*20171018 to latest
ê¸¸ë“œ ì±„íŒ… ë©”ì‹œì§€ í‘œì‹œ
Guild Chat Display
*/
	MSG_VIEW_GUILD_MSG = 0x500,
/*20171018 to latest
ì•„ì´í…œ íšë“/ë“œë¡­ ë©”ì‹œì§€ í‘œì‹œ
Item Get/Drop Message Display
*/
	MSG_VIEW_GET_ITEM_MSG = 0x501,
/*20171018 to latest
ìž¥ë¹„ ìž¥ì°©/í•´ì œ ë©”ì‹œì§€ í‘œì‹œ
Equipment On/Off Message Display
*/
	MSG_VIEW_EQUIP_MSG = 0x502,
/*20171018 to latest
ìƒíƒœì´ìƒ ë©”ì‹œì§€ í‘œì‹œ
Abnormal Status Message Display
*/
	MSG_VIEW_CHANGE_STATUS_MSG = 0x503,
/*20171018 to latest
íŒŒí‹°ì›ì˜ ì£¼ìš” ì•„ì´í…œ íšë“ ë©”ì‹œì§€ í‘œì‹œ
Party Member's Obtained Item Message Display
*/
	MSG_VIEW_GET_ITEM_PARTY_MSG = 0x504,
/*20171018 to latest
íŒŒí‹°ì›ì˜ ìƒíƒœì´ìƒ ë©”ì‹œì§€ í‘œì‹œ
Party Member's Abnormal Status Message Display
*/
	MSG_VIEW_CHANGE_STATUS_PARTY_MSG = 0x505,
/*20171018 to latest
ìŠ¤í‚¬ ì‚¬ìš© ì‹¤íŒ¨ ë©”ì‹œì§€ í‘œì‹œ
Skill Failure Message Display
*/
	MSG_VIEW_FAIL_SKILL_MSG = 0x506,
/*20171018 to latest
íŒŒí‹° ì„¤ì • ë©”ì‹œì§€ í‘œì‹œ
Party Configuration Message Display
*/
	MSG_VIEW_PARTY_SETUP_MSG = 0x507,
/*20171018 to latest
ìž¥ë¹„ ì†ìƒ ë©”ì‹œì§€ í‘œì‹œ
Damaged Equipment Message Display
*/
	MSG_VIEW_DAMAGED_EQUIP_MSG = 0x508,
/*20171018 to latest
ë°°í‹€ ë©”ì‹œì§€ ì°½ í‘œì‹œ ì •ë³´
Battle Message Window Display
*/
	MSG_BATTLE_CHAT_WND_OPTION = 0x509,
/*20171018 to latest
[%s]ì˜ ì†Œì§€ í•œì½”ì¸ : %d í•œì½”ì¸
[%s]'s Han Coin: %d Han Coin
*/
	MSG_POINT_SHOP_NHN = 0x50a,
/*20171018 to latest
ì¼ë°˜ ë©”ì‹œì§€
Public Log
*/
	MSG_ST_CHAT = 0x50b,
/*20171018 to latest
ë°°í‹€ ë©”ì‹œì§€
Battle Log
*/
	MSG_BT_CHAT = 0x50c,
/*20171018 to latest
íœ´ëŒ€í° ì¸ì¦.
Mobile Authentication
*/
	MSG_PHONE_CONFIRM = 0x50d,
/*20171018 to latest
ì½ê¸°
Read
*/
	MSG_BOOK_READ = 0x50e,
/*20171018 to latest
ìžë™ë‚­ë…
Auto Read
*/
	MSG_BOOK_AUTOREAD = 0x50f,
/*20171018 to latest
ì±…ê°ˆí”¼
Bookmark
*/
	MSG_BOOK_KEEP = 0x510,
/*20171018 to latest
ì´ì „íŽ˜ì´ì§€
Previous
*/
	MSG_BOOK_PREV = 0x511,
/*20171018 to latest
ë‹¤ìŒíŽ˜ì´ì§€
Next
*/
	MSG_BOOK_NEXT = 0x512,
/*20171018 to latest
ë‹«ê¸°
Close
*/
	MSG_BOOK_CLOSE = 0x513,
/*20171018 to latest
%s ìž¥ë¹„ê°€ ì†ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
%s's Equipment has been damaged.
*/
	MSG_DAMAGED_EQUIP = 0x514,
/*20171018 to latest
%së‹˜ì˜ %s ì†ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
%s's %s was damaged.
*/
	MSG_DAMAGED_EQUIP_PARTY = 0x515,
/*20171018 to latest
ë¬´ê¸°ê°€
Weapon
*/
	MSG_DAMAGED_WEAPON = 0x516,
/*20171018 to latest
ê°‘ì˜·ì´
Armor
*/
	MSG_DAMAGED_BODY = 0x517,
/*20171018 to latest
ìŠ¤í‚¬ë ˆë²¨ì´ ë¶€ì¡±í•©ë‹ˆë‹¤. íŒŒí‹°ê°€ìž… ë¶ˆëŠ¥
Insufficient Skill Level for joining a Party
*/
	MSG_NOT_ENOUGH_SKILLLEVE5_2 = 0x518,
/*20171018 to latest
[%s]ì˜ ë¬´ë£Œ ìºì‹œ : %d ìºì‹œ
[%s]'s Free Cash: %d Cash
*/
	MSG_POINT_SHOP2 = 0x519,
/*20171018 to latest
ë¬´ë£Œ ìºì‹œ ì‚¬ìš© : 
Use Free Cash: 
*/
	MSG_USE_FREE_POINT = 0x51a,
/*20171018 to latest
ìºì‹œ
Cash
*/
	MSG_CASH = 0x51b,
/*20171018 to latest
http://payment.ro.hangame.com/index.asp
*/
	MSG_SETTLE_WEB_URL_HANGAME = 0x51c,
/*20171018 to latest
ê·¸ë¼ë¹„í‹° íšŒì› ì •ë³´ë™ì˜ë¥¼ í•˜ì…”ì•¼ ì‚¬ìš©í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
You need to accept the Privacy Policy from Gravity in order to use the service.
*/
	MSG_BAN_GRAVITY_MEM_AGREE = 0x51d,
/*20171018 to latest
ì´ìš©ì•½ê´€ì— ë™ì˜ë¥¼ í•˜ì…”ì•¼ ë³¸ ì„œë¹„ìŠ¤ë¥¼ ì´ìš©í•˜ì‹¤ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
You need to accept the User Agreement in order to use the service.
*/
	MSG_BAN_GAME_MEM_AGREE = 0x51e,
/*20171018 to latest
ìž…ë ¥í•˜ì‹  ì•„ì´ë””ì™€ ë¹„ë°€ë²ˆí˜¸ê°€ ë“±ë¡ëœ ì •ë³´ì™€ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Incorrect or nonexistent ID.
*/
	MSG_BAN_HAN_VALID = 0x51f,
/*20171018 to latest
 ^ff0000ë³¸ ì•„ì´í…œì„ êµ¬ë§¤ í›„ 7ì¼ ì´ë‚´ì—ëŠ” ì²­ì•½ ì² íšŒê°€ ê°€ëŠ¥í•©ë‹ˆë‹¤. ë‹¤ë§Œ, 7ì¼ì´ ì§€ë‚¬ê±°ë‚˜ ì•„ì´í…œì„ ê°œë´‰í•˜ì‹œë©´ ì²­ì•½ ì² íšŒ ëŒ€ìƒì—ì„œ ì œì™¸ ë©ë‹ˆë‹¤.ë˜í•œ êµ¬ë§¤ì‹œ ì‚¬ìš©ëœ ë¬´ë£Œìºì‹œëŠ” ì²­ì•½ì² íšŒì‹œ ë°˜í™˜ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.^000000 ì •ë§ë¡œ ì•„ì´í…œì„ êµ¬ë§¤í•˜ì‹œê² ìŠµë‹ˆê¹Œ? êµ¬ë§¤í•˜ì‹¤ ê²½ìš° ì¼ë°˜ %dìºì‹œ, ë¬´ë£Œ %dìºì‹œê°€ ì°¨ê°ë©ë‹ˆë‹¤.
Do you really want to purchase these items? You will spend %d Regular Cash Points and %d Free Cash Points.
*/
	MSG_BUY_RECONFIRM2 = 0x520,
/*20171018 to latest
%dì‹œê°„ì´ ê²½ê³¼í•˜ì˜€ìŠµë‹ˆë‹¤.
%d hour(s) has passed.
*/
	MSG_NOTIFY_PLAYTIME1 = 0x521,
/*20171018 to latest
%dì‹œê°„ %dë¶„ì´ ê²½ê³¼í•˜ì˜€ìŠµë‹ˆë‹¤.
%d hour(s) %d minute(s) has passed.
*/
	MSG_NOTIFY_PLAYTIME2 = 0x522,
/*20171018 to latest
ê²Œìž„ì„ ì¢…ë£Œí•˜ì„¸ìš”, ê²½í—˜ì¹˜ ë° ëª¨ë“ ê²Œ 50%ë¡œ ì¡°ì •ë©ë‹ˆë‹¤
Please stop playing the game, and take a break. Exp and other features will be reduced to 50%.
*/
	MSG_WARNING_MSG1 = 0x523,
/*20171018 to latest
ë¶ˆê±´ì „ ì‹œê°„ëŒ€ì— ì ‘ì–´ë“¤ì—ˆìŠµë‹ˆë‹¤. ê²Œìž„ì„ ì¢…ë£Œí•˜ì„¸ìš”, ê²½í—˜ì¹˜ ë° ëª¨ë“ ê²Œ 0%ë¡œ ì¡°ì •ë©ë‹ˆë‹¤
Please stop playing the game since you'll need to rest. Exp and other features will be fixed to 0%.
*/
	MSG_WARNING_MSG2 = 0x524,
/*20171018 to latest
í€˜ìŠ¤íŠ¸ ëª©ë¡
Quest List
*/
	MSG_QUESTWIN = 0x525,
/*20171018 to latest
RO SHOP
RO Shop
*/
	MSG_RO_SHOP = 0x526,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s'ì˜ ì˜ˆì•½ì´ ì•Œìˆ˜ì—†ëŠ” ì´ìœ ë¡œ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Memorial Dungeon, '%s' is booked.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_UNKNOWN = 0x527,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s'ì˜ ì˜ˆì•½ì´ ì˜ˆì•½ì¤‘ë³µìœ¼ë¡œ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to book Memorial Dungeon, '%s'.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_DUPLICATE = 0x528,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s'ì˜ ì˜ˆì•½ì´ ê¶Œí•œë¬¸ì œë¡œ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Memorial Dungeon, '%s' is already booked.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_RIGHT = 0x529,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s'ì˜ ì˜ˆì•½ì´ ì¤‘ë³µìƒì„±ìš”ì²­ìœ¼ë¡œ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Memorial Dungeon, '%s' is created.
 Please enter in 5 minutes.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_EXIST = 0x52a,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s'ì˜ ì˜ˆì•½ì·¨ì†Œê°€ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to create Memorial Dungeon, '%s'.
 Please try again.
*/
	MSG_MDUNGEON_SUBSCRIPTION_CANCEL_FAIL = 0x52b,
/*20171018 to latest
ìƒëŒ€ë°©ì´ íŒŒí‹° ì´ˆëŒ€ ê±°ë¶€ ìƒíƒœìž…ë‹ˆë‹¤.
The character blocked the party invitation.
*/
	MSG_JOINMSG_REFUSE = 0x52c,
/*20171018 to latest
ëª¨ë“  íŒŒí‹° ì´ˆëŒ€ë¥¼ ê±°ë¶€í•©ë‹ˆë‹¤.
Block all party invitations.
*/
	MSG_INVITE_PARTY_REFUSE = 0x52d,
/*20171018 to latest
ëª¨ë“  íŒŒí‹° ì´ˆëŒ€ë¥¼ ìˆ˜ë½í•©ë‹ˆë‹¤.
Allow all party invitations.
*/
	MSG_INVITE_PARTY_ACCEPT = 0x52e,
/*20171018 to latest
ì°©ìš©í•˜ì‹œë©´ ì´ ì•„ì´í…œì€ ì˜êµ¬ ê·€ì†ë©ë‹ˆë‹¤. ì°©ìš©í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
This item will be permanently bound to this character once it is equipped. Do you really want to equip this item?
*/
	MSG_YOURITEM_EQUIP = 0x52f,
/*20171018 to latest
%s ì•„ì´í…œì´ ê·€ì†ë˜ì—ˆìŠµë‹ˆë‹¤.
%s is now permanently bound to this character.
*/
	MSG_YOURITEM_EQUIPED = 0x530,
/*20171018 to latest
ìºì‹œê°€ ë¶€ì¡±í•©ë‹ˆë‹¤. ë¬´ë£Œ ìºì‹œ í¬ì¸íŠ¸ë¥¼ ìž…ë ¥í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
You do not have enough Kafra Credit Points. Please enter whether you have free credit points.
*/
	MSG_BUY_TO_FREE_POINT = 0x531,
/*20171018 to latest
íŒŒí‹° ê°€ìž…ìš”ì²­
Request to Join Party
*/
	MSG_REQ_JOIN_PARTY3 = 0x532,
/*20171018 to latest
ê³µì„± ì •ë³´ ë©”ì‹œì§€ í‘œì‹œ
Display WOE Info
*/
	MSG_VIEW_SIEGE_INFO_MSG = 0x533,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s'ì˜ ì˜ˆì•½ì´ ì·¨ì†Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Memorial Dungeon %s's reservation has been canceled.
*/
	MSG_MDUNGEON_SUBSCRIPTION_CANCEL_SUCCESS = 0x534,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ '%s' ìƒì„±ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ë‹¤ì‹œ ì‹œë„ í•˜ì„¸ìš”.
Failed to create Memorial Dungeon %s. Please try again.
*/
	MSG_MDUNGEON_CREATE_FAIL = 0x535,
/*20171018 to latest
ì´ ìž¥ì†Œì—ì„œëŠ” ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ìŠ¤í‚¬ìž…ë‹ˆë‹¤.
This skill cannot be used within this area.
*/
	MSG_IMPOSSIBLE_SKILL_AREA = 0x536,
/*20171018 to latest
ì´ ìž¥ì†Œì—ì„œëŠ” ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ì•„ì´í…œìž…ë‹ˆë‹¤.
This item cannot be used within this area.
*/
	MSG_IMPOSSIBLE_USEITEM_AREA = 0x537,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „
Memorial Dungeon
*/
	MSG_MEMORIAL_DUN = 0x538,
/*20171018 to latest
%s ëŒ€ê¸°ì¤‘
%s in Standby
*/
	MSG_MEMORIAL_DUN_WAITING = 0x539,
/*20171018 to latest
%s ìž…ìž¥ ê°€ëŠ¥
%s Available
*/
	MSG_MEMORIAL_DUN_READY = 0x53a,
/*20171018 to latest
%s ì§„í–‰ì¤‘
%s in Progress
*/
	MSG_MEMORIAL_DUN_IN = 0x53b,
/*20171018 to latest
ì‹œê°„ ì•ˆì— ìž…ìž¥í•˜ì§€ ì•Šì•„ ë©”ëª¨ë¦¬ì–¼ ë˜ì „ì´ ì‚¬ë¼ì¡ŒìŠµë‹ˆë‹¤.
No one entered the Memorial Dungeon within its duration; the dungeon has disappeared.
*/
	MSG_MEMORIAL_DUN_OUT1 = 0x53c,
/*20171018 to latest
ì´ìš©í•˜ì‹œë ¤ë©´ ì´ìš© ì‹ ì²­ì„ ì²˜ìŒë¶€í„° ë‹¤ì‹œ í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please apply for dungeon entry again to play in this dungeon.
*/
	MSG_MEMORIAL_DUN_OUT2 = 0x53d,
/*20171018 to latest
ëŒ€ê¸° ìˆœìœ„ : ^ff0000%d^000000
Your Standby Priority: ^ff0000%d^000000
*/
	MSG_MEMORIAL_DUN_PRIORITY = 0x53e,
/*20171018 to latest
^ff0000%s^000000 ë‚´ì— ìž…ìž¥í•˜ì§€ ì•Šì„ ê²½ìš° ì‹ ì²­í•˜ì‹  ë˜ì „ì´ ì‚­ì œ ë©ë‹ˆë‹¤.
The requested dungeon will be removed if you do not enter within ^ff0000%s^000000.
*/
	MSG_MEMORIAL_DUN_NOTIFY = 0x53f,
/*20171018 to latest
ë˜ì „ ë¯¸ì…˜ ì œí•œ ì‹œê°„ : 
Dungeon Mission Time Limit:
*/
	MSG_MEMORIAL_DUN_NOTIFY2 = 0x540,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „ ì˜ˆì•½ì´ ì·¨ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
The Memorial Dungeon reservation has been canceled.
*/
	MSG_MEMORIAL_DUN_CANCEL = 0x541,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „ì´ ìœ ì§€ ì‹œê°„ ì œí•œì— ì˜í•´ íŒŒê´´ë˜ì—ˆìŠµë‹ˆë‹¤.
The Memorial Dungeon duration expired; it has been destroyed.
*/
	MSG_MEMORIAL_DUN_LIVE_TIME_OUT = 0x542,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „ì´ ìž…ìž¥ ì‹œê°„ ì œí•œì— ì˜í•´ íŒŒê´´ë˜ì—ˆìŠµë‹ˆë‹¤.
The Memorial Dungeon's entry time limit expired; it has been destroyed.
*/
	MSG_MEMORIAL_DUN_ENTER_TIME_OUT = 0x543,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „ì´ ì‚­ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
The Memorial Dungeon has been removed.
*/
	MSG_MEMORIAL_DUN_DESTROY_REQUEST = 0x544,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „ì— ì‹œìŠ¤í…œ ì˜¤ë¥˜ê°€ ë°œìƒí•˜ì˜€ìŠµë‹ˆë‹¤. ì •ìƒì ì¸ ê²Œìž„ ì§„í–‰ì„ ìœ„í•´ ìž¬ì ‘ì†ì„ í•´ì£¼ì‹­ì‹œì˜¤.
A system error has occurred in the Memorial Dungeon. Please relog in to the game to continue playing.
*/
	MSG_MEMORIAL_DUN_ERROR = 0x545,
/*20171018 to latest
ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ìŠ¬ë¡¯ìž…ë‹ˆë‹¤.
This slot is not usable.
*/
	MSG_FR_INVALID_SLOT = 0x546,
/*20171018 to latest
Base Levelì´ 15ë¥¼ ë„˜ì—ˆìŠµë‹ˆë‹¤.
Your Base Level is over 15.
*/
	MSG_FR_BASELVL = 0x547,
/*20171018 to latest
Job Levelì´ 15ë¥¼ ë„˜ì—ˆìŠµë‹ˆë‹¤.
Your Job Level is over 15.
*/
	MSG_FR_INVALID_JOBLV = 0x548,
/*20171018 to latest
í•´ë‹¹ìŠ¬ë¡¯ ìºë¦­í„°ì— ì§ì—…êµ°ì˜ ìƒì¸ì´ë¯€ë¡œ ê²Œìž„ì„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot play the Merchant class character in this slot.
*/
	MSG_FR_JOB = 0x549,
/*20171018 to latest
ì¶”í›„ ì‚¬ìš©ì˜ˆì •
Not Yet Implemented
*/
	MSG_FR_MAP = 0x54a,
/*20171018 to latest
ë§Œë“¤ìˆ˜ ìžˆëŠ” ì¼€ë¦­í„° ìŠ¬ë¡¯ì´ ì•„ë‹™ë‹ˆë‹¤.
You are not eligible to open the Character Slot.
*/
	MSG_FR_ERR_MKCHAR_INVALID_SLOT = 0x54b,
/*20171018 to latest
ì‚­ì œí•  ìˆ˜ ì—†ëŠ” ì¼€ë¦­í„° ìž…ë‹ˆë‹¤.
This character cannot be deleted.
*/
	MSG_FR_ERR_DELCHAR_INVALID_SLOT = 0x54c,
/*20171018 to latest
ìƒëŒ€ë°©ì˜ ìž¥ë¹„ì°½ì´ ê³µê°œë˜ì–´ ìžˆì§€ ì•ŠìŠµë‹ˆë‹¤.
This character's equipment information is not open to the public.
*/
	MSG_OPEN_EQUIPEDITEM_REFUSED = 0x54d,
/*20171018 to latest
ìž¥ë¹„ì°½ì„ ê³µê°œí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Equipment information not open to the public.
*/
	MSG_OPEN_EQUIPEDITEM_REFUSE = 0x54e,
/*20171018 to latest
ìž¥ë¹„ì°½ì„ ê³µê°œí•©ë‹ˆë‹¤.
Equipment information open to the public.
*/
	MSG_OPEN_EQUIPEDITEM_ACCEPT = 0x54f,
/*20171018 to latest
(%s)ë‹˜ ìž¥ë¹„ì°½ ë³´ê¸°
Check %s's Equipment Info
*/
	MSG_REQ_VIEW_OTHERUSER = 0x550,
/*20171018 to latest
%sì˜ ìž¥ì°©ì•„ì´í…œ
'%s's Equipment
*/
	MSG_OTHERUSER_EQUIPED_ITEM = 0x551,
/*20171018 to latest
ìž¥ë¹„ì°½ ê³µê°œ
Show Equip
*/
	MSG_OPEN_EQUIPED_ITEM = 0x552,
/*20171018 to latest
í”„ë¦¬ë¯¸ì—„ ì„œë¹„ìŠ¤ë¥¼ ì´ìš©í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
This service is only available for premium users.
*/
	MSG_NEED_PREMIUM_SERVICE = 0x553,
/*20171018 to latest
ë¬´ë£Œ ì‚¬ìš©ìžëŠ” ìµœëŒ€ 50000ì œë‹ˆê¹Œì§€ ì†Œìœ í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Free Trial users can only hold up to 50,000 zeny.
*/
	MSG_FR_INVALID_MONEY = 0x554,
/*20171018 to latest
ì „ìž¥ì±„íŒ… ìƒíƒœê°€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Battlefield Chat has been activated.
*/
	MSG_BATTLECHAT_ON = 0x555,
/*20171018 to latest
ì „ìž¥ì±„íŒ… ìƒíƒœê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
Battlefield Chat has been deactivated.
*/
	MSG_BATTLECHAT_OFF = 0x556,
/*20171018 to latest
ìš©ë³‘ì •ë³´ - ëª¬ìŠ¤í„°íƒ€ìž…
Mercenary Info - Monster Type
*/
	MSG_MER_INFO_TYPE_MONSTER = 0x557,
/*20171018 to latest
ì „ì²´ ë§µ ë³´ê¸°
World Map
*/
	MSG_RO_MAP = 0x558,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ì´ CLOSE ìƒíƒœìž…ë‹ˆë‹¤.
The Memorial Dungeon is now closed.
*/
	MSG_MEMORIAL_DUN_CLOSE = 0x559,
/*20171018 to latest
^ff0000^ff0000ìš©ë³‘ì„ ì‚­ì œí•©ë‹ˆë‹¤.^000000^000000 ì‚­ì œí•˜ì‹¤ ê²½ìš° ì§€ê¸ˆê¹Œì§€ í‚¤ìš´ ë‚´ì—­ì´ ëª¨ë‘ ì‚­ì œë©ë‹ˆë‹¤. ê³„ì†í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
^ff0000Deleting a Mercenary Soldier^000000 will also delete his growth history. Do you really want to proceed with the deletion?
*/
	MSG_DELETE_MER = 0x55a,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ë˜ì ¼ì´ OPEN ìƒíƒœìž…ë‹ˆë‹¤.
The Memorial Dungeon is now open.
*/
	MSG_MEMORIAL_DUN_OPEN = 0x55b,
/*20171018 to latest
ìœ„ì˜ ê³„ì •ì€ ì•„ì§ í†µì‹  ì•ˆì „ í‚¤ì— ì—°ê²°ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.  ë¨¼ì € ì•ˆì „ í‚¤ë¥¼ í•´ì œí•˜ì‹  ë’¤ ê²Œìž„ì— ì ‘ì†í•´ ì£¼ì‹­ì‹œì˜¤.
This account has not been confirmed by connecting to the safe communication key. Please connect to the key first, and then log into the game.
*/
	MSG_PHONE_BLOCK = 0x55c,
/*20171018 to latest
í•œ ì•„ì´í”¼ë¡œ ì ‘ì† ê°€ëŠ¥í•œ ìœ ì €ìˆ˜ë¥¼ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤.
The number of accounts connected to this IP has exceeded the limit.
*/
	MSG_BAN_PC_IP_LIMIT_ACCESS = 0x55d,
/*20171018 to latest
ìƒˆë¡œìš´ í€˜ìŠ¤íŠ¸ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤
You have received a new quest.
*/
	MSG_QUESTGET = 0x55e,
/*20171018 to latest
^777777ìŠµë“ì¡°ê±´ : 
^CC3399Requirement:
*/
	MSG_FINDTEXT_TO_SKILLDES = 0x55f,
/*20171018 to latest
ìŠ¤í‚¬ ì„¤ëª… ë³´ê¸°
View Skill Info
*/
	MSG_VIEW_SKILL_DESCRIPT = 0x560,
/*20171018 to latest
ì‚¬ìš©ëœ ìŠ¤í‚¬ í¬ì¸íŠ¸ëŠ” ë‹¤ì‹œ ë˜ëŒë¦´ ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ì ìš©í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Once used, skill points cannot be re-allocated. Would you like to use the skill points?
*/
	MSG_APPLY_SKILL_UP = 0x561,
/*20171018 to latest
ë…¸ë¹„ìŠ¤Â·1ì°¨ì§ì—…
1st
*/
	MSG_1TABNAME_SKILLWND = 0x562,
/*20171018 to latest
2ì°¨Â·ì „ìŠ¹ì§ì—…
2nd
*/
	MSG_2TABNAME_SKILLWND = 0x563,
/*20171018 to latest
ë¶ˆë²•í”„ë¡œê·¸ëž¨ì„ ì‚¬ìš©í•˜ì˜€ê±°ë‚˜            í˜¹ì€ í•´í‚¹ì„ ì‹œë„í•œ ê³„ì •ìž…ë‹ˆë‹¤.              ë¸”ëŸ­ì¢…ë£Œì‹œê°„ : %s
This account has been used for illegal program or hacking program. Block Time: %s
*/
	MSG_RE17 = 0x564,
/*20171018 to latest
ë¶ˆë²•í”„ë¡œê·¸ëž¨ì´ ì‹¤í–‰, ë°”ì´ëŸ¬ìŠ¤ ê°ì—¼, ë˜ëŠ” í•´í‚¹íˆ´ì´ ì„¤ì¹˜ë˜ì–´ ìžˆì„ ê°€ëŠ¥ì„±ì´ ìžˆìŠµë‹ˆë‹¤. ì •ìƒ í´ë¼ì´ì–¸íŠ¸ë¥¼ ì‹¤í–‰í•˜ì—¬ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤. í•¨ê»˜ ë§Œë“œëŠ” ë°ì€ ë¼ê·¸ë‚˜ë¡œí¬ê°€ ë  ìˆ˜ ìžˆë„ë¡ ë…¸ë ¥í•˜ê³  ìžˆìŠµë‹ˆë‹¤.
The possibility of exposure to illegal program, PC virus infection or Hacking Tool has been detected. Please execute licensed client. Our team is trying to make a best environment for Ro players.
*/
	MSG_RE18 = 0x565,
/*20171018 to latest
ë‹¹ì‹ ì€ ì§€ê¸ˆ ê±´ê°•í•œ ê²Œìž„ ì‹œê°„ ëŒ€ì— ìžˆìŠµë‹ˆë‹¤, ì¦ê±°ìš´ ê²Œìž„ì´ ë˜ì‹œê¸¸ ë°”ëžë‹ˆë‹¤
You are currently playing in the best game environment. Please enjoy the Ragnarok.
*/
	MSG_WARNING_MSG3 = 0x566,
/*20171018 to latest
 ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” Jobê²½í—˜ì¹˜ê°€ 30ë¶„ê°„ 1.25ë°°ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
Job Exp points from hunting monsters are increased by 50% for 30 minutes.
*/
	MSG_PLUSONLYJOBEXP = 0x567,
/*20171018 to latest
 ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” ê²½í—˜ì¹˜ê°€ 30ë¶„ê°„ 1.2ë°°ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
Exp points from hunting monsters are increased by 25% for 30 minutes.
*/
	MSG_PLUSEXP14532 = 0x568,
/*20171018 to latest
 ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” ê²½í—˜ì¹˜ê°€ 30ë¶„ê°„ 2ë°°ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
EXP points from hunting monsters are increased by 100%% for 30 minutes.
*/
	MSG_PLUSEXP14533 = 0x569,
/*20171018 to latest
 ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” ê²½í—˜ì¹˜ê°€ 60ë¶„ê°„ 1.5ë°°ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
EXP points from hunting monsters are increased by 50% for 60 minutes.
*/
	MSG_PLUSEXP12312 = 0x56a,
/*20171018 to latest
ì´ ë§µì—ì„œëŠ” íŒŒí‹°ë¥¼ ê²°ì„±í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to organize a party in this map.
*/
	MSG_NOPARTY = 0x56b,
/*20171018 to latest
(%s)ë‹˜ì€ íŒŒí‹°ì— ì°¸ì—¬í•  ìˆ˜ ì—†ëŠ” ë§µì— ìžˆìŠµë‹ˆë‹¤.
(%s) are currently in restricted map to join a party.
*/
	MSG_NOPARTY2 = 0x56c,
/*20171018 to latest
ê°„íŽ¸ì•„ì´í…œìƒµ
Simple Item Shop
*/
	MSG_SIMPLE_CASH_SHOP = 0x56d,
/*20171018 to latest
ì†Œì§€ í•œì½”ì¸ : %d í•œì½”ì¸
Han Coin: %d Han Coin
*/
	MSG_SIMPLE_POINT_SHOP_NHN = 0x56e,
/*20171018 to latest
ì†Œì§€ ìºì‹œ : %d ìºì‹œ
RoK Point: %d RoK Point
*/
	MSG_SIMPLE_POINT_SHOP = 0x56f,
/*20171018 to latest
ë¬´ë£Œ ìºì‹œ : %d ìºì‹œ
Free Cash: %d Cash
*/
	MSG_SIMPLE_POINT_SHOP2 = 0x570,
/*20171018 to latest
ë³¸ì„œë²„ ìœ ì €ëŠ” í”„ë¦¬ì„œë²„ì— ì ‘ì†í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
An user of this server cannot connect to free server
*/
	MSG_MAIN_USER_CANONT_LOGIN_FREE_SERVER = 0x571,
/*20171018 to latest
ìœ íš¨ê¸°ê°„ì´ ì§€ë‚œ ë¹„ë°€ë²ˆí˜¸ ìž…ë‹ˆë‹¤. ë‹¤ì‹œ ë¡œê·¸ì¸í•˜ì—¬ì£¼ì‹­ì‹œì˜¤.
Your password has expired. Please log in again
*/
	MSG_INVALID_ONETIMELIMIT = 0x572,
/*20171018 to latest
3ì°¨ì§ì—…
3rd
*/
	MSG_3TABNAME_SKILLWND = 0x573,
/*20171018 to latest
ì´ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ëŒ€ìƒìž…ë‹ˆë‹¤.
This skill can't be used on that target.
*/
	MSG_USESKILL_FAIL_TOTARGET = 0x574,
/*20171018 to latest
ì•ˆì‹¤ë¼ ì†Œìœ  ê°œìˆ˜ê°€ ì´ˆê³¼í•˜ì—¬ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't use skill because you have exceeded the number Ancilla possession limit
*/
	MSG_USESKILL_FAIL_ANCILLA_NUMOVER = 0x575,
/*20171018 to latest
ì„±ìˆ˜ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Unable to use the skill to exceed the number of Ancilla.
*/
	MSG_USESKILL_FAIL_HOLYWATER = 0x576,
/*20171018 to latest
ì•ˆì‹¤ë¼ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Holy water is required.
*/
	MSG_USESKILL_FAIL_ANCILLA = 0x577,
/*20171018 to latest
ì¼ì •ê±°ë¦¬ ë‚´ì— ì¤‘ë³µë  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Ancilla is required.
*/
	MSG_USESKILL_FAIL_DUPLICATE_RANGEIN = 0x578,
/*20171018 to latest
ì´ ìŠ¤í‚¬ì„ ì‚¬ìš©í•˜ê¸° ìœ„í•´ì„œëŠ” ë‹¤ë¥¸ ìŠ¤í‚¬ì´ í•„ìš”í•©ë‹ˆë‹¤.
Cannot be duplicated within a certain distance.
*/
	MSG_USESKILL_FAIL_NEED_OTHER_SKILL = 0x579,
/*20171018 to latest
ì´ ë§µì—ì„œëŠ” ì±„íŒ…ì„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
This skill requires other skills to be used.
*/
	MSG_NO_CHATTING = 0x57a,
/*20171018 to latest
3ì‹œê°„ì´ ì§€ë‚¬ìŠµë‹ˆë‹¤.
Chat is not allowed in this map
*/
	MSG_VET_3HOUR = 0x57b,
/*20171018 to latest
5ì‹œê°„ì´ ì§€ë‚¬ìŠµë‹ˆë‹¤.
3 hours have passed.
*/
	MSG_VET_5HOUR = 0x57c,
/*20171018 to latest
ê²Œìž„ê°€ë“œ ì´ˆê¸°í™” ì—ëŸ¬ ë˜ëŠ” êµ¬ë²„ì „ì˜ ê²Œìž„ê°€ë“œ íŒŒì¼ìž…ë‹ˆë‹¤. ê²Œìž„ê°€ë“œ ì…‹ì—…íŒŒì¼ì„ ë‹¤ì‹œ ì„¤ì¹˜í•˜ê³  ê²Œìž„ì„ ì‹¤í–‰í•´ ë³´ì‹œê¸° ë°”ëžë‹ˆë‹¤.
5 hours have passed.
*/
	MSG_NPGAMEMON_ERROR_GAMEGUARD = 0x57d,
/*20171018 to latest
ini íŒŒì¼ì´ ì—†ê±°ë‚˜ ë³€ì¡°ë˜ì—ˆìŠµë‹ˆë‹¤. ê²Œìž„ê°€ë“œ ì…‹ì—…íŒŒì¼ì„ ì„¤ì¹˜í•˜ë©´ í•´ê²° í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Game guard initialization error or previous version game guard file is installed. Please re-install the setup file and try again
*/
	MSG_NPGMUP_ERROR_PARAM = 0x57e,
/*20171018 to latest
ê²Œìž„ê°€ë“œì™€ ì¶©ëŒ í”„ë¡œê·¸ëž¨ì´ ë°œê²¬ë˜ì—ˆìŠµë‹ˆë‹¤.
Either ini file is missing or altered. Install game guard setup file to fix the problem
*/
	MSG_NPGG_ERROR_COLLISION = 0x57f,
/*20171018 to latest
ìž˜ëª»ëœ í´ë¼ì´ì–¸íŠ¸ìž…ë‹ˆë‹¤. ì •ìƒì ì¸ í´ë¼ì´ì–¸íŠ¸ë¥¼ ì‹¤í–‰í•˜ì—¬ ì£¼ì‹­ì‹œìš”.
There is a program found that conflicts with game guard
*/
	MSG_PROOF_ERROR = 0x580,
/*20171018 to latest
ëª¨ë°”ì¼ ì¸ì¦ì„ ë°›ì•„ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Incorrect client. Please run a normal client
*/
	MSG_MOBILE_LOCKSERVER = 0x581,
/*20171018 to latest
ëª¨ë°”ì¼ ì¸ì¦ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Thank you to accept mobile authentication.
*/
	MSG_FAILED_MOBILE_LOCKSERVER = 0x582,
/*20171018 to latest
ì´ìŠ¤í‚¬ì€ í˜¼ìžì„œ ì‚¬ìš©í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
This skill can't be used alone
*/
	MSG_USESKILL_FAIL_NEED_HELPER = 0x583,
/*20171018 to latest
ì´ìŠ¤í‚¬ì€ íŠ¹ì •ë°©í–¥ìœ¼ë¡œë§Œ ì‚¬ìš©í• ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
This skill can be used to certain direction only
*/
	MSG_USESKILL_FAIL_INVALID_DIR = 0x584,
/*20171018 to latest
ë”ì´ìƒ ì†Œí™˜í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot summon spheres anymore.
*/
	MSG_USESKILL_FAIL_SUMMON = 0x585,
/*20171018 to latest
ì†Œí™˜ëœ êµ¬ì²´ê°€ ì¡´ìž¬í•˜ì§€ ì•Šê±°ë‚˜ ë¶€ì¡±í•©ë‹ˆë‹¤.
There is no summoned sphere or you do not have enough sphere.
*/
	MSG_USESKILL_FAIL_SUMMON_NONE = 0x586,
/*20171018 to latest
ì‚¬ìš©ê°€ëŠ¥í•œ ëª¨ë°©ìŠ¤í‚¬ì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
There is no imitation skills available.
*/
	MSG_USESKILL_FAIL_IMITATION_SKILL_NONE = 0x587,
/*20171018 to latest
ì´ ìŠ¤í‚¬ì€ ì¤‘ë³µí•´ì„œ ì‚¬ìš©í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't reuse this skill
*/
	MSG_USESKILL_FAIL_DUPLICATE = 0x588,
/*20171018 to latest
ìŠ¤í‚¬ì„ ì‚¬ìš©í• ìˆ˜ ì—†ëŠ” ìƒíƒœìž…ë‹ˆë‹¤.
Skill can't be used in this state
*/
	MSG_USESKILL_FAIL_CONDITION = 0x589,
/*20171018 to latest
ì•„ì´í…œë³„ ìµœëŒ€ ì†Œì§€ëŸ‰ì„ ì´ˆê³¼í•˜ì—¬ ê°€ì§ˆ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You have exceeded the maximum amount of possession of another item.
*/
	MSG_PICKUP_MAXCOUNT_LIMIT = 0x58a,
/*20171018 to latest
ê´€ë¦¬ìž ê¶Œí•œì´ ì—†ìŠµë‹ˆë‹¤. í”„ë¡œê·¸ëž¨ ìµœì´ˆ ì‹¤í–‰ì€ ê´€ë¦¬ìž ê¶Œí•œìœ¼ë¡œ ì‹¤í–‰í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.
No administrative privileges. Must first run the program with administrator privileges.
*/
	MSG_NPK_ERROR_NOTADMIN = 0x58b,
/*20171018 to latest
nProtect KeyCrypt ë“œë¼ì´ë²„ ë²„ì „ì´ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤. ì‹œìŠ¤í…œ ìž¬ ë¶€íŒ… í›„ì— ìƒˆë¡œ ì‹¤í–‰ ì‹œì¼œ ì£¼ì‹­ì‹œì˜¤.
nProtect KeyCrypt not the same. Please restart the program and the computer first.
*/
	MSG_NPK_ERROR_DRIVERVERSION = 0x58c,
/*20171018 to latest
WindowXP í˜¸í™˜ì„± ëª¨ë“œë¥¼ ì‚¬ìš©í•˜ê³  ê³„ì‹­ë‹ˆë‹¤. í˜„ìž¬ í”„ë¡œê·¸ëž¨ì—ì„œ í˜¸í™˜ì„± ëª¨ë“œë¥¼ ì œê±°í•˜ì˜€ìŠµë‹ˆë‹¤. í”„ë¡œê·¸ëž¨ì„ ìƒˆë¡œ ì‹œìž‘í•´ ì£¼ì‹­ì‹œì˜¤.
Currently wearing WindowXP Compatibility Mode. The program now removes Compatibility Mode. Please restart the program.
*/
	MSG_NPK_ERROR_VERIFYVERSION = 0x58d,
/*20171018 to latest
PS/2 í‚¤ë¡œê±°ê°€ ì¡´ìž¬í•©ë‹ˆë‹¤.
PS/2 keyloggers exist.
*/
	MSG_DETECT_PS2KEYLOGGER = 0x58e,
/*20171018 to latest
USB í‚¤ë³´ë“œ ë“œë¼ì´ë²„ í•´í‚¹ ì‹œë„ê°€ íƒì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
USB Keylogging attempt was detected.
*/
	MSG_DETECT_USBKEYLOGGER = 0x58f,
/*20171018 to latest
HHD ëª¨ë‹ˆí„°ë§ íˆ´ì´ íƒì§€ë˜ì—ˆìŠµë‹ˆë‹¤.
HHD monitoring tool has been detected.
*/
	MSG_DETECT_HHDUSBH = 0x590,
/*20171018 to latest
íŽ˜ì¸íŠ¸ë¶“ì´ í•„ìš”í•©ë‹ˆë‹¤.
Paintbrush is required.
*/
	MSG_USESKILL_FAIL_PAINTBRUSH = 0x591,
/*20171018 to latest
ì„œíŽ˜ì´ìŠ¤íŽ˜ì¸íŠ¸ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Paint is required.
*/
	MSG_USESKILL_FAIL_II_SURFACE_PAINTS = 0x592,
/*20171018 to latest
ì§€ì •í•œ ìœ„ì¹˜ì— ìŠ¤í‚¬ì„ ì‚¬ìš©í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Use the skills that are not at the specified location.
*/
	MSG_USESKILL_FAIL_POS = 0x593,
/*20171018 to latest
ë„ìš°ë¯¸ì˜ SPê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not enough SP.
*/
	MSG_USESKILL_FAIL_HELPER_SP_INSUFFICIENT = 0x594,
/*20171018 to latest
ìºë¦­í„° ì„ íƒì°½ì˜ ìºë¦­í„°ê°€ %dê°œë¥¼ ì´ˆê³¼í•˜ë©´ ê²Œìž„ì— ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ë¶ˆí•„ìš”í•œ ìºë¦­í„°ë¥¼ ì‚­ì œí•´ì£¼ì‹­ì‹œì˜¤.
Character %d is character selection window cannot connect to the game that exceeds the total. Please remove unwanted characters.
*/
	MSG_BAN_OVER_CHARACTER_LIST = 0x595,
/*20171018 to latest
ëª©ìº”ë””ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Throat Lozenge is required.
*/
	MSG_USESKILL_FAIL_II_NECK_CANDY = 0x596,
/*20171018 to latest
ì•ˆíƒ€ê¹Œìš´ëˆˆë¬¼ì´ í•„ìš”í•©ë‹ˆë‹¤.
Painful Tears is required.
*/
	MSG_USESKILL_FAIL_II_MISERABLE_TEAR = 0x597,
/*20171018 to latest
ëª© ë³´í˜¸ ìº”ë””ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Throat Lozenge is required.
*/
	MSG_USESKILL_FAIL_II_PROTECT_NECK_CANDY = 0x598,
/*20171018 to latest
ì›¨í° ë¸”ë¡œí‚¹ì˜ ì—°ê³„ë¡œë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
Cooperation is only available with Weapon Blocking.
*/
	MSG_USESKILL_FAIL_GC_WEAPONBLOCKING = 0x599,
/*20171018 to latest
ê¸¸ë¡œí‹´í¬ë¡œìŠ¤ì˜ ë…ì„ ë°”ë¥¸ ë¬´ê¸°ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Poisoned weapons is required.
*/
	MSG_USESKILL_FAIL_GC_POISONINGWEAPON = 0x59a,
/*20171018 to latest
ë§ˆë„ê¸°ì–´ íƒ‘ìŠ¹ì‹œì—ë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
Item can only be used when Mado Gear is mounted.
*/
	MSG_USESKILL_FAIL_MADOGEAR = 0x59b,
/*20171018 to latest
ë°œì¹¸ë¸”ë¦¿ì´ í•„ìš”í•©ë‹ˆë‹¤.
Vulcan Bullet is required.
*/
	MSG_USESKILL_FAIL_II_VULCANBULLET = 0x59c,
/*20171018 to latest
ë§ˆë„ê¸°ì–´ ì—°ë£Œê°€ í•„ìš”í•©ë‹ˆë‹¤.
Mado Gear Fuel is required.
*/
	MSG_USESKILL_FAIL_II_FUELGAS = 0x59d,
/*20171018 to latest
ì•¡ì²´ëƒ‰ê°íƒ„ì´ í•„ìš”í•©ë‹ˆë‹¤.
Liquid Cold Bullet is required.
*/
	MSG_USESKILL_FAIL_II_COLDSLOWERBULLET = 0x59e,
/*20171018 to latest
ìºë…¼ë³¼ì„ ìž¥ì „ í•˜ì„¸ìš”.
Please load a Cannon Ball.
*/
	MSG_USESKILL_FAIL_CANONBALL = 0x59f,
/*20171018 to latest
ë¯¸ë„ê¸°ì–´ ê°€ì†ìž¥ì¹˜ë¥¼ ì°©ìš©í•˜ì„¸ìš”.
Please equipped with a Mado Gear Accelerator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_ACCELERATION = 0x5a0,
/*20171018 to latest
í˜¸ë²„ë§ë¶€ìŠ¤í„°ë¥¼ ì°©ìš©í•˜ì„¸ìš”.
Please equipped with a Hovering Booster.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_HOVERING_BOOSTER = 0x5a1,
/*20171018 to latest
[í†¡ì‹ ] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Toxin] Poison effect was applied to the weapon.
*/
	MSG_TOXIN = 0x5a2,
/*20171018 to latest
[íŒ¨ëŸ´ë¼ì´ì¦ˆ] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Paralysis] Poison effect was applied to the weapon.
*/
	MSG_PARALYZE = 0x5a3,
/*20171018 to latest
[ë² ë†ˆë¸”ë¦¬ë“œ] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Fatigue] Poison effect was applied to the weapon.
*/
	MSG_VENOMBLEED = 0x5a4,
/*20171018 to latest
[ë§¤ì§ ë¨¸ì‰¬ë£¸] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Laughing] Poison effect was applied to the weapon.
*/
	MSG_MAGICMUSHROOM = 0x5a5,
/*20171018 to latest
[ë°ìŠ¤ í—ˆíŠ¸] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Disheart] Poison effect was applied to the weapon.
*/
	MSG_DEATHHURT = 0x5a6,
/*20171018 to latest
[íŒŒì´ë ‰ì‹œì•„] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Pyrexia] Poison effect was applied to the weapon.
*/
	MSG_PHYREXIA = 0x5a7,
/*20171018 to latest
[ì˜¤ë¸”ë¦¬ë¹„ì–¸ ì»¤ì¦ˆ] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Oblivion] Poison effect was applied to the weapon.
*/
	MSG_OBLIANCURSE = 0x5a8,
/*20171018 to latest
[ë¦¬ì¹˜ ì—”ë“œ] ë… íš¨ê³¼ê°€ ë¬´ê¸°ì— ì ìš©ë˜ì—ˆìŠµë‹ˆë‹¤.
[Leech] Poison effect was applied to the weapon.
*/
	MSG_RICHEND = 0x5a9,
/*20171018 to latest
í˜¸ë²„ë§ìƒíƒœì—ì„œë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
Can only be used in Hovering state.
*/
	MSG_USESKILL_FAIL_MADOGEAR_HOVERING = 0x5aa,
/*20171018 to latest
ìží­ìž¥ì¹˜ë¥¼ ìž¥ì°©í•˜ì„¸ìš”.
Please equip a Self-Destruct Mechanism.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_SELFDESTRUCTION_DEVICE = 0x5ab,
/*20171018 to latest
ì…°ì´í”„ì‰¬í”„í„°ë¥¼ ìž¥ì°©í•˜ì„¸ìš”.
Please equip a Shape Shift.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_SHAPESHIFTER = 0x5ac,
/*20171018 to latest
ê¸¸ë¡œí‹´ë…ì´ í•„ìš”í•©ë‹ˆë‹¤.
Guillotine Cross Poison is required.
*/
	MSG_USESKILL_FAIL_GUILLONTINE_POISON = 0x5ad,
/*20171018 to latest
ëƒ‰ê°ìž¥ì¹˜ë¥¼ ìž¥ì°©í•˜ì„¸ìš”.
Please equipped with a Cooling System.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_COOLING_DEVICE = 0x5ae,
/*20171018 to latest
ìžê¸°ìž¥í•„ë“œìƒì„±ê¸°ë¥¼ ì°©ìš©í•˜ì„¸ìš”.
Please equipped with a Magnetic Field Generator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_MAGNETICFIELD_GENERATOR = 0x5af,
/*20171018 to latest
ë² ë¦¬ì–´ìƒì„±ê¸°ë¥¼ ì°©ìš©í•˜ì„¸ìš”.
Please equipped with a Barrier Generator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_BARRIER_GENERATOR = 0x5b0,
/*20171018 to latest
ê´‘í•™ë¯¸ì±„ë°œìƒê¸°ë¥¼ ì°©ìš©í•˜ì„¸ìš”.
Please equipped with a Optical Camouflage Generator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_OPTICALCAMOUFLAGE_GENERATOR = 0x5b1,
/*20171018 to latest
ë¦¬íŽ˜ì–´í‚¤íŠ¸ë¥¼ ì°©ìš©í•˜ì„¸ìš”.
Please equipped with a Repair Kit.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_REPAIRKIT = 0x5b2,
/*20171018 to latest
ëª½í‚¤ ìŠ¤íŒ¨ë„ˆê°€ í•„ìš”í•©ë‹ˆë‹¤.
Monkey Wrench is required.
*/
	MSG_USESKILL_FAIL_II_MONKEY_SPANNER = 0x5b3,
/*20171018 to latest
[%s] ìŠ¤í‚¬ì„ ì‹œì „ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
[%s] Cannot use the skills due to cooldown delay.
*/
	MSG_SKILLINTERVAL2 = 0x5b4,
/*20171018 to latest
%dë ˆë²¨ ì´ìƒì€ ì‚­ì œê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Deletion is impossible for over level %d
*/
	MSG_LEMIT_DELETE_LEVEL = 0x5b5,
/*20171018 to latest
ë§ˆë„ê¸°ì–´ íƒ‘ìŠ¹ì‹œì—ëŠ” ì‚¬ìš© í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Can't be used while on Magic Gear.
*/
	MSG_USESKILL_FAIL_MADOGEAR_RIDE = 0x5b6,
/*20171018 to latest
ë“œëž˜ê³¤ ë‚´ë¦¬ê¸°
Dismount Dragon
*/
	MSG_DRAGONOFF = 0x5b7,
/*20171018 to latest
ë§ˆë„ê¸°ì–´ ë‚´ë¦¬ê¸°
Dismount Magic Gear
*/
	MSG_MADOOFF = 0x5b8,
/*20171018 to latest
ì†Œë¹„
I
*/
	MSG_STORE_TABNAME_0 = 0x5b9,
/*20171018 to latest
ìºì‰¬
Cash
*/
	MSG_STORE_TABNAME_1 = 0x5ba,
/*20171018 to latest
ë°©ì–´êµ¬
Armors
*/
	MSG_STORE_TABNAME_2 = 0x5bb,
/*20171018 to latest
ë¬´ê¸°
Weapons
*/
	MSG_STORE_TABNAME_3 = 0x5bc,
/*20171018 to latest
íˆ¬ì‚¬ì²´
Ammo
*/
	MSG_STORE_TABNAME_4 = 0x5bd,
/*20171018 to latest
ì¹´ë“œ
Card
*/
	MSG_STORE_TABNAME_5 = 0x5be,
/*20171018 to latest
ê¸°íƒ€
Other
*/
	MSG_STORE_TABNAME_6 = 0x5bf,
/*20171018 to latest
í´ë¼ì´ì–¸íŠ¸ ì‘ë‹µì‹œê°„ì´ ì´ˆê³¼ë˜ì–´ ì—°ê²°ì´ ëŠì–´ì§‘ë‹ˆë‹¤.
Client response time has passed so connection is terminated
*/
	MSG_ERROR_HS_TIMEOUT = 0x5c0,
/*20171018 to latest
í•µì‰´ë“œ íŒŒì¼ì˜ ë²„ì „ì´ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤. í´ë¼ì´ì–¸íŠ¸ë¥¼ ìž¬ì„¤ì¹˜ í•´ì£¼ì‹­ì‹œì˜¤.
Incorrect version of hack shield file. Please reinstall the client
*/
	MSG_ERROR_DIFF_CLIENT = 0x5c1,
/*20171018 to latest
ë§ˆë²•ì„œê°€ í•„ìš”í•©ë‹ˆë‹¤.
[Magic Book] is required.
*/
	MSG_USESKILL_FAIL_SPELLBOOK = 0x5c2,
/*20171018 to latest
ë§ˆë²•ì„œê°€ ë„ˆë¬´ ì–´ë ¤ì›Œì„œ ì¡¸ìŒì´ ëª°ë ¤ì˜¨ë‹¤.
Feel sleepy since Magic Book is too difficult to understand.
*/
	MSG_USESKILL_FAIL_SPELLBOOK_DIFFICULT_SLEEP = 0x5c3,
/*20171018 to latest
ë³´ì¡´í¬ì¸íŠ¸ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not enough saved point.
*/
	MSG_USESKILL_FAIL_SPELLBOOK_PRESERVATION_POINT = 0x5c4,
/*20171018 to latest
ë”ì´ìƒ ë§ˆë²•ì„œë¥¼ ì½ì„ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Can't read a Magic Book anymore.
*/
	MSG_USESKILL_FAIL_SPELLBOOK_READING = 0x5c5,
/*20171018 to latest
íŽ˜ì´ìŠ¤íŽ˜ì¸íŠ¸ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Face Paint is required.
*/
	MSG_USESKILL_FAIL_II_FACE_PAINTS = 0x5c6,
/*20171018 to latest
ë¶„ìž¥ìš©ë¶“ì´ í•„ìš”í•©ë‹ˆë‹¤.
Brush is required.
*/
	MSG_USESKILL_FAIL_II_MAKEUP_BRUSH = 0x5c7,
/*20171018 to latest
ëŒ€ê¸° ì‹œê°„ì´ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤. ë‹¤ì‹œ ë¡œê·¸ì¸ í•´ì£¼ì‹­ì‹œì˜¤.
Waiting time has passed. Please log in again
*/
	MSG_MOBILE_TIMEOVER = 0x5c8,
/*20171018 to latest
ìœ„í—˜! ì´ë¯¸ ë™ì¼í•œ ê³„ì •ì´ ë¡œê·¸ì¸ ì¤‘ì— ìžˆìŠµë‹ˆë‹¤. ìž ì‹œ ëª¨ë°”ì¼ ì¸ì¦ ì§„í–‰ì„ ë©ˆì¶”ì‹œê³  ë¹„ë²ˆì„ ìˆ˜ì •í•œ ë’¤ ìž¬ ë¡œê·¸ì¸ í•´ì£¼ì‹­ì‹œì˜¤.
Watch out! Same account is already logged in. Stop mobile verification and log in again after changing your password
*/
	MSG_MOBILE_ANOTHER_LOGIN = 0x5c9,
/*20171018 to latest
ìœ„í—˜! í˜„ìž¬ ë™ì¼í•œ ê³„ì •ì´ ëª¨ë°”ì¼ ì¸ì¦ ëŒ€ê¸° ì¤‘ì— ìžˆìŠµë‹ˆë‹¤. ìž ì‹œ ëª¨ë°”ì¼ ì¸ì¦ ì§„í–‰ì„ ë©ˆì¶”ì‹œê³  ë¹„ë²ˆì„ ìˆ˜ì •í•œ ë’¤ ìž¬ ë¡œê·¸ì¸ í•´ì£¼ì‹­ì‹œì˜¤.
Watch out! Same account is waiting for mobile verification. Stop mobile verification and log in again after changing your password
*/
	MSG_MOBILE_WAITING_STATE = 0x5ca,
/*20171018 to latest
ê²Œìž„ ì˜µì…˜ì°½
Game setting window
*/
	MSG_ESC_OPTIONWND = 0x5cb,
/*20171018 to latest
ê·¸ëž˜í”½ ì„¤ì •
Graphics Settings
*/
	MSG_GRAPHIC_OPTIONWND = 0x5cc,
/*20171018 to latest
ì‚¬ìš´ë“œ ì„¤ì •
Sound Settings
*/
	MSG_SOUND_OPTIONWND = 0x5cd,
/*20171018 to latest
ë³€ê²½ í•  ë‹¨ì¶•í‚¤ë¥¼ ëˆ„ë¥´ê±°ë‚˜, 'ESC'í‚¤ë¥¼ ëˆŒëŸ¬ ì‚­ì œ í•´ ì£¼ì„¸ìš”.
Press a key to assign. Pressing 'ESC' will remove the assigned key.
*/
	MSG_HOTKEYWND_NOTICE1 = 0x5ce,
/*20171018 to latest
ë‹¨ì¼ í‚¤ë¡œ ì§€ì • í•  ìˆ˜ ì—†ëŠ” í‚¤ìž…ë‹ˆë‹¤.
Unable to specify a single key.
*/
	MSG_HOTKEYWND_NOTICE2 = 0x5cf,
/*20171018 to latest
ì§€ì • í•  ìˆ˜ ì—†ëŠ” í‚¤ìž…ë‹ˆë‹¤.
Unable to specify the key assigned.
*/
	MSG_HOTKEYWND_NOTICE3 = 0x5d0,
/*20171018 to latest
'%s'ì— ì‚¬ìš©ëœ ë‹¨ì¶•í‚¤ì™€ ì¤‘ë³µë©ë‹ˆë‹¤. ë°”ê¾¸ì‹œê² ìŠµë‹ˆê¹Œ?
Duplicated with ['%s']. Do you still want to change?
*/
	MSG_HOTKEYWND_NOTICE4 = 0x5d1,
/*20171018 to latest
ì €ìž¥ëœ ë‹¨ì¶•í‚¤ ì¡°í•©ì´ ì´ˆê¸°í™” ë©ë‹ˆë‹¤. ì´ˆê¸°í™” í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Initialization is stored in the shortcut key settings. Do you want to initialized?
*/
	MSG_HOTKEYWND_NOTICE5 = 0x5d2,
/*20171018 to latest
ìŠ¤í‚¬ë°”
Skill Bar
*/
	MSG_HOTKEYWND_TAB1 = 0x5d3,
/*20171018 to latest
ì¸í„°íŽ˜ì´ìŠ¤
Interface
*/
	MSG_HOTKEYWND_TAB2 = 0x5d4,
/*20171018 to latest
ì´ëª¨ì…˜
Macros
*/
	MSG_HOTKEYWND_TAB3 = 0x5d5,
/*20171018 to latest
ë‹¨ì¶•í‚¤ ì„¤ì • ì°½
Shortcut Settings
*/
	MSG_HOTKEYWND_TITLE = 0x5d6,
/*20171018 to latest
ë°°ê²½ìŒ
BGM
*/
	MSG_BGM = 0x5d7,
/*20171018 to latest
íš¨ê³¼ìŒ
Effect
*/
	MSG_SOUND = 0x5d8,
/*20171018 to latest
ìŠ¤í‚¨
Skin
*/
	MSG_SKIN = 0x5d9,
/*20171018 to latest
ì±„íŒ…ë°© ìž…ìž¥ìŒë§Œ ì†Œë¦¬ë‚¨ On
Chat room entrance sound on
*/
	MSG_TINGONLY_ON = 0x5da,
/*20171018 to latest
ì±„íŒ…ë°© ìž…ìž¥ìŒë§Œ ì†Œë¦¬ë‚¨ Off
Chat room entrance sound off
*/
	MSG_TINGONLY_OFF = 0x5db,
/*20171018 to latest
/tingonly : ì±„íŒ…ë°© ìž…ìž¥ìŒë§Œ ë“¤ì„ìˆ˜ìžˆê²Œë©ë‹ˆë‹¤
/tingonly: you can hear only sound like a chat room entry.
*/
	MSG_EXPLAIN_TINGONLY = 0x5dc,
/*20171018 to latest
/ì£¼ë¨¹
/rock
*/
	MSG_EMOTION_ROCK = 0x5dd,
/*20171018 to latest
/ê°€ìœ„
/scissors
*/
	MSG_EMOTION_SCISSOR = 0x5de,
/*20171018 to latest
/ë³´
/paper
*/
	MSG_EMOTION_WRAP = 0x5df,
/*20171018 to latest
/ëŸ¬ë¸Œ
/love
*/
	MSG_EMOTION_LUV = 0x5e0,
/*20171018 to latest
/mobile
*/
	MSG_EMOTION_MOBILE = 0x5e1,
/*20171018 to latest
/mail
*/
	MSG_EMOTION_MAIL = 0x5e2,
/*20171018 to latest
/antenna0
*/
	MSG_EMOTION_ANTENNA0 = 0x5e3,
/*20171018 to latest
/antenna1
*/
	MSG_EMOTION_ANTENNA1 = 0x5e4,
/*20171018 to latest
/antenna2
*/
	MSG_EMOTION_ANTENNA2 = 0x5e5,
/*20171018 to latest
/antenna3
*/
	MSG_EMOTION_ANTENNA3 = 0x5e6,
/*20171018 to latest
/hum
*/
	MSG_EMOTION_HUM2 = 0x5e7,
/*20171018 to latest
/abs
*/
	MSG_EMOTION_ABS = 0x5e8,
/*20171018 to latest
/oops
*/
	MSG_EMOTION_OOPS = 0x5e9,
/*20171018 to latest
/spit
*/
	MSG_EMOTION_SPIT = 0x5ea,
/*20171018 to latest
/ene
*/
	MSG_EMOTION_ENE = 0x5eb,
/*20171018 to latest
/panic
*/
	MSG_EMOTION_PANIC = 0x5ec,
/*20171018 to latest
/whisp
*/
	MSG_EMOTION_WHISP = 0x5ed,
/*20171018 to latest
ì§€ì •ì•ˆí•¨
Not Assigned
*/
	MSG_HOTKEY_NOTHING = 0x5ee,
/*20171018 to latest
ì¹´íŠ¸ìž¥ì°©ì‹œì—ë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
Only available when cart is mounted.
*/
	MSG_USESKILL_FAIL_CART = 0x5ef,
/*20171018 to latest
[ê°€ì‹œë‚˜ë¬´ ì”¨ì•—]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Thorny Seed] is required.
*/
	MSG_USESKILL_FAIL_II_THORNS_SEED = 0x5f0,
/*20171018 to latest
[í¡í˜ˆ ì‹ë¬¼ ì”¨ì•—]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Bloodsucker Seed] is required.
*/
	MSG_USESKILL_FAIL_II_BLOOD_SUCKER_SEED = 0x5f1,
/*20171018 to latest
ë”ì´ìƒ ì‹œì „í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot be used anymore.
*/
	MSG_USESKILL_FAIL_NO_MORE_SPELL = 0x5f2,
/*20171018 to latest
[í­íƒ„ë²„ì„¯í¬ìž]ê°€ í•„ìš”í•©ë‹ˆë‹¤.
[Bomb Mushroom Spore] is required.
*/
	MSG_USESKILL_FAIL_II_BOMB_MUSHROOM_SPORE = 0x5f3,
/*20171018 to latest
[í™”ì—¼ë³‘]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Fire Bottle] is required.
*/
	MSG_USESKILL_FAIL_II_GASOLINE_BOOMB = 0x5f4,
/*20171018 to latest
[ê¸°ë¦„ë³‘]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Oil Bottle] is required.
*/
	MSG_USESKILL_FAIL_II_OIL_BOTTLE = 0x5f5,
/*20171018 to latest
[í­ë°œê°€ë£¨]ê°€ í•„ìš”í•©ë‹ˆë‹¤.
[Explosive Powder] is required.
*/
	MSG_USESKILL_FAIL_II_EXPLOSION_POWDER = 0x5f6,
/*20171018 to latest
[ì—°ë§‰ê°€ë£¨]ê°€ í•„ìš”í•©ë‹ˆë‹¤.
[Smokescreen Powder] is required.
*/
	MSG_USESKILL_FAIL_II_SMOKE_POWDER = 0x5f7,
/*20171018 to latest
[ìµœë£¨ê°€ìŠ¤]ê°€ í•„ìš”í•©ë‹ˆë‹¤.
[Tear Gas] is required.
*/
	MSG_USESKILL_FAIL_II_TEAR_GAS = 0x5f8,
/*20171018 to latest
[ì—¼ì‚°ë³‘]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Acid Bottle] is required.
*/
	MSG_USESKILL_FAIL_II_HYDROCHLORIC_ACID_BOTTLE = 0x5f9,
/*20171018 to latest
[ì‹ì¸ì‹ë¬¼ë³‘]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Bottom Man-Eating Plant] is required.
*/
	MSG_USESKILL_FAIL_II_HELLS_PLANT_BOTTLE = 0x5fa,
/*20171018 to latest
[ë§Œë“œë¼ê³ ë¼ì˜ í™”ë¶„]ì´ í•„ìš”í•©ë‹ˆë‹¤.
[Pot of Mandragora] is required.
*/
	MSG_USESKILL_FAIL_II_MANDRAGORA_FLOWERPOT = 0x5fb,
/*20171018 to latest
íŒŒí‹°ìž¥ ìœ„ìž„
Party delegation
*/
	MSG_YIELD_PARTYMASTER = 0x5fc,
/*20171018 to latest
ì •ë§ íŒŒí‹°ìž¥ì„ ìœ„ìž„í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to delegate the real party?
*/
	MSG_DO_YOU_REALLY_WANT_YIELD_PARTYMASTER = 0x5fd,
/*20171018 to latest
íŒŒí‹°ìž¥ì„ ìœ„ìž„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Party cannot be delegated.
*/
	MSG_CANNOT_YIELD_PARTYMASTER = 0x5fe,
/*20171018 to latest
ë³€ê²½ë¶ˆê°€
Immutable
*/
	MSG_FAILED_CHANGE = 0x5ff,
/*20171018 to latest
[%s]ê°€ %dê°œ í•„ìš”í•©ë‹ˆë‹¤.
[%s] required '%d' amount.
*/
	MSG_USESKILL_FAIL_NEED_ITEM = 0x600,
/*20171018 to latest
ì œë ¨ ìˆ˜ì¹˜ê°€ í•˜í–¥ ì¡°ì • ë˜ì—ˆìŠµë‹ˆë‹¤.
Is now refining the value lowered.
*/
	MSG_ITEM_REFINING_DOWNGRADE = 0x601,
/*20171018 to latest
[%s]ë¥¼ ìž¥ë¹„í•˜ê³  ìžˆì–´ì•¼ ì‚¬ìš©í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤
Need to put on [%s] in order to use.
*/
	MSG_USESKILL_FAIL_NEED_EQUIPMENT = 0x602,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ì„¤ì •
Battle field entrance setting
*/
	MSG_BATTLEFIELD_LIST = 0x603,
/*20171018 to latest
% ì „ìž¥ìœ¼ë¡œ ì´ë™ í•  ìˆ˜ ì—†ëŠ” ìƒíƒœê°€ ë˜ì–´ ì „ìž¥ ì‹ ì²­ì´ ì·¨ì†Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Battlefield - [%s] you sign up?
*/
	MSG_CANNOT_JOINTO_BATTLEFIELD = 0x604,
/*20171018 to latest

Current admission application state.
*/
	MSG_COMPLETED_JOINTO_BATTLEFIELD = 0x605,
/*20171018 to latest
% ì „ìž¥ ìž…ìž¥ì´ ë³´ë¥˜ ë˜ì—ˆìŠµë‹ˆë‹¤. ë‹¤ë¥¸ í”Œë ˆì´ì–´ë¥¼ ê¸°ë‹¤ë¦½ë‹ˆë‹¤.
It was unregistered and not be able to enter the state.
*/
	MSG_DIFFER_JOINTO_BATTLEFIELD = 0x606,
/*20171018 to latest

Current admission application state.
*/
	MSG_STATUS_JOINTO_BATTLEFIELD = 0x607,
/*20171018 to latest
í™•ì¸ ë‹¨ì¶”ë¥¼ ëˆ„ë¥´ë©´ ì „ìž¥ ì‹ ì²­ì´ ì·¨ì†Œë©ë‹ˆë‹¤. ì•„ëž˜ ë‹¨ì¶”ë¥¼ í´ë¦­í•´ ì£¼ì„¸ìš”.
Do you want to cancel the admission application?
*/
	MSG_REQ_CANCEL_JOINTO_BATTLEFIELD = 0x608,
/*20171018 to latest
%s ì „ìž¥ ìž…ìž¥ ì‹ ì²­ì´ ì·¨ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
Admission request has been cancelled.
*/
	MSG_CANCEL_JOINTO_BATTLEFIELD = 0x609,
/*20171018 to latest
ìž ì‹œí›„ %s ì „ìž¥ìœ¼ë¡œ ì´ë™ í•©ë‹ˆë‹¤. ê³µê°„ ì´ë™ì„ ìœ„í•œ ì•ˆì •ì ì¸ ìƒíƒœë¥¼ í™•ë³´í•´ ì£¼ì‹œê¸¸ ë°”ëžë‹ˆë‹¤. (ê±°ëž˜ ë° ê³µê°„ ì´ë™ ê¸°ëŠ¥ ì¼ì‹œ ì¤‘ì§€ë¨)
Go to the battlefield quickly.
*/
	MSG_MOVETO_BATTLEFIELD = 0x60a,
/*20171018 to latest
ì „ìž¥ ëª…ì¹­
Battlefield - [%s]
*/
	MSG_BATTLEFIELD_NAME = 0x60b,
/*20171018 to latest
ì •ë§ ì´ë™ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you really want to go back to your savepoint?
*/
	MSG_MOVETO_SAVEPOINT = 0x60c,
/*20171018 to latest
íŒŒí‹°ì› ì°¾ê¸° ë©”ì„¸ì§€
Search Message for Party Members
*/
	MSG_VIEW_SEEK_PARTY = 0x60d,
/*20171018 to latest
íŒŒí‹°ì› ì°¾ê¸° ë©”ì„¸ì§€ ì˜µì…˜ì´ êº¼ì ¸ìžˆìŠµë‹ˆë‹¤.
Message option is off the search party members.
*/
	MSG_UNVIEW_SEEK_PARTY = 0x60e,
/*20171018 to latest
10ì´ˆê°„ íŒŒí‹° ì§€ì› ë”œë ˆì´ê°€ ê±¸ë ¤ìžˆìŠµë‹ˆë‹¤.
10 seconds delay of party support is in effect
*/
	MSG_SEEK_PARTY_DEALY = 0x60f,
/*20171018 to latest
 íŒŒí‹°ìž¥ì€ '%s' ë‹˜ ìž…ë‹ˆë‹¤.
Party leader is '%s'.
*/
	MSG_NOTIFY_PARTY_ROLE_MASTER = 0x610,
/*20171018 to latest
ì‹œìŠ¤í…œ ì˜¤ë¥˜ë¡œ ìž…ìž¥ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to enter due to system error.
*/
	MSG_ERROR_SYSTEM_ERROR_BATTLEFIELD = 0x611,
/*20171018 to latest
ëŒ€ê¸° ì¸ì› ìˆ˜ ì´ˆê³¼ë¡œ ìž…ìž¥ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot wait to enter the number of excess.
*/
	MSG_ERROR_FULL_ESROOM_BATTLEFIELD = 0x612,
/*20171018 to latest
ì´ë¯¸ ì‹ ì²­ ë˜ì—ˆìŠµë‹ˆë‹¤.
Has already been applied.
*/
	MSG_ERROR_DOUBLE_OFFER_BATTLEFIELD = 0x613,
/*20171018 to latest
ëŒ€ê¸° ì‹œê°„ì´ ì´ˆê³¼ë˜ì–´ ë“±ë¡ì´ ì·¨ì†Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Registration has been cancelled because of the excessive waiting time.
*/
	MSG_ERROR_WAIT_TIMEOUT_BATTLEFIELD = 0x614,
/*20171018 to latest
ìž…ìž¥ ì¡°ê±´ì´ ë§žì§€ ì•Šì•„, ë“±ë¡ì´ ì·¨ì†Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Unregistered because admission requirements are not matching.
*/
	MSG_ERROR_BATTLEFILD_ENTER_BATTLEFIELD = 0x615,
/*20171018 to latest
ì˜¤ë¥˜ê°€ ë°œìƒí•˜ì—¬ ë“±ë¡ì´ ì·¨ì†Œ ë˜ì—ˆìŠµë‹ˆë‹¤.
Was unregistered and error.
*/
	MSG_ERROR_DROP_ENTRANCESTATION_BATTLEFIELD = 0x616,
/*20171018 to latest
[%s]ì˜ ì—°ê³„ ìŠ¤í‚¬ìž…ë‹ˆë‹¤.
The skill need [%s].
*/
	MSG_USESKILL_FAIL_COMBOSKILL = 0x617,
/*20171018 to latest
íŠ¹ì •ìŠ¤í‚¬ ì˜ ì—°ê³„ ìŠ¤í‚¬ìž…ë‹ˆë‹¤.
The skill need a particular skill.
*/
	MSG_USESKILL_FAIL_COMBOSKILL2 = 0x618,
/*20171018 to latest
ê¸°êµ¬ì²´ %d ê°œê°€ í•„ìš”í•©ë‹ˆë‹¤
Requires %d mind bullets
*/
	MSG_USESKILL_FAIL_SPIRITS = 0x619,
/*20171018 to latest
ê¸°êµ¬ì²´ê°€ í•„ìš”í•©ë‹ˆë‹¤
Mind Bullet is required.
*/
	MSG_USESKILL_FAIL_SPIRITS2 = 0x61a,
/*20171018 to latest
ìµœëŒ€ ì†Œì§€ëŸ‰ ë³´ë‹¤ ë§Žì€ ë£¬ìŠ¤í†¤ì„ ì œìž‘í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot create rune stone more than the maximum amount.
*/
	MSG_RUNESTONE_MAKEERROR_OVERCOUNT = 0x61b,
/*20171018 to latest
ì „ìž¥ ë¦¬ìŠ¤íŠ¸ë¥¼ ë°›ì„ ìˆ˜ ì—†ëŠ” ìƒíƒœìž…ë‹ˆë‹¤. í™•ì¸ í›„ ë‹¤ì‹œ ì‹œë„ í•´ ì£¼ì„¸ìš”.
Not able to receive battle field list. Please check and try again
*/
	MSG_ERROR_LIST_OPEN_BATTLEFIELD = 0x61c,
/*20171018 to latest
ë ˆë²¨ì´ ë¶€ì¡±í•˜ì—¬ ìž…ìž¥ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Level is not high enough to enter
*/
	MSG_ERROR_LEVEL_LIMIT_BATTLEFIELD = 0x61d,
/*20171018 to latest
 1ì°¨ ì§ì—… ìŠ¤í‚¬ %dê°œë¥¼ ë” ì˜¬ë ¤ ì£¼ì‹­ì‹œì˜¤.
You must consume all '%d' points in your 1st Tab.
*/
	MSG_UPGRADESKILLERROR_MORE_FIRSTJOBSKILL = 0x61e,
/*20171018 to latest
 1ì°¨ í˜¹ì€ 2ì°¨ ì§ì—… ìŠ¤í‚¬ %dê°œë¥¼ ë” ì˜¬ë ¤ ì£¼ì‹­ì‹œì˜¤.
You must consume all '%d' remaining points in your 2nd Tab. 1st Tab is already done.
*/
	MSG_UPGRADESKILLERROR_MORE_SECONDJOBSKILL = 0x61f,
/*20171018 to latest
ë³€í™˜ ê°€ëŠ¥í•œ ì•„ì´í…œ
Items available for conversion
*/
	MSG_ITEMSYOUCANCHANGE = 0x620,
/*20171018 to latest
ë³€í™˜í•  ì•„ì´í…œ
Insert items to convert
*/
	MSG_ITEMS_FOR_CHANGE = 0x621,
/*20171018 to latest
ë³€í™˜ì´ ë¶ˆê°€ëŠ¥í•œ ì¡°í•© ìž…ë‹ˆë‹¤.
Inconvertible combination
*/
	MSG_SKILL_RECIPE_NOTEXIST = 0x622,
/*20171018 to latest
ì¸ë²¤í† ë¦¬ì˜ ë¬´ê²Œê°€ ë„ˆë¬´ ë¬´ê²ìŠµë‹ˆë‹¤.
Inventory weight is too much
*/
	MSG_SKILL_INVENTORY_WEIGHT_OVER = 0x623,
/*20171018 to latest
ì¸ë²¤í† ë¦¬ë¥¼ ê³µê°„ì„ í™•ë³´í•´ì£¼ì„¸ìš”.
Please secure some room in the inventory
*/
	MSG_SKILL_INVENTORY_KINDCNT_OVER = 0x624,
/*20171018 to latest
ìž¬ë£Œê°€ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Material doesn't exist
*/
	MSG_SKILL_MATERIAL_FAIL = 0x625,
/*20171018 to latest
ì„±ê³µí•˜ì˜€ìŠµë‹ˆë‹¤.
Successful.
*/
	MSG_SKILL_SUCCESS = 0x626,
/*20171018 to latest
ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed.
*/
	MSG_SKILL_FAIL = 0x627,
/*20171018 to latest
ì‹¤íŒ¨í•˜ì—¬ ëª¨ë“  ìž¬ë£Œê°€ ì‚¬ë¼ì¡ŒìŠµë‹ˆë‹¤.
all materials are gone due to failure
*/
	MSG_SKILL_FAIL_MATERIAL_DESTROY = 0x628,
/*20171018 to latest
ì§€ì •í•˜ì‹  íƒ­ ì´ë¦„ì´ ë„ˆë¬´ ê¸¸ì–´ ë³€ê²½ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
unable to change the name of the specified tab, because it's too long.
*/
	MSG_FAILED_CHANGE_TABNAME = 0x629,
/*20171018 to latest
ë” ì´ìƒ ì¶”ê°€ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot add more.
*/
	MSG_FAILED_ADD_TAB = 0x62a,
/*20171018 to latest
ì¸ì¦ì— ì‹¤íŒ¨ í–ˆìŠµë‹ˆë‹¤.
Authentication failed.
*/
	MSG_FAILED_LOCKSERVER = 0x62b,
/*20171018 to latest
ìžë™ ìž…ë ¥ ë°©ì§€
Bot checks
*/
	MSG_BOT_CHECK = 0x62c,
/*20171018 to latest
ê°ì •ì´ ì•Šëœ ì•„ì´í…œì€ ìž¬ë£Œë¡œ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Items cannot be used in materials cannot be emotional.
*/
	MSG_SKILL_FAIL_MATERIAL_IDENTITY = 0x62d,
/*20171018 to latest
ì ‘ì†í•˜ì‹  IPëŠ” ë¼ê·¸ë‚˜ë¡œí¬ ì˜¨ë¼ì¸ ì´ìš©ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤. ê³ ê° ì§€ì› ì„¼í„° ë˜ëŠ” í™ˆíŽ˜ì´ì§€ë¡œ ë¬¸ì˜ í•´ ì£¼ì‹­ì‹œì˜¤.
It is impossible to connect using this IP in Ragnarok Online. Please contact the customer support center or home.
*/
	MSG_BAN_IP_BLOCK = 0x62e,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ê°€ 6íšŒ ì´ìƒ ìž˜ëª» ìž…ë ¥ë˜ì–´ ìž ì‹œ ë™ì•ˆ ì ‘ì†ì´ ì œí•œë©ë‹ˆë‹¤. ê³ ê°ë‹˜ì˜ ê°œì¸ì •ë³´ë¥¼ ë‹¤ì‹œ í•œ ë²ˆ í™•ì¸í•´ ì£¼ì‹œê¸¸ ë°”ëžë‹ˆë‹¤.
You have entered a wrong password for more than six times, please check your personal information again.
*/
	MSG_BAN_INVALID_PWD_CNT = 0x62f,
/*20171018 to latest
í•©ì„±ì— ì‚¬ìš©í•œ ì•„ì´í…œì€ ì†Œëª¨ë©ë‹ˆë‹¤. ê´œì°®ê² ìŠµë‹ˆê¹Œ?
Consumption items are used in the synthesis. Are you sure?
*/
	MSG_MIX_ACCEPT = 0x630,
/*20171018 to latest
ì™¼ìª½ì— ë³´ì´ëŠ” ê¸€ìž ë° ìˆ«ìžì¡°í•©ì„ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please input the captcha code found at your left side.
*/
	MSG_BOT_CHECK_NOTIC = 0x631,
/*20171018 to latest
ì „ìž¥ ì„¤ëª… - 
Describes the battlefield --
*/
	MSG_DESCRIBE_BATTLEFIELD = 0x632,
/*20171018 to latest
ìž…ìž¥ ëŒ€ê¸° ìƒíƒœ - 
Waiting for admission --
*/
	MSG_BATTLEFIELD_STATUS = 0x633,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ì‹ ì²­ ë„ì›€ë§
Request help battle position
*/
	MSG_BATTLEFIELD_HELP = 0x634,
/*20171018 to latest
ì£„ì†¡í•©ë‹ˆë‹¤. í•´ë‹¹ ì§ì—…ì˜ ìºë¦­í„°ëŠ” í˜„ìž¬ í…ŒìŠ¤íŠ¸ë¥¼ ìœ„í•´ì„œ ì ‘ì†ì´ ê¸ˆì§€ë©ë‹ˆë‹¤.
Sorry the character you are trying to use is banned for testing connection.
*/
	MSG_BAN_NOT_ALLOWED_JOBCLASS = 0x635,
/*20171018 to latest
ëª¨ë“  ìž¥ë¹„ í•´ì œ
Remove all equipment
*/
	MSG_REMOVE_EQUIPEDITEM = 0x636,
/*20171018 to latest
ë¯¸ë‹ˆ ì•„ì´ì½˜
Mini Icon
*/
	MSG_MINI_ICON = 0x637,
/*20171018 to latest
ì§„ì˜ A  :  ì§„ì˜ B
Camp A: Camp B
*/
	MSG_BATTLEFIELD_TEAM = 0x638,
/*20171018 to latest
ëŒ€ê¸°ì—´
Wait
*/
	MSG_WAIT_STATUS = 0x639,
/*20171018 to latest
ì „ìž¥ ì‹ ì²­ ì·¨ì†Œ ì•Œë¦¼
cancellation notice of Battlefield registration.
*/
	MSG_NOTIFY_BATTLEFIELD_CANCEL = 0x63a,
/*20171018 to latest
ì „ìž¥ í•„ìš” ì¸ì›
Required field for staff
*/
	MSG_BATTLEFIELD_COUNT = 0x63b,
/*20171018 to latest
ì „ìž¥ A ëŒ€ê¸° ì¸ì›
Battlefield staff A is waiting.
*/
	MSG_BATTLEFIELD_ATEAM_COUNT = 0x63c,
/*20171018 to latest
ì „ìž¥ B ëŒ€ê¸° ì¸ì›
Battlefield staff B is waiting.
*/
	MSG_BATTLEFIELD_BTEAM_COUNT = 0x63d,
/*20171018 to latest
ë‚´ ëŒ€ê¸° ìƒí™© : %d(ì§„ì˜ A)
Waiting for my situation: %d (Camp A)
*/
	MSG_BATTLEFIELD_ATEAM_WAIT = 0x63e,
/*20171018 to latest
ë‚´ ëŒ€ê¸° ìƒí™© : %d(ì§„ì˜ B)
Waiting for my situation: %d (Camp B)
*/
	MSG_BATTLEFIELD_BTEAM_WAIT = 0x63f,
/*20171018 to latest
ì „ìž¥ ì•„ì´ì½˜ì„ ë³´ì—¬ì¤ë‹ˆë‹¤.
Battlefield display icon.
*/
	MSG_SHOW_BATTLEFIELD_ICON = 0x640,
/*20171018 to latest
ì „ìž¥ ì•„ì´ì½˜ì„ ë³´ì—¬ì£¼ì§€ ì•ŠìŠµë‹ˆë‹¤.
Does not display the icon field.
*/
	MSG_DONT_SHOW_BATTLEFIELD_ICON = 0x641,
/*20171018 to latest
ì „ìž¥ ì´ë™ ì•Œë¦¼
Field notification was moved.
*/
	MSG_NOTIFY_BATTLEFIELD_MOVE = 0x642,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ë³´ë¥˜ ì•Œë¦¼
Admission pending notification of the battlefield
*/
	MSG_NOTIFY_BATTLEFIELD_DEFER = 0x643,
/*20171018 to latest
ëˆ„êµ°ê°€
Anyone
*/
	MSG_WHO_IS = 0x644,
/*20171018 to latest
 [%s](ìœ¼)ë¡œë¶€í„° '%d'ì˜ ë°ë¯¸ì§€ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.
 [%s] deal '%d' damage on you.
*/
	MSG_I_RECEIVED_DAMAGE = 0x645,
/*20171018 to latest
 [%s]ë‹˜ì´ [%s](ìœ¼)ë¡œë¶€í„° '%d'ì˜ ë°ë¯¸ì§€ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.
 [%s] received damage from [%s] with '%d' damage.
*/
	MSG_PARTY_RECEIVED_DAMAGE = 0x646,
/*20171018 to latest
 [%s]ì—ê²Œ '%d'ì˜ ë°ë¯¸ì§€ë¥¼ ì£¼ì—ˆìŠµë‹ˆë‹¤.
 [%s] received '%d' damage.
*/
	MSG_I_GAVE_DAMAGE = 0x647,
/*20171018 to latest
 [%s]ë‹˜ì´ [%s]ì—ê²Œ '%d'ì˜ ë°ë¯¸ì§€ë¥¼ ì£¼ì—ˆìŠµë‹ˆë‹¤.
 [%s] deal damage to [%s] with '%d' damage.
*/
	MSG_PARTY_GAVE_DAMAGE = 0x648,
/*20171018 to latest
%s %d ê°œ ë“œë¡­
You dropped '%s' (%d).
*/
	MSG_DROP_ITEM = 0x649,
/*20171018 to latest
 [%s]í€˜ìŠ¤íŠ¸ì˜ [%s]ëª¬ìŠ¤í„°ë¥¼ ì²˜ì¹˜í•˜ì˜€ìŠµë‹ˆë‹¤. (%d/%d)
[%s] Quest - defeated [%s] progress (%d/%d)
*/
	MSG_CLEAR_QUEST_MONSTER = 0x64a,
/*20171018 to latest
%s í€˜ìŠ¤íŠ¸ê°€ ì‚­ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
The Quest '%s' has been removed.
*/
	MSG_DELETE_QUEST = 0x64b,
/*20171018 to latest
[%s]ë‹˜ì´ 
[%s] has 
*/
	MSG_NOTIFY_WHO = 0x64c,
/*20171018 to latest
'%d'ì˜ ê²½í—˜ì¹˜ë¥¼ 
You acquired '%d' Experience Points
*/
	MSG_NOTIFY_EXP = 0x64d,
/*20171018 to latest
'%d'ì˜ ìž¡ê²½í—˜ì¹˜ë¥¼ 
You acquired '%d' Job Experience Points
*/
	MSG_NOTIFY_JOBEXP = 0x64e,
/*20171018 to latest
íšë“í–ˆìŠµë‹ˆë‹¤.
 gained.
*/
	MSG_GET = 0x64f,
/*20171018 to latest
ìƒì‹¤í–ˆìŠµë‹ˆë‹¤.
 has lost.
*/
	MSG_LOSS = 0x650,
/*20171018 to latest
 [%s](ìœ¼)ë¡œë¶€í„° '%d'ì˜ ì½”ì¸ì„ ìŠ¤í‹¸í–ˆìŠµë‹ˆë‹¤.
From [%s], '%d' coins were stolen.
*/
	MSG_NOTIFY_STEAL_COIN = 0x651,
/*20171018 to latest
ì „íˆ¬ ë©”ì‹œì§€
Battle Message
*/
	MSG_VIEW_COMBAT_MSG = 0x652,
/*20171018 to latest
íŒŒí‹°ì› ì „íˆ¬ ë©”ì‹œì§€
Display Party Battle Message
*/
	MSG_VIEW_PARTY_COMBAT_MSG = 0x653,
/*20171018 to latest
íšë“ ê²½í—˜ì¹˜
Display Experience Message
*/
	MSG_VIEW_GETTING_EXP_MSG = 0x654,
/*20171018 to latest
íŒŒí‹°ì›ì˜ íšë“ ê²½í—˜ì¹˜
Display Party Experience Message
*/
	MSG_VIEW_PARTY_GETTING_EXP_MSG = 0x655,
/*20171018 to latest
í€˜ìŠ¤íŠ¸ ì •ë³´ í‘œì‹œ
Display Quest Info Message
*/
	MSG_VIEW_QUEST_INFO_MSG = 0x656,
/*20171018 to latest
ì „ìž¥ ì •ë³´ í‘œì‹œ
Display Battlefield Message
*/
	MSG_VIEW_BATTLEFIELD_INFO_MSG = 0x657,
/*20171018 to latest
[%s]ì—ê²Œ 
[%s] 
*/
	MSG_NOTIFY_TARGET_WHO = 0x658,
/*20171018 to latest
[%s] ìŠ¤í‚¬ì„ ì‚¬ìš©í•©ë‹ˆë‹¤.
Casts [%s] skill.
*/
	MSG_NOTIFY_SKILL_TO_TARGET = 0x659,
/*20171018 to latest
ê¸°ëŠ¥ì œí•œìƒíƒœ
Activate lock function
*/
	MSG_LOCK_MOUSE = 0x65a,
/*20171018 to latest
ê¸°ëŠ¥ì œí•œí•´ì œìƒíƒœ
Deactivate lock function
*/
	MSG_UNLOCK_MOUSE = 0x65b,
/*20171018 to latest
[%s]ë‹˜ì´ [%s](ìœ¼)ë¡œë¶€í„° '%s' ë¥¼ íšë“ í–ˆìŠµë‹ˆë‹¤.
Citizens of Midgard, Lady Luck shines upon [%s] !! [%s] has awarded the player with '%s' !!
*/
	MSG_BROADCASTING_SPECIAL_ITEM_OBTAIN = 0x65c,
/*20171018 to latest
ì†Œë“œë§¨
Swordman
*/
	MSG_JOB_SWORDMAN = 0x65d,
/*20171018 to latest
ë§¤ì§€ì…˜
Magician
*/
	MSG_JOB_MAGICIAN = 0x65e,
/*20171018 to latest
ì•„ì²˜
Archer
*/
	MSG_JOB_ARCHER = 0x65f,
/*20171018 to latest
ì–´ì½œë¼ì´íŠ¸
Acolyte
*/
	MSG_JOB_ACOLYTE = 0x660,
/*20171018 to latest
ë¨¸ì²¸íŠ¸
Merchant
*/
	MSG_JOB_MERCHANT = 0x661,
/*20171018 to latest
ì”¨í”„
Thief
*/
	MSG_JOB_THIEF = 0x662,
/*20171018 to latest
ë‚˜ì´íŠ¸
Knight
*/
	MSG_JOB_KNIGHT = 0x663,
/*20171018 to latest
í”„ë¦¬ìŠ¤íŠ¸
Priest
*/
	MSG_JOB_PRIEST = 0x664,
/*20171018 to latest
ìœ„ì €ë“œ
Wizard
*/
	MSG_JOB_WIZARD = 0x665,
/*20171018 to latest
ë¸”ëž™ìŠ¤ë¯¸ìŠ¤
Black Smith
*/
	MSG_JOB_BLACKSMITH = 0x666,
/*20171018 to latest
í—Œí„°
Hunter
*/
	MSG_JOB_HUNTER = 0x667,
/*20171018 to latest
ì–´ìƒˆì‹ 
Assasin
*/
	MSG_JOB_ASSASSIN = 0x668,
/*20171018 to latest
í¬ë£¨ì„¸ì´ë”
Crusader
*/
	MSG_JOB_CRUSADER = 0x669,
/*20171018 to latest
ëª½í¬
Monk
*/
	MSG_JOB_MONK = 0x66a,
/*20171018 to latest
ì„¸ì´ì§€
Sage
*/
	MSG_JOB_SAGE = 0x66b,
/*20171018 to latest
ë¡œê·¸
Rogue
*/
	MSG_JOB_ROGUE = 0x66c,
/*20171018 to latest
ì•Œì¼€ë¯¸ìŠ¤íŠ¸
Alchemist
*/
	MSG_JOB_ALCHEMIST = 0x66d,
/*20171018 to latest
ë°”ë“œ
Bard
*/
	MSG_JOB_BARD = 0x66e,
/*20171018 to latest
ëŒ„ì„œ
Dancer
*/
	MSG_JOB_DANCER = 0x66f,
/*20171018 to latest
ë£¬ ë‚˜ì´íŠ¸
Rune Knight
*/
	MSG_JOB_RUNE_KNIGHT = 0x670,
/*20171018 to latest
ì›Œë¡
Warlock
*/
	MSG_JOB_WARLOCK = 0x671,
/*20171018 to latest
ë ˆì¸ì ¸
Ranger
*/
	MSG_JOB_RANGER = 0x672,
/*20171018 to latest
ì•„í¬ ë¹„ìˆ
Arc Bishop
*/
	MSG_JOB_ARCHBISHOP = 0x673,
/*20171018 to latest
ë¯¸ì¼€ë‹‰
Mechanic
*/
	MSG_JOB_MECHANIC = 0x674,
/*20171018 to latest
ê¸¸ë¡œí‹´ í¬ë¡œìŠ¤
Guillotine Cross
*/
	MSG_JOB_GUILLOTINE_CROSS = 0x675,
/*20171018 to latest
ë¡œì–„ê°€ë“œ
Royal Guard
*/
	MSG_JOB_ROYAL_GUARD = 0x676,
/*20171018 to latest
ì†Œì„œëŸ¬
Sorcerer
*/
	MSG_JOB_SORCERER = 0x677,
/*20171018 to latest
ë¯¼ìŠ¤íŠ¸ëŸ´
Minstrel
*/
	MSG_JOB_MINSTREL = 0x678,
/*20171018 to latest
ì›ë”ëŸ¬
Wanderer
*/
	MSG_JOB_WANDERER = 0x679,
/*20171018 to latest
ìˆ˜ë¼
Sura
*/
	MSG_JOB_SURA = 0x67a,
/*20171018 to latest
ì œë„¤ë¦­
Genetic
*/
	MSG_JOB_GENETIC = 0x67b,
/*20171018 to latest
ì‰ë„ìš° ì²´ì´ì„œ
Shadow Chaser
*/
	MSG_JOB_SHADOW_CHASER = 0x67c,
/*20171018 to latest
ì†Œë“œë§¨ í•˜ì´
High Swordman
*/
	MSG_JOB_SWORDMAN_H = 0x67d,
/*20171018 to latest
ë§¤ì§€ì…˜ í•˜ì´
High Magician
*/
	MSG_JOB_MAGICIAN_H = 0x67e,
/*20171018 to latest
ì•„ì²˜ í•˜ì´
High Archer
*/
	MSG_JOB_ARCHER_H = 0x67f,
/*20171018 to latest
ì–´ì½œë¼ì´íŠ¸ í•˜ì´
High Acolyte
*/
	MSG_JOB_ACOLYTE_H = 0x680,
/*20171018 to latest
ë¨¸ì²¸íŠ¸ í•˜ì´
High Merchant
*/
	MSG_JOB_MERCHANT_H = 0x681,
/*20171018 to latest
ì”¨í”„ í•˜ì´
High Thief
*/
	MSG_JOB_THIEF_H = 0x682,
/*20171018 to latest
ë¡œë“œë‚˜ì´íŠ¸
Lord Knight
*/
	MSG_JOB_KNIGHT_H = 0x683,
/*20171018 to latest
í•˜ì´í”„ë¦¬ìŠ¤íŠ¸
High Priest
*/
	MSG_JOB_PRIEST_H = 0x684,
/*20171018 to latest
í•˜ì´ìœ„ì €ë“œ
High Wizard
*/
	MSG_JOB_WIZARD_H = 0x685,
/*20171018 to latest
í™”ì´íŠ¸ìŠ¤ë¯¸ìŠ¤
White Smith
*/
	MSG_JOB_BLACKSMITH_H = 0x686,
/*20171018 to latest
ìŠ¤ë‚˜ì´í¼
Sniper
*/
	MSG_JOB_HUNTER_H = 0x687,
/*20171018 to latest
ì–´ìƒˆì‹ í¬ë¡œìŠ¤
Assasin Cross
*/
	MSG_JOB_ASSASSIN_H = 0x688,
/*20171018 to latest
íŒ”ë¼ë”˜
Paladin
*/
	MSG_JOB_CRUSADER_H = 0x689,
/*20171018 to latest
ì±”í”¼ì˜¨
Champion
*/
	MSG_JOB_MONK_H = 0x68a,
/*20171018 to latest
í”„ë¡œíŽ˜ì„œ
Professor
*/
	MSG_JOB_SAGE_H = 0x68b,
/*20171018 to latest
ìŠ¤í† ì»¤
Stalker
*/
	MSG_JOB_ROGUE_H = 0x68c,
/*20171018 to latest
í¬ë¦¬ì—ì´í„°
Creator
*/
	MSG_JOB_ALCHEMIST_H = 0x68d,
/*20171018 to latest
í´ë¡œìš´
Clown
*/
	MSG_JOB_BARD_H = 0x68e,
/*20171018 to latest
ì§‘ì‹œ
Gypsy
*/
	MSG_JOB_DANCER_H = 0x68f,
/*20171018 to latest
ë…¸ë¹„ìŠ¤
Wedding
*/
	MSG_JOB_NOVICE = 0x690,
/*20171018 to latest
í•˜ì´ë…¸ë¹„ìŠ¤
High Novice
*/
	MSG_JOB_NOVICE_H = 0x691,
/*20171018 to latest
ìŠˆí¼ë…¸ë¹„ìŠ¤
Super Novice
*/
	MSG_JOB_SUPERNOVICE = 0x692,
/*20171018 to latest
ê±´ìŠ¬ë§ê±°
Gunslinger
*/
	MSG_JOB_GUNSLINGER = 0x693,
/*20171018 to latest
ë‹Œìž
Ninja
*/
	MSG_JOB_NINJA = 0x694,
/*20171018 to latest
íƒœê¶Œì†Œë…„/ì†Œë…€
Taekwon F/M
*/
	MSG_JOB_TAEKWON = 0x695,
/*20171018 to latest
ê¶Œì„±
Star Gladiator
*/
	MSG_JOB_STAR = 0x696,
/*20171018 to latest
ì†Œìš¸ë§ì»¤
Soul Linker
*/
	MSG_JOB_LINKER = 0x697,
/*20171018 to latest
íŒŒí‹°ëª¨ì§‘
Party Recruitment
*/
	MSG_SEEK_PARTY_MEMBER = 0x698,
/*20171018 to latest
íŒŒí‹° ëª¨ì§‘ ë¦¬ìŠ¤íŠ¸
Party Booking List
*/
	MSG_SEEK_PARTY_LIST = 0x699,
/*20171018 to latest
íŒŒí‹° ëª¨ì§‘ ì¤‘
Recruiting Party
*/
	MSG_SEEK_PARTY_CHECK = 0x69a,
/*20171018 to latest
[í™œ]ì„ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
[Bow] must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_BOW = 0x69b,
/*20171018 to latest
[ì•…ê¸°/ì±„ì°]ì„ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
[Musical Instrument/Whip] must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_INSTRUMENT_WHIP = 0x69c,
/*20171018 to latest
ì˜ë¬¸ê³¼ ìˆ«ìžë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
Only alphanumeric characters are allowed.
*/
	MSG_BAD_CHAR = 0x69d,
/*20171018 to latest
ì•Œë¦¼
Notice
*/
	MSG_ALRAM = 0x69e,
/*20171018 to latest
ìƒì  ì •ë³´ê°€ ì •í™•í•˜ì§€ ì•Šì•„ ì•„ì´í…œ êµ¬ë§¤ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Item purchase failed due to incorrect shop information.
*/
	MSG_FAIL_BUY_ITEM_INVALID_MCSTORE = 0x69f,
/*20171018 to latest
ì†Œì§€ ì•„ì´í…œ ì°½ì—ì„œ ë²„ë¦´ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Item cannot be discarded from the window.
*/
	MSG_CAN_DROP_ITEM_TO_ITEMWND = 0x6a0,
/*20171018 to latest
ì‹œê°„
Time
*/
	MSG_TIME = 0x6a1,
/*20171018 to latest
ë§µ
Map
*/
	MSG_MAP = 0x6a2,
/*20171018 to latest
ê±°ëž˜ ìƒíƒœì—ì„œëŠ” ì•„ì´í…œ ì‚¬ìš© ë° ìž¥ë¹„ ì°©ìš©/í•´ì œë¥¼ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't use, equip or disarm items when you're trading.
*/
	MSG_CANT_USE_WHEN_OPENED_EXCHANGEWND = 0x6a3,
/*20171018 to latest
ë¯¸ì§€ì •ê°’
Unspecified value
*/
	MSG_HOTKEY_UNKOWN = 0x6a4,
/*20171018 to latest
/stateinfo : ìƒíƒœ ì•„ì´ì½˜ì— ëŒ€í•œ ì„¤ëª…ì„ ë³´ì—¬ì¤ë‹ˆë‹¤. On Off
/stateinfo: Shows the description of status icons. On Off
*/
	MSG_EXPLAIN_STATEINFO = 0x6a5,
/*20171018 to latest
ìƒíƒœ ì •ë³´ On : ìƒíƒœ ì•„ì´ì½˜ì— ëŒ€í•œ ì„¤ëª…ì´ í‘œì‹œë©ë‹ˆë‹¤. 
Status Information On: Status icon description is enabled.
*/
	MSG_SHOW_STATEINFO_ON = 0x6a6,
/*20171018 to latest
ìƒíƒœ ì •ë³´ Off: ìƒíƒœ ì•„ì´ì½˜ì— ëŒ€í•œ ì„¤ëª…ì´ í‘œì‹œë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Status Information Off: Status icon description is disabled.
*/
	MSG_SHOW_STATEINFO_OFF = 0x6a7,
/*20171018 to latest
ê°™ì€ ì•„ì´í…œì€ í•œë²ˆì— %dê°œ ì´ìƒì€ ì‚´ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
It is not possible to purchase the same item more than %d pieces at a time
*/
	MSG_LIMIT_BUY_ITEM2 = 0x6a8,
/*20171018 to latest
ê°™ì€ ì•„ì´í…œì€ í•œë²ˆì— %dê°œ ì´ìƒì€ íŒ” ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
It is not possible to purchase the same item more than %d pieces at a time
*/
	MSG_LIMIT_SELL_ITEM = 0x6a9,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œì˜ ì´ êµ¬ë§¤ ê°€ëŠ¥ ê°œìˆ˜ëŠ” %dê°œ ìž…ë‹ˆë‹¤.
Can purchase upto %d pieces of the same item at a time.
*/
	MSG_CAN_BUY_ITEM_NUM = 0x6aa,
/*20171018 to latest
ì„¤ì •í•œ ë‚´ìš©ì€ ì •ìƒ ì¢…ë£Œ ì‹œ [%s\%s]ì— ì €ìž¥ë©ë‹ˆë‹¤.
User customized key is saved to [%s\%s]
*/
	MSG_SAVE_HOTKEY_TO_FILE = 0x6ab,
/*20171018 to latest
[%s] ë‹˜ì€ í˜„ìž¬ êµí™˜ ì‹ ì²­ì„ ë°›ì„ ìˆ˜ ì—†ëŠ” ìƒíƒœìž…ë‹ˆë‹¤.
[%s] is currently on trade and cannot accept the request.
*/
	MSG_CHARACTER_IS_BUSY = 0x6ac,
/*20171018 to latest
RO_HELP
RO_HELP.
*/
	MSG_RO_HELP = 0x6ad,
/*20171018 to latest
ëª¨ë£¨ê°€ ì¡´ìž¬ í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Anvil does not exist.
*/
	MSG_HAVENOT_ANVIL = 0x6ae,
/*20171018 to latest
ë…¸ë¹„ìŠ¤ ë ˆë²¨ 10 ì´í•˜ëŠ” ê·“ì†ë§ì´ ê¸ˆì§€ë©ë‹ˆë‹¤
Novice below level 10 is not allowed to whisper.
*/
	MSG_WHISPER_BLOCK_NOVICE_LEVEL10 = 0x6af,
/*20171018 to latest
ê³µê²©
Attack
*/
	MSG_JOB_ATTACKER = 0x6b0,
/*20171018 to latest
ë°©ì–´
Defense
*/
	MSG_JOB_TANKER = 0x6b1,
/*20171018 to latest
íšŒë³µ
Consumables
*/
	MSG_JOB_HEALER = 0x6b2,
/*20171018 to latest
ë³´ì¡°
Support
*/
	MSG_JOB_ASSISTANCE = 0x6b3,
/*20171018 to latest
íŒŒí‹° ëª¨ì§‘ ê´€ë ¨ ëª…ë ¹ì–´
Party recruitment related command
*/
	MSG_DESCRIBE_PARTY_BOOKING = 0x6b4,
/*20171018 to latest
ê¸¸ë“œ ë™ë§¹ì‹ ì²­ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤
Guild alliance application is not possible.
*/
	MSG_GUILD_ALLY_REQUEST_DISABLE = 0x6b5,
/*20171018 to latest
ê¸¸ë“œ ì ëŒ€ì‹ ì²­ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤
Guild hostility application is not possible.
*/
	MSG_GUILD_HOSTILE_REQUEST_DISABLE = 0x6b6,
/*20171018 to latest
ì•„ì§€íŠ¸ë§µì—ì„œëŠ” ì¹œêµ¬ì¶”ê°€ê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤
Adding friends is not possible in this map.
*/
	MSG_FRIEND_ADD_FALSE_AGIT = 0x6b7,
/*20171018 to latest
êµ¬ë§¤ë…¸ì  ê°œì„¤
Buying Store Window
*/
	MSG_BUYINGSTORE_MAKEWND_TITLE = 0x6b8,
/*20171018 to latest
êµ¬ë§¤ê°€ :
Price: 
*/
	MSG_BUYINGSTORE_MAKEWND_PRICE = 0x6b9,
/*20171018 to latest
ì†Œì§€ì•¡ : 
Money: 
*/
	MSG_BUYINGSTORE_MAKEWND_MYZENY = 0x6ba,
/*20171018 to latest
êµ¬ë§¤ í•œë„ì•¡
Purchase Zeny Limit
*/
	MSG_BUYINGSTORE_MAKEWND_LIMITZENY = 0x6bb,
/*20171018 to latest
êµ¬ë§¤í•  ì•„ì´í…œì„ ë“±ë¡í•˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤. êµ¬ë§¤í•˜ì‹¤ ì•„ì´í…œì„ ë“±ë¡í•´ ì£¼ì„¸ìš”
Please register the item first that has to be purchased.
*/
	MSG_BUYINGSTORE_MAKEWND_ADDITEM = 0x6bc,
/*20171018 to latest
%s ì•„ì´í…œì˜ ê°€ê²©ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Enter the price for item %s.
*/
	MSG_BUYINGSTORE_MAKEWND_INPUTPRICE = 0x6bd,
/*20171018 to latest
%s ì•„ì´í…œì˜ ê°€ê²©ì„ 9999ë§Œ Zenyì´í•˜ë¡œ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Enter the price for item %s. It has to be below 99990000 Zeny.
*/
	MSG_BUYINGSTORE_MAKEWND_REINPUTPRICE = 0x6be,
/*20171018 to latest
%s ì•„ì´í…œì˜ êµ¬ë§¤ìˆ˜ëŸ‰ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Enter the item number for %s.
*/
	MSG_BUYINGSTORE_MAKEWND_INPUTNUM = 0x6bf,
/*20171018 to latest
%s ì•„ì´í…œì˜ ì†Œì§€ìˆ˜ëŸ‰ê³¼ êµ¬ë§¤ìˆ˜ëŸ‰ì˜ í•©ì´ 9999ê°œ ì´ìƒìž…ë‹ˆë‹¤. 9999ê°œ ì´í•˜ì˜ ìˆ˜ëŸ‰ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
The sum of purchasing and belonging items is over 9999. The sum has to be bellow 9999.
*/
	MSG_BUYINGSTORE_MAKEWND_REINPUTNUM = 0x6c0,
/*20171018 to latest
ì¤‘ë³µëœ ì•„ì´í…œì´ ì¡´ìž¬í•©ë‹ˆë‹¤.
You have duplicate items in your purchase list.
*/
	MSG_BUYINGSTORE_MAKEWND_DUPLICATEITEM = 0x6c1,
/*20171018 to latest
ì œí•œ ê¸ˆì•¡ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”
Enter the limited price.
*/
	MSG_BUYINGSTORE_MAKEWND_INPUTLIMITZENY = 0x6c2,
/*20171018 to latest
ìž…ë ¥í•œ ì œí•œê¸ˆì•¡ì´ ì†Œì§€ê¸ˆì•¡ì„ ì´ˆê³¼í•©ë‹ˆë‹¤. ë‹¤ì‹œ ì„¤ì •í•´ ì£¼ì„¸ìš”
You have entered a greater amount of zeny than you have. Please check your zeny.
*/
	MSG_BUYINGSTORE_MAKEWND_REINPUTLIMITZENY = 0x6c3,
/*20171018 to latest
%s  :  %s  Zeny => %s EA
%s: %s  Zeny => %s ea.
*/
	MSG_BUYINGSTORE_MAKEWND_ITEMLIST = 0x6c4,
/*20171018 to latest
êµ¬ë§¤ ê°€ëŠ¥í•œ ì•„ì´í…œ ëª©ë¡
Available items:
*/
	MSG_BUYINGSTORE_MIRRORBUYITEMLIST = 0x6c5,
/*20171018 to latest
ë‚˜ì˜ êµ¬ë§¤ë…¸ì 
Purchase list:
*/
	MSG_BUYINGSTORE_MYSHOPWND_TITLE = 0x6c6,
/*20171018 to latest
ì œí•œê¸ˆì•¡ : %s Zeny
Price limit: %s Zeny
*/
	MSG_BUYINGSTORE_MYSHOPWND_LIMITZENY = 0x6c7,
/*20171018 to latest
%s %s Zeny %d ê°œ
Buying %s for %s Zeny. Amount: %d.
*/
	MSG_BUYINGSTORE_MYSHOPWND_ITEMINFO = 0x6c8,
/*20171018 to latest
êµ¬ë§¤ ë…¸ì 
Wanted items
*/
	MSG_BUYINGSTORE_SHOPWND_TITLE = 0x6c9,
/*20171018 to latest
íŒë§¤ ê°€ëŠ¥í•œ ì•„ì´í…œ ëª©ë¡
Available items:
*/
	MSG_BUYINGSTORE_MIRRORSELLWND_TITLE = 0x6ca,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œì˜ ì´ íŒë§¤ ê°€ëŠ¥ ê°œìˆ˜ëŠ” %dê°œ ìž…ë‹ˆë‹¤.
The max. number of items you can sell is %d.
*/
	MSG_BUYINGSTORE_SELLWND_LIMITNUM = 0x6cb,
/*20171018 to latest
êµ¬ë§¤ë…¸ì ì˜ ì œí•œê¸ˆì•¡ì„ ì´ˆê³¼í•˜ì—¬ íŒë§¤í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Buyer has insufficient money, lower the amount of items you're selling.
*/
	MSG_BUYINGSTORE_SELLWND_LACKBUYERZENY = 0x6cc,
/*20171018 to latest
êµ¬ë§¤ìƒì  ê°œì„¤ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Failed to open purchase shop.
*/
	MSG_BUYINGSTORE_OPEN_FAILED = 0x6cd,
/*20171018 to latest
ì•„ì´í…œì˜ ì´ ë¬´ê²Œê°€ %d ë§Œí¼ ì†Œì§€ í•œê³„ëŸ‰ì„ ì´ˆê³¼í•©ë‹ˆë‹¤. ë‹¤ì‹œ ì„¤ì •í•´ ì£¼ì„¸ìš”.
You exceed the total amount of items.
*/
	MSG_BUYINGSTORE_OVERWEIGHT = 0x6ce,
/*20171018 to latest
ì œí•œê¸ˆì•¡ë§Œí¼ì˜ ì•„ì´í…œì„ ëª¨ë‘ êµ¬ë§¤í•˜ì˜€ìŠµë‹ˆë‹¤.
You have purchased all items within the limited price.
*/
	MSG_BUYINGSTORE_TRADE_OVERLIMITZENY = 0x6cf,
/*20171018 to latest
ì•„ì´í…œì„ ëª¨ë‘ êµ¬ë§¤í–ˆìŠµë‹ˆë‹¤.
You purchased all items.
*/
	MSG_BUYINGSTORE_TRADE_BUYCOMPLETE = 0x6d0,
/*20171018 to latest
êµ¬ë§¤ìžì˜ ìž”ì•¡ì´ ë¶€ì¡±í•˜ì—¬ ê±°ëž˜ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to deal because you have not enough Zeny.
*/
	MSG_BUYINGSTORE_TRADE_LACKBUYERZENY = 0x6d1,
/*20171018 to latest
%s %dê°œë¥¼ %dzì— íŒë§¤í•˜ì˜€ìŠµë‹ˆë‹¤.
You have sold %s. Amount: %d. Total Zeny: %dz
*/
	MSG_BUYINGSTORE_TRADE_SELLCOMPLETE = 0x6d2,
/*20171018 to latest
%s ì•„ì´í…œì€ í¬ë§ êµ¬ë§¤ê°¯ìˆ˜ë³´ë‹¤ ìˆ˜ëŸ‰ì´ ë§Žì•„ íŒë§¤í•˜ì§€ ëª»í•˜ì˜€ìŠµë‹ˆë‹¤
%s item could not be sold because you do not have the wanted amount of items.
*/
	MSG_BUYINGSTORE_TRADE_OVERCOUNT = 0x6d3,
/*20171018 to latest
ì†Œí™˜ëœ ì •ë ¹ì´ ì—†ìŠµë‹ˆë‹¤.
You don't have any summoned spirits.
*/
	MSG_USESKILL_FAIL_EL_SUMMON = 0x6d4,
/*20171018 to latest
ì„œë²„ì—°í•©ëŒ€ì „ ì œì•½ì‚¬í•­ ìž…ë‹ˆë‹¤.
This is a restricted server.
*/
	MSG_AGAINSTSERVERSIEGEWARFARE_RESTRICTION = 0x6d5,
/*20171018 to latest
OTP ë¹„ë°€ë²ˆí˜¸ëŠ” 6ìžë¦¬ ìž…ë‹ˆë‹¤.
OTP password is 6 digits long.
*/
	MSG_OTP_MUST_6_CHAR = 0x6d6,
/*20171018 to latest
OTP ì •ë³´ê°€ ì—†ìŠµë‹ˆë‹¤. ê´€ë¦¬ìžì—ê²Œ ë¬¸ì˜í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
OTP information is unavailable. Please contact your administrator.
*/
	MSG_DB_ERROR = 0x6d7,
/*20171018 to latest
OTP ì¸ì¦ì— ì‹¤íŒ¨ í–ˆìŠµë‹ˆë‹¤.
OTP authentication failed.
*/
	MSG_OTP_FAILED = 0x6d8,
/*20171018 to latest
íŒŒí‹°ê´‘ê³ ê°€ ì¶”ê°€ë˜ì—ˆìŠµë‹ˆë‹¤
Party ad has been added.
*/
	MSG_PARTY_BOOKING_NOTIFY = 0x6d9,
/*20171018 to latest
ëª¨ì§‘ ì¤‘
Recruit party members
*/
	MSG_PARTY_BOOKING_REQURT = 0x6da,
/*20171018 to latest
ì—­í• 
Roles
*/
	MSG_PARTY_BOOKING_TYPE = 0x6db,
/*20171018 to latest
1ì°¨ ì§ì—…
1st Jobs
*/
	MSG_PARTY_BOOKING_TYPE_1 = 0x6dc,
/*20171018 to latest
2ì°¨ ì§ì—…
2nd Jobs
*/
	MSG_PARTY_BOOKING_TYPE_2 = 0x6dd,
/*20171018 to latest
3-1ì°¨ ì§ì—…
3-1 Classes
*/
	MSG_PARTY_BOOKING_TYPE_3_1 = 0x6de,
/*20171018 to latest
3-2ì°¨ ì§ì—…
3-2 Classes
*/
	MSG_PARTY_BOOKING_TYPE_3_2 = 0x6df,
/*20171018 to latest
ì „ìŠ¹ 1ì°¨ ì§ì—…
1st Job High
*/
	MSG_PARTY_BOOKING_TYPE_1PLUS = 0x6e0,
/*20171018 to latest
ì „ìŠ¹ 2ì°¨ ì§ì—…
2nd Jobs High
*/
	MSG_PARTY_BOOKING_TYPE_2PLUS = 0x6e1,
/*20171018 to latest
ê¸°íƒ€ ì§ì—…êµ°
Other Jobs
*/
	MSG_PARTY_BOOKING_TYPE_ETC = 0x6e2,
/*20171018 to latest
ëª¨ì§‘ í•˜ê¸°
Recruit
*/
	MSG_PARTY_BOOKING_REQURTING = 0x6e3,
/*20171018 to latest
íŒŒí‹°ì›ì„ ëª¨ì§‘í•©ë‹ˆë‹¤.
Open party recruitment window.
*/
	MSG_PARTY_BOOKING_REQURT_TIP = 0x6e4,
/*20171018 to latest
ê²€ìƒ‰ ì¤‘ - 
Searching - 
*/
	MSG_PARTY_BOOKING_SEARCH = 0x6e5,
/*20171018 to latest
ëª¨ë‘ ì„ íƒ
Select All
*/
	MSG_PARTY_BOOKING_ALL_SELECT = 0x6e6,
/*20171018 to latest
ìµœì†Œí•œ í•˜ë‚˜ì˜ ì§ì—…ì´ ëª¨ì§‘ ì¤‘ì´ì–´ì•¼ í•©ë‹ˆë‹¤.
Recruitment of at least one job must be running.
*/
	MSG_PARTY_BOOKING_ERR1 = 0x6e7,
/*20171018 to latest
ìµœì†Œ 1ê°œì´ìƒì˜ ì§ì—…ì„ ì„ íƒí•´ ì£¼ì…”ì•¼ í•©ë‹ˆë‹¤.
You have to select atleast 1 or more jobs.
*/
	MSG_PARTY_BOOKING_ERR2 = 0x6e8,
/*20171018 to latest
ì„ íƒëœ ì§ì—…ì€ %dê°œìž…ë‹ˆë‹¤. ìµœëŒ€ 6ê°œê¹Œì§€ë§Œ ì§ì—…ì„ ì„ íƒí•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
You have selected %d Jobs. You can only select up to 6 different jobs.
*/
	MSG_PARTY_BOOKING_ERR3 = 0x6e9,
/*20171018 to latest
ë ˆë²¨ì— ìˆ«ìž ì´ì™¸ì˜ ë¬¸ìžëŠ” ë“¤ì–´ê°ˆ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Only numeric characters are allowed.
*/
	MSG_PARTY_BOOKING_ERR4 = 0x6ea,
/*20171018 to latest
ë ˆë²¨ì€ 1~150 ì‚¬ì´ì˜ ìˆ«ìžë¥¼ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Please enter levels between 1~150.
*/
	MSG_PARTY_BOOKING_ERR5 = 0x6eb,
/*20171018 to latest
 í•´ë‹¹ ë§µì—ì„œëŠ” ì˜ìƒ ìž¥ë¹„ê°€ ë³´ì´ì§€ ì•ŠìŠµë‹ˆë‹¤.
Nothing found in the selected map.
*/
	MSG_DISABLE_COSTUMEITEM_MAP = 0x6ec,
/*20171018 to latest
ì•„ì´í…œì„ ì°©ìš©í•  ìˆ˜ ìžˆëŠ” ë ˆë²¨ì´ ì•„ë‹™ë‹ˆë‹¤.
You cannot equip this item with your current level.
*/
	MSG_CANNOT_EQUIP_ITEM_LEVEL = 0x6ed,
/*20171018 to latest
ì•„ì´í…œì„ ì‚¬ìš©í•  ìˆ˜ ìžˆëŠ” ë ˆë²¨ì´ ì•„ë‹™ë‹ˆë‹¤.
You cannot use this item with your current level.
*/
	MSG_CANNOT_USE_ITEM_LEVEL = 0x6ee,
/*20171018 to latest
  ì±„íŒ…ëª¨ë“œ OnOff í™œì„±í™”
Enable Battlemode
*/
	MSG_CHATMODE_ONOFF = 0x6ef,
/*20171018 to latest
íƒ­ì‚¬ì´ì¦ˆ í¬ê¸°ê°€ ì´ˆê³¼ë˜ì–´ ì¶”ê°€í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Failed to add because you have reached the limit.
*/
	MSG_OVER_TABSIZE = 0x6f0,
/*20171018 to latest
 ì°½ í‘œì‹œ ì •ë³´
Window Sign Information
*/
	MSG_SET_CHATINFO = 0x6f1,
/*20171018 to latest
íŒë§¤
Sell
*/
	MSG_SELL = 0x6f2,
/*20171018 to latest
êµ¬ë§¤
Purchase
*/
	MSG_BUY = 0x6f3,
/*20171018 to latest
ë…¸ì  ê²€ìƒ‰
Search for Vends
*/
	MSG_SEARCH_STOREINFO = 0x6f4,
/*20171018 to latest
ë…¸ì  ì´ë¦„
Shop Name
*/
	MSG_STORE_NAME = 0x6f5,
/*20171018 to latest
ìˆ˜ëŸ‰
Quantity
*/
	MSG_SEARCH_ITEM_COUNT = 0x6f6,
/*20171018 to latest
ê°€ê²©
Cost
*/
	MSG_SEARCH_ITEM_PRICE = 0x6f7,
/*20171018 to latest
ê²€ìƒ‰ ê²°ê³¼ê°€ ë„ˆë¬´ ë§ŽìŠµë‹ˆë‹¤. ê²€ìƒ‰ì–´ë¥¼ ìžì„¸ížˆ ìž…ë ¥ í•´ ì£¼ì„¸ìš”.
Too much results have been found. Please do a more precisely search.
*/
	MSG_SSI_FAILED_OVER_MAXCOUNT = 0x6f8,
/*20171018 to latest
í•´ë‹¹ ë…¸ì ì„ ì—¬ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to open a street stall?
*/
	MSG_OPEN_SEARCH_STORE = 0x6f9,
/*20171018 to latest
SSO ì¸ì¦ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to recognize SSO.
*/
	MSG_SSO_FAILED = 0x6fa,
/*20171018 to latest
í˜„ìž¬ í•´ë‹¹ì§€ì—­ìœ¼ë¡œ ì´ë™ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
Cannot move to the applied area.
*/
	MSG_ZONE_MOVE_FAIL = 0x6fb,
/*20171018 to latest
ë‹¨ì–´ê°€ í¬í•¨ëœ ì•„ì´í…œ ê²€ìƒ‰
searching  item including the word
*/
	MSG_SEARCH_INCLUDED = 0x6fc,
/*20171018 to latest
íƒˆí‡´í•œ ìœ ì €ìž…ë‹ˆë‹¤.
User has been expelled.
*/
	MSG_WITHDREW_USERS = 0x6fd,
/*20171018 to latest
ê²Œìž„ ì´ìš©ì— ë™ì˜í•˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
You have not accepted the user agreements yet.
*/
	MSG_DIDNOT_AGREE = 0x6fe,
/*20171018 to latest
ì¡´ìž¬ í•˜ì§€ ì•ŠëŠ” ê³„ì •ìž…ë‹ˆë‹¤.
You will not be disconnect from the game.
*/
	MSG_ACCOUNT_DOESNOT_EXIST = 0x6ff,
/*20171018 to latest
ë³¸ ê²Œìž„ì€ 12ì„¸ ì´ìš©ê°€ìž…ë‹ˆë‹¤.
It is available only for 12 hours.
*/
	MSG_AGE_RESTRICTIONS = 0x700,
/*20171018 to latest
ê³„ì •ë„ìš© ì¡°ì‚¬ë¥¼ ìœ„í•œ ë¸”ëŸ­ìƒíƒœìž…ë‹ˆë‹¤.
Your account is blocked due to illegal use of the game account.
*/
	MSG_ACCOUNT_BLOCK = 0x701,
/*20171018 to latest
ë²„ê·¸ì¡°ì‚¬ë¥¼ ìœ„í•œ ë¸”ëŸ­ìƒíƒœìž…ë‹ˆë‹¤.
Your account is blocked because there may exist a bug with your account.
*/
	MSG_BUG_BLOCK = 0x702,
/*20171018 to latest
ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” Base, Job ê²½í—˜ì¹˜ê°€ 30ë¶„ê°„ 75% ì¦ê°€í•©ë‹ˆë‹¤.
Increases base exp and job exp gained by killing monsters up to 75% for 30 minutes.
*/
	MSG_PLUSEXP75 = 0x703,
/*20171018 to latest
ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” Base, Job ê²½í—˜ì¹˜ê°€ 30ë¶„ê°„ 50% ì¦ê°€í•©ë‹ˆë‹¤.
Increases base exp and job exp gained by killing monsters up to 50% for 30 minutes.
*/
	MSG_PLUSEXP50 = 0x704,
/*20171018 to latest
íŒë§¤(êµ¬ë§¤) ì •ë³´ê°€ ì—†ìŠµë‹ˆë‹¤.
No sales information.
*/
	MSG_FAIL_OPEN_STORE = 0x705,
/*20171018 to latest
ë” ì´ìƒ ê²€ìƒ‰ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Failed to search any further.
*/
	MSG_SSI_FAILED_SEARCH_CNT = 0x706,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œ ëª…ì€ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The item you have entered does not exist.
*/
	MSG_SSI_FAILED_ITEM_DOES_NOT_EXIST = 0x707,
/*20171018 to latest
ì•„ì§ ê²€ìƒ‰ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot search yet.
*/
	MSG_SSI_FAILED_LIMIT_SERACH_TIME = 0x708,
/*20171018 to latest
ì¹´ë“œ ì´ë¦„ ë˜ëŠ” ì ‘ë‘ì‚¬(ì ‘ë¯¸ì‚¬)ë¥¼ ìž…ë ¥í•˜ì„¸ìš”
Enter the card name or prefix/suffix.
*/
	MSG_SSI_TOOLTIP_OF_SERACHING_THE_CARD = 0x709,
/*20171018 to latest
ë‚¨ì€ ê²€ìƒ‰ íšŸìˆ˜ : %d
Searches left: %d
*/
	MSG_SSI_REST_OF_NUMBER_OF_SEARCHES = 0x70a,
/*20171018 to latest
ê²€ìƒ‰ ëœ ë…¸ì ì´ ì—†ìŠµë‹ˆë‹¤.
No result has been found.
*/
	MSG_SSI_FAILED_SEARCH_STORE = 0x70b,
/*20171018 to latest
ì•„ì´í…œ ê°€ê²© ë²”ìœ„ê°€ ìž˜ëª»ë˜ì—ˆìŠµë‹ˆë‹¤.
The item price is too high.
*/
	MSG_SSI_FAILED_PRICE_ISNOT_VALID = 0x70c,
/*20171018 to latest
ì¼ë°˜ ìž¥ë¹„
Normal Gear
*/
	MSG_GENERAL_EQUIPMENT = 0x70d,
/*20171018 to latest
ì˜ìƒ ìž¥ë¹„
Costume
*/
	MSG_COSTUME_EQUIPMENT = 0x70e,
/*20171018 to latest
ë¶„
minute
*/
	MSG_MINUTE = 0x70f,
/*20171018 to latest
ì´ˆ
second
*/
	MSG_SECOND = 0x710,
/*20171018 to latest
ì•„ì´í…œ ëª…ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Please enter the name of the item.
*/
	MSG_SSI_FAILED_ENTER_THE_NAME_OF_ITEM = 0x711,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œ ëª…ì€ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The item you have entered does not exist.
*/
	MSG_SSI_FAILED_NAME_OF_ITEM_DOES_NOT_EXIST = 0x712,
/*20171018 to latest
ì§„ìž…ê°€ëŠ¥í•œ ë§µì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The map is not available.
*/
	MSG_NOT_EXIST_ENTRYMAP = 0x713,
/*20171018 to latest
í•´ë‹¹ ì¹´ë“œ ì´ë¦„ì´ë‚˜ ì ‘ë‘ì‚¬(ì ‘ë¯¸ì‚¬)ëŠ” ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The selected name or prefix/suffix does not exist.
*/
	MSG_SSI_FAILED_NAME_OF_CARD_DOES_NOT_EXIST = 0x714,
/*20171018 to latest
 í•œë²ˆì— êµ¬ë§¤ ê°€ëŠ¥ ì¢…ë¥˜ëŠ” 10ê°œìž…ë‹ˆë‹¤.
You can purchase up to 10 items.
*/
	MSG_CASH_FAILED_TOTAL_CNT = 0x715,
/*20171018 to latest
 ì¼ë¶€ ì•„ì´í…œì˜ êµ¬ë§¤ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Some items could not be purchased.
*/
	MSG_CASH_FAILED_BUY_SOME = 0x716,
/*20171018 to latest
ìƒë…„ì›”ì¼ 6ìžë¦¬ë¥¼ ìž…ë ¥í•˜ì„¸ìš”.(ì˜ˆì‹œ:801122)
Enter your 6-digit DOB(YYMMDD) (e.g: 801122)
*/
	MSG_ENTER_PEOPLE_BIRTH = 0x717,
/*20171018 to latest
ì•Œ ìˆ˜ ì—†ëŠ” ì˜¤ë¥˜ê°€ ë°œìƒí•˜ì˜€ìŠµë‹ˆë‹¤.
Now Logging Out.
*/
	MSG_RESULT_FAIL_UNKNOWN = 0x718,
/*20171018 to latest
ë°ì´íƒ€ ë² ì´ìŠ¤ ì˜¤ë¥˜ê°€ ë°œìƒí•˜ì˜€ìŠµë‹ˆë‹¤.
A database error has occurred.
*/
	MSG_RESULT_FAIL_DATABASE = 0x719,
/*20171018 to latest
ìºë¦­í„°ë¥¼ ì‚­ì œí•˜ê¸° ìœ„í•´ì„œëŠ” ê¸¸ë“œì—ì„œ íƒˆí‡´ í•´ì•¼ í•©ë‹ˆë‹¤.
Please leave your guild first in order to remove your character.
*/
	MSG_RESULT_FAIL_GUILD = 0x71a,
/*20171018 to latest
ìºë¦­í„°ë¥¼ ì‚­ì œí•˜ê¸° ìœ„í•´ì„œëŠ” íŒŒí‹°ì—ì„œ íƒˆí‡´ í•´ì•¼ í•©ë‹ˆë‹¤.
Please leave your party first in order to remove your character.
*/
	MSG_RESULT_FAIL_PARTY = 0x71b,
/*20171018 to latest
ì‹œìŠ¤í…œ ì„¤ì •ìœ¼ë¡œ ì¸í•´ ì‚­ì œí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot delete this character because the delete time has not expired yet.
*/
	MSG_RESULT_FAIL_CONFIGURATION = 0x71c,
/*20171018 to latest
ì•„ì§ ì‚­ì œ ê°€ëŠ¥ ì‹œê°„ì´ ì•„ë‹™ë‹ˆë‹¤.
You cannot delete this character at the moment.
*/
	MSG_RESULT_FAIL_DATE = 0x71d,
/*20171018 to latest
ìƒë…„ì›”ì¼ì´ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Your entered birthday does not match.
*/
	MSG_RESULT_FAIL_BIRTH = 0x71e,
/*20171018 to latest
ì¹œë°€ë„ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
You lack of familiarity.
*/
	MSG_USESKILL_FAIL_RELATIONGRADE = 0x71f,
/*20171018 to latest
ìŠ¤íƒ€ì¼ì²´ì¸ì§€ íŒŒì´í„° ìƒíƒœì—ì„œë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
This is only available on style change for fighting classes.
*/
	MSG_USESKILL_FAIL_STYLE_CHANGE_FIGHTER = 0x720,
/*20171018 to latest
ìŠ¤íƒ€ì¼ì²´ì¸ì§€ ê·¸ëž˜í”ŒëŸ¬ ìƒíƒœì—ì„œë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
This is only available on style change for novice.
*/
	MSG_USESKILL_FAIL_STYLE_CHANGE_GRAPPLER = 0x721,
/*20171018 to latest
íŒŒí‹°ë“±ë¡ì‹¤íŒ¨
Party Registration failed.
*/
	MSG_PARTY_REGISTRATION_FAILED = 0x722,
/*20171018 to latest
ê²€ìƒ‰ëœ ì¡°ê±´ì˜ ë¦¬ìŠ¤íŠ¸ê°€ ì—†ìŠµë‹ˆë‹¤.
results have been found.
*/
	MSG_PARTY_SEARCH_FAILED = 0x723,
/*20171018 to latest
ê´‘ê³ ì‚­ì œì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Failed to remove result.
*/
	MSG_PARTY_AD_DELETE_FAILED = 0x724,
/*20171018 to latest
ì¡°ê±´ì— ë§žëŠ” ê´‘ê³ ê°€ ì—†ì–´ ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
No results have been found.
*/
	MSG_PARTY_NOT_EXIST_AD = 0x725,
/*20171018 to latest
ê²°ì œ ì •ë³´ê°€ ì—†ìŠµë‹ˆë‹¤.
No payment information has been found.
*/
	MSG_REFUSE_SSO_NOT_PAY_USER = 0x726,
/*20171018 to latest
êµí™˜ ì‹œ ìŠ¤í¬ë¦°ìƒ· ì°ê¸°
Screenshot Trade
*/
	MSG_SCREENSHOT_FOR_EXCHANGE = 0x727,
/*20171018 to latest
[ê±°ëž˜_%s]
[Trade_%s]
*/
	MSG_SCREENSHOT_FOR_EXCHANGE_CHARNAME = 0x728,
/*20171018 to 20180131
ì‚¬ë§ìœ¼ë¡œ ì¸í•´ ì‹ ìƒëª…ë³´í—˜ì„œê°€ ìžë™ ì†Œë¹„ë˜ì—ˆìŠµë‹ˆë‹¤
20180207 to latest
ì‚¬ë§ ì‹œ ì†Œì§€í•œ ì•„ì´í…œìœ¼ë¡œ ê²½í—˜ì¹˜ ì†ì‹¤ì„ ë§‰ì•˜ìŠµë‹ˆë‹¤.
Death due to the auto insurance young people are spending.
*/
	MSG_NOTIFY_NEO_INSURANCE_ITEM_USE = 0x729,
/*20171018 to latest
ëŒ€í™”
Chat Dialog
*/
	MSG_TALK = 0x72a,
/*20171018 to latest
ì¤‘ë³µì‚¬ìš©ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Redundant is not available.
*/
	MSG_MACRO_DUPLICATE = 0x72b,
/*20171018 to latest
ì‚¬ìš©ì œí•œì´ ê±¸ë ¤ìžˆìŠµë‹ˆë‹¤.
Use the limit that has been set.
*/
	MSG_MACRO_POSTDELAY = 0x72c,
/*20171018 to latest
í˜„ìž¬ ì‚¬ìš©ì œí•œì´ ê±¸ë ¤ ìžˆì§€ ì•ŠìŠµë‹ˆë‹¤.
No user restrictions are set.
*/
	MSG_MACRO_NOT_POSTDELAY = 0x72d,
/*20171018 to latest
ì˜ˆê¸°ì¹˜ ëª»í•œ ì‚¬ìœ ë¡œ ì¸í•´ ì ‘ì†ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ê´€ë¦¬ìžì—ê²Œ ë¬¸ì˜í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Connection has failed. Please contact your administrator.
*/
	MSG_SSO_ERROR_MSG = 0x72e,
/*20171018 to latest
ì ‘ì† ì •ë³´ ì¸ì¦ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to authenticate.
*/
	MSG_REFUSE_SSO_AUTH_INVALID_TOKEN = 0x72f,
/*20171018 to latest
ê°€ìž…í•˜ì§€ ì•Šì€ ì‚¬ìš©ìžìž…ë‹ˆë‹¤.
User is offline.
*/
	MSG_REFUSE_SSO_AUTH_INVALID_USER = 0x730,
/*20171018 to latest
ë‚˜ì´ì œí•œ ë•Œë¬¸ì— ì´ê³„ì •ìœ¼ë¡œ ì´ì„œë²„ì— ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
The age limit from commandment tables cannot connect to this server.
*/
	MSG_REFUSE_SSO_AUTH_INVALID_AGE = 0x731,
/*20171018 to latest
êµ¬ë§¤í•˜ê¸°
Buy
*/
	MSG_NC_BUY = 0x732,
/*20171018 to latest
ìž¥ë°”êµ¬ë‹ˆ ë¹„ìš°ê¸°
Cancel.
*/
	MSG_NC_BLANK = 0x733,
/*20171018 to latest
ì²« íŽ˜ì´ì§€
First page
*/
	MSG_NC_FIRSTPAGE = 0x734,
/*20171018 to latest
ë§ˆì§€ë§‰ íŽ˜ì´ì§€
Last page
*/
	MSG_NC_LASTPAGE = 0x735,
/*20171018 to latest
ì‹ ê·œ
New
*/
	MSG_NC_CAT1 = 0x736,
/*20171018 to latest
ì¸ê¸°
Headgears
*/
	MSG_NC_CAT2 = 0x737,
/*20171018 to latest
í•œì •
Limited
*/
	MSG_NC_CAT3 = 0x738,
/*20171018 to latest
ìž„ëŒ€ìž¥ë¹„
Rental Items
*/
	MSG_NC_CAT4 = 0x739,
/*20171018 to latest
ì˜êµ¬ìž¥ë¹„
Equipments
*/
	MSG_NC_CAT5 = 0x73a,
/*20171018 to latest
ë²„í”„
Scrolls
*/
	MSG_NC_CAT6 = 0x73b,
/*20171018 to latest
íšŒë³µ
Consumables
*/
	MSG_NC_CAT7 = 0x73c,
/*20171018 to latest
ê¸°íƒ€
Other
*/
	MSG_NC_CAT8 = 0x73d,
/*20171018 to latest
ê°€ê²©
Cost
*/
	MSG_NC_COST = 0x73e,
/*20171018 to latest
ìˆ˜ëŸ‰
Quantity
*/
	MSG_NC_NUM = 0x73f,
/*20171018 to latest
ê°œ
Total
*/
	MSG_NC_COUNT = 0x740,
/*20171018 to latest
ë¬´ë£Œ ìºì‹œ : %s C
Free Cash: %s C
*/
	MSG_NC_FREECASH = 0x741,
/*20171018 to latest
ì†Œì§€ ìºì‹œ : %s C
CashPoints: %s C
*/
	MSG_NC_CASH = 0x742,
/*20171018 to latest
ì´ ì§€ì—­ì—ì„œëŠ” ëª¬ìŠ¤í„° ì†Œí™˜ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
You cannot summon a monster in this area.
*/
	MSG_CALLMONSTER_FAIL_AREA = 0x743,
/*20171018 to latest
ë¬´ë£Œìºì‹œ ì‚¬ìš©ëŸ‰ì´ ì „ì²´ ê¸ˆì•¡ì„ ì´ˆê³¼í•˜ê³ ìžˆìŠµë‹ˆë‹¤
Exceeded total free cash
*/
	MSG_BUY_CASH_FAIL2 = 0x744,
/*20171018 to latest
 ì„¤ì •í•œ ë‚´ìš©ì´ [SaveData_ExMacro%d]ì— ì €ìž¥ë©ë‹ˆë‹¤.
%d seconds left until you can use
*/
	MSG_MACRO_SAVE_DATA = 0x745,
/*20171018 to latest
ì•½ %d ì´ˆ í›„ì— ì‚¬ìš©í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤
Content has been saved in [SaveData_ExMacro%d]
*/
	MSG_ITEM_REUSE_LIMIT_SECOND = 0x746,
/*20171018 to latest
[ì°½]ì„ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
~ [Windows] must be equipped with.
*/
	MSG_FAIL_NEED_EQUIPPED_SPEAR = 0x747,
/*20171018 to latest
ë“œëž˜ê³¤ íƒ‘ìŠ¹ì‹œì—ë§Œ ì‚¬ìš©ê°€ëŠ¥í•©ë‹ˆë‹¤.
Available only on the dragon.
*/
	MSG_USESKILL_FAIL_DRAGON = 0x748,
/*20171018 to latest
ë³¸ ì„œë²„ì— ì ‘ì†í•  ìˆ˜ ìžˆëŠ” ì •ì›ì´ ì´ˆê³¼ë˜ì–´ ì§„ìž…ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
Unable to proceed due to exceeding capacity.
*/
	MSG_OVER_CONNECT_USER = 0x749,
/*20171018 to latest
ì‹¤ëª… ì¸ì¦ì´ ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤. ì‹¤ëª…ì¸ì¦ ì‚¬ì´íŠ¸ë¡œ ì´ë™í•©ë‹ˆë‹¤
Real name has not been verified. Go to name verification site.
*/
	MSG_AUTHENTICATE = 0x74a,
/*20171018 to latest
ì €ìž¥ í•  ìŠ¬ë¡¯ì„ ì„ íƒ í•´ ì£¼ì„¸ìš”
Please select slot you are going to save.
*/
	MSG_SELECT_SAVESLOT = 0x74b,
/*20171018 to latest
%s, ì¶•í•˜ë“œë¦½ë‹ˆë‹¤. '%s' ë¥¼ ì–»ìœ¼ì…¨ìŠµë‹ˆë‹¤!
Congratulation %s,  Acquired '%s' !
*/
	MSG_BROADCASTING_SPECIAL_ITEM_OBTAIN2 = 0x74c,
/*20171018 to latest
ê·¸ë£¨ë¯¸ìƒíƒœì—ì„œëŠ” ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
Unable to use in gloomy state
*/
	MSG_NOTUSE_GROOMY = 0x74d,
/*20171018 to latest
êµ¬ë§¤ë¬¼í’ˆì˜ í•©ê³„ê¸ˆì•¡ì´ ì¼€ë¦­í„°ê°€ ì†Œì§€í•  ìˆ˜ ìžˆëŠ” ìµœëŒ€ ê¸ˆì•¡ì„ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤
Purchased products has exceeded the total price.
*/
	MSG_BUYINGSTORE_OVERFLOW_MONEY = 0x74e,
/*20171018 to latest
í˜„ìž¬ ë§µì—ì„œëŠ” íŒŒí‹° ê°€ìž…ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Cannot join a party in this map.
*/
	MSG_PREVENT_PARTY_JOIN = 0x74f,
/*20171018 to latest
í˜„ìž¬ ë§µì—ì„œëŠ” íŒŒí‹° íƒˆí‡´ê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Cannot leave a party in this map.
*/
	MSG_PREVENT_PARTY_LEAVE = 0x750,
/*20171018 to latest
í˜„ìž¬ ë§µì—ì„œëŠ” íŒŒí‹° ì¶”ë°©ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Cannot withdraw/break the party in this map.
*/
	MSG_PREVENT_PARTY_EXPEL = 0x751,
/*20171018 to latest
ì‹¤ì œ ì„±ëª…
Real Name
*/
	MSG_SDO_REALNAME = 0x752,
/*20171018 to latest
ì‹ ë¶„ì¦ ë²ˆí˜¸
ID Number
*/
	MSG_SDO_ID_NUMBER = 0x753,
/*20171018 to latest
ì´ë©”ì¼
E-mail
*/
	MSG_SDO_EMAIL = 0x754,
/*20171018 to latest
ìž…ë ¥ì´ ì˜¬ë°”ë¥´ì§€ ì•ŠìŠµë‹ˆë‹¤
Invalid input
*/
	MSG_SDO_WRONG_VALUE = 0x755,
/*20171018 to latest
ìƒëŒ€ ìºë¦­í„°ê°€ ìµœëŒ€ ë³´ìœ ì œë‹ˆëŸ‰ì„ ì´ˆê³¼í•˜ì—¬ ê±°ëž˜ê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Failed to send the zeny 
*/
	MSG_MCSTORE_FAIL_SELLER_MONEY_GIVE = 0x756,
/*20171018 to latest
í•´ë‹¹ ì§ì—…ì´ ì•„ë‹™ë‹ˆë‹¤.
This is not a relevant job
*/
	MSG_INVALID_CLASS = 0x757,
/*20171018 to latest
í•´ë‹¹ ì„±ë³„ì´ ì•„ë‹™ë‹ˆë‹¤.
This is not a relevant gender
*/
	MSG_INVALID_GENDER = 0x758,
/*20171018 to latest
ìœ ì €ë‹˜ì˜ ì •ë³´ê°€ ì¸ì¦ì— ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
User information identification was successful.
*/
	MSG_SUCCESS_AUTHENTICATE = 0x759,
/*20171018 to latest
ì´ë¦„ì´ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤. ìž¬ìž‘ì„± í•´ì£¼ì„¸ìš”.
Name does not match. Please retry.
*/
	MSG_INVALID_REALNAME = 0x75a,
/*20171018 to latest
ì‹ ë¶„ì¦ ë²ˆí˜¸ê°€ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤. ìž¬ìž‘ì„± í•´ì£¼ì„¸ìš”.
ID number does not match. Please retry.
*/
	MSG_INVALID_IDNUMBER = 0x75b,
/*20171018 to latest
í˜„ìž¬ ì„œë¹„ìŠ¤ì— ì´ìƒì´ ìžˆìœ¼ë‹ˆ ìž ì‹œ í›„ ìž¬ì‹œë„ í•´ì£¼ì„¸ìš”.
Service is currently unavailable. Please try again later.
*/
	MSG_INVALID_AUTHENTICATE = 0x75c,
/*20171018 to latest
 íƒ‘ìŠ¹ ìƒíƒœì—ì„œëŠ” ê³µê²©ì„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to attack while riding.
*/
	MSG_CANNOT_ATTACK_IN_RIDING_STATE = 0x75d,
/*20171018 to latest
 íƒ‘ìŠ¹ ìƒíƒœì—ì„œëŠ” ìŠ¤í‚¬ ì‹œì „ì„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to cast the skill while riding.
*/
	MSG_CANNOT_USE_SKILL_IN_RIDING_STATE = 0x75e,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ëŠ” 4ìžë¦¬ì´í•˜ì—¬ì•¼ë§Œ í•©ë‹ˆë‹¤.
Pin number should be 4~6 characters.
*/
	MSG_STORE_PASSWORD_4_6 = 0x75f,
/*20171018 to latest
ë³´ì•ˆ ì¸ì¦ì— ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
Secured authentication is successful.
*/
	MSG_SECOND_PASSWORD_LOGIN_SUCCESS = 0x760,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œì˜ ìƒì„±ì— ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
Succeeded in creating 2nd password.
*/
	MSG_SECOND_PASSWORD_MAKE_SUCCESS = 0x761,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œë¥¼ ì‚­ì œí–ˆìŠµë‹ˆë‹¤.
2nd password has been deleted.
*/
	MSG_SECOND_PASSWORD_DEL_SUCCESS = 0x762,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œë¥¼ ìˆ˜ì •í–ˆìŠµë‹ˆë‹¤.
2nd password has been corrected.
*/
	MSG_SECOND_PASSWORD_EDIT_SUCCESS = 0x763,
/*20171018 to latest
ìž˜ëª»ëœ íŒ¨ìŠ¤ì›Œë“œìž…ë‹ˆë‹¤.(%díšŒë‚¨ìŒ)
Password is incorrect.
*/
	MSG_SECOND_PASSWORD_LOGIN_FAILED = 0x764,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œì˜ ìƒì„±ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Failed to create 2nd password.
*/
	MSG_SECOND_PASSWORD_MAKE_FAILED = 0x765,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œ ì‚­ì œì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Failed to delete 2nd password.
*/
	MSG_SECOND_PASSWORD_DEL_FAILED = 0x766,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œì˜ ìˆ˜ì •ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Failed to correct 2nd password.
*/
	MSG_SECOND_PASSWORD_EDIT_FAILED = 0x767,
/*20171018 to latest
ìž…ë ¥í•˜ì‹ íŒ¨ìŠ¤ì›Œë“œëŠ” ì‚¬ìš©í•˜ì‹¤ìˆ˜ì—†ìŠµë‹ˆë‹¤.
Unable to use restricted number in 2nd password.
*/
	MSG_SECOND_PASSWORD_EDIT_RESTRICT_PW = 0x768,
/*20171018 to latest
ì£¼ë¯¼ë“±ë¡ë²ˆí˜¸ëŠ” ì‚¬ìš©í• ìˆ˜ì—†ìŠµë‹ˆë‹¤.
Unable to use your KSSN number.
*/
	MSG_SECOND_PASSWORD_EDIT_PERSONALNUM_PW = 0x769,
/*20171018 to latest
ì´ë¯¸ íŒ¨ìŠ¤ì›Œë“œê°€ ì¡´ìž¬í•©ë‹ˆë‹¤.
~There is already a password.
*/
	MSG_SECOND_PASSWORD_MAKE_DUPLICATED_PW = 0x76a,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œ
Security Code
*/
	MSG_SECOND_PASSWORD = 0x76b,
/*20171018 to latest
ê³„ì •ë³´ì•ˆì„ ìœ„í•˜ì—¬ ì¶”ê°€ì ì¸ íŒ¨ìŠ¤ì›Œë“œ ì„¤ì •ì„ ê¶Œìž¥í•©ë‹ˆë‹¤.
Account for the additional password security settings are recommended.
*/
	MSG_SECOND_PASSWORD_INPUT = 0x76c,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œ ì‚¬ìš©ì„ í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Do not use secure password.
*/
	MSG_SECOND_PASSWDRD_NOT_AVAILABLE_SUCCESS = 0x76d,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œ ì‚¬ìš©ì„¤ì •ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Use the set security password failed.
*/
	MSG_SECOND_PASSWDRD_NOT_AVAILABLE_FAILED = 0x76e,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œë¥¼ ì‚¬ìš©í•©ë‹ˆë‹¤. ë‹¤ìŒë¡œê·¸ì¸ë¶€í„° ì ìš©ë©ë‹ˆë‹¤.
Use secure passwords. Will be applied to your next login.
*/
	MSG_SECOND_PASSWDRD_AVAILABLE_SUCCESS = 0x76f,
/*20171018 to latest
ë³´ì•ˆ íŒ¨ìŠ¤ì›Œë“œ ì‚¬ìš© ì„¤ì •ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Use the set security password failed.
*/
	MSG_SECOND_PASSWDRD_AVAILABLE_FAILED = 0x770,
/*20171018 to latest
ê³„ì •ë³´ì•ˆì„ ìœ„í•˜ì—¬ ì¶”ê°€ì ì¸ íŒ¨ìŠ¤ì›Œë“œë¥¼ ì„¤ì •í•©ë‹ˆë‹¤.
Added to the security of your account password is set.
*/
	MSG_SECOND_PASSWORD_INFO_1 = 0x771,
/*20171018 to latest
ì•„ëž˜ì˜ ìˆ«ìžë²„íŠ¼ì„ ë§ˆìš°ìŠ¤ë¥¼ ì´ìš©í•˜ì—¬ 4ìžë¦¬ë¥¼ í´ë¦­í•˜ì„¸ìš”.
Use the mouse to enter the 4-digit password below.
*/
	MSG_SECOND_PASSWORD_INFO_2 = 0x772,
/*20171018 to latest
3íšŒì´ìƒ ìž˜ëª»ëœíŒ¨ìŠ¤ì›Œë“œ ìž…ë ¥ìœ¼ë¡œ, ì¢…ë£Œë©ë‹ˆë‹¤.
Typing an incorrect password 3 times will shut down the client.
*/
	MSG_SECOND_PASSWORD_INFO_3 = 0x773,
/*20171018 to latest
ITEM
*/
	MSG_MACRO_ITEM = 0x774,
/*20171018 to latest
SKILL
*/
	MSG_MACRO_SKILL = 0x775,
/*20171018 to latest
TACTIC
*/
	MSG_MACRO_TACTIC = 0x776,
/*20171018 to latest
ETC
*/
	MSG_MACRO_ETC = 0x777,
/*20171018 to latest
COMBAT
*/
	MSG_MACRO_COMBAT = 0x778,
/*20171018 to latest
NON-COMBAT
*/
	MSG_MACRO_NON_COMBAT = 0x779,
/*20171018 to latest
BUFF
*/
	MSG_MACRO_BUFF = 0x77a,
/*20171018 to latest
AUTO EQUIPED
*/
	MSG_MACRO_AUTO_EQUIPED = 0x77b,
/*20171018 to latest
1st. ATTACK
*/
	MSG_MACRO_1ST_ATTACK = 0x77c,
/*20171018 to latest
ATTACK
*/
	MSG_MACRO_ATTACK = 0x77d,
/*20171018 to latest
Next attack time : 
Next attack time: 
*/
	MSG_MACRO_NEXT_ATK_TIME = 0x77e,
/*20171018 to latest
When died
*/
	MSG_MACRO_WHEN_DIED = 0x77f,
/*20171018 to latest
When invited to a party
*/
	MSG_MACRO_WHEN_INVITED_PARTY = 0x780,
/*20171018 to latest
Pickup Item
*/
	MSG_MACRO_PICKUP_ITEM = 0x781,
/*20171018 to latest
Over 85% Weight
*/
	MSG_MACRO_OVERWEIGHT = 0x782,
/*20171018 to latest
ì§„í–‰ì¤‘ì´ë˜ ìž‘ì—…(NPCëŒ€í™”,ì œì¡°...)ì„ ì¢…ë£Œí›„ì— ë‹¤ì‹œ ì‹œë„í•˜ì„¸ìš”.
Any work in progress (NPC dialog, manufacturing ...) quit and try again.
*/
	MSG_BUSY = 0x783,
/*20171018 to latest
 ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” Jobê²½í—˜ì¹˜ê°€ %dë¶„ê°„ %.2fë°°ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
Monster Job hunting experience that you can get through the doubling of %d is %.2f minutes.
*/
	MSG_PLUSONLYJOBEXP2 = 0x784,
/*20171018 to latest
SaveData_ExMacro%d
SaveData_ExMacro %d
*/
	MSG_MACRO_SAVE = 0x785,
/*20171018 to latest
 ì„¤ì •í•œ ë‚´ìš©ì´ [%s]ì— ì €ìž¥ë©ë‹ˆë‹¤.
Settings for [%s] are stored in.
*/
	MSG_MACRO_SAVE_DATA2 = 0x786,
/*20171018 to latest
ë³´ì•ˆë ˆë²¨
Security level
*/
	MSG_SECOND_PASSWORD_LEVEL = 0x787,
/*20171018 to latest
í˜„ìž¬ ìºë¦­í„°ëŠ” íŒŒí‹° ë˜ëŠ” ê¸¸ë“œì— ê°€ìž…ë˜ì–´ ìžˆì–´ì„œ ì‚­ì œê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
The current character is a party or join the guild can not be deleted.
*/
	MSG_RESULT_FAIL_CHAR_DELETE = 0x788,
/*20171018 to latest
ë²½ì´ë‚˜ ë¬¼ì²´ ê·¼ì²˜ì—ì„œë§Œ ì‚¬ìš© í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Objects can be used only near the wall.
*/
	MSG_USESKILL_FAIL_NEER_WALL = 0x789,
/*20171018 to latest
%s : ë ˆë²¨ %d %s íŒŒí‹°êµ¬í•©ë‹ˆë‹¤.
%s: Level %d %s party to obtain level.
*/
	MSG_SEEK_PARTY_SET = 0x78a,
/*20171018 to latest
íƒ‘ìŠ¹ ì¤‘ì¸ ìƒíƒœì—ì„œëŠ” ê³ ì‚ ì•„ì´í…œì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
While boarding reins is not available for items.
*/
	MSG_FAIELD_RIDING_OVERLAPPED = 0x78b,
/*20171018 to latest
ì´ ìŠ¤í‚¬ì€ 1%ì˜ ê²½í—˜ì¹˜ê°€ í•„ìš”í•©ë‹ˆë‹¤.
This skill requires 1% experience.
*/
	MSG_USESKILL_FAIL_NEED_EXP_1PERCENT = 0x78c,
/*20171018 to latest
ê²½   í—˜   ì¹˜ : 
Experience value: 
*/
	MSG_EXP_MSG = 0x78d,
/*20171018 to latest
ë“œ   ë¡­   ìœ¨ : 
Drop rate: 
*/
	MSG_DROP_MSG = 0x78e,
/*20171018 to latest
ì‚¬ë§íŽ˜ë„í‹° : 
Death Penalty: 
*/
	MSG_DEATH_MSG = 0x78f,
/*20171018 to latest
%d%% (PCë°© %d%% + TPLUS %d%% + í”„ë¦¬ë¯¸ì—„ %d%% + %sì„œë²„ %d%%)
%d%% (PCroom %d%% + TPLUS %d%% + Premium %d%% + %s Server %d%%)
*/
	MSG_BASIC_EXP_MSG = 0x790,
/*20171018 to latest
 í•©ì°½ìŠ¤í‚¬ì„ ì‹œì „í•  íŒŒí‹°ì›ì˜ SPëŸ‰ì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
Amount of party members to cast the skill Chorus SP is low.
*/
	MSG_USESKILL_FAIL_CHORUS_SP_INSUFFICIENT = 0x791,
/*20171018 to latest
ìƒëŒ€ ìºë¦­í„°ì˜ ì†Œì§€ ì•„ì´í…œ ì¢…ë¥˜ì˜ í•œê³„ëŸ‰ ì´ˆê³¼ë¡œ ê±°ëž˜ê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Relative character that has possession of the items can not trade because amount is exceeded.
*/
	MSG_CHARACTER_IS_OVER_COUNT = 0x792,
/*20171018 to latest
ìƒëŒ€ ìºë¦­í„°ì˜ í•´ë‹¹ ì•„ì´í…œì˜ ì†Œì§€ í•œê³„ëŸ‰ ì´ˆê³¼ë¡œ ê±°ëž˜ê°€ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Relative character that has possession of the item amount which exceeds makes it impossible to trade.
*/
	MSG_CHARACTER_IS_EACHITEM_OVER_COUNT = 0x793,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œì˜ ì†Œì§€ í•œê³„ëŸ‰ ì´ˆê³¼ë¡œ êµ¬ìž…ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Amounts are exceeded the possession of the item is not available for purchase.
*/
	MSG_PURCHASE_FAIL_EACHITEM_COUNT = 0x794,
/*20171018 to latest
ê´‘ê³  ë“±ë¡ ëŒ€ê¸°ì¤‘ìž…ë‹ˆë‹¤.
Advertising is pending registration.
*/
	MSG_PARTY_FAILED_TIMEOUT = 0x795,
/*20171018 to latest
ì•„ëž˜ì˜ íŒŒì¼ê³¼ í…ìŠ¤íŠ¸ë‚´ìš©ì„ í•¨ê»˜
ë¼ê·¸ë‚˜ë¡œí¬ ê³µì‹í™ˆíŽ˜ì´ì§€ -> ê³ ê°ì„¼í„° -> ë¬¸ì˜í•˜ê¸°ë¥¼
ì´ìš©í•˜ì—¬ ë³´ë‚´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
With the following files and text content Ragnarok Official Website -> Support -> Contact Us to submit your comments by:
*/
	MSG_UNEXCEPTION_MSG1ST = 0x796,
/*20171018 to latest
ë¹Œë§ì‹œìŠ¤í…œì— ì˜¤ë¥˜ê°€ ë°œìƒí–‡ìŠµë‹ˆë‹¤(%d)
Has caused an error in billing system(%d)
*/
	MSG_INGAMBA_BILLING_ZSVR_ERROR = 0x797,
/*20171018 to latest
ë£¬ ì•„ì´í…œ ì†Œìœ  ê°œìˆ˜ê°€ ì´ˆê³¼ ë˜ì–´ êµ¬ë§¤ê°€ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed purchase of runes, items exceed the maximum number that can be held.
*/
	MSG_CASH_FAILED_RUNE_OVERCOUNT = 0x798,
/*20171018 to latest
ê°œë³„ ì•„ì´í…œ ê°œìˆ˜ê°€ ì´ˆê³¼ ë˜ì–´ êµ¬ë§¤ê°€ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Exceeded the number of individual items, purchase failed.
*/
	MSG_CASH_FAILED_EACHITEM_OVERCOUNT = 0x799,
/*20171018 to latest
ì•Œ ìˆ˜ ì—†ëŠ” ì˜¤ë¥˜ê°€ ë°œìƒí•˜ì—¬ êµ¬ë§¤ê°€ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Purchase failed due to an unknown error.
*/
	MSG_CASH_FAILED_UNKOWN = 0x79a,
/*20171018 to latest
ìž ì‹œ í›„ ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹­ì‹œì˜¤.
Please try again later.
*/
	MSG_CASH_FAILED_BUSY = 0x79b,
/*20171018 to latest
 ì¿ ë‚˜ì´ ì•„ì´í…œì„ ìž¥ì°© í•œ ìƒíƒœì—ì„œë§Œ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
Kunai must be equipped to use this skill.
*/
	MSG_USESKILL_FAIL_NEED_EQUIPMENT_KUNAI = 0x79c,
/*20171018 to latest
ëª¨ì§‘í•  ìµœì†Œë ˆë²¨ê°’ì„ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter the value of the minimum level to be recruited.
*/
	MSG_SEEK_PARTY_LEVEL_HELP = 0x79d,
/*20171018 to latest
ì¡´ë‹¤ê¸°íšì‚¬NPC ì—ê²Œ ì•„ì´í…œì´ ìˆ˜ë ¹ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤. ì†Œì§€ì°½ì˜ ì—¬ìœ ê³µê°„ì„ í™•ë³´í•´ì£¼ì„¸ìš”.
Jonda agency receipt of the item to the NPC is not possible. Gaining possession of the free space of the window.
*/
	MSG_FAILED_GET_ITEM_FROM_ZONEDA = 0x79e,
/*20171018 to latest
ì´ ìŠ¤í‚¬ì€ ê³µì„±ì „ì—ì„œë§Œ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
This skill is only available in the siege.
*/
	MSG_USESKILL_FAIL_SIZE = 0x79f,
/*20171018 to latest
ì´ ìŠ¤í‚¬ì€ í”Œë ˆì´ì–´ì—ê²Œë§Œ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
This skill is available only to the player.
*/
	MSG_USESKILL_FAIL_TOTARGET_PLAYER = 0x7a0,
/*20171018 to latest
ì°©ìš©ì´ ê¸ˆì§€ ëœ ìƒíƒœë¡œ ì°©ìš© í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Forbidden to wear the state can not be worn.
*/
	MSG_CAN_NOT_EQUIP_ITEM_FORBID = 0x7a1,
/*20171018 to latest
í˜„ìž¬ ìœ„ì¹˜ì—ì„œëŠ” ìƒì  ë° ì±„íŒ…ë°©ì˜ ìƒì„±ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Current location of the shop and chat room creation is disabled.
*/
	MSG_USESKILL_FAIL_THERE_ARE_NPC_AROUND = 0x7a2,
/*20171018 to latest
Elapsed time: %d:%d:%d / %d:%d:%d
*/
	MSG_REPLAY_ELAPSEDTIME = 0x7a3,
/*20171018 to latest
Speed : X 1/4 
Speed: X 1/4
*/
	MSG_REPLAY_SPEED1_4 = 0x7a4,
/*20171018 to latest
Speed : X 1/2 
Speed: X 1/2
*/
	MSG_REPLAY_SPEED1_2 = 0x7a5,
/*20171018 to latest
Speed : X 1   
Speed: X 1  
*/
	MSG_REPLAY_SPEED1 = 0x7a6,
/*20171018 to latest
Speed : X 2   
Speed: X 2  
*/
	MSG_REPLAY_SPEED2 = 0x7a7,
/*20171018 to latest
Speed : X 4   
Speed: X 4  
*/
	MSG_REPLAY_SPEED4 = 0x7a8,
/*20171018 to latest
Speed : X 8   
Speed: X 8  
*/
	MSG_REPLAY_SPEED8 = 0x7a9,
/*20171018 to latest
Speed : X 16  
Speed: X 16 
*/
	MSG_REPLAY_SPEED16 = 0x7aa,
/*20171018 to latest
Speed : ì•Œìˆ˜ì—†ìŒ
Speed: Unknown
*/
	MSG_REPLAY_SPEEDUNKNOWN = 0x7ab,
/*20171018 to latest
Service Info : %s
Service Info: %s
*/
	MSG_REPLAY_CHRVICEINFO = 0x7ac,
/*20171018 to latest
Character Name : %s
Character Name: %s
*/
	MSG_REPLAY_CHARACTERNAME = 0x7ad,
/*20171018 to latest
Map Name : %s
Map Name: %s
*/
	MSG_REPLAY_MAPNAME = 0x7ae,
/*20171018 to latest
Record Time: %d-%01d-%01d %d: %02d: %02d
*/
	MSG_REPLAY_RECORDTIME = 0x7af,
/*20171018 to latest
Play Time: %02d: %02d: %02d
*/
	MSG_REPLAY_PLAYTIME = 0x7b0,
/*20171018 to latest
No Replay File.
*/
	MSG_REPLAY_NOREPLAYFILE = 0x7b1,
/*20171018 to latest
Server No Matching
*/
	MSG_REPLAY_SERVERNOMATCH = 0x7b2,
/*20171018 to latest
Replay Option Setting
*/
	MSG_REPLAY_REPLAYOPTIONSETTING = 0x7b3,
/*20171018 to latest
íŒŒì¼ ì´ë¦„ì„ ìž…ë ¥í•˜ì„¸ìš”.
Enter File Name
*/
	MSG_REPLAY_ENTERTHEFILENAME = 0x7b4,
/*20171018 to latest
Set Replay Save Data
*/
	MSG_REPLAY_SETREPLAYSAVEDATA = 0x7b5,
/*20171018 to latest
Set Rec Option
*/
	MSG_REPLAY_SETRECOPTION = 0x7b6,
/*20171018 to latest
%.1f %% Posâ˜ž:%d:%d:%d
%.1f % Pos->:%d:%d:%d
*/
	MSG_REPLAY_GAGEPOS1 = 0x7b7,
/*20171018 to latest
%.1f %% Posâ˜ž:ì´ë™ë¶ˆê°€
%.1f % Pos->:cannot move
*/
	MSG_REPLAY_GAGEPOS2 = 0x7b8,
/*20171018 to latest
Start
*/
	MSG_REPLAY_START = 0x7b9,
/*20171018 to latest
Stop
*/
	MSG_REPLAY_STOP = 0x7ba,
/*20171018 to latest
Input FileName -> Start
*/
	MSG_REPLAY_START2 = 0x7bb,
/*20171018 to latest
Open Option
*/
	MSG_REPLAY_OPENOPTION = 0x7bc,
/*20171018 to latest
Close Option
*/
	MSG_REPLAY_CLOSEOPION = 0x7bd,
/*20171018 to latest
End
*/
	MSG_REPLAY_END = 0x7be,
/*20171018 to latest
Time
*/
	MSG_REPLAY_TIME = 0x7bf,
/*20171018 to latest
íŒŒí‹°&ì¹œêµ¬
Party & Friends
*/
	MSG_REPLAY_PARTYFRIEND = 0x7c0,
/*20171018 to latest
ì±„íŒ…
Chat
*/
	MSG_REPLAY_CHAT = 0x7c1,
/*20171018 to latest
ë‹¨ì¶•í‚¤
Shortcuts
*/
	MSG_REPLAY_SHORTCUTS = 0x7c2,
/*20171018 to latest
ìžë™ íŒŒì¼ëª… ìƒì„±
Automatic filename generation
*/
	MSG_REPLAY_AUTOMATICFILENAME = 0x7c3,
/*20171018 to latest
íŒŒì¼ ì¤‘ë³µ ì±„í¬
Checking for duplicate files
*/
	MSG_REPLAY_CHECKINGFILE = 0x7c4,
/*20171018 to latest
ë™ì¼í•œ íŒŒì¼ì´ ì¡´ìž¬ í•©ë‹ˆë‹¤.
The same file exists already.
*/
	MSG_REPLAY_THESAMEFILEEXISTS = 0x7c5,
/*20171018 to latest
Record Start
*/
	MSG_REPLAY_RECORDSTART = 0x7c6,
/*20171018 to latest
 is Saved.
*/
	MSG_REPLAY_RECORDEND = 0x7c7,
/*20171018 to latest
Weight : %3d / %3d
Weight: %3d / %3d
*/
	MSG_WEIGHT = 0x7c8,
/*20171018 to latest
Total : %s C
Total: %s C
*/
	MSG_TOTAL = 0x7c9,
/*20171018 to latest
[ìˆ˜ë¦¬ê²€]ì„ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
[Shuriken] must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_SYURIKEN = 0x7ca,
/*20171018 to latest
Base Lv. %d
*/
	MSG__BASIC_MSG_BASE = 0x7cb,
/*20171018 to latest
Job Lv. %d
*/
	MSG__BASIC_MSG_JOB = 0x7cc,
/*20171018 to latest
Zeny : %s
Zeny: %s
*/
	MSG_BASIC_MSG_ZENY = 0x7cd,
/*20171018 to latest
Trilinear
*/
	MSG_GRAPHIC_MSG_TRILINEAR = 0x7ce,
/*20171018 to latest
attack
*/
	MSG_GRAPHIC_MSG_ATTACK = 0x7cf,
/*20171018 to latest
skill
*/
	MSG_GRAPHIC_MSG_SKILL = 0x7d0,
/*20171018 to latest
item
*/
	MSG_GRAPHIC_MSG_ITEM = 0x7d1,
/*20171018 to latest
NoCtrl
*/
	MSG_GRAPHIC_MSG_NOCTRL = 0x7d2,
/*20171018 to latest
ì „ìž¥
More
*/
	MSG_GRAPHIC_MSG_BATTLE = 0x7d3,
/*20171018 to latest
(Character/Total Slot)
*/
	MSG_CHARACTER_MSG_CHARACTERTOTALSLOT = 0x7d4,
/*20171018 to latest
Premium Service
VIP Service
*/
	MSG_CHARACTER_MSG_PREMIUMSERVICE = 0x7d5,
/*20171018 to latest
Premium 
VIP 
*/
	MSG_CHARACTER_MSG_PREMIUM = 0x7d6,
/*20171018 to latest
Service
*/
	MSG_CHARACTER_MSG_SERVICE = 0x7d7,
/*20171018 to latest
Billing Service
VIP
*/
	MSG_CHARACTER_MSG_BILLINGSERVICE = 0x7d8,
/*20171018 to latest
Billing 
VIP 
*/
	MSG_CHARACTER_MSG_BILLING = 0x7d9,
/*20171018 to latest
Command List
*/
	MSG_MSG_COMMANDLIST = 0x7da,
/*20171018 to latest
LEVEL
*/
	MSG_SEEK_PARTY_LEVEL = 0x7db,
/*20171018 to latest
MAP
*/
	MSG_SEEK_PARTY_MAP = 0x7dc,
/*20171018 to latest
JOB
*/
	MSG_SEEK_PARTY_JOB = 0x7dd,
/*20171018 to latest
Not Available
*/
	MSG_MSG_NOTAVAILABLE = 0x7de,
/*20171018 to latest
[ìˆ˜í˜¸ ì²œì‚¬ì˜ ë³´í˜¸] ë§Œë ™ì¼ ê²½ìš° ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
[Protection of Guardian Angel] You can't use it when you reach the highest level.
*/
	MSG_MSG_SUPERNOVICE_CHOPOKGI_CAPPEDLEVEL = 0x7df,
/*20171018 to latest
ì •ë§ ì´ë™í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you really want to move?
*/
	MSG_CHANGE_CHARACTER_SLOT = 0x7e0,
/*20171018 to latest
ìºë¦­í„° ìŠ¬ë¡¯ ì´ë™ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
Failed to move Char slot.
*/
	MSG_CHANGE_CHARACTER_SLOT_FAILED = 0x7e1,
/*20171018 to latest
ìºë¦­í„° ì´ë¦„ì´ ìž˜ëª» ë˜ì—ˆìŠµë‹ˆë‹¤.
Character name is invalid.
*/
	MSG_CHARACTERNAME_ERROR = 0x7e2,
/*20171018 to latest
í€˜ìŠ¤íŠ¸ë³´ê¸°ì°½
Show Quest
*/
	MSG_QUEST_DISPLAY_ONOFF = 0x7e3,
/*20171018 to latest
 ì²­ì†Œë…„ ë³´í˜¸ë²•ì— ë”°ë¼, ìž ì‹œ í›„ 0ì‹œ ë¶€í„° 6ì‹œ ê¹Œì§€ ë§Œ 16ì„¸ ë¯¸ë§Œ ê³ ê°ë‹˜ë“¤ì˜ ê²Œìž„ ì´ìš©ì´ ì œí•œë©ë‹ˆë‹¤.
Depending on the protection of youth, and 0:00 to 6:00 while under the age of 16 of your game use is limited.
*/
	MSG_SHUTDOWN_ALERT_MSG = 0x7e4,
/*20171018 to latest
ì²­ì†Œë…„ ë³´í˜¸ë²•ì— ë”°ë¼, 0ì‹œ ë¶€í„° 6ì‹œ ê¹Œì§€ ^ff0000ë§Œ 16ì„¸ ë¯¸ë§Œ ê³ ê°ë‹˜ë“¤ì˜ ê²Œìž„ ì´ìš©ì´ ì œí•œ^000000ë˜ë©°, ê²Œìž„ì„ ì¢…ë£Œí•©ë‹ˆë‹¤.
Depending on the protection of youth, 0:00 to 6:00 ^ff0000 under the age of 16 ^000000 limit your use of the game and the game ends.
*/
	MSG_BAN_SHUTDOWN_TEENAGER = 0x7e5,
/*20171018 to latest
ìºë¦­í„° ì´ë¦„ì„ ë³€ê²½í•˜ê¸° ìœ„í•´ì„œëŠ” ê¸¸ë“œì—ì„œ íƒˆí‡´ í•´ì•¼ í•©ë‹ˆë‹¤.
In order to change the character name, you must leave the guild.
*/
	MSG_FAILED_RENAME_BELONGS_TO_GUILD = 0x7e6,
/*20171018 to latest
ìºë¦­í„° ì´ë¦„ì„ ë³€ê²½í•˜ê¸° ìœ„í•´ì„œëŠ” íŒŒí‹°ì—ì„œ íƒˆí‡´ í•´ì•¼ í•©ë‹ˆë‹¤.
In order to change the character name, you must leave the party.
*/
	MSG_FAILED_RENAME_BELONGS_TO_PARTY = 0x7e7,
/*20171018 to latest
ì•Œ ìˆ˜ ì—†ëŠ” ì˜¤ë¥˜ë¡œ ìºë¦­í„° ì´ë¦„ ë³€ê²½ì´ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Character name change failed, due an unknown error.
*/
	MSG_FAILED_RENAME_UNKOWN = 0x7e8,
/*20171018 to latest
ì´ë¯¸ ìºë¦­í„° ìŠ¬ë¡¯ë³€ê²½ì´ ê°€ëŠ¥í•œ ìƒíƒœìž…ë‹ˆë‹¤.(%d)
Ready to change character slot in.(%d)
*/
	MSG_CHARSLOT_CHANGE_DUPLICATE = 0x7e9,
/*20171018 to latest
ì´ë¯¸ ìºë¦­í„° ì´ë¦„ë³€ê²½ì´ ê°€ëŠ¥í•œ ìƒíƒœìž…ë‹ˆë‹¤.(%d)
Ready to change character name in.(%d)
*/
	MSG_CHARNAME_CHANGE_DUPLICATE = 0x7ea,
/*20171018 to latest
ë³€ê²½í•˜ë ¤ëŠ” ì´ë¦„ì˜ ê¸¸ì´ê°€ ìµœëŒ€í¬ê¸°ë¥¼ ì´ˆê³¼í•˜ì—¬ ìºë¦­í„° ì´ë¦„ ë³€ê²½ì´ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Length exceeds the maximum size of the character name you want to change.
*/
	MSG_FAILED_RENAME_OVER_LENGTH = 0x7eb,
/*20171018 to latest
ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ë‹¨ì–´ê°€ í¬í•¨ë˜ì–´ ìºë¦­í„° ì´ë¦„ ë³€ê²½ì´ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
Name contains invalid characters. Character name change failed.
*/
	MSG_FAILED_RENAME_PREVENTNAM = 0x7ec,
/*20171018 to latest
ì´ë¦„ ë³€ê²½ì´ ê¸ˆì§€ëœ ìƒíƒœì´ë¯€ë¡œ ìºë¦­í„° ì´ë¦„ ë³€ê²½ì´ ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤.
The name change is prohibited. Character name change failed.
*/
	MSG_FAILED_RENAME_FORBIDDEN = 0x7ed,
/*20171018 to latest
ì™„ë£Œ
Complete
*/
	MSG_COMPLETE_HUNTING_QUEST = 0x7ee,
/*20171018 to latest
 %dë¶„ê°„ ì–»ì„ ìˆ˜ ìžˆëŠ” ê²½í—˜ì¹˜ê°€ %d%% ì¦ê°€í•©ë‹ˆë‹¤.
During %d minutes your Exp will increase by %d%%.
*/
	MSG_PLUSEXP_VALUE = 0x7ef,
/*20171018 to latest
ì†Œí™˜ê¹Œì§€ %02dì´ˆë‚¨ì•˜ìŠµë‹ˆë‹¤.
%02d seconds left until summon.
*/
	MSG_PARTY_RECALL_TIME = 0x7f0,
/*20171018 to latest
íŒŒí‹°ìž¥ì´ ë‹¹ì‹ ì„ %s (%s) ë¡œ ì†Œí™˜í•©ë‹ˆë‹¤.ì†Œí™˜ì‹œ %d zenyê°€ ì†Œëª¨ë©ë‹ˆë‹¤.
Your party leader summons you to %s (%s). Warp costs %d Zeny.
*/
	MSG_PARTY_RECALL_INFO = 0x7f1,
/*20171018 to latest
ì†Œí™˜ëŒ€ìƒ
Summon target
*/
	MSG_RECALL_TARGET = 0x7f2,
/*20171018 to latest
ì°¨ë‹¨ëª©ë¡
Block List
*/
	MSG_PARTY_BLACKLIST = 0x7f3,
/*20171018 to latest
íŒŒí‹° ê´‘ê³ ë¥¼ ë“±ë¡í•˜ê¸° ìœ„í•´ %dì œë‹ˆê°€ ì†Œëª¨ë©ë‹ˆë‹¤.
%d Zeny will be spent for making party ad.
*/
	MSG_PARTY_CF_PAY = 0x7f4,
/*20171018 to latest
íŒŒí‹° ê´‘ê³ ë¥¼ í•˜ê¸° ìœ„í•œ ì œë‹ˆê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Insufficient Zeny for making party ad.
*/
	MSG_PARTY_CF_PAY_SHORTAGE_COST = 0x7f5,
/*20171018 to latest
)ë‹˜ íŒŒí‹° ê°€ìž…ìŠ¹ì¸
) party: accept invitation
*/
	MSG_PARTY_ADD_OK = 0x7f6,
/*20171018 to latest
)ë‹˜ íŒŒí‹° ê°€ìž…ê±°ë¶€
) party: decline invitation
*/
	MSG_PARTY_ADD_REFUSES = 0x7f7,
/*20171018 to latest
)ë‹˜ ìž¥ë¹„ì°½ë³´ê¸°
) party: show equipment window
*/
	MSG_PARTY_ITEM_VIEW = 0x7f8,
/*20171018 to latest
í•œê¸€18ê¸€ìž,ì˜ë¬¸36ê¸€ìž ìž…ë ¥ê°€ëŠ¥
Up to 36 english letters can be entered
*/
	MSG_SEEK_PARTY_MEMO_HELP = 0x7f9,
/*20171018 to latest
ì§€ì›í•˜ê¸°
Enter
*/
	MSG_PARTY_REQUEST = 0x7fa,
/*20171018 to latest
1:1ëŒ€í™”í•˜ê¸°
1:1 Chat
*/
	MSG_DIRECT_CHAT = 0x7fb,
/*20171018 to latest
ì°¨ë‹¨í•˜ê¸°
Block
*/
	MSG_ADD_BLACKLIST = 0x7fc,
/*20171018 to latest
íŒŒí‹°ìž¥ì—ê²Œ ì†Œí™˜ë˜ê¸° ìœ„í•œ ì œë‹ˆê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Insufficient Zeny for recall.
*/
	MSG_PARTY_RECRUIT_NOT_RECALL_PAY = 0x7fd,
/*20171018 to latest
ë©”ëª¨ëž€ì— íŒŒí‹°ê´‘ê³ ë¥¼ ì¨ì£¼ì„¸ìš”.
Input your party ad.
*/
	MSG_PARTY_RECRUIT_MEMO_ERROR = 0x7fe,
/*20171018 to latest
íŒŒí‹°ìž¥ë§Œì´ íŒŒí‹°ê´‘ê³ ë¥¼ ë“±ë¡í• ìˆ˜ìžˆìŠµë‹ˆë‹¤.
Only party leader can register party ad.
*/
	MSG_PARTY_RECRUIT_ERROR = 0x7ff,
/*20171018 to latest
ì´ë¯¸ ì§€ì›í•œ íŒŒí‹°ê´‘ê³ ìž…ë‹ˆë‹¤.
You have already accepted this ad.
*/
	MSG_PARTY_REFUSE_ERROR = 0x800,
/*20171018 to latest
ë‚´ìš©
For
*/
	MSG_PARTY_RECRUIT_INFO = 0x801,
/*20171018 to latest
ìž¥ë¹„
E
*/
	MSG_INVENTORY_TABNAME_1 = 0x802,
/*20171018 to latest
ê°œì¸
F
*/
	MSG_INVENTORY_TABNAME_3 = 0x803,
/*20171018 to latest
 ì•„ì´í…œ ë²„ë¦¬ê¸° ìž ê¸ˆ
 Drop Lock: On/Off
*/
	MSG_ITEM_DROP_LOCK = 0x804,
/*20171018 to latest
íŒŒí‹°ì› ì°¾ê¸° ì•ŒëžŒ
Party Alarm
*/
	MSG_PARTY_RECRUIT_ALRAM = 0x805,
/*20171018 to latest
íŒŒí‹°ê²°ì„±
Create Party
*/
	MSG_CREATE_PARTY = 0x806,
/*20171018 to latest
íŒŒí‹°íƒˆí‡´
Leave Party
*/
	MSG_WITHDRAW_PARTY = 0x807,
/*20171018 to latest
íŒŒí‹°ì´ˆëŒ€
Party Invitation
*/
	MSG_INVITE_PARTY = 0x808,
/*20171018 to latest
íŒŒí‹° ì´ë¦„ ë“±ë¡
Party Name:
*/
	MSG_PUT_PARTY_NAME_IN = 0x809,
/*20171018 to latest
ì´ˆëŒ€í•  ìºë¦­í„° ì´ë¦„
Player Name:
*/
	MSG_PUT_PLAYER_NAME_IN = 0x80a,
/*20171018 to latest
ë‹˜ê»˜ íŒŒí‹°ê°€ìž… ìš”ì²­ì„ ë³´ëƒˆìŠµë‹ˆë‹¤.
 has recieved an invitation to join your party.
*/
	MSG_CHARACTER_PARTY_INVITATION_TO_JOIN = 0x80b,
/*20171018 to latest
ë‹˜ê»˜ì„œ íŒŒí‹°ê°€ìž…ì„ ê±°ì ˆí–ˆìŠµë‹ˆë‹¤.
 rejected your party invitation.
*/
	MSG_CHARACTER_REJECT_PARTY_INVITATION = 0x80c,
/*20171018 to latest
ë‹˜ê»˜ì„œ íŒŒí‹°ê°€ìž…ì„ ìˆ˜ë½í–ˆìŠµë‹ˆë‹¤.
 accepted your party invitation.
*/
	MSG_CHARACTER_ACCEPT_PARTY_INVITATION = 0x80d,
/*20171018 to latest
ì´ë¯¸ íŒŒí‹°ëª¨ì§‘ì¤‘ìž…ë‹ˆë‹¤.
Recruitment is already a party.
*/
	MSG_PARTY_RECRUIT_ERROR1 = 0x80e,
/*20171018 to latest
ì´ì „ ê²€ìƒ‰ê³¼ ê°™ì€ ì¡°ê±´ìž…ë‹ˆë‹¤.
Same conditions such as the previous search.
*/
	MSG_PARTY_RECRUIT_ERROR2 = 0x80f,
/*20171018 to latest
ê¸¸ë“œ íƒˆí‡´ í›„ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
Guild after withdrwal.
*/
	MSG_CHARNAME_CHANGE_FILED_GUILDMEMBER = 0x810,
/*20171018 to latest
íŒŒí‹° íƒˆí‡´ í›„ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
Party after secession.
*/
	MSG_CHARNAME_CHANGE_FILED_PARTYMEMBER = 0x811,
/*20171018 to latest
ì†Œí™˜ ìœ ì €ê°€ ì†Œí™˜ì´ ì•ˆë˜ëŠ” ë§µì— ìžˆìŠµë‹ˆë‹¤.
The player can not be summoned to this map.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR1 = 0x812,
/*20171018 to latest
í˜„ìž¬ íŒŒí‹°ìž¥ì´ ìžˆëŠ” ë§µì—ì„œëŠ” ì†Œí™˜ì´ ì•ˆë©ë‹ˆë‹¤.
Party Leader is on a map that is restricted to summon players.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR2 = 0x813,
/*20171018 to latest
ì†Œí™˜ê±°ë¶€ë˜ì—ˆìŠµë‹ˆë‹¤.
Summon has been denied.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR3 = 0x814,
/*20171018 to latest
ì†Œí™˜ì„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Can not be summoned.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR4 = 0x815,
/*20171018 to latest
íŒŒí‹°ì´ˆëŒ€ëŠ” íŒŒí‹°ìž¥ë§Œ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Only the leader can invite.
*/
	MSG_YOU_ARE_NOT_PARTYMASTER = 0x816,
/*20171018 to latest
ê²€ìƒ‰í•  ì•„ì´í…œëª… ìž…ë ¥ :
Search item:
*/
	MSG_NC_ITEM_SEARCH = 0x817,
/*20171018 to latest
ìºë¦­í„°ëª…ì„ ìž…ë ¥í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.
You must enter a character name.
*/
	MSG_PLEASE_PUT_CHARACTER_NAME_IN = 0x818,
/*20171018 to latest
íŒŒí‹°ì´ë¦„ì„ ìž…ë ¥í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.
You must enter the name of the party.
*/
	MSG_PLEASE_PUT_PARTY_NAME_IN = 0x819,
/*20171018 to latest
ê¸¸ë“œ ë„ìš°ë¯¸
Guild Creation Window
*/
	MSG_GUILD_HELPER = 0x81a,
/*20171018 to latest
ê°€ìž…ë˜ì–´ ìžˆëŠ” ê¸¸ë“œê°€ ì—†ìŠµë‹ˆë‹¤.
Join a guild or start your own!
*/
	MSG_NO_GUILD_CURRENTLY_PARTICIPATED_IN = 0x81b,
/*20171018 to latest
ê¸¸ë“œ ê²°ì„±
Create Guild
*/
	MSG_CREATE_GUILD = 0x81c,
/*20171018 to latest
ìƒì„±í•  ê¸¸ë“œ ì´ë¦„
Guild Name
*/
	MIS_PUT_GUILD_NAME_IN = 0x81d,
/*20171018 to latest
ê¸¸ë“œ ê²°ì„± ë„ì›€ë§
Guild System
*/
	MIS_GUILD_TIP = 0x81e,
/*20171018 to latest
ê¸¸ë“œ ì‹œìŠ¤í…œì´ëž€
What is the guild system
*/
	MIS_GUILD_SYSTEM = 0x81f,
/*20171018 to latest
ê¸¸ë“œì´ë¦„ì„ ìž…ë ¥í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.
You must enter the name of your guild.
*/
	MSG_PLEASE_PUT_GUILD_NAME_IN = 0x820,
/*20171018 to latest
ì§€ì›í•œ íŒŒí‹°ì—ì„œ ê±°ë¶€ë‹¹í–ˆìŠµë‹ˆë‹¤.
Supported at the party was rejected.
*/
	MSG_PARTY_RECRUIT_REFUSE_VOLUNTEER = 0x821,
/*20171018 to latest
ì„œë¹„ìŠ¤ ì„ íƒ.
Select Service:
*/
	MSG_SERVICESELECT = 0x822,
/*20171018 to latest
íƒˆì¶œ ê°€ëŠ¥í•œ ì§€ì—­.
Possible escape area.
*/
	MSG_SHOW_MAPNAMETITLE = 0x823,
/*20171018 to latest
Replay File List
*/
	MSG_REPLAY_STR_REPLAYFILELIST = 0x824,
/*20171018 to latest
File info
*/
	MSG_REPLAY_STR_FILEINFO = 0x825,
/*20171018 to latest
File List
*/
	MSG_REPLAY_STR_FILELIST = 0x826,
/*20171018 to latest
%s ì•„ì´í…œì€ ê±°ëž˜ê°€ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
%s Item deal not possible.
*/
	MSG_NOT_MOVEABLE_TRADE = 0x827,
/*20171018 to latest
ê¸¸ë“œí•´ì²´
Disband the Guild
*/
	MSG_GUILD_DISBAND = 0x828,
/*20171018 to latest
í•´ì²´í•  ê¸¸ë“œ ì´ë¦„
Enter Guild Name
*/
	MSG_PUT_DISBAND_GUILDNAME = 0x829,
/*20171018 to latest
ì ‘ì†í•˜ì§€ ì•Šì•˜ê±°ë‚˜ ì¡´ìž¬í•˜ì§€ ì•ŠëŠ” ìºë¦­í„°ìž…ë‹ˆë‹¤.
The character is not online or does not exist.
*/
	MSG_JOINGUILD_NOTEXIST_USER = 0x82a,
/*20171018 to latest
íŒ”ì½˜ í˜¸ì¶œì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to call Falcon.
*/
	MSG_FAILED_SET_EFFECT_BIRD = 0x82b,
/*20171018 to latest
%d%% ( ê¸°ë³¸ 100%% + í”„ë¦¬ë¯¸ì—„ %d%% + %sì„œë²„ %d%% )
%d%%(default 100%%+ Premium%d%%+%s Server%d%%)
*/
	MSG_BASIC_EXP_MSG_BRZ = 0x82c,
/*20171018 to latest
í•´ë‹¹ ìœ ì €ëŠ” í˜„ìž¬ ê³µì„±ì „ì— ì°¸ê°€í•˜ê³  ìžˆìŠµë‹ˆë‹¤.
This user is currently participating in the siege.
*/
	MSG_JOINGUILD_TARGET_USER_IN_SIEGEMAP = 0x82d,
/*20171018 to latest
ë™ì¼í•œ ë§µì—ì„œë§Œ íŒŒí‹°ìž¥ ë³€ê²½ì´ ê°€ëŠ¥í•©ë‹ˆë‹¤.
It is only possible to change the party leader while on the same map.
*/
	MSG_PARTY_MASTER_CHANGE_SAME_MAP = 0x82e,
/*20171018 to latest
í˜„ìž¬ ì§€ì—­ì—ì„œëŠ” íŒŒí‹°ìž¥ ë³€ê²½ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
In the current region it is not possible to change the party.
*/
	MSG_CANNOT_PARTY_MASTER_CHANGE_IN_MAP = 0x82f,
/*20171018 to latest
ê·¸ë¦¬í° ë‚´ë¦¬ê¸°
Gryphon making
*/
	MSG_ROYAL_CHIKENOFF = 0x830,
/*20171018 to latest
%dì›” %dì¼ %dì‹œ %dë¶„ %dì´ˆ
Delete: %d/%d - %d:%d:%d
*/
	MSG_TIME_TYPE3 = 0x831,
/*20171018 to latest
í˜„ìž¬ ê³µì„±ì „ì— ì°¸ì—¬ ì¤‘ì´ë¯€ë¡œ ê¸¸ë“œì´ˆëŒ€ë¥¼ í•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can't invite characters in WoE maps.
*/
	MSG_JOINGUILD_REQ_USER_IN_SIEGEMAP = 0x832,
/*20171018 to latest
ì „ìž¥ì— ìž…ìž¥ ëŒ€ê¸°ë¥¼ ì‹ ì²­í•˜ì…¨ìŠµë‹ˆë‹¤.
You are now in the battlefield queue.
*/
	MSG_BATTLEFIELD_MSG_REQUEST_JOINWAIT = 0x833,
/*20171018 to latest
ì¸ì›ì´ ê°€ë“ ì°¼ìŠµë‹ˆë‹¤.
Queuing has finished.
*/
	MSG_BATTLEFIELD_MSG_FULL = 0x834,
/*20171018 to latest
í™•ì¸ë˜ì§€ ì•Šì€ ì „ìž¥ëª…ìž…ë‹ˆë‹¤.
Invalid name of the battlefield.
*/
	MSG_BATTLEFIELD_MSG_UNKNOWN_NAME = 0x835,
/*20171018 to latest
í™•ì¸ë˜ì§€ ì•Šì€ ì‹ ì²­íƒ€ìž…ìž…ë‹ˆë‹¤.
Invalid type of application.
*/
	MSG_BATTLEFIELD_MSG_UNKNOWN_TYPE = 0x836,
/*20171018 to latest
ìµœëŒ€ ì¸ì›ì„ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤.
People count exceeded.
*/
	MSG_BATTLEFIELD_MSG_MAXOVER = 0x837,
/*20171018 to latest
ìž…ìž¥ ë ˆë²¨ì´ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤.
Your level doesn't fit this battlefield rules.
*/
	MSG_BATTLEFIELD_MSG_JOIN_NOTLEVEL = 0x838,
/*20171018 to latest
ì¤‘ë³µ ì‹ ì²­í•˜ì…¨ìŠµë‹ˆë‹¤.
Duplicate application.
*/
	MSG_BATTLEFIELD_MSG_JOIN_OVERLAP = 0x839,
/*20171018 to latest
ìž¬ì ‘ì†í›„ ë‹¤ì‹œ ì‹ ì²­í•˜ì—¬ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
After reconnecting, please re-apply.
*/
	MSG_BATTLEFIELD_MSG_RESTART = 0x83a,
/*20171018 to latest
ì§ì—…ì´ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤.
Your class can't participate in this battlefield.
*/
	MSG_BATTLEFIELD_MSG_NOTJOB = 0x83b,
/*20171018 to latest
íŒŒí‹°ìž¥ì´ë‚˜ ê¸¸ë“œìž¥ë§Œì´ ì‹ ì²­í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Only party leader / guild master can apply.
*/
	MSG_BATTLEFIELD_MSG_JOIN_ONLYBOSS = 0x83c,
/*20171018 to latest
ì „ìž¥ì„ ì´ìš© ì¤‘ì¸ íŒ€ì›ì´ ìžˆì–´ ì‹ ì²­ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
You can't apply while your team member is already on a battlefield.
*/
	MSG_BATTLEFIELD_MSG_BUSY_PARTYMEMBER = 0x83d,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ëŒ€ê¸°ê°€ ì·¨ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
You have left the battlefield queue.
*/
	MSG_BATTLEFIELD_MSG_CANCEL_JOINWAIT = 0x83e,
/*20171018 to latest
ìž˜ëª»ëœ ì „ìž¥ëª… ìž…ë‹ˆë‹¤.
Wrong battlefield name.
*/
	MSG_BATTLEFIELD_MSG_WRONG_NAME = 0x83f,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ëŒ€ê¸° ìˆœìœ„ì— ì—†ìŠµë‹ˆë‹¤.
You are not in the battlefield queue list
*/
	MSG_BATTLEFIELD_MSG_NOTRANK = 0x840,
/*20171018 to latest
ì„ íƒí•˜ì‹  ì „ìž¥ì€ í˜„ìž¬ ì´ìš©í•˜ì‹¤ ìˆ˜ ì—†ìœ¼ë¯€ë¡œ ëŒ€ê¸°ê°€ ì·¨ì†Œë©ë‹ˆë‹¤.
The selected arena is unavailable; your application has been cancelled
*/
	MSG_BATTLEFIELD_MSG_FAIL_CHOICE = 0x841,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ì„ ì·¨ì†Œí•˜ì˜€ìŠµë‹ˆë‹¤.
You have left the queue
*/
	MSG_BATTLEFIELD_MSG_CANCEL_JOIN = 0x842,
/*20171018 to latest
ì „ìž¥ì— ìž…ìž¥í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure you want to join a battleground?
*/
	MSG_BATTLEFIELD_MSG_DOYOU_JOIN = 0x843,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ì‹ ì²­ ì‹œìŠ¤í…œ
[Battlefield application rules]
*/
	MSG_BATTLEFIELD_HELP1 = 0x844,
/*20171018 to latest
ìž…ìž¥ ì‹ ì²­ ë° ì „ìž¥ìœ¼ë¡œì˜ ê³µê°„ì´ë™ ë¶ˆê°€ ìƒí™©
Application and position into the battlefield cannot be applied under this circumtances
*/
	MSG_BATTLEFIELD_HELP2 = 0x845,
/*20171018 to latest
1. ì—¬ëŸ¬ ì¢…ë¥˜ì˜ ì „ìž¥ì„ ë™ì‹œì— ì‹ ì²­í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
1. Different types of battle can not be applied simultaneously.
*/
	MSG_BATTLEFIELD_HELP3 = 0x846,
/*20171018 to latest
2. ê°œì¸ / íŒŒí‹° / ê¸¸ë“œ ì „ìž¥ì„ ë™ì‹œì— ì‹ ì²­í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
2. Personal / party / guild battle can not be applied simultaneously.
*/
	MSG_BATTLEFIELD_HELP4 = 0x847,
/*20171018 to latest
3. íŒŒí‹° ì „ìž¥ ì‹ ì²­ì€ íŒŒí‹°ìž¥ë§Œ ì‹ ì²­í•  ìˆ˜ ìžˆìœ¼ë©°,
3. Parties can only be applied by their party leaders.
*/
	MSG_BATTLEFIELD_HELP5 = 0x848,
/*20171018 to latest
ì˜¤í”„ë¼ì¸ì¤‘ì´ê±°ë‚˜ ì˜¤í”„ë¼ì¸ ëœ íŒŒí‹°ì›ì€ ëŒ€ê¸°ì—´ì—ì„œ ëˆ„ë½ë©ë‹ˆë‹¤.
Offline party members won't proceed to the queue.
*/
	MSG_BATTLEFIELD_HELP6 = 0x849,
/*20171018 to latest
4. ì „ìž¥ ì‹ ì²­ì€ ì „ìž¥ ë§µì„ ì œì™¸í•œ ëª¨ë“  ê³³ì—ì„œ ì‹ ì²­ ê°€ëŠ¥í•˜ë‚˜,
4. You can add request to enter the arena from any map except for those who don't allow teleport/warp.
*/
	MSG_BATTLEFIELD_HELP7 = 0x84a,
/*20171018 to latest
ìž…ìž¥í•œ ìœ„ì¹˜ê°€ ë§ˆì„, í•„ë“œ, ì¼ë°˜ ë˜ì „ì´ ì•„ë‹ ê²½ìš° ë³µê·€ ì‹œ ìºë¦­í„° ì €ìž¥ ì¢Œí‘œë¡œ ì´ë™ ë©ë‹ˆë‹¤.
When the battle is finished your character will be returned to the current spot or (if it's not possible) to the save point.
*/
	MSG_BATTLEFIELD_HELP8 = 0x84b,
/*20171018 to latest
5. ì „ìž¥ì˜ ë³´ìƒ ë° ê¸°íƒ€ ì„œë¹„ìŠ¤ëŠ” ê° ë§ˆì„ì— ìœ„ì¹˜í•œ ì „ìž¥ ëª¨ë³‘ê´€ì„ í†µí•´ ì „ìž¥ ëŒ€ê¸°ì‹¤ì—ì„œ ì´ìš©í•´ ì£¼ì‹­ì‹œì˜¤.
5. You can view and choose rewards in the arena waiting room.
*/
	MSG_BATTLEFIELD_HELP9 = 0x84c,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ì‹ ì²­ ë„ì›€ë§
Request help battle position
*/
	MSG_BATTLEFIELD_HELP10 = 0x84d,
/*20171018 to latest
%s ì „ìž¥ì´ ì‹œìž‘ë©ë‹ˆë‹¤.
%s battle begins.
*/
	MSG_BATTLEFIELD_START = 0x84e,
/*20171018 to latest
ì „ìž¥ìœ¼ë¡œ ì´ë™í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to enter the arena?
*/
	MSG_BATTLEFIELD_DOYOU_MOVE = 0x84f,
/*20171018 to latest
[ì£¼ì˜]
[Note]
*/
	MSG_BATTLEFIELD_WARNINGMSG1 = 0x850,
/*20171018 to latest
í˜„ìž¬ ìœ„ì¹˜ê°€ ë§ˆì„, í•„ë“œ í˜¹ì€ ì¼ë°˜ë˜ì „ì´
When the battle is finished your character will
*/
	MSG_BATTLEFIELD_WARNINGMSG2 = 0x851,
/*20171018 to latest
ì•„ë‹ ê²½ìš° ì „ìž¥ ì¢…ë£Œ í›„ ì €ìž¥ëœ ìœ„ì¹˜ë¡œ
be returned to the current spot or (if it's not
*/
	MSG_BATTLEFIELD_WARNINGMSG3 = 0x852,
/*20171018 to latest
ë˜ëŒì•„ê°€ê²Œ ë©ë‹ˆë‹¤.
possible) to the save point.
*/
	MSG_BATTLEFIELD_WARNINGMSG4 = 0x853,
/*20171018 to latest
ë‹¤ë¥¸ ì´ì˜ ìš”ì²­ ê²°ê³¼ë¥¼ ê¸°ë‹¤ë¦¬ê³  ìžˆìŠµë‹ˆë‹¤.
Waiting for the opponents.
*/
	MSG_BATTLEFIELD_WAIT_PLAYER = 0x854,
/*20171018 to latest
ì „ìž¥ ìž…ìž¥ ìš”ì²­
Battlefield position request
*/
	MSG_BATTLEFIELD_REQUEST_JOIN = 0x855,
/*20171018 to latest
ìˆ˜ë½ëŒ€ê¸°ì‹œê°„:%dì´ˆ
Accept standby time:%d seconds
*/
	MSG_BATTLEFIELD_WAITTIME_D = 0x856,
/*20171018 to latest
ìž…ìž¥ ëŒ€ê¸° ìƒíƒœ
Standby position
*/
	MSG_BATTLEFIELD_STATE_JOINWAIT = 0x857,
/*20171018 to latest
ì „ìž¥ ëª…ì¹­: %s
Battlefield name:%s
*/
	MSG_BATTLEFIELD_NAME_S = 0x858,
/*20171018 to latest
ì „ìž¥ í•„ìš” ì¸ì›: %d
Persons required:%d
*/
	MSG_BATTLEFIELD_MEMBER_D = 0x859,
/*20171018 to latest
ë‚´ ëŒ€ê¸°ìˆœë²ˆ: %d
Your position:%d
*/
	MSG_BATTLEFIELD_MYRANK_D = 0x85a,
/*20171018 to latest
ëª…ì¹­ :
Name:
*/
	MSG_BATTLEFIELD_DP_TITLE = 0x85b,
/*20171018 to latest
ëª©í‘œ :
Goal:
*/
	MSG_BATTLEFIELD_DP_AIM = 0x85c,
/*20171018 to latest
ì „ìž¥ì˜ ì¸ì› êµ¬ì„± :
Format:
*/
	MSG_BATTLEFIELD_DP_MEMBER = 0x85d,
/*20171018 to latest
ì°¸ì—¬ì¡°ê±´ :
Level:
*/
	MSG_BATTLEFIELD_DP_REQUIRED = 0x85e,
/*20171018 to latest
ë³´ìƒ(ìŠ¹) :
Win:
*/
	MSG_BATTLEFIELD_DP_WIN = 0x85f,
/*20171018 to latest
ë³´ìƒ(ë¬´) :
Draw:
*/
	MSG_BATTLEFIELD_DP_DRAW = 0x860,
/*20171018 to latest
ë³´ìƒ(íŒ¨) :
Loss:
*/
	MSG_BATTLEFIELD_DP_LOSS = 0x861,
/*20171018 to latest
ì „ìž¥ì„ ê°œì¸ìœ¼ë¡œ ì‹ ì²­ í•˜ì…¨ìŠµë‹ˆë‹¤. ë§žìŠµë‹ˆê¹Œ?
Do you want to participate in the individuals battle?
*/
	MSG_BATTLEFIELD_DOYOU_SINGLE = 0x862,
/*20171018 to latest
ì „ìž¥ì„ íŒŒí‹°ë¡œ ì‹ ì²­ í•˜ì…¨ìŠµë‹ˆë‹¤. ë§žìŠµë‹ˆê¹Œ?
Do you want to participate in the parties battle?
*/
	MSG_BATTLEFIELD_DOYOU_PALTY = 0x863,
/*20171018 to latest
ì „ìž¥ì„ ê¸¸ë“œë¡œ ì‹ ì²­ í•˜ì…¨ìŠµë‹ˆë‹¤. ë§žìŠµë‹ˆê¹Œ?
Do you want to participate in the guilds battle?
*/
	MSG_BATTLEFIELD_DOYOU_GUILD = 0x864,
/*20171018 to latest
ì „ìž¥ ëª©ë¡
Battleground List
*/
	MSG_BATTLEFIELD_LIST2 = 0x865,
/*20171018 to latest
%d VS %d
*/
	MSG_BATTLEFIELD_D_VS_D = 0x866,
/*20171018 to latest
Base LV %d ì´í•˜
LV %d and lower
*/
	MSG_BATTLEFIELD_LEVELDOWN_D = 0x867,
/*20171018 to latest
Base LV %d ì´ìƒ
LV %d and higher
*/
	MSG_BATTLEFIELD_LEVELUP_D = 0x868,
/*20171018 to latest
Base LV %d ~ %d
LV %d ~ %d
*/
	MSG_BATTLEFIELD_LEVEL_D_D = 0x869,
/*20171018 to latest
ì œí•œ ì—†ìŒ
No restrictions
*/
	MSG_BATTLEFIELD_LIMITLESS = 0x86a,
/*20171018 to latest
[í•´ë‹¹ ë§µì—ì„œëŠ” ì‹ ì²­í•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.]
[You can't apply on this map.]
*/
	MSG_BATTLEFIELD_MSG_NOT_JOINMAP = 0x86b,
/*20171018 to latest
[ì „ìž¥ ìž¬ì‹ ì²­ê¹Œì§€ ì•½ 1ë¶„ì˜ ëŒ€ê¸°ì‹œê°„ì„ í•„ìš”ë¡œ í•©ë‹ˆë‹¤.]
[You must wait about 1 minute to apply.]
*/
	MSG_BATTLEFIELD_MSG_WAIT_1MM = 0x86c,
/*20171018 to latest
[íŒŒí‹°ì— ë¨¼ì € ê°€ìž…í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.]
[You must be in a party.]
*/
	MSG_BATTLEFIELD_MSG_PLZ_PALTYJOIN = 0x86d,
/*20171018 to latest
[íŒŒí‹°ìž¥ë§Œ ì‹ ì²­ ê°€ëŠ¥í•©ë‹ˆë‹¤.]
[Only party leader can apply.]
*/
	MSG_BATTLEFIELD_MSG_NOT_PALTYBOSS = 0x86e,
/*20171018 to latest
[ì ‘ì†ë˜ì–´ìžˆëŠ” íŒŒí‹°ì¸ì›ìˆ˜ê°€ ë§ŽìŠµë‹ˆë‹¤.]
[Too many party members online.]
*/
	MSG_BATTLEFIELD_MSG_OVER_PARTYMEMBER = 0x86f,
/*20171018 to latest
[ê¸¸ë“œì— ë¨¼ì € ê°€ìž…í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.]
[You must be in a guild.]
*/
	MSG_BATTLEFIELD_MSG_PLZ_GUILDJOIN = 0x870,
/*20171018 to latest
[ê¸¸ë“œìž¥ë§Œ ì‹ ì²­ ê°€ëŠ¥í•©ë‹ˆë‹¤.]
[Only guild master can apply.]
*/
	MSG_BATTLEFIELD_MSG_NOT_GUILDBOSS = 0x871,
/*20171018 to latest
[ì ‘ì†ë˜ì–´ìžˆëŠ” ê¸¸ë“œì¸ì›ìˆ˜ê°€ ë§ŽìŠµë‹ˆë‹¤.]
[Too many guild members online.]
*/
	MSG_BATTLEFIELD_MSG_OVER_GUILDMEMBER = 0x872,
/*20171018 to latest
ì´ë™ì˜ˆì•½
Moving Book
*/
	MSG_RESERVE_CHANGE_CHARACTER_SLOT = 0x873,
/*20171018 to latest
ì´ë™
Move
*/
	MSG_CHARACTER_SLOT_CHANGE = 0x874,
/*20171018 to latest
ì´ë¦„ë³€ê²½
Rename
*/
	MSG_CHANGE_CHARACTER_NAME = 0x875,
/*20171018 to latest
Make Character
*/
	MSG_MSG_MAKECHARCTER = 0x876,
/*20171018 to latest
http://ro.game.gnjoy.com/
*/
	MSG_UAE_URL = 0x877,
/*20171018 to latest
(%s) Server
*/
	MSG_UAE_SERVERSTR = 0x878,
/*20171018 to latest
ì•„ì´í…œ ë³‘í•©(ëª¨ë‘ì„ íƒ Ctrl+í´ë¦­)
Item Merge
*/
	MSG_MERGE_ITEM = 0x879,
/*20171018 to latest
ê°™ì€ ì¢…ë¥˜ì˜ ì•„ì´í…œì„ 2ê°œ ì´ìƒ ì„ íƒí•´ì£¼ì„¸ìš”.
Two or more of the same type. Please select an item.
*/
	MSG_SELECT_ITEM_TO_MERGE = 0x87a,
/*20171018 to latest
ì•„ì´í…œ í•©ì¹˜ê¸°ì— ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
Item merge is successful.
*/
	MSG_MERGE_ITEM_SUCCESS = 0x87b,
/*20171018 to latest
ì•„ì´í…œ í•©ì¹˜ê¸°ëŠ” í•œë²ˆì— 1ì¢…ë¥˜ì”©ë§Œ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Combining items will be only one kind at a time.
*/
	MSG_MERGE_ITEM_FAILED_NOT_MERGE = 0x87c,
/*20171018 to latest
ì•„ì´í…œì˜ ê°œìˆ˜ê°€ 30000ê°œ ì´ˆê³¼ í–ˆìŠµë‹ˆë‹¤.
You cannot have more than 30,000 stacked items.
*/
	MSG_MERGE_ITEM_FAILED_MAX_COUNT = 0x87d,
/*20171018 to latest
ì¢Œë¡œ íšŒì „
Rotate left
*/
	MSG_CHARACTER_LEFT_ROLL = 0x87e,
/*20171018 to latest
ìš°ë¡œ íšŒì „
Rotate right
*/
	MSG_CHARACTER_RIGHT_ROLL = 0x87f,
/*20171018 to latest
(%s)ë‹˜ì˜ ì´ì „ì„œë²„ ì •ë³´ë³´ê¸°
(%s) to view the old server information
*/
	MSG_VIEW_BEFORE_WORLDINFO = 0x880,
/*20171018 to latest
ê¸°ì¡´ ì„œë²„ ì •ë³´
Existing server information
*/
	MSG_VIEW_BEFORE_WORLDINFO_TITLE = 0x881,
/*20171018 to latest
^ff0000ê¸°ì¡´ ì„œë²„ : ^0000ff
^ff0000Existing server: ^0000ff
*/
	MSG_VIEW_BEFORE_SERVERINFO = 0x882,
/*20171018 to latest
^ff0000ê¸°ì¡´ ìºë¦­ëª… : ^0000ff
^ff0000Existing character: ^0000ff
*/
	MSG_VIEW_BEFORE_CHARNAME = 0x883,
/*20171018 to latest
ê³µê²©í•œ ëª¬ìŠ¤í„°ì˜ HPê°€ í‘œì‹œë©ë‹ˆë‹¤.
Show monster HP bar when attacking.
*/
	MSG_MONSTER_HP_ON = 0x884,
/*20171018 to latest
ê³µê²©í•œ ëª¬ìŠ¤í„°ì˜ HPê°€ í‘œì‹œë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Hide monster HP bar when attacking.
*/
	MSG_MONSTER_HP_OFF = 0x885,
/*20171018 to latest
ë³‘í•© ê°€ëŠ¥í•œ ì•„ì´í…œì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤
Merge does not exist as an item
*/
	MSG_MERGE_ITEM_FAILED_NOT_EXIST = 0x886,
/*20171018 to latest
ë³‘í•© ê°€ëŠ¥í•œ ì•„ì´í…œì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Merge items available does not exist.
*/
	MSG_NOT_EXIST_MERGE_ITEM = 0x887,
/*20171018 to latest
ì§„í–‰ì¤‘
Act
*/
	MSG_QUESTUI_TAB_PROCESS = 0x888,
/*20171018 to latest
ë³´ë¥˜ì¤‘
Pen
*/
	MSG_QUESTUI_TAB_HOLD = 0x889,
/*20171018 to latest
ì¶”ì²œ
Rec
*/
	MSG_QUESTUI_TAB_BEST = 0x88a,
/*20171018 to latest
ì—í”¼ì†Œë“œ
Episode
*/
	MSG_QUESTUI_TAB_EPISODE = 0x88b,
/*20171018 to latest
ë¡œì»¬
Loc
*/
	MSG_QUESTUI_TAB_LOCAL = 0x88c,
/*20171018 to latest
ì´ë²¤íŠ¸
Evt
*/
	MSG_QUESTUI_TAB_EVENT = 0x88d,
/*20171018 to latest
ì‹ ê·œ
New
*/
	MSG_QUESTUI_TAB_NEW = 0x88e,
/*20171018 to latest
ì‚¬ëƒ¥ëª¬ìŠ¤í„°
Monsters to kill
*/
	MSG_QUESTUI_HUNTMONSTER = 0x88f,
/*20171018 to latest
ë³´ìƒì•„ì´í…œ
Rewards
*/
	MSG_QUESTUI_REWARDITEM = 0x890,
/*20171018 to latest
í•„ìš”ì•„ì´í…œ
Required Items
*/
	MSG_QUESTUI_NEEDITEM = 0x891,
/*20171018 to latest
ì œí•œì‹œê°„
Time Limit
*/
	MSG_QUESTUI_TIMELIMIT = 0x892,
/*20171018 to latest
ë§ˆê°ì‹œê°„
Deadline
*/
	MSG_QUESTUI_CLOSINGTIME = 0x893,
/*20171018 to latest
ê²€ìƒ‰
Search
*/
	MSG_NAVIGATION_SEARCH = 0x894,
/*20171018 to latest
ëª©í‘œë¡œ ì•ˆë‚´
Navigation
*/
	MSG_NAVIGATION_TARGETGO = 0x895,
/*20171018 to latest
ê¸¸ ì •ë³´
Back to Navigation
*/
	MSG_NAVIGATION_ROUTEINFO = 0x896,
/*20171018 to latest
ê²€ìƒ‰ ì •ë³´
Find Information
*/
	MSG_NAVIGATION_SEARCHINFO = 0x897,
/*20171018 to latest
ë³´ê¸° ëª¨ë“œ ë³€ê²½
Toggle Minimap
*/
	MSG_NAVIGATION_VIEWCHANGE = 0x898,
/*20171018 to latest
ì™¸ë¶€ ê¸¸ì •ë³´ íŒŒì¼ ì½ê¸°
Read Information from External File
*/
	MSG_NAVIGATION_LIGHTCHANGE = 0x899,
/*20171018 to latest
ì¢…ë£Œ
Exit
*/
	MSG_NAVIGATION_END = 0x89a,
/*20171018 to latest
ê¸°ë³¸ UIë¡œ ë³€ê²½
Change the Default UI
*/
	MSG_NAVIGATION_BASE = 0x89b,
/*20171018 to latest
ê°„íŽ¸ UIë¡œ ë³€ê²½
Change to Default UI
*/
	MSG_NAVIGATION_MINI = 0x89c,
/*20171018 to latest
ë„ì›€ë§
Help
*/
	MSG_NAVIGATION_HELP = 0x89d,
/*20171018 to latest
ALL
All
*/
	MSG_NAVIGATION_ALL = 0x89e,
/*20171018 to latest
Map
*/
	MSG_NAVIGATION_MAP = 0x89f,
/*20171018 to latest
Npc
*/
	MSG_NAVIGATION_NPC = 0x8a0,
/*20171018 to latest
Mob
*/
	MSG_NAVIGATION_MOB = 0x8a1,
/*20171018 to latest
ê²€ìƒ‰ ë‹¨ì–´ ì„¤ì • (Ex: ë‹¨ì–´ ë‹¨ì–´ ...
Enter search string... (Ex: word word ...)
*/
	MSG_NAVIGATION_SETSTRING = 0x8a2,
/*20171018 to latest
Scroll
*/
	MSG_NAVIGATION_SCROLL = 0x8a3,
/*20171018 to latest
ë˜ì „ì´ë™ ìŠ¤í¬ë¡¤ ì‚¬ìš© ì ìš©
Use Scroll?
*/
	MSG_NAVIGATION_USESCROLL = 0x8a4,
/*20171018 to latest
Service
*/
	MSG_NAVIGATION_SERVICE = 0x8a5,
/*20171018 to latest
ìœ„ì¹˜ ì´ë™ ì„œë¹„ìŠ¤ í—ˆìš©
Use Kafra Warp?
*/
	MSG_NAVIGATION_USESERVICE = 0x8a6,
/*20171018 to latest
Plane
*/
	MSG_NAVIGATION_PLANE = 0x8a7,
/*20171018 to latest
ë¹„ê³µì • ì´ë™ ì ìš©
Use Airship?
*/
	MSG_NAVIGATION_USEPLANE = 0x8a8,
/*20171018 to latest
>> ëª©í‘œ ì •ë³´ë¥¼ ì½ì§€ ëª»í•¨!
>> Failed to read the target information.
*/
	MSG_NAVIGATION_TARGETUNKNOWN = 0x8a9,
/*20171018 to latest
<< ì•ˆë‚´ì¤‘ >>
>> Destination <<
*/
	MSG_NAVIGATION_GOING = 0x8aa,
/*20171018 to latest
<< ê²€ìƒ‰ì¤‘... >>
<<   Goal   >>
*/
	MSG_NAVIGATION_SEARCHING = 0x8ab,
/*20171018 to latest
-----------
*/
	MSG_NAVIGATION_UN = 0x8ac,
/*20171018 to latest
Navigation
*/
	MSG_NAVIGATION_NAVI = 0x8ad,
/*20171018 to latest
== ê²€ìƒ‰ ê²°ê³¼(%d)==
= Found (%d) ==
*/
	MSG_NAVIGATION_SEARCHRESULT_D = 0x8ae,
/*20171018 to latest
Npc)%s:%s
*/
	MSG_NAVIGATION_NPC_S_S = 0x8af,
/*20171018 to latest
Mob)%s:%s
*/
	MSG_NAVIGATION_MOB_S_S = 0x8b0,
/*20171018 to latest
Map)%s
*/
	MSG_NAVIGATION_MAP_S = 0x8b1,
/*20171018 to latest
======== ê²°ê³¼ ì •ë³´ ==========
======== Results ==========
*/
	MSG_NAVIGATION_RESULTINFO = 0x8b2,
/*20171018 to latest
ê±°ë¦¬   : %d Sell %d WarpMove
Dist  %d Cell %d WarpMove
*/
	MSG_NAVIGATION_LENGTH = 0x8b3,
/*20171018 to latest
ëª©í‘œë§µ: %s(%s)
Coords %s(%s)
*/
	MSG_NAVIGATION_TARGETMAP_S_S = 0x8b4,
/*20171018 to latest
ëª©í‘œ   : %s(%d, %d)
Goal:%s (%d,%d)
*/
	MSG_NAVIGATION_TARGET_S_D_D = 0x8b5,
/*20171018 to latest
ë³´ìŠ¤
Boss
*/
	MSG_NAVIGATION_BOSS = 0x8b6,
/*20171018 to latest
ì¼ë°˜
General
*/
	MSG_NAVIGATION_NORMAL = 0x8b7,
/*20171018 to latest
ëª©í‘œ   : %s(%s)
Goal:
*/
	MSG_NAVIGATION_TARGET_S_S = 0x8b8,
/*20171018 to latest
ëª©í‘œ: (%d, %d)
Goal: (%d, %d)
*/
	MSG_NAVIGATION_TARGET_D_D = 0x8b9,
/*20171018 to latest
======= ê¸¸ ì•ˆë‚´ ì •ë³´ =======
======= Guidance =======
*/
	MSG_NAVIGATION_GOINFO = 0x8ba,
/*20171018 to latest
%2d) Item:%s => %s ì‚¬ìš©!
%2d) Item:%s => %s Use!
*/
	MSG_NAVIGATION_ITEM_S_S = 0x8bb,
/*20171018 to latest
%2d) %s(%d,%d)=>(%d,%d)
*/
	MSG_NAVIGATION_D_S_D_D_D_D = 0x8bc,
/*20171018 to latest
E%2d) %s(%d,%d)=>(%d,%d)
*/
	MSG_NAVIGATION_E_D_S_D_D_D_D = 0x8bd,
/*20171018 to latest
E%2d) %s
*/
	MSG_NAVIGATION_E_D_S = 0x8be,
/*20171018 to latest
ì•ˆë‚´ì¤‘ ìž…ë‹ˆë‹¤! ì¢…ë£Œ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to cancel navigation?
*/
	MSG_NAVIGATION_GOEXIT = 0x8bf,
/*20171018 to latest
ë‚´ë¹„ê²Œì´ì…˜ ë„ì›€ë§
How to Use Navigation
*/
	MSG_NAVIGATION_HELPTITLE = 0x8c0,
/*20171018 to latest
------------------- ëª…ë ¹ì–´ --------------------
------------------- Instruction --------------------
*/
	MSG_NAVIGATION_HELP1 = 0x8c1,
/*20171018 to latest
1. /navigation      /navi
1) /Navigation or /navi
*/
	MSG_NAVIGATION_HELP2 = 0x8c2,
/*20171018 to latest
  ex)/navi prontera 100/100 -> ë§µì´ë¦„, 100/100
ex) /navi prontera 100 100 -> /navi "MAPNAME", 100, 100
*/
	MSG_NAVIGATION_HELP3 = 0x8c3,
/*20171018 to latest
  ê¸°ë³¸ ëª…ë ¹ì–´ëŠ” ì œë‹ˆ, ë¹„ê³µì • ê²€ìƒ‰ì„ ê¸°ë³¸ìœ¼ë¡œ í•©ë‹ˆë‹¤.
2) /Navigation2 or /navi2 
*/
	MSG_NAVIGATION_HELP4 = 0x8c4,
/*20171018 to latest
2. /navigation2      /navi2
ex) /navi2 prontera 100 111
*/
	MSG_NAVIGATION_HELP5 = 0x8c5,
/*20171018 to latest
  ex) /navi2 prontera 100/100 1/1/1
-> MAPNAME location (100 90), Scroll | Zeny | Plane (1: Enable or 0: Disable)
*/
	MSG_NAVIGATION_HELP6 = 0x8c6,
/*20171018 to latest
-> ë§µì´ë¦„, ìœ„ì¹˜(100/100), scrool/zeny/plane (1:ì‚¬ìš©í•¨ 0: ì‚¬ìš©ì•ˆí•¨)
-> /navi2 goes with the case with location coordinates. They must be no less than 3 characters 
*/
	MSG_NAVIGATION_HELP7 = 0x8c7,
/*20171018 to latest
3. $$all   ëª¨ë“  í•­ëª© ì¶œë ¥ (Type êµ¬ë¶„ í•­ëª©ìœ¼ë¡œ ì¶œë ¥ ì¢…ë¥˜ êµ¬ë¶„ ê°€ëŠ¥.)
3) /$$ Output all the items (Can take a while...) 
*/
	MSG_NAVIGATION_HELP8 = 0x8c8,
/*20171018 to latest
4. $$lv30   í•´ë‹¹ ë ˆë²¨ì˜ ëª¬ìŠ¤í„° ì¶œë ¥
4) /$$ Lv30 monsters are placed in the output 
*/
	MSG_NAVIGATION_HELP9 = 0x8c9,
/*20171018 to latest
5. $$lv20~30   í•´ë‹¹ ë ˆë²¨ ë²”ìœ„ì˜ ëª¬ìŠ¤í„° ì¶œë ¥
5) /$$ Lv20~30 monsters in that level range are placed in the output 
*/
	MSG_NAVIGATION_HELP10 = 0x8ca,
/*20171018 to latest
-------------------  ì„¤ëª…  --------------------
-------------------  Description  --------------------
*/
	MSG_NAVIGATION_HELP11 = 0x8cb,
/*20171018 to latest
1.ê²€ìƒ‰ ì¢…ë¥˜ëŠ” ì „ì²´, ë§µ, Npc, ëª¬ìŠ¤í„° ìœ¼ë¡œ ë¶„ë¥˜ ëœë‹¤.
1) One can search for monsters, npcs, maps, or all at once
*/
	MSG_NAVIGATION_HELP12 = 0x8cc,
/*20171018 to latest
2.ëª…ë ¹ì–´ë¡œ ê²€ìƒ‰í•œë‹¤. ê·œì¹™ì€ ê²€ìƒ‰ í•˜ë ¤ëŠ” ë¬¸ìžì—´ì´ ëª¨ë‘ í¬í•¨ëœ ì •ë³´ë¥¼ ì¶œë ¥ í•œë‹¤.
2) You can press the search button to get results. It will out put the results depending on what rule you choose
*/
	MSG_NAVIGATION_HELP13 = 0x8cd,
/*20171018 to latest
  ex) í”„ë¡  ì¹´í”„ -> ê²€ìƒ‰ ê²°ê³¼ í”„ë¡ í…Œë¼ì˜ ì¹´í”„ë¼ë¥¼ ëª¨ë‘ ì¶œë ¥ í•œë‹¤.
ex) Drop down box -> Select "Npc", then type in the box "Kafra". Results will now be displayed
*/
	MSG_NAVIGATION_HELP14 = 0x8ce,
/*20171018 to latest
3.ë¦¬ìŠ¤íŠ¸ì—ì„œ í•­ëª©ì„ ì„ íƒí•˜ë©´ ì •ë³´ê°€ ì¶œë ¥ëœë‹¤.
3) When you select an item from a list, information about it are displayed.
*/
	MSG_NAVIGATION_HELP15 = 0x8cf,
/*20171018 to latest
  ì¶œë ¥ ë˜ê³  ìžˆëŠ” ëª©í‘œê°€ ìžˆì„ë•Œ ì•ˆë‚´ ë²„íŠ¼ì„ í´ë¦­í•˜ë©´ í•´ë‹¹ ëª©í‘œë¡œ ê¸¸ì„ ì•ˆë‚´ í•œë‹¤.
-> When button is clicked, it will point you towards your destination if available
*/
	MSG_NAVIGATION_HELP16 = 0x8d0,
/*20171018 to latest
4.scrool/ zeny/ plane ìƒìžë¥¼ ì›í•˜ëŠ” ë§Œí¼ ì²´í¬í•˜ì—¬ ë” ë¹ ë¥¸ ê²½ë¡œë¥¼ ì•ˆë‚´ ë°›ì„ ìˆ˜ ìžˆë‹¤.
4) Scroll | Zeny | Plane options can be checked to find a faster route
*/
	MSG_NAVIGATION_HELP17 = 0x8d1,
/*20171018 to latest
5.ì•ˆë‚´ ë²„íŠ¼ì´ ëˆŒëŸ¬ì§€ë©´ ê²°ê³¼ ë¦¬ìŠ¤íŠ¸ì°½ì€ ê¸¸ì•ˆë‚´ ë¦¬ìŠ¤íŠ¸ ìž¥ìœ¼ë¡œ ë³€ê²½ ëœë‹¤.
5) Guide button is pressed, the result list window displays where routes can change direction
*/
	MSG_NAVIGATION_HELP18 = 0x8d2,
/*20171018 to latest
6.ê²€ìƒ‰ ë¦¬ìŠ¤íŠ¸ì°½ í•˜ë‹¨ ë²„íŠ¼ì„ ì´ìš©í•˜ì—¬
6) Using the button below, search results can be found
*/
	MSG_NAVIGATION_HELP19 = 0x8d3,
/*20171018 to latest
 [ê²°ê³¼ ë¦¬ìŠ¤íŠ¸ ì°½] <-> [ê¸¸ ì•ˆë‚´ ì •ë³´ ì°½] ìœ¼ë¡œ ë³´ê¸° ëª¨ë“œ ë³€ê²½ ê°€ëŠ¥í•˜ë‹¤.
-> [Results List Window] <-> [View Modes can be switched]
*/
	MSG_NAVIGATION_HELP20 = 0x8d4,
/*20171018 to latest
Level:%d (ë³´ìŠ¤)
Level:%d (Boss)
*/
	MSG_NAVIGATION_LEVEL_D_BOSS = 0x8d5,
/*20171018 to latest
Level:%d (ì¼ë°˜)
Level:%d (Mob)
*/
	MSG_NAVIGATION_LEVEL_D_NORMAL = 0x8d6,
/*20171018 to latest
ìˆ˜ì†ì„±%d
Water %d
*/
	MSG_NAVIGATION_PROPERTY1 = 0x8d7,
/*20171018 to latest
ì§€ì†ì„±%d
Earth %d
*/
	MSG_NAVIGATION_PROPERTY2 = 0x8d8,
/*20171018 to latest
í™”ì†ì„±%d
Fire %d
*/
	MSG_NAVIGATION_PROPERTY3 = 0x8d9,
/*20171018 to latest
í’ì†ì„±%d
Wind %d
*/
	MSG_NAVIGATION_PROPERTY4 = 0x8da,
/*20171018 to latest
ë…ì†ì„±%d
Poison %d
*/
	MSG_NAVIGATION_PROPERTY5 = 0x8db,
/*20171018 to latest
ì„±ì†ì„±%d
Holy %d
*/
	MSG_NAVIGATION_PROPERTY6 = 0x8dc,
/*20171018 to latest
ì•”ì†ì„±%d
Shadow %d
*/
	MSG_NAVIGATION_PROPERTY7 = 0x8dd,
/*20171018 to latest
ì—¼ì†ì„±%d
Ghost %d
*/
	MSG_NAVIGATION_PROPERTY8 = 0x8de,
/*20171018 to latest
ì–¸ë°ë“œ%d
Undead %d
*/
	MSG_NAVIGATION_PROPERTY9 = 0x8df,
/*20171018 to latest
ë¬´ì†ì„±%d
Neutral %d
*/
	MSG_NAVIGATION_PROPERTY0 = 0x8e0,
/*20171018 to latest
ì¤‘í˜•
Medium
*/
	MSG_NAVIGATION_SCALE1 = 0x8e1,
/*20171018 to latest
ëŒ€í˜•
Large
*/
	MSG_NAVIGATION_SCALE2 = 0x8e2,
/*20171018 to latest
ì†Œí˜•
Small
*/
	MSG_NAVIGATION_SCALE0 = 0x8e3,
/*20171018 to latest
ë¶ˆì‚¬í˜•
Undead
*/
	MSG_NAVIGATION_RACE1 = 0x8e4,
/*20171018 to latest
ë™ë¬¼í˜•
Brute
*/
	MSG_NAVIGATION_RACE2 = 0x8e5,
/*20171018 to latest
ì‹ë¬¼í˜•
Plant
*/
	MSG_NAVIGATION_RACE3 = 0x8e6,
/*20171018 to latest
ê³¤ì¶©í˜•
Insect
*/
	MSG_NAVIGATION_RACE4 = 0x8e7,
/*20171018 to latest
ì–´íŒ¨í˜•
Fish
*/
	MSG_NAVIGATION_RACE5 = 0x8e8,
/*20171018 to latest
ì•…ë§ˆí˜•
Demon
*/
	MSG_NAVIGATION_RACE6 = 0x8e9,
/*20171018 to latest
ì¸ê°„í˜•
Demi-Human
*/
	MSG_NAVIGATION_RACE7 = 0x8ea,
/*20171018 to latest
ì²œì‚¬í˜•
Angel
*/
	MSG_NAVIGATION_RACE8 = 0x8eb,
/*20171018 to latest
ìš©ì¡±
Dragon
*/
	MSG_NAVIGATION_RACE9 = 0x8ec,
/*20171018 to latest
ë¬´í˜•
Formless
*/
	MSG_NAVIGATION_RACE0 = 0x8ed,
/*20171018 to latest
%s ì´ë™ í´ë¦­
Click to move %s
*/
	MSG_NAVIGATION_MOVECLICK = 0x8ee,
/*20171018 to latest
Npc ì´ë™ ì„œë¹„ìŠ¤ ì´ìš©
Move to the Kafra Service Npc
*/
	MSG_NAVIGATION_NPCMOVE = 0x8ef,
/*20171018 to latest
NPC í´ë¦­
Click the NPC
*/
	MSG_NAVIGATION_NPCCLICK = 0x8f0,
/*20171018 to latest
%s ì´ë™
Move %s
*/
	MSG_NAVIGATION_S_MOVE = 0x8f1,
/*20171018 to latest
ë¹„ê³µì • ì´ë™
Move to the Airship Service
*/
	MSG_NAVIGATION_PLANEMOVE = 0x8f2,
/*20171018 to latest
ì›Œí”„ ì´ìš©
By Warp
*/
	MSG_NAVIGATION_WARPUSE = 0x8f3,
/*20171018 to latest
ë„ì°©ì  : ( %d %d )
End Points: (%d %d)
*/
	MSG_NAVIGATION_TARGETPOINT_D_D = 0x8f4,
/*20171018 to latest
ë‚´ë¹„ê²Œì´ì…˜ì´ ì§€ì› ë˜ì§€ ì•ŠëŠ” ì§€ì—­ ìž…ë‹ˆë‹¤.
That does not support the navigation area
*/
	MSG_NAVIGATION_UNKNOWNMAP = 0x8f5,
/*20171018 to latest
ì°¾ê³ ìž í•˜ëŠ” ëª©ì ì´ ë¶ˆë¶„ëª… í•©ë‹ˆë‹¤.
The purpose is unclear
*/
	MSG_NAVIGATION_RS_UNKNOWN = 0x8f6,
/*20171018 to latest
ë§¤ì¹­ì´ ë§žì§€ ì•ŠëŠ” ë§µì´ë‹¤.
Does not meet the map requirement
*/
	MSG_NAVIGATION_RS_NOTSAMEMAP = 0x8f7,
/*20171018 to latest
ì¶œë°œ ì§€ì—­ì— ëŒ€í•œ ì •ë³´ ì„¤ì • ì‹¤íŒ¨!
Information Failure | Change settings
*/
	MSG_NAVIGATION_RS_FAILSTARTDATA = 0x8f8,
/*20171018 to latest
ë„ì°© ì§€ì ì— ëŒ€í•œ ì •ë³´ ì„¤ì • ì‹¤íŒ¨!
Failed to set info for location!
*/
	MSG_NAVIGATION_RS_FAILTARGET = 0x8f9,
/*20171018 to latest
ê¸¸ ì°¾ê¸° ì‹¤íŒ¨
Failed to find a path
*/
	MSG_NAVIGATION_RS_FAILROUTE = 0x8fa,
/*20171018 to latest
í”Œë ˆì´ì–´ ìœ„ì¹˜ ì°¾ê¸° ì‹¤íŒ¨
Failed to find players 
*/
	MSG_NAVIGATION_RS_FAILPLAYER = 0x8fb,
/*20171018 to latest
ë‚´ë¹„ê²Œì´ì…˜ì— ì •ë³´ê°€ ì—†ìŠµë‹ˆë‹¤.
No Information
*/
	MSG_NAVIGATION_RS_NODATA = 0x8fc,
/*20171018 to latest
í•´ë‹¹ ë§µì€ ê¸¸ì°¾ê¸°ê°€ ì§€ì› ë˜ì§€ ì•ŠëŠ” ë§µìž…ë‹ˆë‹¤.
Map doesn't support directions
*/
	MSG_NAVIGATION_RS_MAPNOTNAVIGATION = 0x8fd,
/*20171018 to latest
ëª©í‘œë¥¼ ì§€ì • í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please specify target goals.
*/
	MSG_NAVIGATION_RS_FAILTARGETROUTE = 0x8fe,
/*20171018 to latest
ë„ì°©.
Found
*/
	MSG_NAVIGATION_RS_SUCCESS = 0x8ff,
/*20171018 to latest
ê¸¸ ì•ˆë‚´ê°€ ì‹œìž‘ ë˜ì—ˆìŠµë‹ˆë‹¤.
Directions were started
*/
	MSG_NAVIGATION_RS_START = 0x900,
/*20171018 to latest
ì°¾ê³ ìž í•˜ëŠ” ëª¬ìŠ¤í„°ê°€ ìžˆëŠ” ë§µ ìž…ë‹ˆë‹¤.
Is the map that your looking for mob
*/
	MSG_NAVIGATION_RS_MOBTARGETMAP = 0x901,
/*20171018 to latest
ì°¾ê³ ìž í•˜ëŠ” ë§µì´ í•´ë‹¹ ë§µ ìž…ë‹ˆë‹¤.
Map appears on the guide you are looking for
*/
	MSG_NAVIGATION_RS_TARGETMAP = 0x902,
/*20171018 to latest
ì•„ì´í…œì„ ì‚¬ìš©í•˜ì—¬ ì´ë™í•˜ì—¬ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please navigate using the item
*/
	MSG_NAVIGATION_RS_SCROLL = 0x903,
/*20171018 to latest
ì•ˆë‚´í•˜ëŠ” ìœ„ì¹˜ë¡œ ì´ë™í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please follow the instruction to reach your destination.
*/
	MSG_NAVIGATION_RS_ROUTE_SUCCESS = 0x904,
/*20171018 to latest
ëª©í‘œ ë§µì— ë„ì°©í•˜ì˜€ìŠµë‹ˆë‹¤.
Arrived at the target map
*/
	MSG_NAVIGATION_RS_MAPTMAP_SUCCESS = 0x905,
/*20171018 to latest
ì°¾ê³ ìž í•˜ëŠ” Npcê°€ ìžˆëŠ” ë§µì— ë„ì°© í•˜ì˜€ìŠµë‹ˆë‹¤. Npcë¡œ ì´ë™í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Arrived on the map that has the Npc your looking for. Go to that NPC
*/
	MSG_NAVIGATION_RS_NPCTMAP_SUCCESS = 0x906,
/*20171018 to latest
ì°¾ê³ ìž í•˜ëŠ” Mobì´ ì„œì‹í•˜ëŠ” ë§µì— ë„ì°© í•˜ì˜€ìŠµë‹ˆë‹¤.
You have arrived at the mob you were looking for
*/
	MSG_NAVIGATION_RS_MOBTMAP_SUCCESS = 0x907,
/*20171018 to latest
ì´ì „ê³¼ ë™ì¼í•œ ëª©í‘œ ìž…ë‹ˆë‹¤.
You have reached your goal
*/
	MSG_NAVIGATION_RS_POSTMAP_SUCCESS = 0x908,
/*20171018 to latest
ê°€ë¦¬í‚¤ëŠ” ë°©í–¥ìœ¼ë¡œ ê°€ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please go to indicated direction.
*/
	MSG_NAVIGATION_RS_SAMETARGET = 0x909,
/*20171018 to latest
ëª©í‘œê°€ ì—¬ê¸° ìž…ë‹ˆë‹¤.
The goal has been reached
*/
	MSG_NAVIGATION_RS_HERE = 0x90a,
/*20171018 to latest
Navigation >: %s
*/
	MSG_NAVIGATION_PRINT_S = 0x90b,
/*20171018 to latest
Navigation >: ì•ˆë‚´í•˜ëŠ” %s(ì„)ë¥¼ ì´ìš©í•˜ì—¬
Navigation >: Talk to Guide "%s" (A)
*/
	MSG_NAVIGATION_PRINT_GO_S = 0x90c,
/*20171018 to latest
Navigation >: ë§µ(%s)ìœ¼ë¡œ ì´ë™í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤
Navigation >: Move to (%s) map
*/
	MSG_NAVIGATION_PRINT_MAP_S = 0x90d,
/*20171018 to latest
Navigation >: ë§µ(%s)ì„ ì„ íƒí•˜ì—¬ ì´ë™ í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤
Navigation >: Choose (%s) Map from Kafra
*/
	MSG_NAVIGATION_PRINT_SELECTMAP_S = 0x90e,
/*20171018 to latest
Navigation >: ë¹„ê³µì •ìœ¼ë¡œ ì´ë™ í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤
Navigation >: Please go to the AirShip
*/
	MSG_NAVIGATION_PRINT_PLANE = 0x90f,
/*20171018 to latest
Navigation >: ì›Œí”„ë¥¼ ì´ìš©í•˜ì—¬ ë‹¤ìŒ ì§€ì—­ìœ¼ë¡œ ì´ë™í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Navigation >: Get to your destination by using WarpPortal
*/
	MSG_NAVIGATION_PRINT_WARP = 0x910,
/*20171018 to latest
Item: 
*/
	MSG_NAVIGATION_PRINT_ITEM = 0x911,
/*20171018 to latest
$$
*/
	MSG_NAVIGATION_ZZ = 0x912,
/*20171018 to latest
$$lv
*/
	MSG_NAVIGATION_ZZLV = 0x913,
/*20171018 to latest
~
*/
	MSG_NAVIGATION_ZZLIMIT = 0x914,
/*20171018 to latest
$$all
*/
	MSG_NAVIGATION_ZZALL = 0x915,
/*20171018 to latest
êµ¬ë§¤ í™•ì¸ì„œ
Confirm Deal
*/
	MSG_SHOP_ITEM_BAY_TITLE = 0x916,
/*20171018 to latest
êµ¬ìž…í•˜ë ¤ëŠ” ì•„ì´í…œë“¤ì˜ ì´ê°€ê²©ì€
Below is the total cost:
*/
	MSG_SHOP_ITEM_BAY_MAG1 = 0x917,
/*20171018 to latest
Zeny ìž…ë‹ˆë‹¤.
 Zeny to complete the transaction.
*/
	MSG_SHOP_ITEM_BAY_MAG2 = 0x918,
/*20171018 to latest
êµ¬ìž…í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Press buy to confirm.
*/
	MSG_SHOP_ITEM_BAY_MAG3 = 0x919,
/*20171018 to latest
%.1f%% (PCë°© %.1f%% + TPLUS %.1f%% + í”„ë¦¬ë¯¸ì—„ %.1f%% + %sì„œë²„ %.1f%%)
%.1f% (PCRoom %.1f% + TPLUS %.1f% + Premium %.1f% + %sServer %.1f%)
*/
	MSG_BASIC_EXP_MSG2 = 0x91a,
/*20171018 to latest
ì¹´ë“œ ë¶
Card Book
*/
	MSG_CARDWIN = 0x91b,
/*20171018 to latest
%d%% [ ( ê¸°ë³¸ 100%% + %sì„œë²„ %d%% ) * í™œì„± %.1f ]
%d%% [ ( Basic 100%% + %sServer %d%% ) * Active %.1f ]
*/
	MSG_PERSONAL_INFORMATION_MSG_CHN = 0x91c,
/*20171018 to latest
%d%% [ ê¸°ë³¸ 100%% + %sì„œë²„ %d%% ]
%d%% [ Basic 100%% + %sServer %d%% ]
*/
	MSG_PERSONAL_INFORMATION_MSG_CHN_DEATH = 0x91d,
/*20171018 to latest
ì´ê³³ì€ PK ì§€ì—­ìž…ë‹ˆë‹¤. ë¯¸ì„±ë…„ìžëŠ” ìžë°œì ìœ¼ë¡œ ë– ë‚˜ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
This is PK region. Minors,Please leave immediately.
*/
	MSG_CAUTION_PKZONE = 0x91e,
/*20171018 to latest
í”¼ë¡œë„
Fatigue
*/
	MSG_FATIGUE = 0x91f,
/*20171018 to latest
ê±´ê°•ìƒíƒœ ì´ë©° ê²Œìž„ìˆ˜ìµì€ 100%ìž…ë‹ˆë‹¤.
Health and gaming revenue is 100%%.
*/
	MSG_FATIGUE_LEVEL_ZERO = 0x920,
/*20171018 to latest
ì§€ê¸ˆì€ í”¼ë¡œìƒíƒœì´ë¯€ë¡œ ì†ë‹˜ì˜ ê²Œìž„ìˆ˜ìµì€ 50% ë–¨ì–´ì§‘ë‹ˆë‹¤. ê±´ê°•ì„ ìœ„í•˜ì—¬ ì ë‹¹í•œ íœ´ì‹ ë°”ëžë‹ˆë‹¤.
Fatigue because it is now a guest of the gaming revenue is down 50 percent.Hope for the proper health
*/
	MSG_FATIGUE_LEVEL_HALF = 0x921,
/*20171018 to latest
ì§€ê¸ˆì€ ë¹„ê±´ê°•ìƒíƒœì´ë¯€ë¡œ ì†ë‹˜ì˜ ê±´ê°•ì„ ìœ„í•˜ì—¬ ê²Œìž„ì˜¤í”„ë¼ì¸ì„ ì›í•©ë‹ˆë‹¤. ê³„ì† ì˜¨ë¼ì¸ìƒíƒœì— ìžˆìœ¼ë©´ ê±´ê°•ì— ì†ìƒì„ ì£¼ë¯€ë¡œ ê²Œìž„ ìˆ˜ìµì€ 0%ìœ¼ë¡œ ë–¨ì–´ì§€ë©° ê²Œìž„ ì˜¤í”„ë¼ì¸ 5ì‹œê°„í›„ì— ë‹¤ì‹œ íšŒë³µë©ë‹ˆë‹¤.
Now because it is a non-health to the health of the guests want to offline games. If you still are online gaming revenue because the damage to the health of the game falls to 0% again after 5 hours will be restored offline.
*/
	MSG_FATIGUE_LEVEL_FULL = 0x922,
/*20171018 to latest
ì ‘ì†ì‹œê°„ %d ë¶„ì´ ë˜ì—ˆìŠµë‹ˆë‹¤.
Online since %d minutes
*/
	MSG_FATIGUE_MESSAGE0 = 0x923,
/*20171018 to latest
ì ‘ì†ì‹œê°„ %d ì‹œê°„ì´ ë˜ì—ˆìŠµë‹ˆë‹¤.
Online Time: %d
*/
	MSG_FATIGUE_MESSAGE1 = 0x924,
/*20171018 to latest
ì ‘ì†ì‹œê°„ %d ì‹œê°„ %d ë¶„ì´ ë˜ì—ˆìŠµë‹ˆë‹¤.
Online since %d hours and %d minutes
*/
	MSG_FATIGUE_MESSAGE2 = 0x925,
/*20171018 to latest
/monsterhp : ê³µê²©í•œ ëª¬ìŠ¤í„°ì˜ HPì •ë³´ë¥¼ í‘œì‹œí•©ë‹ˆë‹¤. On Off
/monsterhp: Show the hp of attacked monster. On off
*/
	MSG_EXPLAIN_MONSTERHP = 0x926,
/*20171018 to latest
ìŠ¤í‚¬í¬ì¸íŠ¸ : 
Skill Points: 
*/
	MSG_SKILLPOINT2 = 0x927,
/*20171018 to latest
ì¸ì¦ì„œë²„ë¡œ ë¶€í„°ì˜ ì‘ë‹µì´ ì—†ìŠµë‹ˆë‹¤. ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì„¸ìš”
There is no response from the authentification server. Please try again
*/
	MSG_BAN_BILLING_SERVER_ERROR = 0x928,
/*20171018 to latest
ì•”í˜¸ë¥¼ ë³€ê²½í•˜ì—¬ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please change your password
*/
	MSG_REFUSE_CHANGE_PASSWD_FORCE = 0x929,
/*20171018 to latest
http://www.ragnarok.co.kr
*/
	MSG_REFUSE_CHANGE_PASSWD_SITE = 0x92a,
/*20171018 to latest
ê³ ê°ë‹˜ê»˜ì„œëŠ” í˜„ìž¬ ì ‘ì†ê¸ˆì§€ ì‹œê°„ìž…ë‹ˆë‹¤.
Guest access is prohibited
*/
	MSG_PLANNED_TIME_SHUTDOWN = 0x92b,
/*20171018 to latest
ì…§ë‹¤ìš´ì œë„ì— ì˜í•´ ê³ ê°ë‹˜ì˜ ê²Œìž„ì œí•œ ì‹œê°„ì€ %1.2d-%1.2d-%1.2d %1.2d:%1.2d:%1.2dì— ê²Œìž„ì´ ì¢…ë£Œë  ì˜ˆì •ìž…ë‹ˆë‹¤.
Your System is been Shutdown, %1.2d-%1.2d-%1.2d %1.2d:%1.2d:%1.2d is the end time.
*/
	MSG_SHOUTDOWN_TIME = 0x92c,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ê³„ì •ì€ ì„ íƒì  ì…§ë‹¤ìš´ì´ ì ìš©ëœ ê³„ì •ì´ë©°, ìž”ì—¬ì‹œê°„ì€ %1.2dì‹œê°„ %1.2dë¶„ìž…ë‹ˆë‹¤. ê²Œìž„ ì´ìš©ì— ì°¸ê³ í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Selected System Shutdown is activated in your account,Time Left: %1.2d hours %1.2d minutes.
*/
	MSG_PARTIAL_SHOUTDOWN_TIME = 0x92d,
/*20171018 to latest
ë¦¬í”Œë ˆì´
Replay
*/
	MSG_MENU_REPLAYWND = 0x92e,
/*20171018 to latest
ë§¤í¬ë¡œ
Macro
*/
	MSG_MENU_MACROWND = 0x92f,
/*20171018 to latest
Webbrowser
*/
	MSG_MENU_WEBBROWSERWND = 0x930,
/*20171018 to latest
ë‚´ë¹„ê²Œì´ì…˜
Navigation
*/
	MSG_MENU_NAVIGATIONWND = 0x931,
/*20171018 to latest
UAEURL
*/
	MSG_MENU_UAEURLWND = 0x932,
/*20171018 to latest
 í´ëžœì •ë³´ 
Clan Information
*/
	MSG_CLAN_INFOMANAGE = 0x933,
/*20171018 to latest
í´ëžœë ˆë²¨
Clan Level
*/
	MSG_CLAN_LEVEL = 0x934,
/*20171018 to latest
í´ëžœëª…
Clan Name
*/
	MSG_CLAN_NAME = 0x935,
/*20171018 to latest
í´ëžœë§ˆí¬
Clan Mark
*/
	MSG_CLAN_MARK = 0x936,
/*20171018 to latest
ë™ë§¹í´ëžœ
Ally Clan
*/
	MSG_ALLY_CLAN = 0x937,
/*20171018 to latest
ì ëŒ€í´ëžœ
Antagonist Clan
*/
	MSG_HOSTILITY_CLAN = 0x938,
/*20171018 to latest
í´ëžœì—ê²Œ ë³´ëƒ„
Send to Clan
*/
	MSG_SEND_TO_CLAN = 0x939,
/*20171018 to latest
ë§ˆìŠ¤í„°ì´ë¦„
ClanMaster Name
*/
	MSG_CLAN_MASTER_NAME = 0x93a,
/*20171018 to latest
ì¡°í•©ì›ìˆ˜
Number of Members
*/
	MSG_CLAN_NUM_MEMBER = 0x93b,
/*20171018 to latest
ê´€ë¦¬ì˜ì§€
Castles Owned
*/
	MSG_CLAN_MANAGE_LAND = 0x93c,
/*20171018 to latest
í´ëžœ ì±„íŒ… ë©”ì‹œì§€ í‘œì‹œ
Clan Chat Messages
*/
	MSG_VIEW_CLAN_MSG = 0x93d,
/*20171018 to latest
ì¶©ì „ íŽ˜ì´ì§€ë¡œ ì´ë™í•©ë‹ˆë‹¤.
Go to Page Charged.
*/
	MSG_TWWAB_WARRING = 0x93e,
/*20171018 to latest
https://gfb.gameflier.com/Billing/ingame/index_new.asp?
*/
	MSG_TWWAB_URL = 0x93f,
/*20171018 to latest
ìºë¦­í„° ë§Œë“¤ê¸°
Create char
*/
	MSG_STR_MAKECHARACTER = 0x940,
/*20171018 to latest
ìºë¦­ëª…ì´ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Name does not match
*/
	MSG_CHR_DELETE_RESERVED_FAIL_CHARNAME = 0x941,
/*20171018 to latest
ìºë¦­í„°ëª…ì„ ìž…ë ¥í•˜ì„¸ìš”
Enter the name of character
*/
	MSG_CHR_DELETE_RESERVED_INPUTCONFIRMSTR_WND_TITLE = 0x942,
/*20171018 to latest
ì„±ë³„ ì„ íƒ ì°½
Sex Selection Window
*/
	MSG_SELECT_SEX = 0x943,
/*20171018 to latest
íŒŒì¼ì˜ ìœ„ë³€ì¡°ê°€ ê°ì§€ ë˜ì—ˆìŠµë‹ˆë‹¤.
Editing of the File Detected
*/
	MSG_SPRITE_ALTER = 0x944,
/*20171018 to latest
í•´ë‹¹ ì•„ì´í…œì„ ê°œë´‰í•˜ì—¬ íšë“ë˜ëŠ” ì•„ì´í…œë“¤ì€ ìºë¦­í„° ê·€ì† ì•„ì´í…œ (ì°½ê³ ì´ë™ ë¶ˆê°€ëŠ¥) ìž…ë‹ˆë‹¤. ë³¸ ìºë¦­í„°ì— ì‚¬ìš©í•˜ì‹œëŠ” ê²ƒì´ ë§žìœ¼ì‹ ì§€ í™•ì¸í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤. ìƒìžë¥¼ ê°œë´‰í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Items obtained by opening the item is character bounded (can not move to storage). Do you want to open the box?
*/
	MSG_CONFIRM_TO_OPEN_EVENT_ITEM = 0x945,
/*20171018 to latest
ê²Œìž„ ì„¤ì •
Game Settings
*/
	MSG_GAME_SETTING = 0x946,
/*20171018 to latest
ê²Œìž„ ì‹œìŠ¤í…œ
Game System
*/
	MSG_SYSTEM_SETTING = 0x947,
/*20171018 to latest
ê²Œìž„ ì»¤ë§¨ë“œ
Game Commands
*/
	MSG_COMMAND_SETTING = 0x948,
/*20171018 to latest
ê²Œìž„ ì»¤ë§¨ë“œ ON/OFF
Game Command ON/OFF
*/
	MSG_COMMAND_LIST = 0x949,
/*20171018 to latest
ë§¤í¬ë¡œ
Macro
*/
	MSG_MACRO_LIST = 0x94a,
/*20171018 to latest
ì´ì§€ì—­ì€ ì•„ì´í…œêµí™˜ì´ ê¸ˆì§€ ë˜ì–´ ìžˆìŠµë‹ˆë‹¤
Trading is prohibited in this Map
*/
	MSG_EXCHANGEITEM_DENY_MAP = 0x94b,
/*20171018 to latest
ì´ì§€ì—­ì€ ì¹´íŠ¸ì´ìš©ì´ ê¸ˆì§€ ë˜ì–´ ìžˆìŠµë‹ˆë‹¤
Vending is prohibited in this Map
*/
	MSG_CART_USE_DENY_MAP = 0x94c,
/*20171018 to latest
ì´ì§€ì—­ì€ íƒœì–‘ê³¼ë‹¬ê³¼ë³„ì˜ ê¸°ì  íš¨ê³¼ê°€ ë°œìƒí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
In this Map,Effect of Mirace of Sun and Moon is nullified.
*/
	MSG_BLOCK_SUNMOONSTAR_MIRACLE = 0x94d,
/*20171018 to latest
ëž­í‚¹ ë³´ë“œ
Ranking Board
*/
	MSG_RANKING_BOARD = 0x94e,
/*20171018 to latest
ìˆœìœ„
Rank
*/
	MSG_RANKING_NUMBER = 0x94f,
/*20171018 to latest
ì´ë¦„
Name
*/
	MSG_RANKING_NAME = 0x950,
/*20171018 to latest
í¬ì¸íŠ¸
Points
*/
	MSG_RANKING_POINT = 0x951,
/*20171018 to latest
BlackSmith
*/
	MSG_RANKING_BLACKSMITH = 0x952,
/*20171018 to latest
Alchemist
*/
	MSG_RANKING_ALCHEMIST = 0x953,
/*20171018 to latest
Taekwon
*/
	MSG_RANKING_TAEKWON = 0x954,
/*20171018 to latest
Killer
*/
	MSG_RANKING_KILLER = 0x955,
/*20171018 to latest
7 vs 7
*/
	MSG_RANKING_BATTLE_7VS7_ALL = 0x956,
/*20171018 to latest
RuneKnight
*/
	MSG_RANKING_RUNE_KNIGHT = 0x957,
/*20171018 to latest
Warlock
*/
	MSG_RANKING_WARLOCK = 0x958,
/*20171018 to latest
Ranger
*/
	MSG_RANKING_RANGER = 0x959,
/*20171018 to latest
Mechanic
*/
	MSG_RANKING_MECHANIC = 0x95a,
/*20171018 to latest
GuillotineCross
*/
	MSG_RANKING_GUILLOTINE_CROSS = 0x95b,
/*20171018 to latest
Archbishop
*/
	MSG_RANKING_ARCHBISHOP = 0x95c,
/*20171018 to latest
RoyalGuard
*/
	MSG_RANKING_ROYAL_GUARD = 0x95d,
/*20171018 to latest
Sorcerer
*/
	MSG_RANKING_SORCERER = 0x95e,
/*20171018 to latest
Minstrel
*/
	MSG_RANKING_MINSTREL = 0x95f,
/*20171018 to latest
Wanderer
*/
	MSG_RANKING_WANDERER = 0x960,
/*20171018 to latest
Genetic
*/
	MSG_RANKING_GENETIC = 0x961,
/*20171018 to latest
ShadowChaser
*/
	MSG_RANKING_SHADOW_CHASER = 0x962,
/*20171018 to latest
Sura
*/
	MSG_RANKING_SURA = 0x963,
/*20171018 to latest
Kagerou
*/
	MSG_RANKING_KAGEROU = 0x964,
/*20171018 to latest
Oboro
*/
	MSG_RANKING_OBORO = 0x965,
/*20171018 to latest
Select Ranking Type
*/
	MSG_RANKING_SELECT = 0x966,
/*20171018 to latest
Ranking Type
*/
	MSG_RANKING_TYPE = 0x967,
/*20171018 to latest
í˜„ìž¬ ì ‘ì† ì¸ì›ì´ ê°€ë“ ì°¼ìŠµë‹ˆë‹¤.           ^0000ffí˜„ìž¬ ëŒ€ê¸°ìˆœìœ„ : %d                    ì˜ˆìƒ ëŒ€ê¸°ì‹œê°„ : %dì´ˆ
Currently,Server is full.           ^0000ffPeople Currently Waiting: %d                    Expected Waiting Time: %dSeconds
*/
	MSG_WAITING_FOR_ENTER_TO_CHARACTER_SEVER_IN_SEC = 0x968,
/*20171018 to latest
í˜„ìž¬ ì ‘ì† ì¸ì›ì´ ê°€ë“ ì°¼ìŠµë‹ˆë‹¤.           ^0000ffí˜„ìž¬ ëŒ€ê¸°ìˆœìœ„ : %d                    ì˜ˆìƒ ëŒ€ê¸°ì‹œê°„ : %dë¶„ %dì´ˆ
Currently,Server is full.           ^0000ffPeople Currently Waiting: %d                    Expected Waiting Time: %dMinutes %d Seconds
*/
	MSG_WAITING_FOR_ENTER_TO_CHARACTER_SEVER_IN_MIN = 0x969,
/*20171018 to latest
CBT ì´ˆì²­ ìœ ì €ê°€ ì•„ë‹™ë‹ˆë‹¤
CBT is not an invited user
*/
	MSG_CBT_ACTIVE_USER_CHECK = 0x96a,
/*20171018 to latest
 -------------- Navigation ëª…ë ¹ì–´ --------------
------------------- Instruction --------------------
*/
	MSG_NAVIGATION_HELP_1 = 0x96b,
/*20171018 to latest
/navigation    /navi  :  /navi yuno 100/100           ->> ë§µì´ë¦„, ìœ„ì¹˜(100/100)
1) /Navigation or /navi ex) /navi prontera 100 100 -> /navi "MAPNAME", 100, 100
*/
	MSG_NAVIGATION_HELP_2 = 0x96c,
/*20171018 to latest
/navigation2  /navi2 :  /navi2 yuno 100/100 1/1/1 ->> ë§µì´ë¦„, ìœ„ì¹˜(100/100), scrool/zeny/plane (1:ì‚¬ìš©í•¨ 0: ì‚¬ìš©ì•ˆí•¨)
2) /Navigation2 or /navi2 ex) /navi2 prontera 100 111 -> MAPNAME location (100 90), Scroll | Zeny | Plane (1: Enable or 0: Disable)
*/
	MSG_NAVIGATION_HELP_3 = 0x96d,
/*20171018 to latest
 -------------- Navigation ê²€ìƒ‰ì°½ ëª…ë ¹ì–´ -------
-> /navi2 goes with the case with location coordinates. They must be no less than 3 characters 
*/
	MSG_NAVIGATION_HELP_4 = 0x96e,
/*20171018 to latest
$$all         : ëª¨ë“  í•­ëª© ì¶œë ¥ (Type êµ¬ë¶„ìžì—ì„œ ì¶œë ¥ ì¢…ë¥˜ë¥¼ ë‚˜ëˆŒìˆ˜ ìžˆë‹¤.)
3) $$all Output all the items (Can take a while...) 
*/
	MSG_NAVIGATION_HELP_5 = 0x96f,
/*20171018 to latest
$$lv30       : í•´ë‹¹ ë ˆë²¨ì˜ ëª¬ìŠ¤í„° ì¶œë ¥ (ìˆ«ìžëŠ” ë³€ê²½ ê°€ëŠ¥)
4) $$lv30 monsters are placed in the output 
*/
	MSG_NAVIGATION_HELP_6 = 0x970,
/*20171018 to latest
$$lv20~30  : í•´ë‹¹ ë ˆë²¨ ë²”ìœ„ì˜ ëª¬ìŠ¤í„° ì¶œë ¥ (ìˆ«ìžëŠ” ë³€ê²½ ê°€ëŠ¥)
5) $$lv20~30 monsters in that level range are placed in the output 
*/
	MSG_NAVIGATION_HELP_7 = 0x971,
/*20171018 to latest
1 vs 1
*/
	MSG_RANKING_BATTLE_1VS1_ALL = 0x972,
/*20171018 to latest
íŠ¹ìˆ˜ ìž¥ë¹„
Special Gear
*/
	MSG_SHADOW_EQUIPMENT = 0x973,
/*20171018 to latest
%d ë²ˆì§¸ ìºë¦­í„°ì˜ ì§ì—… ì •ë³´ê°€ ì´ìƒí•©ë‹ˆë‹¤. ê³ ê°ì„¼í„°ë¡œ ë¬¸ì˜ ë¶€íƒ ë“œë¦½ë‹ˆë‹¤. ErrorCode(%d)
%d First character of the profession is more than information. Please contact the Customer Care Center. ErrorCode(%d)
*/
	MSG_CHARACTERERROR_JOB = 0x974,
/*20171018 to latest
(%s) %d / %d
*/
	MSG_NAVIGATION_ALL_S = 0x975,
/*20171018 to latest
%s-%s(%d/%d)
*/
	MSG_NAVIGATION_ALL_SD = 0x976,
/*20171018 to latest
ì ‘ì†ìž ìˆ˜ ì´ˆê³¼ë¡œ ì„œë²„ì— ë”ì´ìƒ ì ‘ì†í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Server Exceeded the maximum number of users,Cannot Connect anymore users.
*/
	MSG_REFUSE_OVER_USERLIMIT = 0x977,
/*20171018 to latest
ì„œë²„ì ‘ì† ì‹¤íŒ¨ (%d)
Server Connection Failed (%d)
*/
	MSG_REFUSE_ERRORCODE = 0x978,
/*20171018 to latest
ë¡œê·¸ì¸ í—ˆìš©ì‹œê°„ ì´ˆê³¼
Login Timeout Permitted
*/
	MSG_REFUSE_DISCONNECT_KEEP_TIME = 0x979,
/*20171018 to latest
ë¡œê·¸ì¸ ì¤‘ ì¸ì¦ì„œë²„ë¡œë¶€í„° ì¸ì¦ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Login Authentication Failed from Authentication Server.
*/
	MSG_REFUSE_WEB_AUTH_FAILED = 0x97a,
/*20171018 to latest
ê¸¸ë“œì´ë¦„ì— ê³µë°±ë¬¸ìžë¥¼ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Guild Cannot use Space in the name.
*/
	MSG_GUILDNAME_CHECK = 0x97b,
/*20171018 to latest
ê³ ê°ë‹˜ ì•ˆë…•í•˜ì„¸ìš”!
Hey,Hello There
*/
	MSG_BILLING_CHN_1 = 0x97c,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ %dë…„ %d ì›” %dì¼ %d:%d ì— ì¢…ë£Œë©ë‹ˆë‹¤.
Available Time will End on %d month %d hour %d:%d
*/
	MSG_BILLING_CHN_2 = 0x97d,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ ì•„ì§ ë§Žì´ ë‚¨ì•˜ìœ¼ë‹ˆ ì•ˆì‹¬í•˜ê³  í”Œë ˆì´í•˜ì„¸ìš”!
You've lot of time,Play in Peace.
*/
	MSG_BILLING_CHN_3 = 0x97e,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ ì´ë²ˆ ì£¼ ë‚´ë¡œ ì¢…ë£Œ ë©ë‹ˆë‹¤. ì¢…ë£Œ ì „ì— ì¶©ì „ì„ í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Your hours will be terminated within this week. Please Charge before termination.
*/
	MSG_BILLING_CHN_4 = 0x97f,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ 24ì‹œê°„ ë‚´ì— ì¢…ë£Œë©ë‹ˆë‹¤. ë¹¨ë¦¬ ì¶©ì „í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Your hours will be terminated within 24 hours.Please Charge Quickly.
*/
	MSG_BILLING_CHN_5 = 0x980,
/*20171018 to latest
í˜„ìž¬ ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ %dì‹œê°„ ë‚¨ì•˜ìŠµë‹ˆë‹¤. ì •ìƒì ì¸ ê²Œìž„ ì´ìš©ì„ ìœ„í•´ ì¶©ì „ì„ í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Current Time Left:%d hours.Charge the game for uninterrupted play.
*/
	MSG_BILLING_CHN_6 = 0x981,
/*20171018 to latest
í˜„ìž¬ ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ %dë¶„ ë‚¨ì•˜ìŠµë‹ˆë‹¤. ì´ìš©ì‹œê°„ì´ ëë‚œ í›„ ê°•ì œì ìœ¼ë¡œ ì¢…ë£Œë©ë‹ˆë‹¤. ì •ìƒì ì¸ ê²Œìž„ ì´ìš©ì„ ìœ„í•´ ì¶©ì „ì„ í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Current Time Left:%d minutes.Charge the game for uninterrupted play.
*/
	MSG_BILLING_CHN_7 = 0x982,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ %dì‹œê°„ %dë¶„ ë‚¨ì•˜ìŠµë‹ˆë‹¤.
Time Left: %d hours %d minutes
*/
	MSG_BILLING_CHN_8 = 0x983,
/*20171018 to latest
%d%% ( ê¸°ë³¸ 100%% + PCë°© %d%% + í”„ë¦¬ë¯¸ì—„ %d%% + %sì„œë²„ %d%% )
%d%% ( Basic 100%% + PCRoom %d%% + Premium %d%% + %sServer %d%% )
*/
	MSG_BASIC_EXP_MSG_THAI = 0x984,
/*20171018 to latest
ê³ ê°ë‹˜ì˜ ì´ìš© ì‹œê°„ì€ %dì‹œê°„ %dë¶„ í›„ì— ì¢…ë£Œë©ë‹ˆë‹¤.
After %d hours %d minutes, your game will be terminated.
*/
	MSG_CHN_BILLING_EXPIRE_TIME = 0x985,
/*20171018 to latest
ìœ ì €ë‹˜ì˜ ê³„ì •ì€ ì˜êµ¬ ì ‘ì†ê¸ˆì§€ ë˜ì˜€ìŠµë‹ˆë‹¤
This Account is permanently Banned.
*/
	MSG_CHN_BLOCK_FOREVER = 0x986,
/*20171018 to latest
ìœ ì €ë‹˜ì˜ ê³„ì •ì€ ì ‘ì†ê¸ˆì§€ ë˜ì˜€ìŠµë‹ˆë‹¤
 í•´ì§€ ì‹œê°„ : %04d-%02d-%02d %02d:%02d
This Account is banned.
Termination Time:%04d-%02d-%02d %02d:%02d 
*/
	MSG_CHN_BLOCK = 0x987,
/*20171018 to latest
ëª¬ìŠ¤í„°(Tab)
Monster(Tab)
*/
	MSG_WORLDMAP_MSG1 = 0x988,
/*20171018 to latest
ë§µ(Alt)
Map(Alt)
*/
	MSG_WORLDMAP_MSG2 = 0x989,
/*20171018 to latest
ì•ˆë‚´ ì •ë³´
Product Information
*/
	MSG_WORLDMAP_MSG3 = 0x98a,
/*20171018 to latest
ê²€ìƒ‰ ì •ë³´
Find Information
*/
	MSG_WORLDMAP_MSG4 = 0x98b,
/*20171018 to latest
ë¹„ê³µì •
AirShip
*/
	MSG_WORLDMAP_MSG5 = 0x98c,
/*20171018 to latest
ì¹´í”„ë¼
Kafra
*/
	MSG_WORLDMAP_MSG6 = 0x98d,
/*20171018 to latest
(ë„ì°©)
(Arrival)
*/
	MSG_WORLDMAP_MSG7 = 0x98e,
/*20171018 to latest
Mob)%s:%s(%s)
*/
	MSG_NAVIGATION_MOB_S_S_S = 0x98f,
/*20171018 to latest
ë¶„í¬ë„:%s
Distribution:%s
*/
	MSG_NAVIGATION_NUM = 0x990,
/*20171018 to latest
ë§¤ìš°ë§ŽìŒ
Very Plenty
*/
	MSG_NAVIGATION_NUM1 = 0x991,
/*20171018 to latest
ë§ŽìŒ
Plenty
*/
	MSG_NAVIGATION_NUM2 = 0x992,
/*20171018 to latest
ë³´í†µ
Normal
*/
	MSG_NAVIGATION_NUM3 = 0x993,
/*20171018 to latest
ì ìŒ
Low
*/
	MSG_NAVIGATION_NUM4 = 0x994,
/*20171018 to latest
ë§¤ìš°ì ìŒ
Very Low
*/
	MSG_NAVIGATION_NUM5 = 0x995,
/*20171018 to latest
ì€í–‰ì„ ì´ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ìž ì‹œ í›„ ë‹¤ì‹œ ì‹œë„í•˜ì„¸ìš”.
The bank is not available. Please try again in a few minutes.
*/
	MSG_BANK_SYSTEM_ERROR = 0x996,
/*20171018 to latest
ì€í–‰ ìž”ê³ ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Bank balance is low.
*/
	MSG_BANK_WITHDRAW_NO_MONEY = 0x997,
/*20171018 to latest
ë³´ìœ í•œ Zeny ê°€ ë¶€ì¡±í•´ì„œ ìž…ê¸ˆí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You don't have enough zeny
*/
	MSG_BANK_DEPOSIT_NO_MONEY = 0x998,
/*20171018 to latest
1 Zeny ì´ìƒ ìž…ê¸ˆ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Minimum Deposit Amount: 1 zeny
*/
	MSG_BANK_DEPOSIT_ZERO = 0x999,
/*20171018 to latest
1 Zeny ì´ìƒ ì¶œê¸ˆ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Minimum Withdrawal Amount: 1 zeny
*/
	MSG_BANK_WITHDRAW_ZERO = 0x99a,
/*20171018 to latest
ë³´ìœ  Zeny ëŠ” 2,147,483,647 Zenyë¥¼ ë„˜ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot hold more than 2,147,483,647 Zeny
*/
	MSG_BANK_OVER_INT_MAX = 0x99b,
/*20171018 to latest
your account is lock by mobil otp
your account is lock by mobile otp
*/
	MSG_REFUSE_MOTP_LOCK = 0x99c,
/*20171018 to latest
MOTP auth fail
*/
	MSG_REFUSE_MOTP_AUTH_FAIL = 0x99d,
/*20171018 to latest
%dë¶„ê°„ ëª¬ìŠ¤í„°ì—ê²Œ ì–»ì„ ìˆ˜ ìžˆëŠ” Jobê²½í—˜ì¹˜ê°€ %d%% ì¦ê°€í•©ë‹ˆë‹¤.
For %d minutes,Job Experience obtained from monster is increased by %d%%
*/
	MSG_JOBPLUSEXP_VALUE = 0x99e,
/*20171018 to latest
ì†Œì§€ Zeny : %s Zeny
Current Zeny: %s Zeny
*/
	MSG_BANK_MY_ZENY = 0x99f,
/*20171018 to latest
Zeny
*/
	MSG_BANK_ZENY = 0x9a0,
/*20171018 to latest
ìµœëŒ€ 2,147,483,647 Zeny ê¹Œì§€ë§Œ ë³´ê´€ì´ ê°€ëŠ¥í•©ë‹ˆë‹¤.
The Maximum amount is 2,147,483,647 Zeny
*/
	MSG_BANK_WARNING = 0x9a1,
/*20171018 to latest
ì´ì•Œì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
Insufficient bullet
*/
	MSG_NEED_MORE_BULLET = 0x9a2,
/*20171018 to latest
10ì–µì œë‹ˆ ì´ìƒ ìž…ë ¥í•˜ì…”ë„ ê°€ê²©ì€ 10ì–µ ì œë‹ˆë¡œ íŒë§¤ë©ë‹ˆë‹¤.
You entered more than 1 Billion Zeny, the price will be set to 1 Billion Zeny.
*/
	MSG_OVERPRICE_MAX = 0x9a3,
/*20171018 to latest
AuthTicket is Not Vaild
AuthTicket is Not Valid
*/
	MSG_NOT_VALID_AUTH_TICKET = 0x9a4,
/*20171018 to latest
ErrorCategory : %d, ErrorCode : %d (%d,%d,%d,%d)
ErrorCategory: %d, ErrorCode: %d (%d,%d,%d,%d)
*/
	MSG_STEAMAGENCY_ERROR = 0x9a5,
/*20171018 to latest
%d%% ( Basic 100%% + Premium %d%% + PCCafe %d%% + %s Server %d%% )
%d%% ( Basic 100%% + Premium %d%% + Internet cafe %d%% + %s Server %d%% )
*/
	MSG_BASIC_EXP_MSG_INDONESIA = 0x9a6,
/*20171018 to latest
 %dë¶„ê°„ ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” ê¸°ë³¸ ì•„ì´í…œì˜ ë“œë¡­ë¥ ì´ %d%%ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
Basic item drop rate from monster hunting is increased for %dmins by %dtimes.
*/
	MSG_RECEIVEITEM_VALUE = 0x9a7,
/*20171018 to latest
 %dì‹œ %.2dë¶„ê°„ ëª¬ìŠ¤í„° ì‚¬ëƒ¥ì„ í†µí•´ ì–»ì„ ìˆ˜ ìžˆëŠ” ê¸°ë³¸ ì•„ì´í…œì˜ ë“œë¡­ë¥ ì´ %d%%ë¡œ ì¦ê°€í•©ë‹ˆë‹¤.
Basic item drop rate from monster hunting is increased for %dhour %.2dmins  by %dtimes.
*/
	MSG_RECEIVEITEM_VALUE_1 = 0x9a8,
/*20171018 to latest
%s ì˜ ê°€ê²©ì´
The price of^0000FF %s^000000
*/
	MSG_WARNING_PRICE1 = 0x9a9,
/*20171018 to latest
100000000
1000000000
*/
	MSG_WARNING_PRICE2 = 0x9aa,
/*20171018 to latest
 ^ff0000%d^0000ffì–µ
 is over ^FF0000%d^0000FF Billion^000000 Zeny and
*/
	MSG_WARNING_PRICE3 = 0x9ab,
/*20171018 to latest
10000000
*/
	MSG_WARNING_PRICE4 = 0x9ac,
/*20171018 to latest
 ^ff0000%d^0000ffì²œë§Œ
 more than^FF0000 %d0^0000FF Million^000000 Zeny
*/
	MSG_WARNING_PRICE5 = 0x9ad,
/*20171018 to latest
^0000ffZeny ì´ìƒ^000000ìž…ë‹ˆë‹¤.
ìž…ë ¥ê¸ˆì•¡ì´ ë§žìŠµë‹ˆê¹Œ?
. Is this correct?
*/
	MSG_WARNING_PRICE6 = 0x9ae,
/*20171018 to latest
ì²œë§ŒZenyì´ìƒ ì•ˆì „í™•ì¸
Safety check for more than 10m Zeny
*/
	MSG_WARNING_PRICE7 = 0x9af,
/*20171018 to latest
https://www.warpportal.com/account/login.aspx?ReturnUrl=%2faccount%2fpayment.aspx
*/
	MSG_AMERICA_CASHSHOP_URL = 0x9b0,
/*20171018 to latest
https://kepler.warpportal.com/ro1/purchase/?step=1&steamid=%lld&accountname=
https://kepler.warpportal.com/ror/purchase/?step=1&steamid=%lld&accountname=
*/
	MSG_AMERICA_CASHSHOP_URL_STEAM = 0x9b1,
/*20171018 to latest
ì§€ìƒì˜ ë, ìŠ¤í”Œëž‘ë””ë“œì™€ ë¶€ìœ ëŒ€ë¥™ ì•Œí”„í—¤ìž„ì„ ìž‡ëŠ” ë‹¤ë¦¬, ë¹„í”„ë¡œìŠ¤íŠ¸ì— ìƒê²¨ë‚œ ê±°ëŒ€í•œ ê· ì—´, ê·¸ë¦¬ê³  ê·¼ì›ì„ ì•Œ ìˆ˜ ì—†ëŠ” ë¯¸ê¶ìˆ². 
A giant crevice appeared in Bifrost, the bridge between Splendide, the end of the world and the floating continent of Alfheim, and you do not know the source of the labyrinth forest.
*/
	MSG_QUEST_INFO_01 = 0x9b2,
/*20171018 to latest
ì´ê²ƒì€ ì—¬í–‰ì˜ ëì„ ì•Œë¦¬ëŠ” í‘œì‹ì¸ê°€, ìƒˆë¡œìš´ ì„¸ê³„ë¥¼ ì—¬ëŠ” ì§€í‘œì¸ê°€! ìˆ˜í˜¸ìžëŠ” ë…¸ëž«ë§ ê°™ì€ ìœ í˜¹ì— ì ì°¨ ë„‹ì„ ìžƒì–´ê°€ê³  ìžˆì—ˆë‹¤. 
This is a marker indicating the end of the trip, a new world is opening indicators! Guardian, such as the lyrics to the temptation was gradually losing the soul.
*/
	MSG_QUEST_INFO_02 = 0x9b3,
/*20171018 to latest
ìˆ˜ì²œ ë…„ì˜ ì„¸ì›”ì´ íë¥´ëŠ” ë™ì•ˆ, ê·¸ ìŠ¤ìŠ¤ë¡œê°€ í™€ë¡œ ì•ˆê°„íž˜ì„ ì“°ë©° ì§€ì¼œë‚¸ ê²ƒì´ ë¬´ì—‡ì´ì—ˆëŠ”ì§€, ë´‰ì¸ ë˜ì–´ ê¸´ ì‹œê°„ì„ ê°‡í˜€ë²„ë¦° ê²ƒì€ ì˜¤ížˆë ¤ ìžì‹ ì´ ì•„ë‹ˆì—ˆëŠ”ì§€ í˜¼ëž€ì„ ëŠë¼ê³  ìžˆì—ˆë‹¤. 
For thousands of years, a mysterious melody has mesmerized the guardian. After a millennia of slumber, the guardian became confused about what he had been protecting all these years, and began to suspect that he might be the one who has been sealed and hidden away.
*/
	MSG_QUEST_INFO_03 = 0x9b4,
/*20171018 to latest
ìœ í˜¹ì˜ ë…¸ëž«ë§ì´ ìµœê³ ì¡°ì— ì´ë¥´ë €ì„ ë•Œ, ì§€ìƒì˜ ë ìŠ¤í”Œëž‘ë””ë“œì™€ ë¶€ìœ ëŒ€ë¥™ ì•Œí”„í—¤ìž„ì„ ìž‡ëŠ” ë‹¤ë¦¬, ë¹„í”„ë¡œìŠ¤íŠ¸ì— ê±°ëŒ€í•œ ê· ì—´ì´ ìƒê²¨ë‚¬ê³ , ê·¸ë¡œ ì¸í•´ ë‘ ì„¸ê³„ê°„ì˜ ì™•ëž˜ê°€ ëŠê¸°ë©´ì„œ ì‚¬ëžŒë“¤ì€ í° ë¶ˆíŽ¸ì„ ê²ªê²Œ ë˜ì—ˆë‹¤. 
When the melody reached its peak, a giant crevice appeared in Bifrost, the bridge between Splendide, the end of the world and the floating continent of Alfheim. As a result, the two worlds were cut off from each other, causing a big problem for the people.
*/
	MSG_QUEST_INFO_04 = 0x9b5,
/*20171018 to latest
ë¹„í”„ë¡œìŠ¤íŠ¸ì˜ í†µë¡œëŠ” ì´ì œ ë¯¸ê¶ìˆ² ë¿. ê·¼ì›ì¡°ì°¨ ì•Œ ìˆ˜ ì—†ëŠ” ê·¸ê³³ì„ ë¬´ì‚¬ížˆ í†µê³¼ í•œ ì‚¬ëžŒì€ ì§€ê¸ˆê¹Œì§€ ì•„ë¬´ë„ ì—†ì—ˆë‹¤. 
Now, the only way to get to Bifrost is through the Labyrinth Forest. Nobody knows how the forest came to exist, and nobody has ever come out of it alive...
*/
	MSG_QUEST_INFO_05 = 0x9b6,
/*20171018 to latest
ìˆ±í•œ ëª¨í—˜ê°€ë“¤ì„ ì§‘ì–´ ì‚¼í‚¨ í˜¼ëˆì˜ ì§€ì˜¥, ë¯¸ê¶ìˆ²ì€ ê·¸ ì†ì„ ë°©í™©í•˜ëŠ” ì´ë¦„ ëª¨ë¥¼ ì—¬ì¸ì˜ ë§ˆìŒì²˜ëŸ¼ ë”ìš± ê¹Šê³  í˜¼ëž€ìŠ¤ëŸ½ê²Œ í™•ìž¥ë˜ê³  ìžˆì—ˆë‹¤.
Swallowed countless adventurers to put a hell of confusion, wandering in the forest labyrinth of nowhere, like the heart of a woman was being extend deeper confusion.
*/
	MSG_QUEST_INFO_06 = 0x9b7,
/*20171018 to latest
ìˆ«ìžë§Œ ìž…ë ¥ ê°€ëŠ¥í•©ë‹ˆë‹¤.
You can enter only numbers.
*/
	MSG_BANK_CHECK_NUM = 0x9b8,
/*20171018 to latest
êµí™˜ì°½ ë˜ëŠ” ìƒì ì´ í™œì„±í™” ëœ ìƒíƒœì—ì„œëŠ” ìž…ì¶œê¸ˆì„ í•˜ì‹¤ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Exchange or store window is active and can not register the withdrawal.
*/
	MSG_BANK_PROHIBIT = 0x9b9,
/*20171018 to latest
ë°”ë¡œê°€ê¸°
Go to
*/
	MSG_QUEST_INFO_00 = 0x9ba,
/*20171018 to latest
ì•„ì´í…œ ë¹„êµ
Item Compare
*/
	MSG_ITEM_COMPARISON = 0x9bb,
/*20171018 to latest
í˜„ìž¬ ìž¥ì°©í•˜ë ¤ê³  í•˜ëŠ” ì´ê¸°ê°€ ìž¥ì°©í•˜ê³  ìžˆëŠ” íƒ„í™˜ì— ë§žì§€ ì•ŠìŠµë‹ˆë‹¤
Now you are trying to mount the gun equipped with bullet does not meet
*/
	MSG_WRONG_GUN = 0x9bc,
/*20171018 to latest
í˜„ìž¬ ìž¥ì°©í•˜ë ¤ê³  í•˜ëŠ” íƒ„í™˜ì´ ìž¥ì°©í•˜ê³  ìžˆëŠ” ì´ê¸°ì™€ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤
Now you are trying to mount the guns and bullets will not fit mounted
*/
	MSG_WRONG_BULLET = 0x9bd,
/*20171018 to latest
íŒë§¤í•  ì•„ì´í…œì„ ë“±ë¡í•˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤. íŒë§¤í•˜ì‹¤ ì•„ì´í…œì„ ë“±ë¡í•´ ì£¼ì„¸ìš”
Has not registered to sell the item. Please register to sell the item
*/
	MSG_BUYINGSTORE_MAKEWND_ADD_GOODS = 0x9be,
/*20171018 to latest
ITEM
*/
	MSG_ITEM_IN_MAIL_SYSTEM = 0x9bf,
/*20171018 to latest
ê¸¸ë“œ ì°½ê³ ë¥¼ ì´ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Guild storage is not available.
*/
	MSG_GUILD_STORAGE_OPEN_ERROR = 0x9c0,
/*20171018 to latest
ê¸¸ë“œì— ê°€ìž…ë˜ì–´ ìžˆì§€ ì•ŠìŠµë‹ˆë‹¤. ê°€ìž… í›„ ì´ìš©í•´ì£¼ì„¸ìš”.
Guild is not subscribed to. After signing up, please use 
*/
	MSG_GUILD_STORAGE_OPEN_NO_JOIN_GUILD = 0x9c1,
/*20171018 to latest
ë‹¤ë¥¸ ê¸¸ë“œì›ì´ ì‚¬ìš©ì¤‘ìž…ë‹ˆë‹¤. ìž ì‹œ í›„ ì´ìš©í•´ì£¼ì„¸ìš”.
Two other guild members are in use. Please use it after a while.
*/
	MSG_GUILD_STORAGE_WARNING_USING_ANOTHER_MEMBER = 0x9c2,
/*20171018 to latest
ì°½ê³ ê¶Œí•œ
Storage Permission
*/
	MSG_GUILD_STORAGE_PERMISSON = 0x9c3,
/*20171018 to latest
ê¸¸ë“œì°½ê³ 
Guild Storage
*/
	MSG_GUILD_STORAGE_TITLE = 0x9c4,
/*20171018 to latest
ê¸¸ë“œì°½ê³ ì˜ ì‚¬ìš© ê¶Œí•œì´ ì—†ìŠµë‹ˆë‹¤.
You do not have permission to use guild storage.
*/
	MSG_GUILD_STORAGE_PERMISSON_WARNING_MSG = 0x9c5,
/*20171018 to latest
í•œì •íŒë§¤ ë“±ë¡ì°½
Limited Sale Registration Window
*/
	MSG_BARGAINSALE_TOOLWND_TITLE = 0x9c6,
/*20171018 to latest
ì•„ì´í…œ DBëª…
Item DB Name
*/
	MSG_BARGAINSALE_TOOLWND_DB_NAME = 0x9c7,
/*20171018 to latest
ì•„ì´í…œ DBë²ˆí˜¸
Item DB Number
*/
	MSG_BARGAINSALE_TOOLWND_DB_NUMBER = 0x9c8,
/*20171018 to latest
íŒë§¤ ê°¯ìˆ˜
Number of Sale
*/
	MSG_BARGAINSALE_TOOLWND_SELL_COUNT = 0x9c9,
/*20171018 to latest
íŒë§¤ ì‹œìž‘ì‹œê°„
Sale Start Time
*/
	MSG_BARGAINSALE_TOOLWND_SELL_STARTTIME = 0x9ca,
/*20171018 to latest
íŒë§¤í•  ì‹œê°„
Time to sell
*/
	MSG_BARGAINSALE_TOOLWND_SELL_PERIODTIME = 0x9cb,
/*20171018 to latest
íŒë§¤í•  ê°¯ìˆ˜ë¥¼ ìž…ë ¥í•´ ì£¼ì„¸ìš”
Please enter number you want to sell
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_COUNT_MSG = 0x9cc,
/*20171018 to latest
íŒë§¤ ì‹œìž‘ì‹œê°„ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”
Enter start time of sale
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_STARTTIME_MSG = 0x9cd,
/*20171018 to latest
íŒë§¤ ì‹œìž‘ì‹œê°„ì˜ ë²”ìœ„ê°€ ë§žì§€ ì•ŠìŠµë‹ˆë‹¤
Start time does not match the scope of sales.
*/
	MSG_BARGAINSALE_TOOLWND_WRONG_RANGE_MSG = 0x9ce,
/*20171018 to latest
íŒë§¤í•  ì‹œê°„ì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”
Please enter the time
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_PERIODTIME_MSG = 0x9cf,
/*20171018 to latest
Item DB Nameì„ ìž…ë ¥í•´ ì£¼ì„¸ìš”
Please enter the Item DB Name
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_ITEMDBNAME_MSG = 0x9d0,
/*20171018 to latest
Item ID ì¡°íšŒì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. í™•ì¸ í›„ ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤
Item ID lookup failed. Please try again later
*/
	MSG_BARGAINSALE_TOOLWND_ITEMID_CHECK_FAILED_MSG = 0x9d1,
/*20171018 to latest
>> ItemName : %s / Price : %dc / ìˆ˜ëŸ‰ : %d / íŒë§¤ê¸°ê°„ : %dì›”:%dì¼:%dì‹œ:%dë¶„ ~ %dì›”:%dì¼:%dì‹œ:%dë¶„
>> ItemName: %s / Price: %dc / Quantity: %d / TimeOfSale: %dMonth:%dDay:%dMinute:%dSecond ~ %dMonth:%dDay:%dMinute:%dSecond
*/
	MSG_BARGAINSALE_TOOLWND_RESULT_FORMAT = 0x9d2,
/*20171018 to latest
ë“±ë¡ì— ì„±ê³µí•˜ì˜€ìŠµë‹ˆë‹¤
Registration successful
*/
	MSG_BARGAINSALE_TOOLWND_APPLY_SUCCESS_MSG = 0x9d3,
/*20171018 to latest
ë“±ë¡ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Registration failure. Please try again later.
*/
	MSG_BARGAINSALE_TOOLWND_APPLY_FAILED_MSG = 0x9d4,
/*20171018 to latest
ì´ë¯¸ ë“±ë¡ëœ ì•„ì´í…œì´ ìžˆìŠµë‹ˆë‹¤. ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Item has already been registered. Please try again later.
*/
	MSG_BARGAINSALE_TOOLWND_ALREADY_REGISTERED_MSG = 0x9d5,
/*20171018 to latest
ì•„ì´í…œ ì‚­ì œì— ì‹¤íŒ¨ í•˜ì˜€ìŠµë‹ˆë‹¤. ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
Failed to delete the item. Please try again later.
*/
	MSG_BARGAINSALE_TOOLWND_DELETE_FAILED_MSG = 0x9d6,
/*20171018 to latest
%s ì•„ì´í…œì´ ì‚­ì œë˜ì—ˆìŠµë‹ˆë‹¤.
%s item has been deleted.
*/
	MSG_BARGAINSALE_TOOLWND_DELETE_SUCCESS_MSG = 0x9d7,
/*20171018 to latest
íŠ¹ê°€
Special
*/
	MSG_BARGAINSALE_CASHSHOP_TAB_NAME = 0x9d8,
/*20171018 to latest
í•œì •íŒë§¤ ì•„ì´í…œ íŒë§¤ìˆ˜ëŸ‰ ê°±ì‹ 
Sales limited sale item update
*/
	MSG_BARGAINSALE_CASHSHOP_REFRESH_BTN_TOOLTIP = 0x9d9,
/*20171018 to latest
íŒë§¤ì¢…ë£Œ
Discontinued
*/
	MSG_BARGAINSALE_CASHSHOP_TIMER = 0x9da,
/*20171018 to latest
ìˆ˜ëŸ‰ê°±ì‹ ì´ í•„ìš”í•©ë‹ˆë‹¤
Quantity update is required 
*/
	MSG_BARGAINSALE_CASHSHOP_REFRESH_MSG = 0x9db,
/*20171018 to latest
ìž¬ê³ ê°€ ë¶€ì¡±í•˜ì—¬ %d ê°œ ë§Œí¼ë§Œ êµ¬ìž…í•©ë‹ˆë‹¤
The %d is out of stock or to buy as much as
*/
	MSG_BARGAINSALE_CASHSHOP_CHECK_COUNT_MSG = 0x9dc,
/*20171018 to latest
%s ì•„ì´í…œì˜ íŠ¹ê°€íŒë§¤ê°€ ì‹œìž‘ë˜ì—ˆìŠµë‹ˆë‹¤
%s Items are on sale
*/
	MSG_BARGAINSALE_START_MSG = 0x9dd,
/*20171018 to latest
%s ì•„ì´í…œì˜ ë§¤ì§„ ë˜ëŠ” íŒë§¤ì‹œê°„ë§Œë£Œë¡œ ì¸í•´ í•œì •íŒë§¤ê°€ ì¢…ë£Œë˜ì—ˆìŠµë‹ˆë‹¤
%s time-out or sale of the items sold has been shut down due to the limited sales 
*/
	MSG_BARGAINSALE_CLOSE_MSG = 0x9de,
/*20171018 to latest
/í•œì •íŒë§¤
/limitedsale
*/
	MSG_BARGAINSALE_TOOLWND_CALL = 0x9df,
/*20171018 to latest
http://www.ragnarokeurope.com/news/home-r70.html
*/
	MSG_FRANCE_CASHSHOP_URL = 0x9e0,
/*20171018 to latest
http://www.ragnarokeurope.com/index.php?rubrique=70&Steam
*/
	MSG_FRANCE_CASHSHOP_URL_STEAM = 0x9e1,
/*20171018 to latest
êµ¬ìž…ì— ì„±ê³µí•œ í’ˆëª©
Item purchase successful
*/
	MSG_PARA_RESULT_TITLE = 0x9e2,
/*20171018 to latest
ì£¼ë¬¸ëŸ‰ì´ ìž¬ê³ ëŸ‰ì„ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤.
You do not have enough items.
*/
	MSG_PARA_WRONG_PURCHASE_COUNT_MSG = 0x9e3,
/*20171018 to latest
ì´ˆëŒ€í• ìˆ˜ ì—†ëŠ” ì¼€ë¦­í„° ì´ë¦„ìž…ë‹ˆë‹¤.
Name of the character that cannot be invited.
*/
	MSG_PARTY_INVITE = 0x9e4,
/*20171018 to latest
ê¸¸ë“œì´ˆëŒ€í• ìˆ˜  ì—†ëŠ” ì¼€ë¦­í„° ì´ë¦„ìž…ë‹ˆë‹¤.
You cannot invite the character to the guild.
*/
	MSG_GUILD_INVITE = 0x9e5,
/*20171018 to latest
ì¼ë¶€ í’ˆëª©ì€ ì´ë¯¸ íŒë§¤ë˜ì–´ êµ¬ìž…ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Item already Sold,Purchase Failed.
*/
	MSG_PARA_PURCHASE_ITEM_FAIL = 0x9e6,
/*20171018 to latest
í˜„ìž¬ ìœ„ì¹˜ì—ì„œ ì›Œí”„ ìž¥ì†Œë¥¼ ê¸°ì–µ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
The warp spot cannot be memorized in current position.
*/
	MSG_NOWARPSKILL2 = 0x9e7,
/*20171018 to latest
ë¬´ê²Œê°€ ì´ˆê³¼ë˜ì–´ ì•„ì´í…œì„ êµ¬ë§¤í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot purchase item, You exceeded the weight.
*/
	MSG_PARA_PURCHASE_ITEM_WEIGHT = 0x9e8,
/*20171018 to latest
No.
*/
	MSG_GUILD_STORAGE_NUMBER = 0x9e9,
/*20171018 to latest
ì•„ì´í…œ
Item
*/
	MSG_GUILD_STORAGE_ITEM = 0x9ea,
/*20171018 to latest
ê°œìˆ˜
Number
*/
	MSG_GUILD_STORAGE_ITEM_COUNT = 0x9eb,
/*20171018 to latest
ì´ë¦„
Name
*/
	MSG_GUILD_STORAGE_USER_NAME = 0x9ec,
/*20171018 to latest
ì‹œê°„
Time
*/
	MSG_GUILD_STORAGE_LOG_TIME = 0x9ed,
/*20171018 to latest
ìž…/ì¶œ
Input/Output
*/
	MSG_GUILD_STORAGE_ITEM_IN_OUT = 0x9ee,
/*20171018 to latest
ë¡œê·¸ê°€ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Log does not exist.
*/
	MSG_GUILD_STORAGE_LOG_FINISH = 0x9ef,
/*20171018 to latest
ì „ ì²´
Entire
*/
	MSG_GUILD_STORAGE_LOG_ALL = 0x9f0,
/*20171018 to latest
ë„£ ê¸°
Insert Symbol
*/
	MSG_GUILD_STORAGE_LOG_IN = 0x9f1,
/*20171018 to latest
ë¹¼ ê¸°
Remaining Time
*/
	MSG_GUILD_STORAGE_LOG_OUT = 0x9f2,
/*20171018 to latest
ê¸¸ë“œ ì°½ê³  ë‚´ì—­
Guild Storage Logs
*/
	MSG_GUILD_STORAGE_LOG_WND_NAME = 0x9f3,
/*20171018 to latest
ë‚´ì—­ì€ ìµœê·¼ 100ê°œë§Œ í‘œì‹œë©ë‹ˆë‹¤.
100 entries are displayed.
*/
	MSG_GUILD_STORAGE_LOG_CAUTION = 0x9f4,
/*20171018 to latest
ê¸¸ë“œì°½ê³ ì˜ ì‚¬ìš© ì‹œê°„ 2ë¶„ì´ ê²½ê³¼ë˜ì–´ ìžë™ìœ¼ë¡œ ì¢…ë£Œë©ë‹ˆë‹¤.
Guild Storage is open only for 2 minutes, and will close automatically.
*/
	MSG_GUILD_STORAGE_CLOSE_TIMEOUT = 0x9f5,
/*20171018 to latest
Incorrect GameSamba ID. Please Try Again.
*/
	MSG_INCORRECT_GAMESAMBEID = 0x9f6,
/*20171018 to latest
%s [%dì˜µì…˜] : %d ê°œ
%s [%d Option]: %d Quantity
*/
	MSG_EA5 = 0x9f7,
/*20171018 to latest
ì½”ì¸ì´ í•„ìš”í•©ë‹ˆë‹¤.
Requires a Coin.
*/
	MSG_USESKILL_FAIL_COINTS = 0x9f8,
/*20171018 to latest
ì½”ì¸ì´ %d ê°œê°€ í•„ìš”í•©ë‹ˆë‹¤.
%d Coins are required.
*/
	MSG_USESKILL_FAIL_COINTS_NUM = 0x9f9,
/*20171018 to latest
ê°œí‹€ë§ê±´ ê³„ì—´ì˜ ì´ê¸°ë¥˜ë¥¼ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
Gatling Gun should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_GATLING = 0x9fa,
/*20171018 to latest
ìƒ·ê±´ ê³„ì—´ì˜ ì´ê¸°ë¥˜ë¥¼ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
Shotguns should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_SHOTGUN = 0x9fb,
/*20171018 to latest
ë¼ì´í”Œ ê³„ì—´ì˜ ì´ê¸°ë¥˜ë¥¼ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
Rifle should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_RIFLE = 0x9fc,
/*20171018 to latest
ë¦¬ë³¼ë²„ ê³„ì—´ì˜ ì´ê¸°ë¥˜ë¥¼ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
Pair of Revolver should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_HANDGUN = 0x9fd,
/*20171018 to latest
ì„±ì†ì„± ë¸”ë¦¿ì„ ìž¥ì°©í•´ì•¼ í•©ë‹ˆë‹¤
[Silver Bullet] weapon class must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_PROPERTY_SAINT_BULLET = 0x9fe,
/*20171018 to latest
ì•„ì´í…œ íŒë§¤ ë‚´ì—­
Item Sell History
*/
	MSG_MERCHANT_SOLD_ITEM_LOG = 0x9ff,
/*20171018 to latest
ì•„ì´í…œ êµ¬ë§¤ ë‚´ì—­
Item Purchase History
*/
	MSG_MERCHANT_ITEM_BUY_LOG = 0xa00,
/*20171018 to latest
ê·¸ë ˆë„¤ì´ë“œëŸ°ì³ ê³„ì—´ì˜ ì´ê¸°ë¥˜ë¥¼ ìž¥ì°©í•œ ìƒíƒœì—¬ì•¼ í•©ë‹ˆë‹¤.
Grenade Launcher should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_GRANADE = 0xa01,
/*20171018 to latest
[ížˆíŠ¸ë°°ëŸ´],[ë§¤ë“œë‹ˆìŠ¤ ìº”ìŠ¬ëŸ¬],[í”Œëž˜í‹°ë„˜ ì•Œí„°] ì˜ íš¨ê³¼ë“¤ì€ ì¤‘ì²©í•˜ì—¬ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
[Heat barrel],[Last Stand],[Platinum Alter] cannot be used while sitting.
*/
	MSG_FAIL_DUPLICATE_HEAT_BARREL_GS_MADNESSCANCEL_P_ALTER = 0xa02,
/*20171018 to latest
í˜„ìž¬ ë§µì—ì„œëŠ” ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ìŠ¤í‚¬ìž…ë‹ˆë‹¤.
Cannot use skill in this map.
*/
	MSG_USESKILL_FAIL_MAP = 0xa03,
/*20171018 to latest
ê¸¸ë“œ ì°½ê³ ë¥¼ ì´ìš©ì¤‘ì¸ ê²½ìš° ì°½ê³ ì˜ ëª¨ë“  ì•„ì´í…œì´ ì‚¬ë¼ì§€ê²Œ ë©ë‹ˆë‹¤.
If you are using a guild storage, all items inside it will disappear.
*/
	MSG_GUILD_STORAGE_WARNING = 0xa04,
/*20171018 to latest
http://ragnarok.gamesamba.com/paytest.html
http://ragnarok.gamesamba.com/
*/
	MSG_AMERICA_CASHSHOP_URL_GAMESAMBA = 0xa05,
/*20171018 to latest
ë¡œê·¸ì¸ì„ ìœ„í•´ íŒ¨ìŠ¤ì›Œë“œë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter a password to login.
*/
	MSG_SECOND_PASSWORD_INFO_4 = 0xa06,
/*20171018 to latest
íŽ« ì§„í™”
Pet Evolution
*/
	MSG_PET_EVOLUTION = 0xa07,
/*20171018 to latest
ì§„í™” - %s
Evolution - %s
*/
	MSG_PET_EVOLUTION_WITH_PET_NAME = 0xa08,
/*20171018 to latest
ì§„í™”ì—ëŠ” ë‹¤ìŒì˜ ìž¬ë£Œê°€ í•„ìš”í•©ë‹ˆë‹¤.
Evolution requires the following ingredients:
*/
	MSG_PET_EVOLUTION_NEED_ITEM = 0xa09,
/*20171018 to latest
ì§„í™” í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure you want to evolve your pet?
*/
	MSG_DO_YOU_WANT_TO_EVOLVE_PET = 0xa0a,
/*20171018 to latest
ì•Œ ìˆ˜ ì—†ëŠ” ì˜¤ë¥˜
Unknown Error
*/
	MSG_PET_EVOLUTION_FAIL_UNKNOWN = 0xa0b,
/*20171018 to latest
ì†Œí™˜ëœíŽ«ì„ ê°–ê³  ìžˆì§€ ì•ŠìŠµë‹ˆë‹¤.
Pet Cannot be hatched.
*/
	MSG_PET_EVOLUTION_FAIL_NOTEXIST_CALLPET = 0xa0c,
/*20171018 to latest
ìš”ì²­í•œ ê²ƒì´ íŽ«ì•Œì´ ì•„ë‹™ë‹ˆë‹¤.
It is not requested petal.
*/
	MSG_PET_EVOLUTION_FAIL_NOT_PETEGG = 0xa0d,
/*20171018 to latest
ì§„í™” ìž¬ë£Œê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Evolution material is low.
*/
	MSG_PET_EVOLUTION_FAIL_RECIPE = 0xa0e,
/*20171018 to latest
ì§„í™”ì— í•„ìš”í•œ ìž¬ë£Œê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Insufficient materials for evolution.
*/
	MSG_PET_EVOLUTION_FAIL_MATERIAL = 0xa0f,
/*20171018 to latest
ì¹œë°€ë„ê°€ ì ˆì¹œì¸ ìƒíƒœì—ì„œë§Œ ì§„í™”ê°€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Loyal Intimacy is required to evolve.
*/
	MSG_PET_EVOLUTION_FAIL_RG_FAMILIAR = 0xa10,
/*20171018 to latest
íŽ« ìžë™ ë¨¹ì´ ì£¼ê¸°
Automatic feeding
*/
	MSG_PET_AUTO_FEEDING = 0xa11,
/*20171018 to latest
íŽ«ì—ê²Œ ë¨¹ì´ë¥¼ ì£¼ì—ˆìŠµë‹ˆë‹¤. '%s' ìž”ì—¬ëŸ‰ %dê°œ
Feeding the pet. %d '%d' remaining
*/
	MSG_PET_AUTO_FEEDING_REST = 0xa12,
/*20171018 to latest
íŽ« ìžë™ ë¨¹ì´ ì£¼ê¸° í™œì„±í™” On
Automatic feeding turned On
*/
	MSG_PET_AUTO_FEEDING_ON = 0xa13,
/*20171018 to latest
íŽ« ìžë™ ë¨¹ì´ ì£¼ê¸° í™œì„±í™” Off
Automatic feeding turned Off
*/
	MSG_PET_AUTO_FEEDING_OFF = 0xa14,
/*20171018 to latest
ê°±ì‹ 
Update
*/
	MSG_REFRESH = 0xa15,
/*20171018 to latest
%d ë¶„ ì „
%d minutes ago
*/
	MSG_TIME_LINE_MINUTE = 0xa16,
/*20171018 to latest
%d ì‹œê°„ ì „
%d hours ago
*/
	MSG_TIME_LINE_HOUR = 0xa17,
/*20171018 to latest
%d ì¼ ì „
%d days ago
*/
	MSG_TIME_LINE_DAY = 0xa18,
/*20171018 to latest
%d%% ( Premium %d%% + %s Server )
%d%%% ( Premium %d%%% + %s Server )
*/
	MSG_BASIC_EXP_MSG_PH = 0xa19,
/*20171018 to latest
ìš°íŽ¸ ë°œì†¡
Mailed
*/
	MSG_SEND_MAIL = 0xa1a,
/*20171018 to latest
ë©”ì¼ì´ ì „ì†¡ë˜ì—ˆìŠµë‹ˆë‹¤.
Your mail has been sent.
*/
	MSG_MAIL_SENT = 0xa1b,
/*20171018 to latest
ì•„ì´í…œì´ ì¸ë²¤í† ë¦¬ë¡œ ì´ë™ë˜ì—ˆìŠµë‹ˆë‹¤.
This item has been moved to the inventory.
*/
	MSG_GET_ITEMS_FROM_MAIL_SUCCEED = 0xa1c,
/*20171018 to latest
ì•„ì´í…œ ë°›ê¸°ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to get items.
*/
	MSG_GET_ITEMS_FROM_MAIL_FAILED = 0xa1d,
/*20171018 to latest
ì¸ë²¤í† ë¦¬ë¥¼ ë¹„ì›Œì£¼ì„¸ìš”
Please empty your inventory.
*/
	MSG_GET_ITEMS_FROM_MAIL_OVERWEIGHT = 0xa1e,
/*20171018 to latest
ì œë‹ˆë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.
Zeny received.
*/
	MSG_GET_ZENY_FROM_MAIL_SUCCEED = 0xa1f,
/*20171018 to latest
ì œë‹ˆ ë°›ê¸°ê°€ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to get zeny.
*/
	MSG_GET_ZENY_FROM_MAIL_FAILED = 0xa20,
/*20171018 to latest
ì œë‹ˆì˜ í•œê³„ì¹˜ë¥¼ ë„˜ì—ˆìŠµë‹ˆë‹¤.
Exceeded the limits of zenny.
*/
	MSG_GET_ZENY_FROM_MAIL_OVERAMOUNT = 0xa21,
/*20171018 to latest
ì•„ì´í…œ ì²¨ë¶€ ì„±ê³µ
Items attached success
*/
	MSG_SET_ITEMS_TO_MAIL_SUCCEED = 0xa22,
/*20171018 to latest
ë°›ëŠ” ì‚¬ëžŒì˜ ì´ë¦„ì´ ë°˜ë“œì‹œ ë“¤ì–´ê°€ì•¼ í•©ë‹ˆë‹¤.
The name of the recipient must be included.
*/
	MSG_INVALID_MAIL_RECIEVER_INFO = 0xa23,
/*20171018 to latest
ì œëª©ì˜ ê¸¸ì´ëŠ” í•œê¸€ 2ìž~25ìž, ì˜ë¬¸ 4ìž~50ìž ì´ì–´ì•¼ í•©ë‹ˆë‹¤.
The length of the title must be 4 to 50 characters long.
*/
	MSG_INVALID_MAIL_TITLE_INFO = 0xa24,
/*20171018 to latest
ë©”ì¼ ì „ì†¡ì´ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Mail delivery failed.
*/
	MSG_FAILED_SEND_MAIL = 0xa25,
/*20171018 to latest
ì ì ˆí•˜ì§€ ëª»í•œ ì•„ì´í…œìœ¼ë¡œ ì „ì†¡ ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Transmission has failed to inappropriate items.
*/
	MSG_FAILED_SEND_MAIL_ITEM = 0xa26,
/*20171018 to latest
ë°›ëŠ” ì‚¬ëžŒì˜ ì •ë³´ê°€ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Information of the recipient does not exist.
*/
	MSG_FAIELD_SEND_MAIL_TO = 0xa27,
/*20171018 to latest
%s [%dì˜µì…˜]
%s [%d Option]
*/
	MSG_EA6 = 0xa28,
/*20171018 to latest
ë ˆë²¨ì€ 1~%d ì‚¬ì´ì˜ ìˆ«ìžë¥¼ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Level, enter a number between 1 and %d.
*/
	MSG_PARTY_BOOKING_ERR5R2 = 0xa29,
/*20171018 to latest
ì†Œì§€ì°½ì˜ ì—¬ìœ ê³µê°„ì„ í™•ë³´í•´ì£¼ì„¸ìš”.
Please free the window possessing space.
*/
	MSG_ITEM_WND_OVERFULL = 0xa2a,
/*20171018 to latest
ë©”ì¼ ë³´ë‚´ê¸° íšŸìˆ˜ê°€ ì´ˆê³¼ë˜ì—ˆìŠµë‹ˆë‹¤.
Sending mail count exceeded.
*/
	MSG_FAILED_MAIL_LIMIT_CNT = 0xa2b,
/*20171018 to latest
ë©”ì¼ì„ ì—´ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can not open the mail.
*/
	MSG_FAILED_TO_WRITE_MAIL = 0xa2c,
/*20171018 to latest
You are currently joined in CLan !!
You are currently joined in Clan !!
*/
	MSG_JOINED_IN_CLAN = 0xa2d,
/*20171018 to latest
ê³¨ë“œ PCë°© ë§ˆì¼ë¦¬ì§€ ì •ë³´
Gold PC rooms mileage information
*/
	MSG_GOLDPCCAFE_MILEAGE = 0xa2e,
/*20171018 to latest
íŽ« ì•¡ì„¸ì„œë¦¬ë¥¼ í•´ì œí•´ì•¼ ì§„í™”ê°€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
Unequip pet accessories first to start evolution
*/
	MSG_PET_EVOLUTION_FAIL_PET_ACC_OFF = 0xa2f,
/*20171018 to latest
%d ë¶„ í›„
%d minutes later
*/
	MSG_TIME_LINE_MINUTE2 = 0xa30,
/*20171018 to latest
%d ì‹œê°„ í›„
%d hours later
*/
	MSG_TIME_LINE_HOUR2 = 0xa31,
/*20171018 to latest
%d ì¼ í›„
%d days later
*/
	MSG_TIME_LINE_DAY2 = 0xa32,
/*20171018 to latest
í™•ì¸ ë²„íŠ¼ì„ ëˆŒëŸ¬ C-CODEë¥¼ í™•ì¸í•˜ì„¸ìš”.
Press the OK button to confirm the C-CODE.
*/
	MSG_INVALID_CCODE_INFO = 0xa33,
/*20171018 to latest
ì²¨ë¶€ëœ ë¬¼í’ˆì„ íšë“ í›„ ì‚­ì œê°€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
After obtaining the attached article can be deleted.
*/
	MSG_FAILED_DELETE_MAIL = 0xa34,
/*20171018 to latest
í˜„ìž¬ ë³´ìœ  ì œë‹ˆ ë³´ë‹¤ ë§Žì€ ì œë‹ˆë¥¼ ë³´ë‚¼ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can not send any more zeny.
*/
	MSG_FAILED_SEND_MAIL_ZENY = 0xa35,
/*20171018 to latest
ìˆ˜ìˆ˜ë£Œ : %s Zeny
Fee: %s Zeny
*/
	MSG_SEND_MAIL_COMMISSION = 0xa36,
/*20171018 to latest
ë°›ëŠ” ì‚¬ëžŒì˜ ì´ë¦„ì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The recipient's name does not exist.
*/
	MSG_FAILE_MAIL_RECIEVER_INFO = 0xa37,
/*20171018 to latest
E X P : %.1f%% ( basic %.1f%% premium %.1f%% + %s %.1f%%)
EXP  : %.1f%% (Basic %.1f%% Premium %.1f%% + %s %.1f%%)
*/
	MSG_TAIWAN_PERSONALINFO_EXPMSG = 0xa38,
/*20171018 to latest
DROP  : %.1f%% ( basic %.1f%% premium %.1f%% + %s %.1f%%)
DROP : %.1f%% (Basic %.1f%% Premium %.1f%% + %s %.1f%%)
*/
	MSG_TAIWAN_PERSONALINFO_DROPMSG = 0xa39,
/*20171018 to latest
DEATH : %.1f%% ( basic %.1f%% premium %.1f%% + %s %.1f%%)
DEATH: %.1f%% (Basic %.1f%% Premium %.1f%% + %s %.1f%%)
*/
	MSG_TAIWAN_PERSONALINFO_DEATHMSG = 0xa3a,
/*20171018 to latest
ê³¨ë“œ PCë°© ë§ˆì¼ë¦¬ì§€ëŠ” ìµœëŒ€ %dì ê¹Œì§€ ëª¨ì„ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
You can accumulate points of PC Gold-club up to %d points maximum.
*/
	MSG_MILEAGE_HELP = 0xa3b,
/*20171018 to latest
í•´ë‹¹ ì„œë²„ì—ì„œ ì‚¬ìš© í•  ìˆ˜ ì—†ëŠ” ê¸°ëŠ¥ ìž…ë‹ˆë‹¤
This function can not be used on the server.
*/
	MSG_RESTRAINT_OF_TRADE_1 = 0xa3c,
/*20171018 to latest
ìˆ˜ëž˜ ì´ìš©ì´ ë¶ˆ ê°€ëŠ¥í•œ ì„œë²„ ìž…ë‹ˆë‹¤.
Imposible to use in server.
*/
	MSG_RESTRAINT_OF_TRADE_2 = 0xa3d,
/*20171018 to latest
ì˜¥ì…˜ ì´ìš©ì´ ë¶ˆ ê°€ëŠ¥í•œ ì„œë²„ ìž…ë‹ˆë‹¤.
The auction is not available in server.
*/
	MSG_RESTRAINT_OF_TRADE_3 = 0xa3e,
/*20171018 to latest
ê±°ëž˜ê°€ ë¶ˆ ê°€ëŠ¥í•œ ì„œë²„ ìž…ë‹ˆë‹¤.
The deal is imposible in server.
*/
	MSG_RESTRAINT_OF_TRADE_4 = 0xa3f,
/*20171018 to latest
ì•„ì´í…œ ë²„ë¦¬ê¸°ê°€ ë¶ˆ ê°€ëŠ¥í•œ ì„œë²„ ìž…ë‹ˆë‹¤.
Items discard is imposible in server.
*/
	MSG_RESTRAINT_OF_TRADE_5 = 0xa40,
/*20171018 to latest
ìƒì  íŒë§¤ ê¸°ëŠ¥ì„ ì‚¬ìš©í• ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Stores selling features are not available.
*/
	MSG_RESTRAINT_OF_TRADE_6 = 0xa41,
/*20171018 to latest
ì†Œí™˜ë¬¼ì˜ SPê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
The SP's summoned enough.
*/
	MSG_USESKILL_FAIL_SUMMON_SP_INSUFFICIENT = 0xa42,
/*20171018 to latest
%s/%s
*/
	MSG_SEND_MAIL_WEIGHT = 0xa43,
/*20171018 to latest
ë©”ì¼ ë‚´ìš©ì˜ ìµœëŒ€ ê¸¸ì´ëŠ” 1K ì´í•˜ ìž…ë‹ˆë‹¤.
The maximum length of the message content is 1K.
*/
	MSG_INVALID_MAIL_CONTENTS_INFO = 0xa44,
/*20171018 to latest
ì•„ì´í…œ ì²¨ë¶€ ì‹¤íŒ¨
Failed to attach an item.
*/
	MSG_SET_ITEMS_TO_MAIL_FAILED = 0xa45,
/*20171018 to latest
ë©”ì¼ì— ì²¨ë¶€í• ìˆ˜ ìžˆëŠ” ì•„ì´í…œì˜ ë¬´ê²Œê°€ ì´ˆê³¼ë˜ì—ˆìŠµë‹ˆë‹¤.
The weight of the items that can be attached to mail has been exceeded.
*/
	MSG_SET_ITEMS_TO_MAIL_OVER_WEIGHT = 0xa46,
/*20171018 to latest
ì´ë¯¸ ì„œë¹„ìŠ¤ ì¤‘ìž…ë‹ˆë‹¤. ìž ì‹œ í›„ ë‹¤ì‹œ ì‹œë„í•´ ì£¼ì„¸ìš”.
Is already in service. Please try again in a few minutes.
*/
	MSG_DYNAMICNPC_FAIL_DUPLICATENAME = 0xa47,
/*20171018 to latest
í–‰ìš´ì˜ ë£°ë ›ì°½ì„ ì—´ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to open the window of Lucky Roulette.
*/
	MSG_FAILED_OPEN_ROULLETTE = 0xa48,
/*20171018 to latest
í–‰ìš´ì˜ ë£°ë ›ì°½ì„ ë‹«ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Unable to close the window of the Lucky Roulette.
*/
	MSG_FAILED_CLOSE_ROULLETTE = 0xa49,
/*20171018 to latest
í–‰ìš´ì˜ ë£°ë ›ì„ ì‹œìž‘ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can not start a roulette wheel of fortune.
*/
	MSG_FAILED_GENERATE_ROULLETTE = 0xa4a,
/*20171018 to latest
í–‰ìš´ì˜ ë£°ë ›ì„ ì‹œìž‘í•˜ê¸° ìœ„í•´ì„œëŠ” í¬ì¸íŠ¸ê°€ í•„ìš”í•©ë‹ˆë‹¤.
Points is required to play Lucky Roulette.
*/
	MSG_NOT_ENOUGH_ROULLETTE_POINT = 0xa4b,
/*20171018 to latest
ë‹¹ì²¨ëœ ì•„ì´í…œì„ ìˆ˜ë ¹í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can not receive a winning items.
*/
	MSG_FAILED_RECV_ITEM = 0xa4c,
/*20171018 to latest
ì¸ë²¤í† ë¦¬ì— ì•„ì´í…œ ê°œìˆ˜ê°€ ì´ˆê³¼ë˜ì—ˆìŠµë‹ˆë‹¤.
The number of items in the inventory has been exceeded. 
*/
	MSG_FAILED_RECV_ITEM_OVERCOUNT = 0xa4d,
/*20171018 to latest
ë¬´ê²Œê°€ ì´ˆê³¼í•˜ì˜€ìŠµë‹ˆë‹¤. ì†Œì§€ì°½ì˜ ì—¬ìœ ê³µê°„ì„ í™•ë³´í•´ì£¼ì„¸ìš”.
The weight has been exceeded. Please free up the possesion window.
*/
	MSG_FAILED_RECV_ITEM_OVERWEIGHT = 0xa4e,
/*20171018 to latest
ë…¸ì  ê°œì„¤ ì‹¤íŒ¨.
Failed to open stalls.
*/
	MSG_MERCHANTSHOP_MAKING_FAIL = 0xa4f,
/*20171018 to latest
ë£°ë ›ì´ ëŒê³  ìžˆìŠµë‹ˆë‹¤. ê²½í’ˆì„ í™•ì¸ í›„ì— ë‹¤ì‹œ ì‹œë„í•´ì£¼ì„¸ìš”.
The roulette wheel is spinning. Please try again after checking with prizes.
*/
	MSG_FAILED_CLOSE_ROULLETTEWND = 0xa50,
/*20171018 to latest
í–‰ìš´ì˜ ë£°ë ›
Lucky Roulette
*/
	MSG_ROULLETTE_WND = 0xa51,
/*20171018 to latest
ì•„ì´í…œ íŒë§¤ ì‹œ ì†Œë¦¬ë¡œ ì•Œë¦¼
Notify when item sell out
*/
	MSG_SOUNDEFFECT_ITEMSELLWND = 0xa52,
/*20171018 to latest
ìˆ˜ìˆ˜ë£Œë¥¼ í™•ì¸í•´ì£¼ì„¸ìš”.
Please check the fees.
*/
	MSG_FAILED_SEND_MAIL_ITEMS = 0xa53,
/*20171018 to latest
ìœ ì €ì´ë¦„ í™•ì¸
Verify user name
*/
	MSG_CHECK_USER_NAME = 0xa54,
/*20171018 to latest
ì‚­ì œ ì˜ˆì •
Schedule deletion
*/
	MSG_DELETE_DUE_DATE = 0xa55,
/*20171018 to latest
ë‹¬ì„±ê³¼ì œ
Achievable challenge
*/
	MSG_ACHIEVEMENT_SYSTEM = 0xa56,
/*20171018 to latest
ë‹¬ì„±ì´ì 
Achieve overall
*/
	MSG_ACHIEVEMENT_TOTAL_SCORE = 0xa57,
/*20171018 to latest
ë‹¬ì„±ë“±ê¸‰
Achieve rank
*/
	MSG_ACHIEVEMENT_GRADE = 0xa58,
/*20171018 to latest
ë‹¤ìŒ ë‹¬ì„±ë“±ê¸‰ê¹Œì§€ [%5d]ì 
The following compensation box until [% 5d] point
*/
	MSG_ACHIEVEMENT_SCORE_REQUIRED_TO_REWARD = 0xa59,
/*20171018 to latest
ì§„ì²™ìƒí™©
Progress
*/
	MSG_ACHIEVEMENT_SUMMARY_TITLE = 0xa5a,
/*20171018 to latest
ìµœê·¼ ë‹¬ì„± ì—…ì 
Recent Achievements
*/
	MSG_ACHIEVEMENT_RECENT_ACHIEVEMENT = 0xa5b,
/*20171018 to latest
ä»™è² í’ˆëª©
Cracker  Item
*/
	MSG_CASH_GEDARE1 = 0xa5c,
/*20171018 to latest
ä»™è² : %d / %d 
Cracker  : %d / %d 
*/
	MSG_CASH_GEDARE2 = 0xa5d,
/*20171018 to latest
ä»™è²ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Cracker  is low.
*/
	MSG_CASH_GEDARE_FAIL_MONEY = 0xa5e,
/*20171018 to latest
%s 
%s
*/
	MSG_CASH_GEDARE_MONEY = 0xa5f,
/*20171018 to latest
ê°œìš”
Overview
*/
	MSG_ACHIEVEMENT_TAB_SUMMARY = 0xa60,
/*20171018 to latest
ì¼ë°˜
General
*/
	MSG_ACHIEVEMENT_TAB_GENERAL = 0xa61,
/*20171018 to latest
ìºë¦­í„°
Role
*/
	MSG_ACHIEVEMENT_TAB_GENERAL_CHARACTER = 0xa62,
/*20171018 to latest
í–‰ë™
Action
*/
	MSG_ACHIEVEMENT_TAB_GENERAL_ACTION = 0xa63,
/*20171018 to latest
ê¸°íƒ€
Other
*/
	MSG_ACHIEVEMENT_TAB_GENERAL_REST = 0xa64,
/*20171018 to latest
ëª¨í—˜
Adventure
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE = 0xa65,
/*20171018 to latest
ë£¬ë¯¸ë“œê°€ì¸ 
Rune Midgarts
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_RUNEMIDGARTS = 0xa66,
/*20171018 to latest
ìŠˆë°œì¸ ë°œë“œ
Schwartzvald
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_SCHWARZWALD = 0xa67,
/*20171018 to latest
ì•„ë£¨ë‚˜íŽ ì¸ 
Arunafeltz
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_ARUNAFELTZ = 0xa68,
/*20171018 to latest
ì´ê³„
Commandment
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_ANOTHERWORLD = 0xa69,
/*20171018 to latest
ë¡œì»¬ë¼ì´ì§•
Localizing
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_LOCALIZING = 0xa6a,
/*20171018 to latest
ë˜ì „
Dungeon
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_DUNGEON = 0xa6b,
/*20171018 to latest
ì „íˆ¬
Battle
*/
	MSG_ACHIEVEMENT_TAB_BATTLE = 0xa6c,
/*20171018 to latest
ê²°íˆ¬
Duel
*/
	MSG_ACHIEVEMENT_TAB_BATTLE_PVP = 0xa6d,
/*20171018 to latest
ìˆ˜ë ¨
Lily
*/
	MSG_ACHIEVEMENT_TAB_BATTLE_TRAINING = 0xa6e,
/*20171018 to latest
í€˜ìŠ¤íŠ¸
Quest
*/
	MSG_ACHIEVEMENT_TAB_QUEST = 0xa6f,
/*20171018 to latest
ì—í”¼ì†Œë“œ
Episode
*/
	MSG_ACHIEVEMENT_TAB_QUEST_EPISODE = 0xa70,
/*20171018 to latest
ì¼ë°˜
General
*/
	MSG_ACHIEVEMENT_TAB_QUEST_GENERAL = 0xa71,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼
Memorial
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL = 0xa72,
/*20171018 to latest
ë¯¸ë“œê°€ë¥´ë“œ
Midgard
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL_MIDGARD = 0xa73,
/*20171018 to latest
ì´ê³„
Commandment
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL_ANOTHERWORLD = 0xa74,
/*20171018 to latest
ê¸°íƒ€
Other
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL_REST = 0xa75,
/*20171018 to latest
ìœ„ì—…
Feat
*/
	MSG_ACHIEVEMENT_TAB_ACHIEVEMENT = 0xa76,
/*20171018 to latest
ë‹¬ì„±í•œ ê³¼ì œ
Achieved challenge
*/
	MSG_ACHIEVEMENT_TAB_TOTAL = 0xa77,
/*20171018 to latest
ë” ì´ìƒ ì¶”ê°€í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot add anymore.
*/
	MSG_FAIL_ADD_ACHIEVEMENT_TRACING = 0xa78,
/*20171018 to latest
< %s > ë‹¬ì„±í•˜ì˜€ìŠµë‹ˆë‹¤.
< %S > achieved.
*/
	MSG_NOTICE_COMPLETE_ACHIEVEMENT = 0xa79,
/*20171018 to latest
only otp user login allow
Only OTP users are allowed
*/
	MSG_OTPUSER_ONLY = 0xa7a,
/*20171018 to latest
ì´ ë²„íŠ¼ì„ ëˆ„ë¥¼ ì‹œ, ì§€ì •ëœ ìƒí’ˆì„ ë°›ê²Œë˜ë©° ë£°ë ›ì€ ì´ˆê¸°í™” ë©ë‹ˆë‹¤.
When this button pressed, you will receive a specified initialized roulette item.
*/
	MSG_GET_ROULLETE_PRIZE = 0xa7b,
/*20171018 to latest
ì´ ë²„íŠ¼ì„ ëˆ„ë¥¼ ì‹œ, ê¹œë¹¡ì´ëŠ” í™”ì‚´í‘œì˜ ë¼ì¸ë¶€í„° ë£°ë ›ì„ ì‹œìž‘ í•©ë‹ˆë‹¤.
When this button pressed, the flashing arrows from the lines of the roulette wheel begins.
*/
	MSG_NOTICE_NEXT_ROULLETE_STAGE = 0xa7c,
/*20171018 to latest
ì¹­í˜¸
Style
*/
	MSG_TITLE_EQUIPMENT = 0xa7d,
/*20171018 to latest
ì¹­í˜¸ í•´ì œ
Title release
*/
	MSG_TAKEOFF_TITLE = 0xa7e,
/*20171018 to latest
ê¸¸ë“œ ìƒì„±ì„ í•  ìˆ˜ ì—†ëŠ” ì§€ì—­ìž…ë‹ˆë‹¤.
Can't create a Guild in this area.
*/
	MSG_GUILD_MAKE_GUILD_NOT_PERMITTED_MAP = 0xa7f,
/*20171018 to latest
ê¸¸ë“œ í•´ì²´ë¥¼ í•  ìˆ˜ ì—†ëŠ” ì§€ì—­ìž…ë‹ˆë‹¤.
Can't disband a Guild in this area.
*/
	MSG_GUILD_DISORGANIZE_GUILD_NOT_PERMITTED_MAP = 0xa80,
/*20171018 to latest
ê¸¸ë“œ ê°€ìž…ì„ í•  ìˆ˜ ì—†ëŠ” ì§€ì—­ìž…ë‹ˆë‹¤.
Can't join a Guild in this area.
*/
	MSG_GUILD_JOIN_GUILD_NOT_PERMITTED_MAP = 0xa81,
/*20171018 to latest
ê¸¸ë“œ íƒˆí‡´ë¥¼ í•  ìˆ˜ ì—†ëŠ” ì§€ì—­ìž…ë‹ˆë‹¤.
Can't leave a Guild in this area.
*/
	MSG_GUILD_LEAVE_GUILD_NOT_PERMITTED_MAP = 0xa82,
/*20171018 to latest
ê¸¸ë“œì› ì¶”ë°©ì„ í•  ìˆ˜ ì—†ëŠ” ì§€ì—­ìž…ë‹ˆë‹¤.
Can't deport a Guild in this area.
*/
	MSG_GUILD_EXPEL_GUILD_NOT_PERMITTED_MAP = 0xa83,
/*20171018 to latest
ê¸¸ë“œì§ìœ„ ë³€ê²½ì„ í•  ìˆ˜ ì—†ëŠ” ì§€ì—­ìž…ë‹ˆë‹¤.
Can't change a Guild title in this area
*/
	MSG_GUILD_POSITION_CHANGE_NOT_PERMITTED_MAP = 0xa84,
/*20171018 to latest
ì•„ì´í…œ ì†Œì§€ëŸ‰ì„ 5ì¹¸ì´ìƒ ë¹„ì›Œì£¼ì„¸ìš”
Please empty at least 5 amount of possession in item window.
*/
	MSG_NOT_ENOUGH_SPACE_IN_ITEM_BODY = 0xa85,
/*20171018 to latest
E X P : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%%)
EXP   : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%% )
*/
	MSG_JPN_PERSONALINFO_EXPMSG = 0xa86,
/*20171018 to latest
DROP  : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%%)
DROP  : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%% )
*/
	MSG_JPN_PERSONALINFO_DROPMSG = 0xa87,
/*20171018 to latest
DEATH : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%%)
DEATH : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%% )
*/
	MSG_JPN_PERSONALINFO_DEATHMSG = 0xa88,
/*20171018 to latest
ì²¨ë¶€í•  ìˆ˜ ìžˆëŠ” ì•„ì´í…œì˜ ê°¯ìˆ˜ê°€ ì´ˆê³¼ë˜ì—ˆìŠµë‹ˆë‹¤.
The number of items that can be attached is exceeded.
*/
	MSG_SET_ITEMS_TO_MAIL_OVERCOUNT = 0xa89,
/*20171018 to latest
ì•„ì´í…œ êµ¬ë§¤ ì‹œ ì†Œë¦¬ë¡œ ì•Œë¦¼
Notify when item purchased
*/
	MSG_SOUNDEFFECT_ITEMBUYWND = 0xa8a,
/*20171018 to latest
ì²¨ë¶€í•  ìˆ˜ ì—†ëŠ” ì•„ì´í…œìž…ë‹ˆë‹¤.
Unable to attach the items.
*/
	MSG_ID_A8B = 0xa8b,
/*20171018 to latest
ê½ì— ë‹¹ì²¨ë˜ì—ˆìœ¼ë¯€ë¡œ ë‹¤ìŒ ìƒìœ„ ë‹¨ê³„ì˜ ë£°ë ›ì„ ëŒë¦¬ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Because you can not win a slam room and turn the roulette of the next higher step.
*/
	MSG_ID_A8C = 0xa8c,
/*20171018 to latest
ë‹µìž¥ì“°ê¸°
Replying
*/
	MSG_ID_A8D = 0xa8d,
/*20171018 to latest
ë‚´ìš©ì½ê¸°
Read more
*/
	MSG_ID_A8E = 0xa8e,
/*20171018 to latest
ë©”ì¼ì‚­ì œ
Delete message
*/
	MSG_ID_A8F = 0xa8f,
/*20171018 to latest
ä»™è² : %d
Crackers  : %d
*/
	MSG_ID_A90 = 0xa90,
/*20171018 to latest
%s %s ä»™è²
%s %s crackers 
*/
	MSG_ID_A91 = 0xa91,
/*20171018 to latest
ä»™è²
Crackers 
*/
	MSG_ID_A92 = 0xa92,
/*20171018 to latest
Total : %d ä»™è²
Total : %d Crackers 
*/
	MSG_ID_A93 = 0xa93,
/*20171018 to latest
%d -> %s ä»™è²
%d -> %s Crackers 
*/
	MSG_ID_A94 = 0xa94,
/*20171018 to latest
%s ä»™è²
%s Crackers 
*/
	MSG_ID_A95 = 0xa95,
/*20171018 to latest
                                          Current ä»™è² : %s
                                          Current Crackers : %s
*/
	MSG_ID_A96 = 0xa96,
/*20171018 to latest
    %s  :  %s  ä»™è²
    %s  :  %s  Crackers
*/
	MSG_ID_A97 = 0xa97,
/*20171018 to latest
%10s ä»™è²
%10s Crackers
*/
	MSG_ID_A98 = 0xa98,
/*20171018 to latest
Total : %s ä»™è²
Total : %s Crackers
*/
	MSG_ID_A99 = 0xa99,
/*20171018 to latest
â€»ìˆ˜ìˆ˜ë£Œ 3% / ìµœì†Œ 1ä»™è²ì˜ ìˆ˜ìˆ˜ë£Œ ì°¨ê° 
* Commission 3% / Minimum 1 Crackers comission deducted
*/
	MSG_ID_A9A = 0xa9a,
/*20171018 to latest
ä»™è² ìž…ë‹ˆë‹¤.
The Crackers.
*/
	MSG_ID_A9B = 0xa9b,
/*20171018 to latest
^0000ffä»™è² ì´ìƒ^000000ìž…ë‹ˆë‹¤.
ìž…ë ¥ê¸ˆì•¡ì´ ë§žìŠµë‹ˆê¹Œ?
^0000ff more than crackers^000000Did you enter the correct amount?
*/
	MSG_ID_A9C = 0xa9c,
/*20171018 to latest
10ì–µä»™è²ì´ìƒ ì•ˆì „ í™•ì¸
Over than 10billions secure check
*/
	MSG_ID_A9D = 0xa9d,
/*20171018 to latest
10ì–µ ä»™è² ì´ìƒ ìž…ë ¥í•˜ì…”ë„ ê°€ê²©ì€ 10ì–µ ä»™è²ë¡œ íŒë§¤ë©ë‹ˆë‹¤.
If you fill over 1 billion, the price will be automatically set as 10 billion Xianbei.
*/
	MSG_ID_A9E = 0xa9e,
/*20171018 to latest
9,999ä»™è² ì´ìƒ ìž…ë ¥í•˜ì…”ë„ ê°€ê²©ì€ 9,999ä»™è²ë¡œ íŒë§¤ë©ë‹ˆë‹¤.
If you fill over 9,999 Xianbei, the price will automatically set as 9,999 Xianbei.
*/
	MSG_ID_A9F = 0xa9f,
/*20171018 to latest
ê°€ê²©ì´ 0 ä»™è²ì¸ ì•„ì´í…œì´ ì¡´ìž¬ í•©ë‹ˆë‹¤. ìƒì ì„ ì—´ìˆ˜ ì—†ìŠµë‹ˆë‹¤!
There are items priced 0 Xianbei. You cannot open vending.
*/
	MSG_ID_AA0 = 0xaa0,
/*20171018 to latest
ìƒëŒ€ ìºë¦­í„°ê°€ ìµœëŒ€ ë³´ìœ  ä»™è²ëŸ‰ì„ ì´ˆê³¼í•˜ì—¬ ê±°ëž˜ê°€ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
The opponent is over the Xianbei limit. Trade failed.
*/
	MSG_ID_AA1 = 0xaa1,
/*20171018 to latest
%s ì•„ì´í…œì˜ ê°€ê²©ì„ 10ì–µä»™è² ì´í•˜ë¡œ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
Please fill out %s item price less than 1 billion Xianbei.
*/
	MSG_ID_AA2 = 0xaa2,
/*20171018 to latest
%s  :  %s  ä»™è² => %s EA
%s:  %s  Xianbei => %s ea
*/
	MSG_ID_AA3 = 0xaa3,
/*20171018 to latest
ì œí•œ ê¸ˆì•¡ : %s ä»™è²
Limited price: %s Xianbei
*/
	MSG_ID_AA4 = 0xaa4,
/*20171018 to latest
%s %s ä»™è² %d ê°œ
%s %s %d Xianbei
*/
	MSG_ID_AA5 = 0xaa5,
/*20171018 to latest
%s %dê°œë¥¼ %d ä»™è²ì— íŒë§¤ í•˜ì˜€ìŠµë‹ˆë‹¤. ìˆ˜ìˆ˜ë£ŒëŠ” 3%% ìž…ë‹ˆë‹¤.
%d %s are sold. In total %d Xianbei. 3%% charge will be imposed.
*/
	MSG_ID_AA6 = 0xaa6,
/*20171018 to latest
RODEX
*/
	MSG_ID_AA7 = 0xaa7,
/*20171018 to latest
SEND
*/
	MSG_ID_AA8 = 0xaa8,
/*20171018 to latest
RECEIVE
*/
	MSG_ID_AA9 = 0xaa9,
/*20171018 to latest
ë©”ì¼ ìž‘ì„±ì°½ì„ ë‹«ì•„ì£¼ì„¸ìš”.
Please close the mail compose window.
*/
	MSG_ID_AAA = 0xaaa,
/*20171018 to latest
ì„œë²„ì ‘ê·¼ê±°ë¶€(A)
Server access denied(A)
*/
	MSG_ID_AAB = 0xaab,
/*20171018 to latest
ì„œë²„ì ‘ê·¼ê±°ë¶€(B)
Server access denied(B)
*/
	MSG_ID_AAC = 0xaac,
/*20171018 to latest
ìž¥ì°©ëœ í™”ì‚´/íƒ„í™˜ ì„ í•´ì œí•´ì•¼í•©ë‹ˆë‹¤.
Unequipped Arrow/Ammunition.
*/
	MSG_ID_AAD = 0xaad,
/*20171018 to latest
ì¸ë²¤í† ë¦¬ì˜ ì•„ì´í…œì´ ì†Œëª¨ë˜ì–´ ë¡œë±ìŠ¤ ì“°ê¸°ì°½ì„ ë‹«ìŠµë‹ˆë‹¤.
Consuming item in inventory will close mail compose window.
*/
	MSG_ID_AAE = 0xaae,
/*20171018 to latest
ì†Œì§€í•˜ì‹  ë‹ë³´ê¸°ê°€ ì—†ìŠµë‹ˆë‹¤.
Do not have Magnifier.
*/
	MSG_ID_AAF = 0xaaf,
/*20171018 to latest
ì•„ì´í…œì„ ë²„ë¦´ë ¤ë©´ ë©”ì¼ ì“°ê¸°ì°½ì„ ë‹«ì•„ì£¼ì„¸ìš”.
Close email window if you want to discard item.
*/
	MSG_ID_AB0 = 0xab0,
/*20171018 to latest
ìƒëŒ€ë°©ì´ ì¹œêµ¬ ìš”ì²­ì¤‘ìž…ë‹ˆë‹¤
The opponent has already requested you to be a friend.
*/
	MSG_ID_AB1 = 0xab1,
/*20171018 to latest
SCRIPT ERROR AID
*/
	MSG_ID_AB2 = 0xab2,
/*20171018 to latest

Errorfile : %s
ErrorLine : %d ì¤„
ErrorContent: 
*ì´ì „ ì¤„ : %s 
*Errorline : %s 
*ë‹¤ìŒ ì¤„:
 %s

Errorfile : %s
ErrorLine : %d item
ErrorContext: %s
*/
	MSG_ID_AB3 = 0xab3,
/*20171018 to latest
 ^ff0000í•´ë‹¹ ì•„ì´í…œì„ êµ¬ë§¤ í•˜ì‹œê² ìŠµë‹ˆê¹Œ? %dí¬ì¸íŠ¸ ë° %d ä»™è²ê°€ ì°¨ê° ë©ë‹ˆë‹¤.
^ff0000Are you sure want to purchase the item? after confirmation will consume %d point and %d crackers.
*/
	MSG_ID_AB4 = 0xab4,
/*20171018 to latest
ë‹«ê¸°
Close
*/
	MSG_ID_AB5 = 0xab5,
/*20171018 to latest
í€˜ìŠ¤íŠ¸
Quest
*/
	MSG_ID_AB6 = 0xab6,
/*20171018 to latest
í€˜ìŠ¤íŠ¸ ì•„ì´ì½˜ ë³´ê¸°
View Quest icon
*/
	MSG_ID_AB7 = 0xab7,
/*20171018 to latest
íŽ¸ì˜ì‹œì„¤
Facility
*/
	MSG_ID_AB8 = 0xab8,
/*20171018 to latest
íŽ¸ì˜ì‹œì„¤ ì•„ì´ì½˜ ë³´ê¸°
View Facility icon
*/
	MSG_ID_AB9 = 0xab9,
/*20171018 to latest
ê¸¸ë“œì›/íŒŒí‹°ì›
Guild/Party
*/
	MSG_ID_ABA = 0xaba,
/*20171018 to latest
ê¸¸ë“œì›/íŒŒí‹°ì› ë³´ê¸°
Show Guild/Party
*/
	MSG_ID_ABB = 0xabb,
/*20171018 to latest
ê¸°ë¡í•˜ê¸°
Record
*/
	MSG_ID_ABC = 0xabc,
/*20171018 to latest
ë³´ìŠ¤ëª¬ìŠ¤í„°
Boss Monster
*/
	MSG_ID_ABD = 0xabd,
/*20171018 to latest
ë‚˜
I
*/
	MSG_ID_ABE = 0xabe,
/*20171018 to latest
ì‚­ì œ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Are you sure want to delete it?
*/
	MSG_ID_ABF = 0xabf,
/*20171018 to latest
í€˜ìŠ¤íŠ¸ NPC
Quest NPC
*/
	MSG_ID_AC0 = 0xac0,
/*20171018 to latest
ë©”ëª¨í•  ë‚´ìš©ì„ ê¸°ë¡í•©ë‹ˆë‹¤
Record content
*/
	MSG_ID_AC1 = 0xac1,
/*20171018 to latest
ì €ìž¥í•˜ê¸°
Store
*/
	MSG_ID_AC2 = 0xac2,
/*20171018 to latest
ë©”ëª¨í•˜ê¸°
Record
*/
	MSG_ID_AC3 = 0xac3,
/*20171018 to latest
%s [%dì˜µì…˜] %dê°œ
%s [%d Property] %d ea
*/
	MSG_ID_AC4 = 0xac4,
/*20171018 to latest
%s [%dì˜µì…˜] %s Zeny
%s [%d Property] %s Zeny
*/
	MSG_ID_AC5 = 0xac5,
/*20171018 to latest
%s [%dì˜µì…˜] %d %s %d -> %s %s
%s [%d Property] %d %s %d -> %s %s
*/
	MSG_ID_AC6 = 0xac6,
/*20171018 to latest
%s [%dì˜µì…˜] %d %s %s %s
%s [%d Property] %d %s %s %s
*/
	MSG_ID_AC7 = 0xac7,
/*20171018 to latest
%s [%dì˜µì…˜] %d -> %s %s
%s [%d Property] %d -> %s %s
*/
	MSG_ID_AC8 = 0xac8,
/*20171018 to latest
%s [%dì˜µì…˜] %s %s
%s [%d Property] %s %s
*/
	MSG_ID_AC9 = 0xac9,
/*20171018 to latest
ìµœì†Œ ê±°ëž˜ ë‹¨ìœ„ 100 ä»™è² ì´ìƒìœ¼ë¡œ ì„¤ì • í•˜ì…”ì•¼ í•©ë‹ˆë‹¤.
The minimum trading unit must be 100 crackers or more.
*/
	MSG_ID_ACA = 0xaca,
/*20171018 to latest
ë¨¸ë¦¬ ìƒ‰
Hair color
*/
	MSG_ID_ACB = 0xacb,
/*20171018 to latest
ë¨¸ë¦¬ ëª¨ì–‘
Hair style
*/
	MSG_ID_ACC = 0xacc,
/*20171018 to latest
ì˜· ìƒ‰
Cloth color
*/
	MSG_ID_ACD = 0xacd,
/*20171018 to latest
ì˜· ëª¨ì–‘
Cloth pattern
*/
	MSG_ID_ACE = 0xace,
/*20171018 to latest
ì§€ì›ë˜ì§€ ì•ŠëŠ” ë§µ ìž…ë‹ˆë‹¤.
Unsupported Map.
*/
	MSG_ID_ACF = 0xacf,
/*20171018 to latest
2,147,483,647 Zeny ì´í•˜ë¡œ ìž…ë ¥ í•˜ì‹­ì‹œì˜¤.
Enter Zeny Below 2,147,483,647.
*/
	MSG_ID_AD0 = 0xad0,
/*20171018 to latest
1 Zeny ì´ìƒ ìž…ë ¥ í•˜ì‹­ì‹œì˜¤.
Please Enter atleast 1 zeny.
*/
	MSG_ID_AD1 = 0xad1,
/*20171018 to latest
ë³´ìœ í•œ Zeny ê°€ ì—†ìŠµë‹ˆë‹¤.
You do not hold any zeny.
*/
	MSG_ID_AD2 = 0xad2,
/*20171018 to latest
ì œë‹ˆ ì°½ê³ 
Zeny Storage
*/
	MSG_ID_AD3 = 0xad3,
/*20171018 to latest
ì°½ê³ ë³´ìœ ì•¡
in Bank
*/
	MSG_ID_AD4 = 0xad4,
/*20171018 to latest
ì†Œì§€ê¸ˆ
on hand
*/
	MSG_ID_AD5 = 0xad5,
/*20171018 to latest
ìž…ê¸ˆ
Deposit
*/
	MSG_ID_AD6 = 0xad6,
/*20171018 to latest
ì¶œê¸ˆ
Withdraw
*/
	MSG_ID_AD7 = 0xad7,
/*20171018 to latest
1 z UP
1z UP
*/
	MSG_ID_AD8 = 0xad8,
/*20171018 to latest
1 z Down
1z Down
*/
	MSG_ID_AD9 = 0xad9,
/*20171018 to latest
Max
*/
	MSG_ID_ADA = 0xada,
/*20171018 to latest
ìž…ë ¥ê°’ì´ ì—†ìŠµë‹ˆë‹¤
There is no Input value
*/
	MSG_ID_ADB = 0xadb,
/*20171018 to latest
ë³´ìœ  Zeny ë¶€ì¡±
Not enough zeny
*/
	MSG_ID_ADC = 0xadc,
/*20171018 to latest
ìž…ë ¥ê°’ í•„ìš”
Input Required
*/
	MSG_ID_ADD = 0xadd,
/*20171018 to latest
ë¬¸ìž ìž…ë ¥ ë¶ˆê°€
Numbers only
*/
	MSG_ID_ADE = 0xade,
/*20171018 to latest
ìµœëŒ€ ìž…ë ¥ ì´ˆê³¼
Exceeded max input
*/
	MSG_ID_ADF = 0xadf,
/*20171018 to latest
ìµœì†Œ ìž…ë ¥ ë¯¸ë§Œ
Below Minimum Input
*/
	MSG_ID_AE0 = 0xae0,
/*20171018 to latest
ë³´ìœ  Zeny ë¶€ì¡±
Not enough zeny
*/
	MSG_ID_AE1 = 0xae1,
/*20171018 to latest
ì€í–‰ ìž”ê³  ë¶€ì¡±
Insufficient funds
*/
	MSG_ID_AE2 = 0xae2,
/*20171018 to latest
ìµœëŒ€ ë³´ìœ  Zeny ì´ˆê³¼
Exceeded max zeny
*/
	MSG_ID_AE3 = 0xae3,
/*20171018 to latest
ë“œë¡­ X
Drop X
*/
	MSG_ID_AE4 = 0xae4,
/*20171018 to latest
ì°½ê³  X
Storage X
*/
	MSG_ID_AE5 = 0xae5,
/*20171018 to latest
ì¹´íŠ¸ X
Cart X
*/
	MSG_ID_AE6 = 0xae6,
/*20171018 to latest
ë©”ì¼ X
Mail X
*/
	MSG_ID_AE7 = 0xae7,
/*20171018 to latest
êµí™˜ì°½ X
Trade X
*/
	MSG_ID_AE8 = 0xae8,
/*20171018 to latest
ê²½ë§¤ìž¥ X
Auction X
*/
	MSG_ID_AE9 = 0xae9,
/*20171018 to latest
ê¸¸ë“œì°½ê³  X
Guild Storage X
*/
	MSG_ID_AEA = 0xaea,
/*20171018 to latest
NPCì—ê²Œ íŒë§¤ X
Sell to NPC X
*/
	MSG_ID_AEB = 0xaeb,
/*20171018 to latest
ì´ë™ì œí•œì´ ìžˆëŠ” ì•„ì´í…œìž…ë‹ˆë‹¤.
Item moves restriction.
*/
	MSG_ID_AEC = 0xaec,
/*20171018 to latest
ìºë¦­í„°ë¥¼ ìƒì„±í•´ì£¼ì„¸ìš”!
Please Create a Character!
*/
	MSG_ID_AED = 0xaed,
/*20171018 to latest
ìž¥ì°©ëœ íˆ¬ì‚¬ì²´ ì•„ì´í…œì„ í•´ì œí•´ì•¼ í•©ë‹ˆë‹¤.
You need to disarm the equipped projectiles.
*/
	MSG_ID_AEE = 0xaee,
/*20171018 to latest
ì¸ì› ì´ˆê³¼ë¡œ ë©”ëª¨ë¦¬ì–¼ ë˜ì „ì— ìž…ìž¥ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You cannot enter Memorial Dungeon with excess members
*/
	MSG_ID_AEF = 0xaef,
/*20171018 to latest
ì¸ì›ìˆ˜ ì´ˆê³¼ë¡œ ì¸í•´  ë©”ëª¨ë¦¬ì–¼ ë˜ì „ ìž…ìž¥ì´ ê±°ë¶€ë˜ì—ˆìŠµë‹ˆë‹¤
Memorial Dungeon Access was denied due to exceeding number of players
*/
	MSG_ID_AF0 = 0xaf0,
/*20171018 to latest
%.1f%% ( %s Server: %.1f%% + Premium:%.1f%% )
*/
	MSG_ID_AF1 = 0xaf1,
/*20171018 to latest
%.1f%% ( %s Server: %.1f%% + Premium:%.1f%% )
*/
	MSG_ID_AF2 = 0xaf2,
/*20171018 to latest
ì¤‘ë³µëœ ì•„ì´í…œì´ ì¡´ìž¬í•˜ì—¬ ì‚¬ìš©ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
Consuming Item denied due to multiple same item.
*/
	MSG_ID_AF3 = 0xaf3,
/*20171018 to latest
ì¤‘ë³µëœ íš¨ê³¼ê°€ ì¡´ìž¬í•˜ì—¬ ì‚¬ìš©ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
Consuming Item denied due to effect of same consumed item.
*/
	MSG_ID_AF4 = 0xaf4,
/*20171018 to latest
í™”ë©´ í”ë“¤ë¦¼ íš¨ê³¼ ON
Flicker Effect ON
*/
	MSG_ID_AF5 = 0xaf5,
/*20171018 to latest
í™”ë©´ í”ë“¤ë¦¼ íš¨ê³¼ OFF
Flicker Effect OFF
*/
	MSG_ID_AF6 = 0xaf6,
/*20171018 to latest
ë¶ˆë²• í”„ë¡œê·¸ëž¨  ë°œê²¬ë˜ì—ˆìŠµë‹ˆë‹¤
Illegal Programs has been detected
*/
	MSG_ID_AF7 = 0xaf7,
/*20171018 to latest
ë©”ì¼ ë³´ë‚´ê¸°
Send Mail
*/
	MSG_ID_AF8 = 0xaf8,
/*20171018 to latest
E X P : %.1f%% ( basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
E X P: %.1f%% (Basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
*/
	MSG_ID_AF9 = 0xaf9,
/*20171018 to latest
DROP  : %.1f%% ( basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
DROP : %.1f%% (Basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
*/
	MSG_ID_AFA = 0xafa,
/*20171018 to latest
DEATH : %.1f%% ( basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
DEATH: %.1f%% (Basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
*/
	MSG_ID_AFB = 0xafb,
/*20171018 to latest
 í•´ë‹¹ íƒœê·¸ëŠ” ì´ë¦„ìœ¼ë¡œ ì‚¬ìš©í•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Name with this tag cannot be used.
*/
	MSG_ID_AFC = 0xafc,
/*20171018 to latest
???? bdbac5b8c0cfb8b52098de
Style Shop
*/
	MSG_ID_AFD = 0xafd,
/*20171018 to latest
ì¿ í° ì—†ìŒ. Cash Shopì—ì„œ ì•„ì´í…œì„ êµ¬ë§¤í•´ ì£¼ì„¸ìš”.
No serial number, Please visit the store to buy.
*/
	MSG_ID_AFE = 0xafe,
/*20171018 to latest
ì¸ë²¤í† ë¦¬ì—ì„œ ì•„ì´í…œ ì¿ í° ìƒìžë¥¼ ì—´ì–´ì£¼ì„¸ìš”.
Please turn on Serial item number window box.
*/
	MSG_ID_AFF = 0xaff,
/*20171018 to latest
í•´ë‹¹ ìŠ¤íƒ€ì¼ ì •ë³´ë¥¼ ì‚­ì œí•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Bank
*/
	MSG_ID_B00 = 0xb00,
/*20171018 to latest
ìŠ¬ë¡¯ì´ ê½‰ ì°¼ìŠµë‹ˆë‹¤. ë‚´ ìŠ¤íƒ€ì¼ì—ì„œ ìºë¦­í„° ì‚­ì œ í›„ ì‚¬ìš©í•´ ì£¼ì‹­ì‹œì˜¤.
Slot is full, please delete a character.
*/
	MSG_ID_B01 = 0xb01,
/*20171018 to latest
ë¹„ìš©ì„ ì§€ë¶ˆí•˜ê³  í˜„ìž¬ ìŠ¤íƒ€ì¼ì„ ì ìš©í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
(â€» ë¹„ìš©ì€ ë°˜í™˜ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.)
Item cannot be restored, are you sure want to apply it?
*/
	MSG_ID_B02 = 0xb02,
/*20171018 to latest
í˜„ìž¬ ìŠ¤íƒ€ì¼ì„ ì €ìž¥í•˜ì˜€ìŠµë‹ˆë‹¤.
Registered as the following style.
*/
	MSG_ID_B03 = 0xb03,
/*20171018 to latest
ë³´ìœ  Zeny ë¶€ì¡±. ì€í–‰ì— ì¶©ë¶„í•œ Zenyê°€ ìžˆìŠµë‹ˆë‹¤.
There are plenty of golds in the bank, Please go to the bank now.
*/
	MSG_ID_B04 = 0xb04,
/*20171018 to latest
ìœ¼ë¡œ ì´ë™í•©ë‹ˆë‹¤.
moving...
*/
	MSG_ID_B05 = 0xb05,
/*20171018 to latest
í•´ë‹¹ êµ­ê°€ì˜ ì˜ê³µí†µê³¼ì— ëŒ€í•œ í—ˆê°€ê°€ ë‚˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
You are not allowed to fly over the sovereign airspace of the country.
*/
	MSG_ID_B06 = 0xb06,
/*20171018 to latest
ë§ˆë‚˜ë¡œ ëŒ€ê¸°ë¶ˆì•ˆì •ì´ ê³„ì†ë˜ì–´ ë¹„ê³µì • ìš´í–‰ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
Airship flight is temporarily unavailable due to atmospheric instability caused by magic.
*/
	MSG_ID_B07 = 0xb07,
/*20171018 to latest
ê°œì¸ ë¹„ê³µì •
Private airship
*/
	MSG_ID_B08 = 0xb08,
/*20171018 to latest
ìž ì‹œ í›„ ë‹¤ì‹œ ì‹œë„í•´ì£¼ì„¸ìš”.
Please try again in a moment.
*/
	MSG_ID_B09 = 0xb09,
/*20171018 to latest
ê°œì¸ ë¹„ê³µì • ì´ìš©ì— í•„ìš”í•œ ì œë‹ˆê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not enough Zeny to use the private airship.
*/
	MSG_ID_B0A = 0xb0a,
/*20171018 to latest
ê°œì¸ ë¹„ê³µì • ì´ìš©ì— í•„ìš”í•œ ì•„ì´í…œì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not enough Cans to use the private airship.
*/
	MSG_ID_B0B = 0xb0b,
/*20171018 to latest
ê°œì¸ ë¹„ê³µì •ì„ ì´ìš©í•  ìˆ˜ ìžˆëŠ” ë ˆë²¨ì´ ì•„ë‹™ë‹ˆë‹¤.
You cannot meet the level to use the private airship.
*/
	MSG_ID_B0C = 0xb0c,
/*20171018 to latest
ì„ íƒí•œ ì§€ì ìœ¼ë¡  ê°œì¸ë¹„ê³µì •ì´ ì´ë™í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot move to the selected point by the private airship.
*/
	MSG_ID_B0D = 0xb0d,
/*20171018 to latest
í˜„ ì§€ì ì—ì„  ê°œì¸ë¹„ê³µì •ì„ ì´ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot use the private airship where you are now.
*/
	MSG_ID_B0E = 0xb0e,
/*20171018 to latest
ì•¡ì„¸ì„œë¦¬
Accessory
*/
	MSG_ID_B0F = 0xb0f,
/*20171018 to latest
ì„¸ì»¨ë“œì½”ìŠ¤íŠ¬
Second costume
*/
	MSG_ID_B10 = 0xb10,
/*20171018 to latest
ë‚´ ìŠ¤íƒ€ì¼ 
Wardrobe
*/
	MSG_ID_B11 = 0xb11,
/*20171018 to latest
ì—¼ìƒ‰í•  ìˆ˜ ì—†ëŠ” í—¤ì–´ìŠ¤íƒ€ì¼ìž…ë‹ˆë‹¤.
This hairstyle cannot be dyed.
*/
	MSG_ID_B12 = 0xb12,
/*20171018 to latest
í™”ì‚´í‘œë¥¼ ëˆŒëŸ¬ ë§ˆìŒì— ë“œëŠ” ìŠ¤íƒ€ì¼ì„ ì„ íƒí•´ ë³´ì„¸ìš”.
Press an arrow to choose the style you want.
*/
	MSG_ID_B13 = 0xb13,
/*20171018 to latest
ìƒˆë¡œìš´ ìŠ¤íƒ€ì¼ì„ í™•ì¸í•´ ë³´ì„¸ìš”.
(â€» ì•¡ì„¸ì„œë¦¬ êµ¬ë§¤ ì‹œ RODEXë¡œ ë°œì†¡ë©ë‹ˆë‹¤.)
Come and see the new styles.
(Purchased accessories will be sent via RODEX.)
*/
	MSG_ID_B14 = 0xb14,
/*20171018 to latest
ê¸°ë³¸ ìŠ¤íƒ€ì¼
Basic style
*/
	MSG_ID_B15 = 0xb15,
/*20171018 to latest
 í•´ë‹¹ ìŠ¤í‚¬ì€ BaseLv %d ì´ìƒë¶€í„° ìŠ¤í‚¬ í¬ì¸íŠ¸ íˆ¬ìžê°€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
You can level up the skill from the base Lv. %d.
*/
	MSG_ID_B16 = 0xb16,
/*20171018 to latest
í•´ë‹¹ íŠ¹ìˆ˜ê¸°í˜¸ëŠ” ì´ë¦„ì— ì‚¬ìš©í•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Special symbol can't be used in name
*/
	MSG_ID_B17 = 0xb17,
/*20171018 to latest
MHPê°€ ë„ˆë¬´ ë‚®ì•„, í•´ë‹¹ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
MaxHP is to low to use this skill
*/
	MSG_ID_B18 = 0xb18,
/*20171018 to latest
MSPê°€ ë„ˆë¬´ ë‚®ì•„, í•´ë‹¹ ìŠ¤í‚¬ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
MaxSP is to low to use this skill
*/
	MSG_ID_B19 = 0xb19,
/*20171018 to latest
ì•„ì´í…œ ë¹„êµí•˜ê¸°
Compare items
*/
	MSG_ID_B1A = 0xb1a,
/*20171018 to latest
ì•„ì´í…œ ë²„ë¦¬ê¸° ìž ê¸ˆ
Drop lock
*/
	MSG_ID_B1B = 0xb1b,
/*20171018 to latest
ìŠ¤í¬ë¦°ìƒ· íŒŒì¼ì´ ì²¨ë¶€ ë˜ì§€ ì•Šì•˜ìŠµë‹ˆë‹¤.
Screenshots are not attached
*/
	MSG_ID_B1C = 0xb1c,
/*20171018 to latest
Twitter
TWITTER
*/
	MSG_ID_B1D = 0xb1d,
/*20171018 to latest
ì¼ë°˜
General
*/
	MSG_ID_B1E = 0xb1e,
/*20171018 to latest
ê³µì§€
Notice
*/
	MSG_ID_B1F = 0xb1f,
/*20171018 to latest
ë°˜ì†¡
Clear
*/
	MSG_ID_B20 = 0xb20,
/*20171018 to latest
ìƒˆë¡œê³ ì¹¨
Refresh
*/
	MSG_ID_B21 = 0xb21,
/*20171018 to latest
%dë¶„
%d minute
*/
	MSG_ID_B22 = 0xb22,
/*20171018 to latest
%dì‹œê°„
%d hour
*/
	MSG_ID_B23 = 0xb23,
/*20171018 to latest
%dì¼
%d day
*/
	MSG_ID_B24 = 0xb24,
/*20171018 to latest
ë°˜ì†¡ë¨
Returned
*/
	MSG_ID_B25 = 0xb25,
/*20171018 to latest
ì„ íƒí•œ ë©”ì¼ì„ ì‚­ì œí•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to delete the message?
*/
	MSG_ID_B26 = 0xb26,
/*20171018 to latest
ìœ„ì¹˜í‘œì‹œ
Show information
*/
	MSG_ID_B27 = 0xb27,
/*20171018 to latest
í™•ëŒ€
Zoom In
*/
	MSG_ID_B28 = 0xb28,
/*20171018 to latest
ì¶•ì†Œ
Zoom Out
*/
	MSG_ID_B29 = 0xb29,
/*20171018 to latest
ë§µë³´ê¸°
Maximize
*/
	MSG_ID_B2A = 0xb2a,
/*20171018 to latest
ì›”ë“œë³´ê¸°
Show world map
*/
	MSG_ID_B2B = 0xb2b,
/*20171018 to latest
ì•„ì´í…œ ì†Œì§€ ì¢…ë¥˜ìˆ˜
Total possession item type
*/
	MSG_ID_B2C = 0xb2c,
/*20171018 to latest
/minimap
*/
	MSG_ID_B2D = 0xb2d,
/*20171018 to latest
ë¯¸ë‹ˆë§µ ë²„íŠ¼ì„ í‘œì‹œí•©ë‹ˆë‹¤
Show minimap buttons
*/
	MSG_ID_B2E = 0xb2e,
/*20171018 to latest
ë¯¸ë‹ˆë§µ ë²„íŠ¼ì„ í‘œì‹œí•˜ì§€ ì•ŠìŠµë‹ˆë‹¤
Hide minimap buttons
*/
	MSG_ID_B2F = 0xb2f,
/*20171018 to latest
ê¸¸ë“œ ì ‘ì†ìž ì •ë ¬
Show guild member login status
*/
	MSG_ID_B30 = 0xb30,
/*20171018 to latest
ì¹œë°€ë„ : %s
Intimacy: %s
*/
	MSG_ID_B31 = 0xb31,
/*20171018 to latest
í™•ì¸ ì „
Confirmation
*/
	MSG_ID_B32 = 0xb32,
/*20171018 to latest
íŒŒí‹° ì´ë¦„
Team name
*/
	MSG_ID_B33 = 0xb33,
/*20171018 to latest
íŒŒí‹°ìž¥
Leader
*/
	MSG_ID_B34 = 0xb34,
/*20171018 to latest
ì œí•œ ì‹œê°„ ì´ˆê³¼. í´ë¼ì´ì–¸íŠ¸ë¥¼ ì¢…ë£Œí•©ë‹ˆë‹¤.
Time limit exceeded. Closing the client
*/
	MSG_ID_B35 = 0xb35,
/*20171018 to latest
ìž˜ëª»ëœ ìž…ë ¥ìž…ë‹ˆë‹¤. í´ë¼ì´ì–¸íŠ¸ë¥¼ ì¢…ë£Œí•©ë‹ˆë‹¤.
Input error. Closing the client
*/
	MSG_ID_B36 = 0xb36,
/*20171018 to latest
ì •ë‹µ ìž…ë‹ˆë‹¤. ë³´ìƒìœ¼ë¡œ ì†Œì •ì˜ ë²„í”„ê°€ ì£¼ì–´ì§‘ë‹ˆë‹¤.
Incorrect input. A small buff has given to you
*/
	MSG_ID_B37 = 0xb37,
/*20171018 to latest
ì˜ë¬¸ 4ìž, í•œê¸€ 2ìž ì´ìƒìœ¼ë¡œ ìž…ë ¥í•´ì•¼ í•©ë‹ˆë‹¤.
Enter 4 english words and 2 chinese words
*/
	MSG_ID_B38 = 0xb38,
/*20171018 to latest
ìž…ë ¥í•œ ë‹µì´ [%s]ê°€ ë§žìŠµë‹ˆê¹Œ?
Your entered answer is [%s]. Is it right?
*/
	MSG_ID_B39 = 0xb39,
/*20171018 to latest
ì„ íƒëœ ì´ë¯¸ì§€ê°€ ì—†ìŠµë‹ˆë‹¤.
Icon is unchecked
*/
	MSG_ID_B3A = 0xb3a,
/*20171018 to latest
ìž˜ëª»ëœ ìž…ë ¥ìž…ë‹ˆë‹¤. (ë‚¨ì€ ê¸°íšŒ %dë²ˆ)
Incorrect input (Remaining chance: %d)
*/
	MSG_ID_B3B = 0xb3b,
/*20171018 to latest
ì´ %dëª…ì˜ ìœ ì €ë¥¼ ì‹ ê³ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to announce %d to player?
*/
	MSG_ID_B3C = 0xb3c,
/*20171018 to latest
ìœ ì €ì—ê²Œ ë©”ì‹œì§€ë¥¼ ë³´ëƒˆìŠµë‹ˆë‹¤.
Message has been sent to player
*/
	MSG_ID_B3D = 0xb3d,
/*20171018 to latest
ë¶ˆë²• í”„ë¡œê·¸ëž¨ ë‹¨ì†ì— í•„ìš”í•œ ë°ì´í„°ê°€ ë¯¸ë“±ë¡ ìƒíƒœìž…ë‹ˆë‹¤.
Needed Data for Query illegal software are not signed.
*/
	MSG_ID_B3E = 0xb3e,
/*20171018 to latest
ì´ë¯¸ ë§¤í¬ë¡œ ê°ì‹œì¤‘ì¸ ìœ ì €ìž…ë‹ˆë‹¤.
The player is being monitored.
*/
	MSG_ID_B3F = 0xb3f,
/*20171018 to latest
ë§¤í¬ë¡œê°€ ë“±ë¡ë˜ì—ˆìŠµë‹ˆë‹¤..
Already signed in investigation system.
*/
	MSG_ID_B40 = 0xb40,
/*20171018 to latest
ì´ë¯¸ì§€ ë“±ë¡ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to store icon.
*/
	MSG_ID_B41 = 0xb41,
/*20171018 to latest
ì •ë‹µ ë“±ë¡ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to store replied answer.
*/
	MSG_ID_B42 = 0xb42,
/*20171018 to latest
ì•ˆë…•í•˜ì„¸ìš”. ë¶ˆë²•í”„ë¡œê·¸ëž¨ ë‹¨ì†ì¤‘ìž…ë‹ˆë‹¤.
Hello, illegal software is being monitored.
*/
	MSG_ID_B43 = 0xb43,
/*20171018 to latest
ì§€ì •ëœ ì‹œê°„ë‚´ì— ì•„ëž˜ì˜ ë¬¸ìžë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter the text below within the specified time.
*/
	MSG_ID_B44 = 0xb44,
/*20171018 to latest
3íšŒ ì˜¤ë¥˜ì‹œ ìš´ì˜ì •ì±…ì— ì˜ê±°í•˜ì—¬ ì˜êµ¬ë¸”ë¡ë©ë‹ˆë‹¤.
According to game regulation, when you enter the wrong text three times, you will get banned.
*/
	MSG_ID_B45 = 0xb45,
/*20171018 to latest
ë‚¨ì€ íšŸìˆ˜ : %d
Remaining chance : %d
*/
	MSG_ID_B46 = 0xb46,
/*20171018 to latest
ìºë¦­í„°
Role
*/
	MSG_ID_B47 = 0xb47,
/*20171018 to latest
ë²”ìœ„
Range
*/
	MSG_ID_B48 = 0xb48,
/*20171018 to latest
ìºë¦­í„° ì„ íƒì€ ì¢Œí´ë¦­ìœ¼ë¡œ í•©ë‹ˆë‹¤.
You use the left mouse button to specify the role
*/
	MSG_ID_B49 = 0xb49,
/*20171018 to latest
ë²”ìœ„ ì„ íƒì€ ìš°í´ë¦­ìœ¼ë¡œ í•©ë‹ˆë‹¤.
You use the left mouse button to specify the range
*/
	MSG_ID_B4A = 0xb4a,
/*20171018 to latest
ë²”ìœ„ í¬ê¸°ë¥¼ ì§€ì •í•˜ê¸° ìœ„í•´ì„œëŠ” ì—”í„°ë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”
Not a valid range, please press Enter
*/
	MSG_ID_B4B = 0xb4b,
/*20171018 to latest
E X P : %.1f%% ( basic %.1f%% %s %.1f%%)
*/
	MSG_ID_B4C = 0xb4c,
/*20171018 to latest
DROP  : %.1f%% ( basic %.1f%% %s %.1f%%)
*/
	MSG_ID_B4D = 0xb4d,
/*20171018 to latest
DEATH : %.1f%% ( basic %.1f%% %s %.1f%%)
*/
	MSG_ID_B4E = 0xb4e,
/*20171018 to latest
ë³€ê²½ëœ ìºë¦­ëª…ìœ¼ë¡œ ë°œì†¡í–ˆìŠµë‹ˆë‹¤. ë³€ê²½ëœ ìºë¦­ëª… : %s 
The role name will be sent: %s 
*/
	MSG_ID_B4F = 0xb4f,
/*20171018 to latest
í•©ì„±ì— í•„ìš”í•œ ìž¬ë£Œ
Synthesis of the required materials
*/
	MSG_ID_B50 = 0xb50,
/*20171018 to latest
ì¡°í•© ìž¬ë£Œê°€ ë¶€ì¡±í•´ì„œ ì¡°í•©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Insufficient synthesis materials
*/
	MSG_ID_B51 = 0xb51,
/*20171018 to latest
í•´ë‹¹ ìž¬ë£ŒëŠ” %dê°œê°€ í•„ìš”í•©ë‹ˆë‹¤.
Required material %d ea.
*/
	MSG_ID_B52 = 0xb52,
/*20171018 to latest
ì œë ¨ë„ê°€ ë‚®ì•„ì„œ ì¡°í•©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Refine value is to low for synthesis
*/
	MSG_ID_B53 = 0xb53,
/*20171018 to latest
ëª¨í—˜ê°€ì¤‘ê°œì†Œì— ë“±ë¡ í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to sign in to the adventurers?
*/
	MSG_ID_B54 = 0xb54,
/*20171018 to latest
ìžìœ ë¡­ê²Œ ì½”ë©˜íŠ¸ë¥¼ ë‚¨ê²¨ë³´ì„¸ìš”.
Please leave a message
*/
	MSG_ID_B55 = 0xb55,
/*20171018 to latest
ê·¸ë¦¼ì— ë³´ì´ëŠ” ë¬¸ìžë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter the text on the graph
*/
	MSG_ID_B56 = 0xb56,
/*20171018 to latest
%dì´ˆ ë‚¨ì•˜ìŠµë‹ˆë‹¤
%d second left
*/
	MSG_ID_B57 = 0xb57,
/*20171018 to latest
OTP ì¸ì¦ë²ˆí˜¸ 6ìžë¦¬ë¥¼ ìž…ë ¥í•´ ì£¼ì„¸ìš”
Please enter your 6 identification number.
*/
	MSG_ID_B58 = 0xb58,
/*20171018 to latest
ì¸ì¦ë²ˆí˜¸
Identification number.
*/
	MSG_ID_B59 = 0xb59,
/*20171018 to latest
6ìžë¦¬ì˜ ìˆ«ìžê°€ ì•„ë‹™ë‹ˆë‹¤. ë‹¤ì‹œ í™•ì¸í•´ ì£¼ì„¸ìš”
It's not a 6 identification number. Please try again
*/
	MSG_ID_B5A = 0xb5a,
/*20171018 to latest
ì´ë¯¸ ì‚­ì œëœ ë©”ì¼ìž…ë‹ˆë‹¤.
The message has been deleted
*/
	MSG_ID_B5B = 0xb5b,
/*20171018 to latest
ê°œì¸ ë¹„ê³µì •ìœ¼ë¡œ ì´ë™í•  ì§€ì—­ì„ ì„ íƒí•´ì£¼ì„¸ìš”.
Please select the area where the private airship will move
*/
	MSG_ID_B5C = 0xb5c,
/*20171018 to latest
E X P : %d%% ( basic 100.0%% %s %d%%)
*/
	MSG_ID_B5D = 0xb5d,
/*20171018 to latest
DROP  : %d%% ( basic 100.0%% %s %d%%)
*/
	MSG_ID_B5E = 0xb5e,
/*20171018 to latest
DEATH : %d%% ( basic 100.0%% %s %d%%)
*/
	MSG_ID_B5F = 0xb5f,
/*20171018 to latest
ëª©ì ì§€ë¡œ ì´ë™ì¤‘ìž…ë‹ˆë‹¤.
Move to the destination
*/
	MSG_ID_B60 = 0xb60,
/*20171018 to latest
[%s] íŒŒì¼ì´ ì¡´ìž¬í•˜ì§€ ì•Šì•„ default AI ë¡œ ë™ìž‘í•©ë‹ˆë‹¤
The [%s] is not present, the default AI will be used instead.
*/
	MSG_ID_B61 = 0xb61,
/*20171018 to latest
 %.1f%% ( Basic 100.0%% + Premium %.1f%% + %s %.1f%%)
%.1f%% ( Basic 100.0%% + Premium %.1f%% + %s %.1f%%)
*/
	MSG_ID_B62 = 0xb62,
/*20171018 to latest
ì´ ìžë¦¬ì— ë…¸ì ì„ ì„¸ìš°ì‹œê² ìŠµë‹ˆê¹Œ?
Would you like to open a shop at this location?
*/
	MSG_ID_B63 = 0xb63,
/*20171018 to latest
ë„ëžŒì¡±ì€ í•´ë‹¹ ì˜ìƒì„ ìž…ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Doram race can't wear this clothes
*/
	MSG_ID_B64 = 0xb64,
/*20171018 to latest
íŒë§¤ ë…¸ì ì—ì„œ ê±°ëž˜í•œ ì•„ì´í…œì´ ë¡œë±ìŠ¤ë¡œ ë°°ì†¡ë˜ì—ˆìŠµë‹ˆë‹¤.
Props open-air store sales will be traded in RODEX
*/
	MSG_ID_B65 = 0xb65,
/*20171018 to latest
30,000 z
*/
	MSG_ID_B66 = 0xb66,
/*20171018 to latest
ë§ëž‘ë„ íŠ¹ì‚° í†µì¡°ë¦¼ 100ê°œ
Malangdo Special Can 100 pc
*/
	MSG_ID_B67 = 0xb67,
/*20171018 to latest
ë¬´ê²Œê°€ 80%ë¥¼ ì´ˆê³¼í•˜ì—¬ ì§„í–‰í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Cannot carry anymore because weight limit over 80%
*/
	MSG_ID_B68 = 0xb68,
/*20171018 to latest
íŒë§¤ë˜ì§€ ëª»í•œ ìƒí’ˆì´ ë¡œë±ìŠ¤ë¡œ ë°°ì†¡ë˜ì—ˆìŠµë‹ˆë‹¤.
Unsold items are sent to RODEX
*/
	MSG_ID_B69 = 0xb69,
/*20171018 to latest
ìž¥ì°© ëª¨ìŠµ
Preview
*/
	MSG_ID_B6A = 0xb6a,
/*20171018 to latest
ê¸¸ë“œë§ˆìŠ¤í„° ìœ„ìž„
Assign Guild Leader
*/
	MSG_ID_B6B = 0xb6b,
/*20171018 to latest
ì •ë§ë¡œ %së‹˜ê»˜ ê¸¸ë“œë§ˆìŠ¤í„°ë¥¼ ìœ„ìž„í•˜ì‹œê² ìŠµë‹ˆê¹Œ? ìœ„ìž„ í›„ ë‹¹ì‹ ì˜ ì§€ìœ„ëŠ” %së‹˜ê³¼ ì§€ìœ„ê°€ ë°”ë€Œê²Œ ë©ë‹ˆë‹¤.
Are sure want to assign %s as guild leader? After assigned your position will become %s
*/
	MSG_ID_B6C = 0xb6c,
/*20171018 to latest
ì² íšŒ
Cancel
*/
	MSG_ID_B6D = 0xb6d,
/*20171018 to latest
ë…¸ì ì„ ì² ìˆ˜í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to close the shop?
*/
	MSG_ID_B6E = 0xb6e,
/*20171018 to latest
%02dì¼ %02dì‹œê°„ %02dë¶„ %02dì´ˆ
%02d day %02d hour %02d minute %02d second
*/
	MSG_ID_B6F = 0xb6f,
/*20171018 to latest
ì ‘ì†ë¶ˆê°€
Unable to sign in
*/
	MSG_ID_B70 = 0xb70,
/*20171018 to latest
ì ‘ì†ê°€ëŠ¥ì¸ì›ì„ ì´ˆê³¼í•˜ì—¬ ì ‘ì†ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤.
Unable to sign in because the maximum number of sign-in is exceeded
*/
	MSG_ID_B71 = 0xb71,
/*20171018 to latest
ë…¸ì ì„ ì„¤ì¹˜í•  ìœ„ì¹˜ë¥¼ ì„ íƒí•´ì£¼ì„¸ìš”.
Please select a location for your shop
*/
	MSG_ID_B72 = 0xb72,
/*20171018 to latest
íŽ« ì´ë¦„ì„ ^0000ff^0000ff %s^000000^000000 ë¡œ ìˆ˜ì •í•©ë‹ˆë‹¤. ê³„ì† í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Pet name will be changed to ^0000ff^0000ff %s^000000^000000, do you want to continue?
*/
	MSG_ID_B73 = 0xb73,
/*20171018 to latest
ê±°ëž˜ ì¼ì‹œ : 
Trade date : 
*/
	MSG_ID_B74 = 0xb74,
/*20171018 to latest
ê±°ëž˜ ì•„ì´í…œ : 
Trade item : 
*/
	MSG_ID_B75 = 0xb75,
/*20171018 to latest
ê±°ëž˜ ìˆ˜ëŸ‰ : 
Trade quantity : 
*/
	MSG_ID_B76 = 0xb76,
/*20171018 to latest
ê±°ëž˜ ë‹¨ê°€ : 
Trade price : 
*/
	MSG_ID_B77 = 0xb77,
/*20171018 to latest
ê±°ëž˜ ê¸ˆì•¡ : 
Total trade : 
*/
	MSG_ID_B78 = 0xb78,
/*20171018 to latest
ë…¸ì  íŒë§¤ ì•„ì´í…œ
Open vending sales agent
*/
	MSG_ID_B79 = 0xb79,
/*20171018 to latest
ë…¸ì  êµ¬ë§¤ ì•„ì´í…œ
Open vending purchase agent
*/
	MSG_ID_B7A = 0xb7a,
/*20171018 to latest
íŒë§¤ ë…¸ì  ì•„ë¥´ë°”ì´íŠ¸ ì¢…ë£Œ
Close vending sales agent
*/
	MSG_ID_B7B = 0xb7b,
/*20171018 to latest
êµ¬ë§¤ ë…¸ì  ì•„ë¥´ë°”ì´íŠ¸ ì¢…ë£Œ
Close vending purchase agent
*/
	MSG_ID_B7C = 0xb7c,
/*20171018 to latest
ë‚¨ì€ ê¸ˆì•¡:
Balance: 
*/
	MSG_ID_B7D = 0xb7d,
/*20171018 to latest
ì•„ì´í…œ ë¦¬ìŠ¤íŠ¸:
Item list: 
*/
	MSG_ID_B7E = 0xb7e,
/*20171018 to latest
ë…¸ì  ì•„ë¥´ë°”ì´íŠ¸ìƒ
Vending agent
*/
	MSG_ID_B7F = 0xb7f,
/*20171018 to latest
ë°˜í™˜ ì•„ì´í…œ:
Returned item: 
*/
	MSG_ID_B80 = 0xb80,
/*20171018 to latest
ë°˜í™˜ ìˆ˜ëŸ‰:
Returned quantity: 
*/
	MSG_ID_B81 = 0xb81,
/*20171018 to latest
ë°˜í™˜ ì¼ì‹œ:
Returned date: 
*/
	MSG_ID_B82 = 0xb82,
/*20171018 to latest
êµ¬ë§¤ ë…¸ì ì—ì„œ ê±°ëž˜í•œ ê¸ˆì•¡ì´ ë¡œë±ìŠ¤ë¡œ ë°°ì†¡ë˜ì—ˆìŠµë‹ˆë‹¤
Total trade will be sent to RODEX 
*/
	MSG_ID_B83 = 0xb83,
/*20171018 to latest
ì‚¬ìš©í•  ìˆ˜ ì—†ëŠ” ì´ë¦„ìž…ë‹ˆë‹¤.
Name isn't available
*/
	MSG_ID_B84 = 0xb84,
/*20171018 to latest
ìƒí’ˆì´ ë„ì°©í–ˆìŠµë‹ˆë‹¤.
Item has been delivered
*/
	MSG_ID_B85 = 0xb85,
/*20171018 to latest
êµ¬ìž…í•´ì£¼ì…”ì„œ ê°ì‚¬í•©ë‹ˆë‹¤.
Thank you for purchasing
*/
	MSG_ID_B86 = 0xb86,
/*20171018 to latest
NPCì—ê²Œ ì•„ì´í…œì„ íŒë§¤í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
Press again to unlock
*/
	MSG_ID_B87 = 0xb87,
/*20171018 to latest
ì•„ì´í…œ íŒë§¤ ìž ê¸ˆ
Lock from NPC selling
*/
	MSG_ID_B88 = 0xb88,
/*20171018 to latest
ê·¼ì²˜ì—ì„œ ì†Œí™˜ê°€ëŠ¥ ìœ„ì¹˜ë¥¼ ì°¾ì„ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
There is no callable location nearby
*/
	MSG_ID_B89 = 0xb89,
/*20171018 to latest
ì „ì²´ í™”ë©´ ìº¡ì³
Capture full screens
*/
	MSG_ID_B8A = 0xb8a,
/*20171018 to latest
ë¶€ë¶„ í™”ë©´ ìº¡ì³
Capture part of screen
*/
	MSG_ID_B8B = 0xb8b,
/*20171018 to latest
ë³´ë‚´ê¸°
Send
*/
	MSG_ID_B8C = 0xb8c,
/*20171018 to latest
ê°€ì¡± ë¶„ê³¼ ë‹´ë‹¹ìž
Family Affairs agent
*/
	MSG_ID_B8D = 0xb8d,
/*20171018 to latest
ê°€ì¡± ì‚¬í•­ ë³€ë™ ì•ˆë‚´
Acknowledgement of family member registrations.
*/
	MSG_ID_B8E = 0xb8e,
/*20171018 to latest
ì•ˆë…•í•˜ì‹­ë‹ˆê¹Œ.

ê¸ˆì¼ "%s"ë‹˜ê³¼ "%s"ë‹˜ì˜ ìžë…€ì¸ "%s"ë‹˜ì´ ë…ë¦½í•˜ì—¬ ë‹¨ë… ì„¸ëŒ€ë¥¼ êµ¬ì„±í•˜ì˜€ìŠµë‹ˆë‹¤.

ì´ì— ì„œë©´ìœ¼ë¡œ ì•ˆë‚´ë¥¼ ë“œë¦½ë‹ˆë‹¤.

ê°€ì¡± ê´€ê³„ í™•ì¸ì„ ì›í•˜ì‹œëŠ” ë¶„ì€ í”„ë¡ í…Œë¼ ë™ì‚¬ë¬´ì†Œì˜ ë‹´ë‹¹ ì§ì›ì—ê²Œ ë¬¸ì˜í•˜ì‹œê¸° ë°”ëžë‹ˆë‹¤.

ê°ì‚¬í•©ë‹ˆë‹¤.
Dear whom it may concern. 

 Today, \"%s\" and \"%s\" 's son/daughter \"%s\" has fully separated and independent from your member of family.

Hereat, we inform you in writing.

Please contact to Prontera Family Affairs if you have any enquiries.

Thank you.
*/
	MSG_ID_B8F = 0xb8f,
/*20171018 to latest
ìž¥ì°©
Equip
*/
	MSG_ID_B90 = 0xb90,
/*20171018 to latest
ì´ë¯¸ì§€ ì—†ìŒ
No image
*/
	MSG_ID_B91 = 0xb91,
/*20171018 to latest
[%s]ì€(ëŠ”) í˜„ìž¬ í˜¸ì¶œì„ ì°¨ë‹¨í•œ ìƒíƒœìž…ë‹ˆë‹¤.
[%s] is blocking Call Massage.
*/
	MSG_ID_B92 = 0xb92,
/*20171018 to latest
í˜„ìž¬ ê³µì„±ì „ì´ ì§„í–‰ì¤‘ì´ë¯€ë¡œ, ê¸¸ë“œë§ˆìŠ¤í„°ë¥¼ ìœ„ìž„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Currently in WoE hours, unable to delegate Guild leader
*/
	MSG_ID_B93 = 0xb93,
/*20171018 to latest
í˜„ìž¬ ê¸¸ë“œìž¥ ìœ„ìž„ì„ ë°›ì€ì§€ ë§Œ í•˜ë£¨ê°€ ì§€ë‚˜ì§€ ì•Šì•„, ê¸¸ë“œìž¥ì„ ìœ„ìž„í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You have to wait for one day before delegating a new Guild leader
*/
	MSG_ID_B94 = 0xb94,
/*20171018 to latest
ì•„ì´ê°€ ë˜ë©´ ì „ìŠ¹ì„ í•  ìˆ˜ ì—†ê³  ìŠ¤í…Ÿì˜ ì œí•œì´ ìžˆìœ¼ë©° HPì™€ SPê°€ ì¤„ì–´ë“­ë‹ˆë‹¤.
ê·¸ëž˜ë„ ê´œì°®ìŠµë‹ˆê¹Œ?
When adopted, character will not able to transcend, maximum stats will be limited, MaxHP and MaxSP will be reduced.
Are you sure you want to continue?
*/
	MSG_ID_B95 = 0xb95,
/*20171018 to latest
ì œë ¨
Refining
*/
	MSG_ID_B96 = 0xb96,
/*20171018 to latest
ëŒ€ìž¥ìž¥ì´ì˜ ì¶•ë³µì„ ì‚¬ìš©ì¤‘ìž…ë‹ˆë‹¤.
Use Blacksmith's Blessing
*/
	MSG_ID_B97 = 0xb97,
/*20171018 to latest
ì œë‹ˆê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Insufficient zeny
*/
	MSG_ID_B98 = 0xb98,
/*20171018 to latest
ëŒ€ìž¥ìž¥ì´ì˜ ì¶•ë³µ ê°œìˆ˜ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
Not enough Blacksmith's Blessing
*/
	MSG_ID_B99 = 0xb99,
/*20171018 to latest
í•´ë‹¹ ìž¥ë¹„ëŠ” ì œë ¨ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
This equipment can not be refined
*/
	MSG_ID_B9A = 0xb9a,
/*20171018 to latest
ì œë ¨ ì„±ê³µ
Upgrade success!
*/
	MSG_ID_B9B = 0xb9b,
/*20171018 to latest
ì œë ¨ ì‹¤íŒ¨
Upgrade failed!
*/
	MSG_ID_B9C = 0xb9c,
/*20171018 to latest
ëŒì•„ê°€ê¸°
Back
*/
	MSG_ID_B9D = 0xb9d,
/*20171018 to latest
ì„±ê³µ
Success
*/
	MSG_ID_B9E = 0xb9e,
/*20171018 to latest
ì›ëž˜ëŒ€ë¡œ
Return
*/
	MSG_ID_B9F = 0xb9f,
/*20171018 to latest
ì”¨ì™€ì˜ 
With Mr/Miss
*/
	MSG_ID_BA0 = 0xba0,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ì˜ ì´ë¦„ì„ ^0000ff^0000ff %s^000000^000000 ë¡œ ìˆ˜ì •í•©ë‹ˆë‹¤. ê³„ì† í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
The Homunculus's name will be changed to^0000ff^0000ff %s^000000^000000, Are you sure?
*/
	MSG_ID_BA1 = 0xba1,
/*20171018 to latest
í˜¸ì¶œì´ í—ˆìš©ëœ ìƒíƒœìž…ë‹ˆë‹¤. (í˜¸ì¶œ ê¸°ëŠ¥ ON)
Call function is ON
*/
	MSG_ID_BA2 = 0xba2,
/*20171018 to latest
í˜¸ì¶œì´ ì°¨ë‹¨ëœ ìƒíƒœìž…ë‹ˆë‹¤. (í˜¸ì¶œ ê¸°ëŠ¥ OFF)
Call function is OFF
*/
	MSG_ID_BA3 = 0xba3,
/*20171018 to latest
í˜¸ì¶œ ë©”ì‹œì§€ í‘œì‹œ
Display Call messages
*/
	MSG_ID_BA4 = 0xba4,
/*20171018 to latest
í•´ë‹¹ ìºë¦­í„°ê°€ í˜„ìž¬ ë…¸ì  ì•„ì´í…œì„ ì‚¬ìš© ì¤‘ì´ë¯€ë¡œ ì‚­ì œí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
This character is currently opening a shop and can't be deleted
*/
	MSG_ID_BA5 = 0xba5,
/*20171018 to latest
ì´ë¯¸ ë™ì¼í•œ ë…¸ì  NPCê°€ ì„¤ì¹˜ ì¤‘ìž…ë‹ˆë‹¤.
The same vend shop NPC has been set up
*/
	MSG_ID_BA6 = 0xba6,
/*20171018 to latest
ë…¸ì ì„ ì„¤ì¹˜í•  ìˆ˜ ì—†ëŠ” ìœ„ì¹˜ìž…ë‹ˆë‹¤.
Opening shop is not allowed on this location
*/
	MSG_ID_BA7 = 0xba7,
/*20171018 to latest
ë‹¤ë¥¸ ìºë¦­í„°ê°€ ìžˆëŠ” ìœ„ì¹˜ì—ëŠ” ë…¸ì ì„ ì„¤ì¹˜í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Opening shop is not allowed when there is other character
*/
	MSG_ID_BA8 = 0xba8,
/*20171018 to latest
íŽ« ë¨¹ì´ì£¼ê¸°ê°€ ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤. ë¡œë±ìŠ¤ ìž‘ì„±ì°½ì„ ë‹«ì•„ì£¼ì„¸ìš”.
Failed to feed pet, please close RODEX window
*/
	MSG_ID_BA9 = 0xba9,
/*20171018 to latest
ìž¥ë¹„ ì„¸íŠ¸ ì„¤ì •
Set item setting
*/
	MSG_ID_BAA = 0xbaa,
/*20171018 to latest
ìž¥ì°© í•˜ê¸°
Equip
*/
	MSG_ID_BAB = 0xbab,
/*20171018 to latest
ì œë ¨ ì‹¤íŒ¨ì‹œ ìž¥ë¹„ê°€ ì‚¬ë¼ì§‘ë‹ˆë‹¤.
Equipment will dissapear when refine fails
*/
	MSG_ID_BAC = 0xbac,
/*20171018 to latest
ì œë ¨ ì‹¤íŒ¨ì‹œ ìž¥ë¹„ì˜ ì œë ¨ë„ê°€ ë‚´ë ¤ê°‘ë‹ˆë‹¤.
Equipment's refine level will decreased when refine fails
*/
	MSG_ID_BAD = 0xbad,
/*20171018 to latest
ì œë ¨ ì‹¤íŒ¨ì‹œ ìž¥ë¹„ì˜ ì œë ¨ë„ê°€ ë‚´ë ¤ê°€ê±°ë‚˜ ì‚¬ë¼ì§ˆ ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
Equipment will dissapear or refine level will decreased when refine fails
*/
	MSG_ID_BAE = 0xbae,
/*20171018 to latest
ì œë ¨ ì¤‘ì—ëŠ” ë¡œë±ìŠ¤ë¥¼ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ë¡œë±ìŠ¤ë¥¼ ê°•ì œ ì¢…ë£Œí•˜ì˜€ìŠµë‹ˆë‹¤.
You cannot use RODEX while refining. RODEX has closed.
*/
	MSG_ID_BAF = 0xbaf,
/*20171018 to latest
ì œë ¨ ì¤‘ì—ëŠ” ë¡œë±ìŠ¤ë¥¼ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You cannot use RODEX while refining.
*/
	MSG_ID_BB0 = 0xbb0,
/*20171018 to latest
ì œë ¨ì„ ì§„í–‰í•˜ë ¤ë©´ ë‹¤ë¥¸ ì°½ì„ ë‹«ì•„ì£¼ì„¸ìš”.
Please close other windows to continue.
*/
	MSG_ID_BB1 = 0xbb1,
/*20171018 to latest
ì˜¤ì˜¤ë¼ê°€ ì •ìƒì ìœ¼ë¡œ í‘œì‹œë©ë‹ˆë‹¤ [ì˜¤ì˜¤ë¼ ON]
Turn On Aura [Aura ON]
*/
	MSG_ID_BB2 = 0xbb2,
/*20171018 to latest
ì˜¤ì˜¤ë¼ê°€ í‘œì‹œë˜ì§€ ì•ŠìŠµë‹ˆë‹¤ [ì˜¤ì˜¤ë¼ OFF]
Turn Off Aura [Auta OFF]
*/
	MSG_ID_BB3 = 0xbb3,
/*20171018 to latest
ì˜¤ì˜¤ë¼ê°€ Off ìƒíƒœìž…ë‹ˆë‹¤. Off ë¥¼ í•´ì œí•˜ê³  ì‹œë„í•´ ì£¼ì„¸ìš”
Aura is turned off. Please turn it on and try again
*/
	MSG_ID_BB4 = 0xbb4,
/*20171018 to latest
ìŠ¤í‚¬ ë°œë™ì‹œ ìµœì†Œ %dê°œì˜ íƒ„ì•Œì´ í•„ìš”í•©ë‹ˆë‹¤.
You need %d bullet(s) to activate the skill.
*/
	MSG_ID_BB5 = 0xbb5,
/*20171018 to latest
ìž¥ë¹„ ì„¸íŠ¸ë¥¼ ë³€ê²½í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to change the equipment set?
*/
	MSG_ID_BB6 = 0xbb6,
/*20171018 to latest
ì£½ì€ ìƒíƒœì—ì„œëŠ” í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You can not do it while you are dead.
*/
	MSG_ID_BB7 = 0xbb7,
/*20171018 to latest
ìºìŠ¤íŒ… ë„ì¤‘ì—ëŠ” í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You can not do it while casting
*/
	MSG_ID_BB8 = 0xbb8,
/*20171018 to latest
ê±°ëž˜ ë„ì¤‘ì—ëŠ” í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You can not do it while trading
*/
	MSG_ID_BB9 = 0xbb9,
/*20171018 to latest
ë…¸ì  ê°œì„¤ ë„ì¤‘ì—ëŠ” í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You can not do it while opening vendor
*/
	MSG_ID_BBA = 0xbba,
/*20171018 to latest
NPC ì´ìš©ì¤‘ì—ëŠ” í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You can not do it while using NPC
*/
	MSG_ID_BBB = 0xbbb,
/*20171018 to latest
ì±„íŒ…ë°© ì´ìš©ì¤‘ì—ëŠ” í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You can not do it while using chatting room
*/
	MSG_ID_BBC = 0xbbc,
/*20171018 to latest
íŒŒí‹°ì› ì „ì›ì´ ì ‘ì† ìƒíƒœê°€ ì•„ë‹™ë‹ˆë‹¤.
Party members are not connected.
*/
	MSG_ID_BBD = 0xbbd,
/*20171018 to latest
ìŠ¤í‚¬ ë°œë™ì‹œ ìµœì†Œ %dê°œì˜ í™”ì‚´ì´ í•„ìš”í•©ë‹ˆë‹¤.
You need %d arrow(s) to activate the skill.
*/
	MSG_ID_BBE = 0xbbe,
/*20171018 to latest
ì•„ì´í…œ ì •ë ¬
Align items
*/
	MSG_ID_BBF = 0xbbf,
/*20171018 to latest
ì•„ì´í…œì„ ë²„ë¦¬ë ¤ë©´ ìž¥ë¹„ ì„¤ì • ì°½ì„ ë‹«ì•„ì£¼ì„¸ìš”.
Please close item setting window to dump item.
*/
	MSG_ID_BC0 = 0xbc0,
/*20171018 to latest
êµì²´ í•  ìˆ˜ ìžˆëŠ” ì•„ì´í…œì´ ì—†ìŠµë‹ˆë‹¤.
There is no item to replace.
*/
	MSG_ID_BC1 = 0xbc1,
/*20171018 to latest
ì‚­ì œëœ ìºë¦­í„°
Deleted character
*/
	MSG_ID_BC2 = 0xbc2,
/*20171018 to latest
%Y.%m.%d
*/
	MSG_ID_BC3 = 0xbc3,
/*20171018 to latest
ì ‘ì†ì¼: %s
Access date: %s
*/
	MSG_ID_BC4 = 0xbc4,
/*20171018 to latest
ì œë ¨ ì¤‘ì—ëŠ” ì€í–‰ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤. ì€í–‰ì„ ê°•ì œ ì¢…ë£Œí•˜ì˜€ìŠµë‹ˆë‹¤.
You can not use bank while refining. Bank has closed.
*/
	MSG_ID_BC5 = 0xbc5,
/*20171018 to latest
ì œë ¨ ì¤‘ì—ëŠ” ì€í–‰ì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You can not use bank while refining.
*/
	MSG_ID_BC6 = 0xbc6,
/*20171018 to latest
ìž¥ë¹„ ì„¸íŠ¸ ì„¤ì • ì¤‘ì¸ ì•„ì´í…œìž…ë‹ˆë‹¤.
The item has bind to set equipment.
*/
	MSG_ID_BC7 = 0xbc7,
/*20171018 to latest
ì¸ê°„
Human
*/
	MSG_ID_BC8 = 0xbc8,
/*20171018 to latest
ê²€ì‚¬, ë²•ì‚¬, ìƒì¸, ë³µì‚¬, ë„ë‘‘, ê¶ìˆ˜
Swordman, Mage, Merchant, Acolyte, Thief, Archer
*/
	MSG_ID_BC9 = 0xbc9,
/*20171018 to latest
ë„ëžŒ
Doram
*/
	MSG_ID_BCA = 0xbca,
/*20171018 to latest
ì†Œí™˜ì‚¬
Summoner
*/
	MSG_ID_BCB = 0xbcb,
/*20171018 to latest
ë¯¸ë“œê°€ë¥´ë“œ ëŒ€ë¥™ì˜ ëŒ€í‘œ ì¢…ì¡±. ë¬´í•œí•œ ìž ìž¬ë ¥ê³¼ ë›°ì–´ë‚œ ì ì‘ë ¥ìœ¼ë¡œ ë¬¸ì œ í•´ê²°ì— íƒì›”í•œ ê²ƒì´ íŠ¹ì§•ì´ë‹¤.
Delegate race of Midgard. Very talented race to solve a problem with inifite potential and great adaptability.
*/
	MSG_ID_BCC = 0xbcc,
/*20171018 to latest
íŒŒ-ìŠ¤íƒ€ ëŒ€ë¥™ì˜ ëŒ€í‘œì ì¸ ì¢…ì¡± ì¤‘ í•˜ë‚˜ë¡œ, ì„ ì²œì ìœ¼ë¡œ í˜¸ê¸°ì‹¬ì´ ê°•í•˜ê³  ë°œëž„í•œ ì„±ê²©ì„ ì§€ë…”ë‹¤.
One of delegate race of Far-star continent with natural born curiosity and sparky character.
*/
	MSG_ID_BCD = 0xbcd,
/*20171018 to latest
ì†Œì§€ í•œê³„ëŸ‰ì´ 70%ë¥¼ ì´ˆê³¼í•˜ê±°ë‚˜, ì¸ë²¤í† ë¦¬ì— 10ì¹¸ ì´ìƒì˜ ì—¬ìœ  ê³µê°„ì´ ë¶€ì¡±í•œ ìƒíƒœìž…ë‹ˆë‹¤.
Weight limit has reached toover 70%. Or less then 10 invenrory space.
*/
	MSG_ID_BCE = 0xbce,
/*20171018 to latest
C
*/
	MSG_ID_BCF = 0xbcf,
/*20171018 to latest
C
*/
	MSG_ID_BD0 = 0xbd0,
/*20171018 to latest
ë‹¤ë¥¸ ì¼ì„ í•˜ëŠ” ì¤‘ìž…ë‹ˆë‹¤.
Doing in other activity.
*/
	MSG_ID_BD1 = 0xbd1,
/*20171018 to latest
ì˜¤ë²„ížˆíŠ¸ ë¦¬ë¯¸íŠ¸ : %d
Overheat limit : %d
*/
	MSG_ID_BD2 = 0xbd2,
/*20171018 to latest
ë©”ëª¨ë¦¬ì–¼ ë˜ì „ ì´ìš© ì¤‘ì—” ì´ˆëŒ€ ë° íƒˆí‡´ê°€ ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
You cannot invite or withdraw while in memorial dungeon.
*/
	MSG_ID_BD3 = 0xbd3,
/*20171018 to latest
ë¹„ì†ì–´ê°€ í¬í•¨ë˜ì–´ìžˆìŠµë‹ˆë‹¤.
ë‹¤ì‹œ í•œë²ˆ í™•ì¸í•´ì£¼ì„¸ìš”.
Expletive has detected.
Please check again.
*/
	MSG_ID_BD4 = 0xbd4,
/*20171018 to latest
ì•„ì´ë””ëŠ” %dìž ì´ìƒ ìž…ë ¥í•´ì£¼ì„¸ìš”. ì‚¬ìš©ìž ê³„ì •ì´ ì—†ìœ¼ì‹ ë¶„ë“¤ì€ ì™¼ìª½ í•˜ë‹¨ì˜ [ì‹ ì²­] ë²„íŠ¼ì„ ëˆŒëŸ¬ ê³„ì •ì„ ë§Œë“œì‹œê¸° ë°”ëžë‹ˆë‹¤.
Please enter over %d characters. If you don't have user account, please click [Register] button on the bottom left.
*/
	MSG_ID_BD5 = 0xbd5,
/*20171018 to latest
ë¹„ë°€ë²ˆí˜¸ëŠ” %dìž ì´ìƒ ìž…ë ¥í•´ì£¼ì„¸ìš”.
Please enter the password over %d characters.
*/
	MSG_ID_BD6 = 0xbd6,
/*20171018 to latest
ì§„í–‰ì¤‘ì´ë˜ ìž‘ì—…ì„ ì¢…ë£Œí›„ ë‹¤ì‹œ ì‹œë„í•˜ì„¸ìš”.
Please finish your current work and try it again.
*/
	MSG_ID_BD7 = 0xbd7,
/*20171018 to latest
%.1f%% (PCë°© %.1f%% + TPLUS %.1f%% + %sì„œë²„ %.1f%%)
%.1f%% (Internet-Cafe %.1f%% + TPLUS %.1f%% + %sServer %.1f%%)
*/
	MSG_ID_BD8 = 0xbd8,
/*20171018 to latest
ì•„ì´í…œì„ ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
The item cannot be registered.
*/
	MSG_ID_BD9 = 0xbd9,
/*20171018 to latest
/100
/300
*/
	MSG_ID_BDA = 0xbda,
/*20171018 to latest
/2000
/4000
*/
	MSG_ID_BDB = 0xbdb,
/*20171018 to latest
https://member.gnjoy.com.tw/mRO_SecPwd.aspx
*/
	MSG_ID_BDC = 0xbdc,
/*20171018 to latest
ë“±ë¡í•  emblemì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤. emblem í´ë”ì— íŒŒì¼ì„ ë„£ê³  ì‹œë„í•´ ì£¼ì„¸ìš”
The emblem you want to register does not exist. Insert it in the emblem file and try again
*/
	MSG_ID_BDD = 0xbdd,
/*20171018 to latest
ë¼ê·¸ë‚˜ë¡œí¬ 
Ragnarok Ragnarok
*/
	MSG_ID_BDE = 0xbde,
/*20171018 to latest
ìŠ¤í¬ë¦°ìƒ·ì— ìžì‹  ì´ì™¸ì˜ ìºë¦­í„°ëª…ì´ í‘œì‹œë˜ëŠ” ê²½ìš°ë‚˜ ì±„íŒ…ì°½ì— ìžì‹  ì´ì™¸ì˜ ìºë¦­í„° ëŒ€í™”ê°€ í‘œì‹œë˜ëŠ” ê²½ìš°, í•´ë‹¹ ì‚¬ìš©ìžì—ê²Œ ë°˜ë“œì‹œ ì–‘í•´ë¥¼ êµ¬í•œ í›„ ì‚¬ìš© í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
If your screenshot or chat box includes other users besides yourself, first ask permission from the other users before using it.
*/
	MSG_ID_BDF = 0xbdf,
/*20171018 to latest
í˜„ìž¬ ìƒíƒœì—ì„  ìž¥ë¹„ë¥¼ êµì²´í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You cannot change equipment in current condition
*/
	MSG_ID_BE0 = 0xbe0,
/*20171018 to latest
í•´ë‹¹ ìœ ì €ì˜ ì´ë¦„ì„ ê°€ì ¸ì˜¤ê³  ìžˆìŠµë‹ˆë‹¤
Getting the user's name
*/
	MSG_ID_BE1 = 0xbe1,
/*20171018 to latest
í•´ë‹¹ ë©”ì‹œì§€ëŠ” ì‚¬ìš© í•  ìˆ˜ ì—†ëŠ” ë‚´ìš©ì„ í¬í•¨í•˜ê³  ìžˆìŠµë‹ˆë‹¤.
This message includes contents you are not able to use.
*/
	MSG_ID_BE2 = 0xbe2,
/*20171018 to latest
ì•„ì´í…œ êµ¬ìž…ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
Failed to purchase item.
*/
	MSG_ID_BE3 = 0xbe3,
/*20171018 to latest
ì‹ ë¶„ì¦ë²ˆí˜¸ í•˜ìœ„ 7ìžë¦¬ê°€ ì¼ì¹˜í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
The lower numbers of the identification number does not match.
*/
	MSG_ID_BE4 = 0xbe4,
/*20171018 to latest
ë‹«ê¸°
Close
*/
	MSG_ID_BE5 = 0xbe5,
/*20171018 to latest
ê·œì¹™
Rule
*/
	MSG_ID_BE6 = 0xbe6,
/*20171018 to latest
1íšŒ êµ¬ë§¤
Purchase 1x
*/
	MSG_ID_BE7 = 0xbe7,
/*20171018 to latest
10íšŒ êµ¬ë§¤
Purchase 10x
*/
	MSG_ID_BE8 = 0xbe8,
/*20171018 to latest
100íšŒ êµ¬ë§¤
Purchase 100x
*/
	MSG_ID_BE9 = 0xbe9,
/*20171018 to latest
1ë“± ë‹¹ì²¨
Win 1st prize
*/
	MSG_ID_BEA = 0xbea,
/*20171018 to latest
2ë“± ë‹¹ì²¨
Win 2nd prize
*/
	MSG_ID_BEB = 0xbeb,
/*20171018 to latest
3ë“± ë‹¹ì²¨
Win 3rd prize
*/
	MSG_ID_BEC = 0xbec,
/*20171018 to latest
í˜„ìž¬ ì‚¬ìš©í•˜ì§€ ì•ŠìŒ
Currently not in use
*/
	MSG_ID_BED = 0xbed,
/*20171018 to latest
í˜„ìž¬ ì‚¬ìš©í•˜ì§€ ì•ŠìŒ
Currently not in use
*/
	MSG_ID_BEE = 0xbee,
/*20171018 to latest
ì œë‹ˆ ë¡œë˜ ë‹¹ì²¨ìž
Zeny Lottery winner
*/
	MSG_ID_BEF = 0xbef,
/*20171018 to latest
ë³µê¶Œ êµ¬ë§¤ ê¸ˆì•¡
Lottery purchase amount
*/
	MSG_ID_BF0 = 0xbf0,
/*20171018 to latest
ì°¸ì—¬ ìºë¦­í„°
Participating character
*/
	MSG_ID_BF1 = 0xbf1,
/*20171018 to latest
1ë“±
1st Price
*/
	MSG_ID_BF2 = 0xbf2,
/*20171018 to latest
2ë“±
2nd Price
*/
	MSG_ID_BF3 = 0xbf3,
/*20171018 to latest
3ë“±
3rd Price
*/
	MSG_ID_BF4 = 0xbf4,
/*20171018 to latest
êµ¬ë§¤ ë³´ìƒ ì•„ì´í…œ
Purchase Reward Item
*/
	MSG_ID_BF5 = 0xbf5,
/*20171018 to latest
^1a1a1aë³µê¶Œ ^b%dê°œ^/bë¥¼
^4435b2%dZeny^1a1a1aë¡œ
êµ¬ë§¤í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
^1a1a1a Do you want to purchase ^b%d lottery tickets for 
^4435b2%dZeny^1a1a1a?
*/
	MSG_ID_BF6 = 0xbf6,
/*20171018 to latest
ë³µê¶Œì„ ì„±ê³µì ìœ¼ë¡œ êµ¬ë§¤í•˜ì˜€ìŠµë‹ˆë‹¤.
You have successfully purchased the lottery ticket.
*/
	MSG_ID_BF7 = 0xbf7,
/*20171018 to latest
ì†Œì§€ ì œë‹ˆê°€ ë¶€ì¡±í•˜ì—¬ ë³µê¶Œì„ êµ¬ë§¤ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
Not enough Zeny to purchase lottey ticket.
*/
	MSG_ID_BF8 = 0xbf8,
/*20171018 to latest
ìµœëŒ€ ë³µê¶Œ êµ¬ë§¤ íšŸìˆ˜ëŠ” 1000íšŒë¥¼ ì´ˆê³¼ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
You are only able to purchase the tickets upto 1000 times.
*/
	MSG_ID_BF9 = 0xbf9,
/*20171018 to latest
ì˜ˆ
Yes
*/
	MSG_ID_BFA = 0xbfa,
/*20171018 to latest
ì•„ë‹ˆìš”
No
*/
	MSG_ID_BFB = 0xbfb,
/*20171018 to latest
HP
*/
	MSG_ID_BFC = 0xbfc,
/*20171018 to latest
SP
*/
	MSG_ID_BFD = 0xbfd,
/*20171018 to latest
Lv
*/
	MSG_ID_BFE = 0xbfe,
/*20171018 to latest
Lv
*/
	MSG_ID_BFF = 0xbff,
/*20171018 to latest
Exp
*/
	MSG_ID_C00 = 0xc00,
/*20171018 to latest
 all on
*/
	MSG_ID_C01 = 0xc01,
/*20171018 to latest
Play Replay Flie
*/
	MSG_ID_C02 = 0xc02,
/*20171018 to latest
P
*/
	MSG_ID_C03 = 0xc03,
/*20171018 to latest
Total
*/
	MSG_ID_C04 = 0xc04,
/*20171018 to latest
Basicinfo
*/
	MSG_ID_C05 = 0xc05,
/*20171018 to latest
Equip
*/
	MSG_ID_C06 = 0xc06,
/*20171018 to latest
Item
*/
	MSG_ID_C07 = 0xc07,
/*20171018 to latest
Skill
*/
	MSG_ID_C08 = 0xc08,
/*20171018 to latest
Guild
*/
	MSG_ID_C09 = 0xc09,
/*20171018 to latest
Party
*/
	MSG_ID_C0A = 0xc0a,
/*20171018 to latest
Chatting
*/
	MSG_ID_C0B = 0xc0b,
/*20171018 to latest
Shortcut
*/
	MSG_ID_C0C = 0xc0c,
/*20171018 to latest
Status
*/
	MSG_ID_C0D = 0xc0d,
/*20171018 to latest
ALL
All
*/
	MSG_ID_C0E = 0xc0e,
/*20171018 to latest
User Defined File Name
*/
	MSG_ID_C0F = 0xc0f,
/*20171018 to latest
Repeated File Check
*/
	MSG_ID_C10 = 0xc10,
/*20171018 to latest
on
*/
	MSG_ID_C11 = 0xc11,
/*20171018 to latest
<Basic Skin>
*/
	MSG_ID_C12 = 0xc12,
/*20171018 to latest
Select Skin
*/
	MSG_ID_C13 = 0xc13,
/*20171018 to latest
í˜„ìž¬ ë³µê¶Œì— ì°¸ì—¬ ì¤‘ì´ë¼ ì‚­ì œí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
You cannot delete it because you are currently participating in the lottery
*/
	MSG_ID_C14 = 0xc14,
/*20171018 to latest
/achievement
*/
	MSG_ID_C15 = 0xc15,
/*20171018 to latest
ì œë‹ˆ ë³µê¶Œ
Zeny Lottery ticket
*/
	MSG_ID_C16 = 0xc16,
/*20171018 to latest
ì œë‹ˆ ë³µê¶Œ %dë“± ë‹¹ì²¨ ë³´ìƒ
Zenyy Lottery %dprize reward
*/
	MSG_ID_C17 = 0xc17,
/*20171018 to latest
%dë“± ë‹¹ì²¨ ë³´ìƒ: %s
%dprize reward: %s
*/
	MSG_ID_C18 = 0xc18,
/*20171018 to latest
ì œë‹ˆ ë³µê¶Œ ëˆ„ì  êµ¬ë§¤ ë³´ìƒ
Zeny Lottery Cumulative purchase reward
*/
	MSG_ID_C19 = 0xc19,
/*20171018 to latest
ëˆ„ì  %díšŒ ë³´ìƒ: %s
Cumulative %d times reward: %s
*/
	MSG_ID_C1A = 0xc1a,
/*20171018 to latest
ì œë‹ˆ ë³µê¶Œ êµ¬ë§¤ í™˜ë¶ˆ
Zeny Lottery Refund
*/
	MSG_ID_C1B = 0xc1b,
/*20171018 to latest
í™˜ë¶ˆ ê¸ˆì•¡: %d Zeny
í™˜ë¶ˆ ì‚¬ìœ : ì„œë²„ ë‚´ ë³µê¶Œ ì¶”ì²¨ ë‹¬ì„± ì‹¤íŒ¨
Refund amount: %d Zeny
Reason for Refund: Failed to draw lottery in the server
*/
	MSG_ID_C1C = 0xc1c,
/*20171018 to latest
ë¯¸ë‹ˆ íŒŒí‹°ì°½ ì¶”ê°€
Add Mini Party Chat
*/
	MSG_ID_C1D = 0xc1d,
/*20171018 to latest
ë¯¸ë‹ˆ íŒŒí‹°ì°½ ì‚­ì œ
Delete Mini Party Chat
*/
	MSG_ID_C1E = 0xc1e,
/*20171018 to latest
ë³µê¶Œ ì¶”ì²¨ì´ ëª¨ë‘ ì¢…ë£Œ ë˜ì—ˆìŠµë‹ˆë‹¤! ë‹¹ì²¨ìžë¥¼ í™•ì¸í•´ì£¼ì„¸ìš”
The lottery draw had ended! Check the winner!
*/
	MSG_ID_C1F = 0xc1f,
/*20171018 to latest
%dì›” %dì¼
%dMonth %dDay
*/
	MSG_ID_C20 = 0xc20,
/*20171018 to latest
ë‹¤ìŒ ë“±ê¸‰ê¹Œì§€
Till the next grade
*/
	MSG_ID_C21 = 0xc21,
/*20171018 to latest
ì „ì²´
All
*/
	MSG_ID_C22 = 0xc22,
/*20171018 to latest
ë¯¸ì™„ë£Œ
Incomplete
*/
	MSG_ID_C23 = 0xc23,
/*20171018 to latest
(ë‹¬ì„±!)
(Accomplished!)
*/
	MSG_ID_C24 = 0xc24,
/*20171018 to latest
(ë¯¸ë‹¬ì„±)
(Not Accomplished)
*/
	MSG_ID_C25 = 0xc25,
/*20171018 to latest
ìž¥ë¹„ êµì²´
Change equipment
*/
	MSG_ID_C26 = 0xc26,
/*20171018 to latest
CHANGE
*/
	MSG_ID_C27 = 0xc27,
/*20171018 to latest
íž˜ íŒŒë¼ë©”í„°
 ^cc0000ê·¼ì ‘ ë¬¼ë¦¬ ê³µê²©ë ¥^ffffff, ì†Œì§€ë¬´ê²Œ
Power Parameter
 ^cc0000Melee PhysicalAttack^ffffff, Carrying Weight
*/
	MSG_ID_C28 = 0xc28,
/*20171018 to latest
ë¯¼ì²©ì„± íŒŒë¼ë©”í„°
^cc0000ê³µê²© ì†ë„^ffffff, íšŒí”¼ìœ¨, ë¬¼ë¦¬ ë°©ì–´ë ¥
Agility Parameter
^cc0000Attack Speed^ffffff, Dodge, Physical Defense
*/
	MSG_ID_C29 = 0xc29,
/*20171018 to latest
ì²´ë ¥ íŒŒë¼ë©”í„°
^cc0000ìµœëŒ€ ì²´ë ¥^ffffff, ë¬¼ë¦¬ ë°©ì–´ë ¥, ë§ˆë²• ë°©ì–´ë ¥
HP Parameter
^cc0000Max HP^ffffff, Physical Defense, Magic Defense
*/
	MSG_ID_C2A = 0xc2a,
/*20171018 to latest
ì§€ë ¥ íŒŒë¼ë©”í„°
^cc0000ë§ˆë²• ê³µê²©ë ¥^ffffff, ìºìŠ¤íŒ… ì‹œê°„, ë§ˆë²• ë°©ì–´ë ¥
Intellect Parameter
^cc0000Magic Attack^ffffff, Casting Time, Magic Defense
*/
	MSG_ID_C2B = 0xc2b,
/*20171018 to latest
ì†ìž¬ì£¼ íŒŒë¼ë©”í„°
^cc0000ì›ê±°ë¦¬ ë¬¼ë¦¬ ê³µê²©ë ¥^ffffff, ëª…ì¤‘ë¥ , ìºìŠ¤íŒ… ì‹œê°„, ë§ˆë²• ê³µê²©ë ¥
Handcraft Parameter
^cc0000Long Range Physical Attack^ffffff, Accuracy, Casting Time, Magic Attack
*/
	MSG_ID_C2C = 0xc2c,
/*20171018 to latest
ìš´ íŒŒë¼ë©”í„°
^cc0000ì¹˜ëª…íƒ€ìœ¨^ffffff, ëª…ì¤‘ë¥ , ë¬¼ë¦¬ê³µê²©ë ¥, ë§ˆë²•ê³µê²©ë ¥, íšŒí”¼ìœ¨
Moon Parameter
^cc0000Critical Rate^ffffff, Accuracy, Physical Attack, Magic Attack, Dodge
*/
	MSG_ID_C2D = 0xc2d,
/*20171018 to latest
ë¬¼ë¦¬ ê³µê²©ë ¥
Physical Attack
*/
	MSG_ID_C2E = 0xc2e,
/*20171018 to latest
ë¬¼ë¦¬ ë°©ì–´ë ¥
Physical Defense
*/
	MSG_ID_C2F = 0xc2f,
/*20171018 to latest
ëª…ì¤‘ë¥ 
Accuracy
*/
	MSG_ID_C30 = 0xc30,
/*20171018 to latest
ì¹˜ëª…íƒ€ìœ¨
Critical Rate
*/
	MSG_ID_C31 = 0xc31,
/*20171018 to latest
ì†Œì†ê¸¸ë“œ
Affiliated Guild
*/
	MSG_ID_C32 = 0xc32,
/*20171018 to latest
ê° íŒŒë¼ë©”í„° ë ˆë²¨ì—…ì— ì‚¬ìš©ë˜ëŠ” í¬ì¸íŠ¸
Points to level up each Parameter
*/
	MSG_ID_C33 = 0xc33,
/*20171018 to latest
ë§ˆë²•ê³µê²©ë ¥
Magic Attack
*/
	MSG_ID_C34 = 0xc34,
/*20171018 to latest
ë§ˆë²•ë°©ì–´ë ¥
Magic Defense
*/
	MSG_ID_C35 = 0xc35,
/*20171018 to latest
íšŒí”¼ìœ¨
Dodge
*/
	MSG_ID_C36 = 0xc36,
/*20171018 to latest
ê³µê²© ì†ë„
Attack Speed
*/
	MSG_ID_C37 = 0xc37,
/*20171018 to latest
ë‹¨ì¶•í‚¤ ì•ˆë‚´
Shortcut
*/
	MSG_ID_C38 = 0xc38,
/*20171018 to latest
ì˜µì…˜
Option
*/
	MSG_ID_C39 = 0xc39,
/*20171018 to latest
ìŠ¤í‚¬ ë‹¨ì¶•í‚¤ (F1 ~ F9)
Skill Shortcut Key (F1 ~ F9)
*/
	MSG_ID_C3A = 0xc3a,
/*20171018 to latest
ì´ë¯¸ì§€ ìº¡ì³
Capture Image
*/
	MSG_ID_C3B = 0xc3b,
/*20171018 to latest
í™•ëŒ€
Zoom In
*/
	MSG_ID_C3C = 0xc3c,
/*20171018 to latest
ì¶•ì†Œ
Zoom Out
*/
	MSG_ID_C3D = 0xc3d,
/*20171018 to latest
ê¸¸ë“œ
Guild
*/
	MSG_ID_C3E = 0xc3e,
/*20171018 to latest
ì€í–‰
Bank
*/
	MSG_ID_C3F = 0xc3f,
/*20171018 to latest
ìš°íŽ¸
Mail
*/
	MSG_ID_C40 = 0xc40,
/*20171018 to latest
ìºì‹œ ìƒì 
Cash Shop
*/
	MSG_ID_C41 = 0xc41,
/*20171018 to latest
ì•‰ê¸°
Sit
*/
	MSG_ID_C42 = 0xc42,
/*20171018 to latest
ì´ë™
Move
*/
	MSG_ID_C43 = 0xc43,
/*20171018 to latest
íšŒì „
Rotate
*/
	MSG_ID_C44 = 0xc44,
/*20171018 to latest
íŒŒí‹°ìž¥ì€ íŒŒí‹°ìž¥ì„ ë‹¤ë¥¸ íŒŒí‹°ì›ì—ê²Œ ìœ„ìž„ í›„ íƒˆí‡´ ê°€ëŠ¥í•©ë‹ˆë‹¤.
The Party Leader can be dropped out only after another party member becomes a Party Leader.
*/
	MSG_ID_C45 = 0xc45,
/*20171018 to latest
ì´ ë™ì˜ìƒì„ ê·¸ë§Œ ë³´ì‹œê² ìŠµë‹ˆê¹Œ?
Do you want to stop viewing this video?
*/
	MSG_ID_C46 = 0xc46,
/*20171018 to latest
 ìž¥ë¹„ê°€ ìž¥ë¹„ êµì²´ ì°½ì— ìž¥ì°© ë˜ì—ˆìŠµë‹ˆë‹¤.
 gear has been equipped in the gear equipment pop-up.
*/
	MSG_ID_C47 = 0xc47,
/*20171018 to latest
 ìž¥ë¹„ê°€ ìž¥ë¹„ êµì²´ ì°½ì—ì„œ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
 gear has been removed in the gear equipment pop-up.
*/
	MSG_ID_C48 = 0xc48,
/*20171018 to latest
í˜„ìž¬ê°€ ë§ˆì§€ë§‰ ë¼ì¸ìž…ë‹ˆë‹¤.
This is the last line.
*/
	MSG_ID_C49 = 0xc49,
/*20171018 to latest
%.1f%% ( ê¸°ë³¸ 100%% + í”„ë¦¬ë¯¸ì—„ %.1f%%+ %sì„œë²„ %.1f%% )
%.1f%% ( Base 100%% + Premium %.1f%%+ %sServer %.1f%% )
*/
	MSG_ID_C4A = 0xc4a,
/*20171018 to latest
í•œìž
Chinese character
*/
	MSG_ID_C4B = 0xc4b,
/*20171018 to latest
ë‹¨ì¶•í‚¤ ì„¤ì •
Shortcut Settings
*/
	MSG_ID_C4C = 0xc4c,
/*20171018 to latest
ë‹¹ì‹ ì˜ ì •ì•¡ì œ ê¸°ê°„ì€ %sì— ì¢…ë£Œë©ë‹ˆë‹¤.
Your subscription will be ended on%s.
*/
	MSG_ID_C4D = 0xc4d,
/*20171018 to latest
ë¦¬í”Œë ˆì´ íŒŒì¼ì„ ì°¾ì§€ ëª»í•˜ì˜€ìŠµë‹ˆë‹¤.
Cannot find the replay file.
*/
	MSG_ID_C4E = 0xc4e,
/*20171018 to latest
ì˜ìƒ
Shoes
*/
	MSG_ID_C4F = 0xc4f,
/*20171018 to latest
ì‹ ë°œ
Head
*/
	MSG_ID_C50 = 0xc50,
/*20171018 to latest
ê°‘ì˜·
Armor
*/
	MSG_ID_C51 = 0xc51,
/*20171018 to latest
ì–´ê¹¨
Shoulders
*/
	MSG_ID_C52 = 0xc52,
/*20171018 to latest
ì•…ì„¸
Accessory
*/
	MSG_ID_C53 = 0xc53,
/*20171018 to latest
ë¨¸ë¦¬
Costume
*/
	MSG_ID_C54 = 0xc54,
/*20171018 to latest
ì°¨ìˆœì •ë ¬
Sort Order
*/
	MSG_ID_C55 = 0xc55,
/*20171018 to latest
ì¼ë°˜ ìž¥ë¹„
Normal Gear
*/
	MSG_ID_C56 = 0xc56,
/*20171018 to latest
íŠ¹ìˆ˜ ìž¥ë¹„
Special Gear
*/
	MSG_ID_C57 = 0xc57,
/*20171018 to latest
ì¹­í˜¸
Style
*/
	MSG_ID_C58 = 0xc58,
/*20171018 to latest
/quake : í™”ë©´ í”ë“¤ë¦¼ íš¨ê³¼ On/Off
/quake : Screen Shaking Effect On/Off
*/
	MSG_ID_C59 = 0xc59,
/*20171018 to latest
/aura2 : ì˜¤ì˜¤ë¼ë¥¼ ì™„ì „ížˆ Off ì‹œí‚¬ ìˆ˜ ìžˆìŠµë‹ˆë‹¤ On Off
/aura2 : You can completely turn off the aurora On/Off
*/
	MSG_ID_C5A = 0xc5a,
/*20171018 to latest
ê¸°ë³¸ ì„¤ì •
Default Settings
*/
	MSG_ID_C5B = 0xc5b,
/*20171018 to latest
ê³ ê¸‰ ì„¤ì •
Advanced Settings
*/
	MSG_ID_C5C = 0xc5c,
/*20171018 to latest
ê¸°ë³¸ì„¤ì •ê°’ì´ ì ìš©ë©ë‹ˆë‹¤. 
The Default Settings will be applied. 
*/
	MSG_ID_C5D = 0xc5d,
/*20171018 to latest
ê¸°ë³¸ ì„¤ì •ê°’ì´ ì ìš©ë©ë‹ˆë‹¤. ë™ì˜í•˜ì‹­ë‹ˆê¹Œ?
The Default Settings will be applied. Do you agree?
*/
	MSG_ID_C5E = 0xc5e,
/*20171018 to latest
ì„¤ì •ê°’ì´ ì ìš©ë©ë‹ˆë‹¤. ë™ì˜í•˜ì‹­ë‹ˆê¹Œ?
The settings will be applied. Do you agree?
*/
	MSG_ID_C5F = 0xc5f,
/*20171018 to latest
ì„¤ì •ê°’ì„ ì ìš©í•˜ë ¤ë©´ ìž¬ì‹œìž‘ì´ í•„ìš”í•©ë‹ˆë‹¤. ë™ì˜í•˜ì‹­ë‹ˆê¹Œ?
Need to restart to apply the settings. Do you agree?
*/
	MSG_ID_C60 = 0xc60,
/*20171018 to latest
ì•ˆê°œ
Fog
*/
	MSG_ID_C61 = 0xc61,
/*20171018 to latest
ì˜¤ì˜¤ë¼ ê°„ëžµí™”
Simplified aurora
*/
	MSG_ID_C62 = 0xc62,
/*20171018 to latest
ì˜¤ì˜¤ë¼ì¼œê¸°
Turn on aurora
*/
	MSG_ID_C63 = 0xc63,
/*20171018 to latest
ì´íŽ™íŠ¸ í‘œì‹œ
Show Effect
*/
	MSG_ID_C64 = 0xc64,
/*20171018 to latest
ìŒì˜ í‘œì‹œ
Show Shadows
*/
	MSG_ID_C65 = 0xc65,
/*20171018 to latest
No Shift
*/
	MSG_ID_C66 = 0xc66,
/*20171018 to latest
í•˜ë“œì›¨ì–´ T&L ê°€ì†ê¸°ëŠ¥ì„ ì„ íƒí•©ë‹ˆë‹¤
Select Hardware T&L Acceleration Function
*/
	MSG_ID_C67 = 0xc67,
/*20171018 to latest
ê²Œìž„ì˜ í•´ìƒë„ë¥¼ ì„ íƒí•©ë‹ˆë‹¤
Select Game Resolution
*/
	MSG_ID_C68 = 0xc68,
/*20171018 to latest
ì „ì²´í™”ë©´ ì‚¬ìš©
Use full screen
*/
	MSG_ID_C69 = 0xc69,
/*20171018 to latest
ë§ˆìš°ìŠ¤ ê³ ì •
Fix mouse
*/
	MSG_ID_C6A = 0xc6a,
/*20171018 to latest
ì´íŽ™íŠ¸ ì„¤ì •
Effect Settings
*/
	MSG_ID_C6B = 0xc6b,
/*20171018 to latest
Control ì„¤ì •
Control Settings
*/
	MSG_ID_C6C = 0xc6c,
/*20171018 to latest
ê·¸ëž˜í”½ ìž¥ì¹˜ ì„¤ì •
Graphic Device Settings
*/
	MSG_ID_C6D = 0xc6d,
/*20171018 to latest
ê·¸ëž˜í”½ í•´ìƒë„ ì„¤ì •
Graphic Resolution Settings
*/
	MSG_ID_C6E = 0xc6e,
/*20171018 to latest
ì „ì²´ í™”ë©´ ìœ ë¬´ ì„¤ì •
Full Screen Settings
*/
	MSG_ID_C6F = 0xc6f,
/*20171018 to latest
ë§ˆìš°ìŠ¤ ê³ ì • ì—¬ë¶€ ì„¤ì •
Fix mouse Settings
*/
	MSG_ID_C70 = 0xc70,
/*20171018 to latest
ìˆ˜ìˆ˜ë£Œ : 
Commission : 
*/
	MSG_ID_C71 = 0xc71,
/*20171018 to latest
ìˆ˜ìˆ˜ë£Œ ì´ì•¡ : 
Total commission amount : 
*/
	MSG_ID_C72 = 0xc72,
/*20171018 to latest
ìˆ˜ì‹ ì¸ ì„¤ì •
Select receiver
*/
	MSG_ID_C73 = 0xc73,
/*20171018 to latest
ìˆ˜ì‹ ê·¸ë£¹ ì„¤ì •
Select receiving group
*/
	MSG_ID_C74 = 0xc74,
/*20171018 to latest
í¬ê¸° ë³€ê²½(F10)
Change size(F10)
*/
	MSG_ID_C75 = 0xc75,
/*20171018 to latest
ë©”ì¼í•¨ì„ ë¶ˆëŸ¬ì˜¤ëŠ” ì¤‘ ìž…ë‹ˆë‹¤.
ë¶ˆí•„ìš”í•œ ë©”ì¼ì€ ^c92114ì‚­ì œ^000000í•´ ì£¼ì„¸ìš”~!!
Loading the mailbox.
^c92114Delete^000000unnecessary emails!!
*/
	MSG_ID_C76 = 0xc76,
/*20171018 to latest
NOW LOADING..
*/
	MSG_ID_C77 = 0xc77,
/*20171018 to latest
ì œëª©
Title
*/
	MSG_ID_C78 = 0xc78,
/*20171018 to latest
ë³´ë‚¸ì´
Sender
*/
	MSG_ID_C79 = 0xc79,
/*20171018 to latest
ë¼ê·¸ë‚˜ë¡œí¬ í´ë¼ì´ì–¸íŠ¸ì™€ ë™ì‹œì— ì‹¤í–‰ì´ ë¶ˆê°€ëŠ¥ í•©ë‹ˆë‹¤. setupì„ ì¢…ë£Œí•©ë‹ˆë‹¤
*/
	MSG_ID_C7A = 0xc7a,
/*20171018 to latest
ì¶”ê°€ ê¸°ëŠ¥ ì„¤ì •
*/
	MSG_ID_C7B = 0xc7b,
/*20171018 to latest
This account does not exist.
*/
	MSG_ID_C7C = 0xc7c,
/*20171018 to latest
Passwords do not match.
*/
	MSG_ID_C7D = 0xc7d,
/*20171018 to latest
Failed to pass IP authentication
*/
	MSG_ID_C7E = 0xc7e,
/*20171018 to latest
No identification number, supplement your registration information
*/
	MSG_ID_C7F = 0xc7f,
/*20171018 to latest
Account block
*/
	MSG_ID_C80 = 0xc80,
/*20171018 to latest
System error
*/
	MSG_ID_C81 = 0xc81,
/*20171018 to latest
unknown error found.
*/
	MSG_ID_C82 = 0xc82,
/*20171018 to latest
ê¸¸ì•ˆë‚´ ì•„ì´ì½˜ ì„¤ì •
*/
	MSG_ID_C83 = 0xc83,
/*20171018 to latest
ê¸¸ ì•ˆë‚´ ì •ë³´ UI
*/
	MSG_ID_C84 = 0xc84,
/*20171018 to latest
ê¸¸ ì•ˆë‚´ ì •ë³´ ì—´ê¸°
*/
	MSG_ID_C85 = 0xc85,
/*20171018 to latest
í˜„ìž¬ ìœ„ì¹˜ ê³µìœ 
*/
	MSG_ID_C86 = 0xc86,
/*20171018 to latest
ê²€ìƒ‰ê²°ê³¼[0]
*/
	MSG_ID_C87 = 0xc87,
/*20171018 to latest
ê²€ìƒ‰&ì•ˆë‚´
*/
	MSG_ID_C88 = 0xc88,
/*20171018 to latest
ìœ„ì¹˜ê°€ ì˜¬ë°”ë¥´ì§€ ì•ŠìŠµë‹ˆë‹¤.
*/
	MSG_ID_C89 = 0xc89,
/*20171018 to latest
ê²€ìƒ‰ê²°ê³¼[%d]
*/
	MSG_ID_C8A = 0xc8a,
/*20171018 to latest
ê¸¸ì•ˆë‚´ í‘œì‹œë¥¼ ìœ„í•œ ì•„ì´ì½˜ ì„¤ì •
*/
	MSG_ID_C8B = 0xc8b,
/*20171018 to latest
ê¸¸ ì°¾ê¸°ì— zeny í—ˆìš©
*/
	MSG_ID_C8C = 0xc8c,
/*20171018 to latest
ë‚´ë¹„ê²Œì´ì…˜ ë„í‚¹ í•´ì œ
*/
	MSG_ID_C8D = 0xc8d,
/*20171018 to latest
í™œì„±í™” í•˜ì§€ ì•Šì€ ê³„ì •ìž…ë‹ˆë‹¤.
*/
	MSG_ID_C8E = 0xc8e,
/*20171018 to latest
í´ë¦­í•œ ìœ„ì¹˜ê°€ ì±„íŒ…ì°½ì— ê³µìœ  ë©ë‹ˆë‹¤.
*/
	MSG_ID_C8F = 0xc8f,
/*20171018 to latest
4. Service í•­ëª©ì„ ì„ íƒí•˜ë©´ Zeny&ë¹„ê³µì • ì´ìš©ì„ ê³ ë ¤í•˜ì—¬ ì•ˆë‚´ í•œë‹¤.
*/
	MSG_ID_C90 = 0xc90,
/*20171018 to latest
5. [<-] ë²„íŠ¼ : ê¸¸ì•ˆë‚´ ëª¨ë“œ <-> ê²€ìƒ‰ ëª¨ë“œë¥¼ ë°”ê¾¸ê±°ë‚˜
*/
	MSG_ID_C91 = 0xc91,
/*20171018 to latest
ê³µìœ í•˜ê¸° ëª¨ë“œ -> ì„œì¹˜ ëª¨ë“œë¡œ ëŒì•„ê°ˆë•Œ ì‚¬ìš© ëœë‹¤.
*/
	MSG_ID_C92 = 0xc92,
/*20171018 to latest
ê²½í—˜ì¹˜ %lld ì–»ìŒ
*/
	MSG_ID_C93 = 0xc93,
/*20171018 to latest
'%lld'ì˜ ê²½í—˜ì¹˜ë¥¼ 
*/
	MSG_ID_C94 = 0xc94,
/*20171018 to latest
^b- ë…¸ì  ìˆ˜ìˆ˜ë£Œ ì•ˆë‚´^/b
ë…¸ì  ì„¤ì • ê°€ê²©ì— ë”°ë¼ ì¼ì • ë¹„ìœ¨ì˜ ìˆ˜ìˆ˜ë£Œê°€ ë¶€ê°€ë©ë‹ˆë‹¤.

	^b> ìˆ˜ìˆ˜ë£Œ ë¹„ìœ¨^/b
ê° ê¸ˆì•¡ì— ë”°ë¥¸ ìˆ˜ìˆ˜ë£Œì˜ ë¹„ìœ¨ì€ ì•„ëž˜ì™€ ê°™ìŠµë‹ˆë‹¤.

0 z ~ 10,000 z
 = ìˆ˜ìˆ˜ë£Œìœ¨ : ^1567fe0%^000000
10,001 z ~ 100,000 z
 = ìˆ˜ìˆ˜ë£Œìœ¨ : ^1567fe0%^000000
100,001 z ~ 1,000,000 z
 = ìˆ˜ìˆ˜ë£Œìœ¨ : ^1567fe0%^000000
1,000,001 z ~ 10,000,000 z
	 = ìˆ˜ìˆ˜ë£Œìœ¨ : ^1567fe0%^000000
10,000,001 z ~ 100,000,000 z
 = ìˆ˜ìˆ˜ë£Œìœ¨ : ^1567fe5%^000000
100,000,001 z ì´ìƒ
 = ìˆ˜ìˆ˜ë£Œìœ¨ : ^1567fe5%^000000
*/
	MSG_ID_C95 = 0xc95,
/*20171018 to latest
ì‹¤ê±°ëž˜ê°€ : 
*/
	MSG_ID_C96 = 0xc96,
/*20171018 to latest
â€» ì•„ì´í…œ íŒë§¤ì‹œ, ì‹¤ê±°ëž˜ê°€ë§Œí¼ ì œë‹ˆë¥¼ íšë“í•©ë‹ˆë‹¤.
*/
	MSG_ID_C97 = 0xc97,
/*20171018 to latest
â€» ì•„ì´í…œ êµ¬ë§¤ì‹œ, ì‹¤ê±°ëž˜ê°€ë§Œí¼ ì œë‹ˆê°€ ì°¨ê°ë©ë‹ˆë‹¤.
*/
	MSG_ID_C98 = 0xc98,
/*20171018 to latest
ì±„íŒ…ë°© ê°œì„¤
*/
	MSG_ID_C99 = 0xc99,
/*20171018 to latest
í•´ë‹¹ ìºë¦­í„°ëŠ” íŒŒí‹°ê°€ìž…ì´ ê°€ëŠ¥í•˜ì§€ ì•Šì€ ë ˆë²¨ìž…ë‹ˆë‹¤.
*/
	MSG_ID_C9A = 0xc9a,
/*20171018 to latest
'%lld'ì˜ ìž¡ê²½í—˜ì¹˜ë¥¼ 
*/
	MSG_ID_C9B = 0xc9b,
/*20171018 to latest
ìž¡ê²½í—˜ì¹˜ %lld ì–»ìŒ
*/
	MSG_ID_C9C = 0xc9c,
/*20171018 to latest
í˜„ìž¬ìœ„ì¹˜(ëŒ€ë¡œ)ì—ëŠ” ë…¸ì ì„ ê°œì„¤í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_C9D = 0xc9d,
/*20171018 to latest
ì´ˆ í›„ ê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ID_C9E = 0xc9e,
/*20171018 to latest
íŒŒí‹°ì›
*/
	MSG_ID_C9F = 0xc9f,
/*20171018 to latest
SNS ì „ì†¡ì‹¤íŒ¨(%d)
*/
	MSG_ID_CA0 = 0xca0,
/*20171018 to latest
SNS ì„œë²„ ì—°ê²°ì‹¤íŒ¨
*/
	MSG_ID_CA1 = 0xca1,
/*20171018 to latest
SNS ë¡œê·¸ì¸ í›„ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ID_CA2 = 0xca2,
/*20171018 to latest
ì ‘ì† í•  ìˆ˜ ìžˆëŠ” ì£¼ì†Œê°€ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
*/
	MSG_ID_CA3 = 0xca3,
/*20171018 to latest
ë¯¸ë‹ˆíŒŒí‹°ì°½ì´ ê²¹ì³ì ¸ ìžˆì–´ ì‚¬ìš©í•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_CA4 = 0xca4,
/*20171018 to latest
ë‚˜ì˜ íŒë§¤ë…¸ì 
*/
	MSG_ID_CA5 = 0xca5,
/*20171018 to latest
BOX
*/
	MSG_ID_CA6 = 0xca6,
/*20171018 to latest
íŒë°•ìŠ¤
*/
	MSG_ID_CA7 = 0xca7,
/*20171018 to latest
íŠ¸ìœ—ì„ ì„±ê³µí–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CA8 = 0xca8,
/*20171018 to latest
ë‹¤ì‹œí•˜ê¸°
*/
	MSG_ID_CA9 = 0xca9,
/*20171018 to latest
ë‹¤ì‹œí•˜ê¸°ê°€ ë¹„í™œì„±í™”ë˜ì—ˆìŠµë‹ˆë‹¤. ì œë ¨ ìž¬ë£Œë¥¼ ë‹¤ì‹œ ì„ íƒí•´ì£¼ì„¸ìš”.
*/
	MSG_ID_CAA = 0xcaa,
/*20171018 to latest
ì œë ¨ì„ì´ ë¶€ì¡±í•˜ì—¬ ë‹¤ì‹œí•˜ê¸°ê°€ ë¹„í™œì„±í™” ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CAB = 0xcab,
/*20171018 to latest
ì œë‹ˆê°€ ë¶€ì¡±í•˜ì—¬ ë‹¤ì‹œí•˜ê¸°ê°€ ë¹„í™œì„±í™” ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CAC = 0xcac,
/*20171018 to latest
ëŒ€ìž¥ìž¥ì´ì˜ ì¶•ë³µì´ ë¶€ì¡±í•˜ì—¬ ë‹¤ì‹œí•˜ê¸°ê°€ ë¹„í™œì„±í™” ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CAD = 0xcad,
/*20171018 to latest
ì•„ì´í…œì´ íŒŒê´´ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CAE = 0xcae,
/*20171018 to latest
ëª¨ë“  ìŠ¤í…Œì´í„°ìŠ¤ê°€ ê°ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CAF = 0xcaf,
/*20171018 to latest
ëª¨ë“  ìŠ¤í…Œì´í„°ìŠ¤ ê°ì†Œ íš¨ê³¼ê°€ í•´ì œë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CB0 = 0xcb0,
/*20171018 to latest
OTP ë¹„ë°€ë²ˆí˜¸ëŠ” 8ìžë¦¬ ìž…ë‹ˆë‹¤.
*/
	MSG_ID_CB1 = 0xcb1,
/*20171018 to latest
í†µí•©ê³„ì •
*/
	MSG_ID_CB2 = 0xcb2,
/*20171018 to latest
ë¼ê·¸ë‚˜ë¡œí¬
*/
	MSG_ID_CB3 = 0xcb3,
/*20171018 to latest
ì„œë¹„ìŠ¤ ì ê²€ ì¤‘ìž…ë‹ˆë‹¤.
*/
	MSG_ID_CB4 = 0xcb4,
/*20171018 to latest
ê²€ìƒ‰ì–´ë¥¼ ìž…ë ¥í•´ì£¼ì„¸ìš”
*/
	MSG_ID_CB5 = 0xcb5,
/*20171018 to latest
MOTP
*/
	MSG_ID_CB6 = 0xcb6,
/*20171018 to latest
ì¸ì¦ë²ˆí˜¸
Identification number.
*/
	MSG_ID_CB7 = 0xcb7,
/*20171018 to latest
íœ´ëŒ€í°ì— ë‹¤ìš´ë°›ì€ GNJOY MOTPë¥¼ ì‹¤í–‰í•˜ì—¬ ì¸ì¦ë²ˆí˜¸ë¥¼ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
*/
	MSG_ID_CB8 = 0xcb8,
/*20171018 to latest
íŒŒí‹°ìž¥ì„ ìœ„ìž„í•  íŒŒí‹°ì›ì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤. íŒŒí‹°ë¥¼ í•´ì‚°í•˜ì‹œê² ìŠµë‹ˆê¹Œ?
*/
	MSG_ID_CB9 = 0xcb9,
/*20171018 to latest
 - ë§Œ18ì„¸ì´ìƒ
*/
	MSG_ID_CBA = 0xcba,
/*20171018 to latest
 - ìœ ë£Œì„œë²„
*/
	MSG_ID_CBB = 0xcbb,
/*20171018 to latest
 - ë¬´ë£Œì„œë²„
*/
	MSG_ID_CBC = 0xcbc,
/*20171018 to latest
ì¾Œì 
*/
	MSG_ID_CBD = 0xcbd,
/*20171018 to latest
ë³´í†µ
Normal
*/
	MSG_ID_CBE = 0xcbe,
/*20171018 to latest
í˜¼ìž¡
*/
	MSG_ID_CBF = 0xcbf,
/*20171018 to latest
í¬í™”
*/
	MSG_ID_CC0 = 0xcc0,
/*20171018 to latest
map
*/
	MSG_ID_CC1 = 0xcc1,
/*20171018 to latest
ì›”ë“œì°½ê³ ëŠ” ì¸ë²¤í† ë¦¬ ì•„ì´í…œë§Œ ìž…ì¶œê³  í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CC2 = 0xcc2,
/*20171018 to latest
ì›”ë“œì°½ê³ ì—ëŠ” íŽ«ì•Œì„ ìž…ê³ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_CC3 = 0xcc3,
/*20171018 to latest
ì›”ë“œì°½ê³ ì—ëŠ” ì œìž‘ì•„ì´í…œì„ ìž…ê³ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_CC4 = 0xcc4,
/*20171018 to latest
%s ì—ì„œëŠ” ì¶œê³  í•  ìˆ˜ ì—†ëŠ” ì•„ì´í…œìž…ë‹ˆë‹¤.
*/
	MSG_ID_CC5 = 0xcc5,
/*20171018 to latest
ë˜ì „ íŒŒê´´
*/
	MSG_ID_CC6 = 0xcc6,
/*20171018 to latest
[%s] ë‹˜ì´ ì œë ¨ì„ ì„±ê³µí•˜ì—¬, [+%d %s] ì•„ì´í…œì„ íšë“í•˜ì˜€ìŠµë‹ˆë‹¤.
*/
	MSG_ID_CC7 = 0xcc7,
/*20171018 to latest
[%s] ë‹˜ì´ [+%d %s] ì•„ì´í…œì˜ ì œë ¨ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
*/
	MSG_ID_CC8 = 0xcc8,
/*20171018 to latest
íŒŒí‹°ìž¥ì„ ìœ„ìž„í•œ ì´í›„ì— íƒˆí‡´í•  ìˆ˜ ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_CC9 = 0xcc9,
/*20171018 to latest
ì˜¤ë¦„
*/
	MSG_ID_CCA = 0xcca,
/*20171018 to latest
ë‚´ë¦¼
*/
	MSG_ID_CCB = 0xccb,
/*20171018 to latest
ê¸°ë³¸
*/
	MSG_ID_CCC = 0xccc,
/*20171018 to latest
ë³€ì¡°ëœ íŒŒì¼ì´ ë°œê²¬ë˜ì—ˆìŠµë‹ˆë‹¤. ê²Œìž„ì„ ë‹¤ì‹œ ì‹¤í–‰ì‹œì¼œì£¼ì„¸ìš”.
*/
	MSG_ID_CCD = 0xccd,
/*20171018 to latest
%s ì€(ëŠ”) ì´ë§µì—ì„œ ì´ë™ì´ ì œí•œëœ ì•„ì´í…œìž…ë‹ˆë‹¤.
*/
	MSG_ID_CCE = 0xcce,
/*20171018 to latest
ìŠ¤ìŠ¤ë¡œ
ë¨¹ì´ë¨¹ê¸°
*/
	MSG_ID_CCF = 0xccf,
/*20171018 to latest
ë¡œë±ìŠ¤ ìž‘ì„±ì°½ì´ ì—´ë ¤ìžˆëŠ” ë™ì•ˆ í˜¸ë¬¸í´ë£¨ìŠ¤ê°€ ë¨¹ì´ë¥¼ ë¨¹ì§€ ëª»í•©ë‹ˆë‹¤.
*/
	MSG_ID_CD0 = 0xcd0,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ê°€ ë¨¹ì´ë¥¼ ë¨¹ì—ˆìŠµë‹ˆë‹¤. '%s' ìž”ì—¬ëŸ‰ %dê°œ
*/
	MSG_ID_CD1 = 0xcd1,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ ìŠ¤ìŠ¤ë¡œ ë¨¹ì´ ë¨¹ê¸° í™œì„±í™” On
*/
	MSG_ID_CD2 = 0xcd2,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ ìŠ¤ìŠ¤ë¡œ ë¨¹ì´ ë¨¹ê¸° í™œì„±í™” Off
*/
	MSG_ID_CD3 = 0xcd3,
/*20171018 to latest
í˜¸ë¬¸í´ë£¨ìŠ¤ëŠ” ì£¼ì¸ì´ íšë“í•˜ëŠ” ê²½í—˜ì¹˜ì˜
10%ë§Œí¼ì„ ìžì‹ ì˜ ê²½í—˜ì¹˜ë¡œ ë¶„ë°° ë°›ìŠµë‹ˆë‹¤.
*/
	MSG_ID_CD4 = 0xcd4,
/*20171018 to latest
í™•ë¥  : %d%%
*/
	MSG_ID_CD5 = 0xcd5,
/*20171018 to latest
í•´ë‹¹ ëŒ€ìƒì€ í˜¸ë¬¸ì˜ ê³µê²©ëŒ€ìƒì´ ì•„ë‹™ë‹ˆë‹¤. 'Alt + ìš°í´ë¦­'ì„ í†µí•´ í˜¸ë¬¸í´ë£¨ìŠ¤ì˜ ê³µê²©ëŒ€ìƒì„ ì§€ì •í•´ì£¼ì„¸ìš”.
*/
	MSG_ID_CD6 = 0xcd6,
/*20171018 to latest
í˜¸ë¬¸ì˜ ê³µê²©ëŒ€ìƒì´ ì¡´ìž¬í•˜ì§€ ì•ŠìŠµë‹ˆë‹¤. 'Alt + ìš°í´ë¦­'ì„ í†µí•´ í˜¸ë¬¸í´ë£¨ìŠ¤ì˜ ê³µê²©ëŒ€ìƒì„ ì§€ì •í•´ì£¼ì„¸ìš”.
*/
	MSG_ID_CD7 = 0xcd7,
/*20171018 to latest
íŒë§¤ ë¦¬ìŠ¤íŠ¸
*/
	MSG_ID_CD8 = 0xcd8,
/*20171018 to latest
êµ¬ìž… ë¦¬ìŠ¤íŠ¸
*/
	MSG_ID_CD9 = 0xcd9,
/*20171018 to latest
ì‹ ê·œ
New
*/
	MSG_ID_CDA = 0xcda,
/*20171018 to latest
ì¸ê¸°
Headgears
*/
	MSG_ID_CDB = 0xcdb,
/*20171018 to latest
í•œì •
Limited
*/
	MSG_ID_CDC = 0xcdc,
/*20171018 to latest
ìž„ëŒ€ìž¥ë¹„
Rental Items
*/
	MSG_ID_CDD = 0xcdd,
/*20171018 to latest
ì˜êµ¬ìž¥ë¹„
Equipments
*/
	MSG_ID_CDE = 0xcde,
/*20171018 to latest
ë²„í”„
Scrolls
*/
	MSG_ID_CDF = 0xcdf,
/*20171018 to latest
íšŒë³µ
Consumables
*/
	MSG_ID_CE0 = 0xce0,
/*20171018 to latest
ê¸°íƒ€
Other
*/
	MSG_ID_CE1 = 0xce1,
/*20171018 to latest
íŠ¹ê°€
Special
*/
	MSG_ID_CE2 = 0xce2,
/*20171018 to latest
ì¶©ì „í•˜ê¸°
*/
	MSG_ID_CE3 = 0xce3,
/*20171018 to latest
êµ¬ìž…í•˜ê¸°
*/
	MSG_ID_CE4 = 0xce4,
/*20171018 to 20171206
https://payment.gnjoy.com/bill/login.grv
20171206 to latest
http://member.gnjoy.com/user/pay/chargelist.asp
*/
	MSG_ID_CE5 = 0xce5,
/*20171018 to latest
ì•„ì´í…œ ê²€ìƒ‰
*/
	MSG_ID_CE6 = 0xce6,
/*20171018 to latest
ë¬´ë£Œìºì‹œ
*/
	MSG_ID_CE7 = 0xce7,
/*20171018 to latest
ë¬´ë£Œìºì‹œ ì‚¬ìš©
*/
	MSG_ID_CE8 = 0xce8,
/*20171018 to latest
ì†Œì§€ìºì‹œ
*/
	MSG_ID_CE9 = 0xce9,
/*20171018 to latest
ìˆ˜ëŸ‰ê°±ì‹ 
*/
	MSG_ID_CEA = 0xcea,
/*20171018 to latest
ì„±ì œ(ì—¬)
*/
	MSG_ID_CEB = 0xceb,
/*20171018 to latest
ì†Œìš¸ë¦¬í¼(ì—¬)
*/
	MSG_ID_CEC = 0xcec,
/*20171018 to latest
ì„±ì œ(ë‚¨)
*/
	MSG_ID_CED = 0xced,
/*20171018 to latest
ì†Œìš¸ë¦¬í¼(ë‚¨)
*/
	MSG_ID_CEE = 0xcee,
/*20171018 to latest
ë¬´ê²Œê°€ %d í¼ì„¼íŠ¸ ì´ìƒì¼ë•ŒëŠ” HP SPê°€ ìžì—°ì ìœ¼ë¡œ íšŒë³µì´ ë˜ì§€ ì•ŠìŠµë‹ˆë‹¤.
*/
	MSG_ID_CEF = 0xcef,
/*20171018 to latest
í•œ ë²ˆì— êµ¬ìž… ê°€ëŠ¥í•œ ì•„ì´í…œì˜ ê°€ì§“ìˆ˜ëŠ” 8ê°œìž…ë‹ˆë‹¤.
*/
	MSG_ID_CF0 = 0xcf0,
/*20171018 to latest
http://gift.zhaouc.com/#/index
http://gift.zhaouc.com/
*/
	MSG_ID_CF1 = 0xcf1,
/*20171018 to latest
UNKNOWN ERROR:%d
*/
	MSG_ID_CF2 = 0xcf2,
/*20171018 to latest
NOT USER
*/
	MSG_ID_CF3 = 0xcf3,
/*20171018 to latest
THIS ACCOUNT ID IS BLOCKED
*/
	MSG_ID_CF4 = 0xcf4,
/*20171018 to latest
COUNTRY REJECT (OR NOT AVALIABLE USER )
*/
	MSG_ID_CF5 = 0xcf5,
/*20171018 to latest
NOT MATCH PASSWORD
*/
	MSG_ID_CF6 = 0xcf6,
/*20171018 to latest
NOT EMAIL CERT
*/
	MSG_ID_CF7 = 0xcf7,
/*20171018 to latest
PAYPAL BLOCK
*/
	MSG_ID_CF8 = 0xcf8,
/*20171018 to latest
COUNTRY REJECT
*/
	MSG_ID_CF9 = 0xcf9,
/*20171018 to latest
PAYPAL BLOCK
*/
	MSG_ID_CFA = 0xcfa,
/*20171018 to latest
WEB BLOCK
*/
	MSG_ID_CFB = 0xcfb,
/*20171018 to latest
AGE LIMIT USER
*/
	MSG_ID_CFC = 0xcfc,
/*20171018 to latest
PASSWORD HAS NOT BEEN CHANGED FOR MORE THAN 90DAYS
*/
	MSG_ID_CFD = 0xcfd,
/*20171018 to latest
INPUT DATA ERROR
*/
	MSG_ID_CFE = 0xcfe,
/*20171018 to latest
ERROR DATABASE
*/
	MSG_ID_CFF = 0xcff,
/*20171018 to latest
ERROR SYSTEM
*/
	MSG_ID_D00 = 0xd00,
/*20171018 to 20171027
%s ì§€ë¶ˆ
20171030 to latest
%s ì†Œëª¨
*/
	MSG_ID_D01 = 0xd01,
/*20171018 to latest
ë¹„ìš©ì§€ë¶ˆ
*/
	MSG_ID_D02 = 0xd02,
/*20171018 to latest
ì¶œë°œ ê°€ëŠ¥í•œ ë§µì´ ì•„ë‹™ë‹ˆë‹¤.
*/
	MSG_ID_D03 = 0xd03,
/*20171018 to latest
ì´ë™ ë¶ˆê°€ëŠ¥í•œ ë§µìž…ë‹ˆë‹¤
*/
	MSG_ID_D04 = 0xd04,
/*20171018 to latest
ì•„ì´í…œì´ ë¶€ì¡±í•©ë‹ˆë‹¤.
*/
	MSG_ID_D05 = 0xd05,
/*20171018 to latest
ì¤„ ë°”ê¿ˆ ì—†ì´ í•œ ì¤„ë¡œ ìž…ë ¥í•´ì£¼ì„¸ìš”.
*/
	MSG_ID_D06 = 0xd06,
/*20171018 to latest
ë¶ˆëŸ‰ ë‹¨ì–´ê°€ í¬í•¨ëœ ì´ë¦„ì€ ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D07 = 0xd07,
/*20171018 to latest
íšŒì› ê°€ìž…ì„ ìœ„í•´ ê³µì‹ í™ˆíŽ˜ì´ì§€ë¡œ ì´ë™ë©ë‹ˆë‹¤.
*/
	MSG_ID_D08 = 0xd08,
#if PACKETVER >= 20171019
/*20171019 to latest
TokenAgency ì„œë²„ ì—°ê²° ì‹¤íŒ¨
*/
	MSG_ID_D09 = 0xd09,
#endif
#if PACKETVER >= 20171023
/*20171023 to latest
ê³¼ê¸ˆì •ë³´
*/
	MSG_ID_D0A = 0xd0a,
/*20171023 to latest
ì‚­ì œì˜ˆì•½
*/
	MSG_ID_D0B = 0xd0b,
/*20171023 to latest
ì˜ˆì•½ì·¨ì†Œ
*/
	MSG_ID_D0C = 0xd0c,
/*20171023 to latest
ê²Œìž„ì‹œìž‘
*/
	MSG_ID_D0D = 0xd0d,
/*20171023 to latest
ì‚­ì œ
*/
	MSG_ID_D0E = 0xd0e,
/*20171023 to latest
Character List
*/
	MSG_ID_D0F = 0xd0f,
/*20171023 to latest
ê³µì§€
Notice
*/
	MSG_ID_D10 = 0xd10,
/*20171023 to latest
ìƒì„±
*/
	MSG_ID_D11 = 0xd11,
/*20171023 to latest
Hair Style
*/
	MSG_ID_D12 = 0xd12,
/*20171023 to latest
Hair Color
*/
	MSG_ID_D13 = 0xd13,
/*20171023 to latest
ì¤‘ë³µí™•ì¸
*/
	MSG_ID_D14 = 0xd14,
/*20171023 to latest
%dì‹œ %dë¶„ %dì´ˆ
*/
	MSG_ID_D15 = 0xd15,
/*20171023 to latest
MOTP ìž…ë ¥ ì‹œê°„ì´ ì´ˆê³¼ë˜ì—ˆìŠµë‹ˆë‹¤. ì²˜ìŒë¶€í„° ë‹¤ì‹œ ë¡œê·¸ì¸í•´ì£¼ì‹­ì‹œì˜¤.
*/
	MSG_ID_D16 = 0xd16,
/*20171023 to latest
ë’¤ë¡œê°€ê¸°
*/
	MSG_ID_D17 = 0xd17,
#endif
#if PACKETVER >= 20171024
/*20171024 to latest
ì•„ì´í…œì„ ì‚¬ìš©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D18 = 0xd18,
/*20171024 to latest
ë™ì¼í•œ ë§µìœ¼ë¡œ ì´ë™í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D19 = 0xd19,
/*20171024 to latest
ì‚¬ë§ì‹œ ì´ë™ì´ ë¶ˆê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ID_D1A = 0xd1a,
#endif
#if PACKETVER >= 20171030
/*20171030 to latest
ìºë¦­í„° ìƒì„±
*/
	MSG_ID_D1B = 0xd1b,
#endif
#if PACKETVER >= 20171031
/*20171031 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œ ë“±ë¡
*/
	MSG_ID_D1C = 0xd1c,
/*20171031 to latest
ëª¨ì§‘ ì¤‘ë‹¨
*/
	MSG_ID_D1D = 0xd1d,
/*20171031 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œ ì„¤ì •
*/
	MSG_ID_D1E = 0xd1e,
/*20171031 to latest
ì „ ì§€ì—­
*/
	MSG_ID_D1F = 0xd1f,
/*20171031 to latest
ì§ì ‘ê¸°ìž¬
*/
	MSG_ID_D20 = 0xd20,
/*20171031 to latest
ê²€ì‚¬ê³„ì—´
*/
	MSG_ID_D21 = 0xd21,
/*20171031 to latest
ë²•ì‚¬ê³„ì—´
*/
	MSG_ID_D22 = 0xd22,
/*20171031 to latest
ê¶ìˆ˜ê³„ì—´
*/
	MSG_ID_D23 = 0xd23,
/*20171031 to latest
ë³µì‚¬ê³„ì—´
*/
	MSG_ID_D24 = 0xd24,
/*20171031 to latest
ìƒì¸ê³„ì—´
*/
	MSG_ID_D25 = 0xd25,
/*20171031 to latest
ë„ë‘‘ê³„ì—´
*/
	MSG_ID_D26 = 0xd26,
/*20171031 to latest
íƒœê¶Œê³„ì—´
*/
	MSG_ID_D27 = 0xd27,
/*20171031 to latest
ë‹Œìžê³„ì—´
*/
	MSG_ID_D28 = 0xd28,
/*20171031 to latest
ê±´ìŠ¬ë§ê±°ê³„ì—´
*/
	MSG_ID_D29 = 0xd29,
/*20171031 to latest
ë„ëžŒì¡±ê³„ì—´
*/
	MSG_ID_D2A = 0xd2a,
/*20171031 to latest
ì§€ì—­ëª…
*/
	MSG_ID_D2B = 0xd2b,
/*20171031 to latest
ì§€ì—­ëª… ê²€ìƒ‰
*/
	MSG_ID_D2C = 0xd2c,
/*20171031 to latest
ê°€ìž… ìš”ì²­í•˜ê¸°
*/
	MSG_ID_D2D = 0xd2d,
/*20171031 to latest
ì‹ ê³ í•˜ê¸°
*/
	MSG_ID_D2E = 0xd2e,
/*20171031 to latest
íŒŒí‹° ëª¨ì§‘ ì¤‘ë‹¨
*/
	MSG_ID_D2F = 0xd2f,
/*20171031 to latest
ì§€ì—­ëª…ì„ ìž…ë ¥í•´ì£¼ì„¸ìš”.
*/
	MSG_ID_D30 = 0xd30,
/*20171031 to latest
ì§€ì—­
*/
	MSG_ID_D31 = 0xd31,
/*20171031 to latest
ì „ ì§ì—…
*/
	MSG_ID_D32 = 0xd32,
#endif
#if PACKETVER >= 20171109
/*20171109 to latest
ë¡œê·¸ì¸
*/
	MSG_ID_D33 = 0xd33,
/*20171109 to latest
ê³„ì •
*/
	MSG_ID_D34 = 0xd34,
/*20171109 to latest
ì¢…ë£Œ
Exit
*/
	MSG_ID_D35 = 0xd35,
/*20171109 to latest
ì‹ ì²­
*/
	MSG_ID_D36 = 0xd36,
/*20171109 to latest
ì ‘ì†
*/
	MSG_ID_D37 = 0xd37,
/*20171109 to latest
í™•ì¸
*/
	MSG_ID_D38 = 0xd38,
/*20171109 to latest
íœ´ëŒ€í°ì— ë‹¤ìš´ë°›ì€ GNJOY MOTPë¥¼
*/
	MSG_ID_D39 = 0xd39,
/*20171109 to latest
ì‹¤í–‰í•˜ì—¬ ì¸ì¦ë²ˆí˜¸ë¥¼ ìž…ë ¥í•´ ì£¼ì„¸ìš”.
*/
	MSG_ID_D3A = 0xd3a,
/*20171109 to latest
NPCê°€ ìžˆëŠ” ë§µì˜ ëžœë¤ ì¢Œí‘œë¡œ ì´ë™ ë©ë‹ˆë‹¤.
*/
	MSG_ID_D3B = 0xd3b,
/*20171109 to latest
íƒœê¶Œ
*/
	MSG_ID_D3C = 0xd3c,
/*20171109 to 20171117
 ë‹˜ì´ ì°¨ë‹¨ ìƒíƒœë¡œ ì„¤ì •ë˜ì—ˆìŠµë‹ˆë‹¤.
20171121 to latest
 ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê±°ë¶€ìƒíƒœ
*/
	MSG_ID_D3D = 0xd3d,
/*20171109 to 20171117
 ë‹˜ì„ ì°¨ë‹¨ ìƒíƒœë¡œ ì„¤ì •í•˜ëŠ”ë° ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
20171121 to latest
 ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê±°ë¶€ ìš”ì²­ ì‹¤íŒ¨
*/
	MSG_ID_D3E = 0xd3e,
/*20171109 to 20171117
 ë‹˜ì„ ì°¨ë‹¨ ìƒíƒœë¡œ ì„¤ì •í•˜ëŠ”ë° ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.(ì¸ì› ì´ˆê³¼)
20171121 to latest
 ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê±°ë¶€ ìš”ì²­ì‹¤íŒ¨ (ì¸ì›ì´ˆê³¼)
*/
	MSG_ID_D3F = 0xd3f,
/*20171109 to 20171117
 ë‹˜ì´ ì°¨ë‹¨ í•´ì œ ë˜ì—ˆìŠµë‹ˆë‹¤.
20171121 to latest
 ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê°€ëŠ¥ìƒíƒœ
*/
	MSG_ID_D40 = 0xd40,
/*20171109 to 20171117
 ë‹˜ì„ ì°¨ë‹¨ í•´ì œí•˜ëŠ”ë° ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.
20171121 to latest
 ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê°€ëŠ¥ ìš”ì²­ì‹¤íŒ¨
*/
	MSG_ID_D41 = 0xd41,
/*20171109 to 20171117
 ë‹˜ì„ ì°¨ë‹¨ í•´ì œí•˜ëŠ”ë° ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤.(ì¸ì› ì´ˆê³¼)
20171121 to latest
 ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê°€ëŠ¥ ìš”ì²­ì‹¤íŒ¨ (ì¸ì›ì´ˆê³¼)
*/
	MSG_ID_D42 = 0xd42,
/*20171109 to latest
ì°¨ë‹¨ ë¦¬ìŠ¤íŠ¸ê°€ ì—†ìŠµë‹ˆë‹¤
*/
	MSG_ID_D43 = 0xd43,
/*20171109 to latest
-ì°¨ë‹¨ ë¦¬ìŠ¤íŠ¸-
*/
	MSG_ID_D44 = 0xd44,
#endif
#if PACKETVER >= 20171113
/*20171113 to latest
ì§„í–‰ì¤‘
Act
*/
	MSG_ID_D45 = 0xd45,
/*20171113 to latest
ì¶”ì²œ
Rec
*/
	MSG_ID_D46 = 0xd46,
/*20171113 to latest
ë³´ë¥˜ì¤‘
Pen
*/
	MSG_ID_D47 = 0xd47,
/*20171113 to latest
QUEST
*/
	MSG_ID_D48 = 0xd48,
/*20171113 to latest
ë‚´ìš©
For
*/
	MSG_ID_D49 = 0xd49,
/*20171113 to latest
ëª¬ìŠ¤í„°
*/
	MSG_ID_D4A = 0xd4a,
/*20171113 to latest
ë³´ìƒ
*/
	MSG_ID_D4B = 0xd4b,
/*20171113 to latest
EXP
*/
	MSG_ID_D4C = 0xd4c,
/*20171113 to latest
JEXP
*/
	MSG_ID_D4D = 0xd4d,
/*20171113 to latest
ì•„ì´í…œ
Item
*/
	MSG_ID_D4E = 0xd4e,
/*20171113 to latest
ì§„í–‰/ë³´ë¥˜
*/
	MSG_ID_D4F = 0xd4f,
/*20171113 to latest
í•˜ë‹¨ìœ¼ë¡œ ì´ë™
*/
	MSG_ID_D50 = 0xd50,
/*20171113 to latest
ê°„íŽ¸ í€˜ìŠ¤íŠ¸ì°½ì— í‘œì‹œ
*/
	MSG_ID_D51 = 0xd51,
#endif
#if PACKETVER >= 20171115
/*20171115 to latest
ìž…ë ¥ì‹œê°„
*/
	MSG_ID_D52 = 0xd52,
/*20171115 to latest
ì•„ì´ë”” ì €ìž¥
*/
	MSG_ID_D53 = 0xd53,
/*20171115 to latest
ë¹„ë°€ë²ˆí˜¸
Password
*/
	MSG_ID_D54 = 0xd54,
/*20171115 to latest
ì•„ì´ë””
*/
	MSG_ID_D55 = 0xd55,
/*20171115 to latest
íšŒì›ê°€ìž…
*/
	MSG_ID_D56 = 0xd56,
/*20171115 to latest
ë…¸ë¹„ìŠ¤ê³„ì—´
*/
	MSG_ID_D57 = 0xd57,
/*20171115 to latest
ìŠˆí¼ë…¸ë¹„ìŠ¤ê³„ì—´
*/
	MSG_ID_D58 = 0xd58,
/*20171115 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œ ë“±ë¡ì— ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D59 = 0xd59,
/*20171115 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œì— ë“±ë¡ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D5A = 0xd5a,
/*20171115 to 20180321
ì§ì—…ì„ í•œ ê°œ ì´ìƒ ì„ íƒí•´ì£¼ì„¸ìš”.
20180328 to latest
ëª¨ì§‘ì„ í¬ë§í•˜ëŠ” íŒŒí‹°ì›ì˜ ì§ì—…ì„ í•œ ê°œ ì´ìƒ ì„ íƒí•´ ì£¼ì„¸ìš”.
*/
	MSG_ID_D5B = 0xd5b,
/*20171115 to latest
ì§€ì—­ëª…ì„ ë‘ ê¸€ìž ì´ìƒ ìž…ë ¥í•´ì£¼ì„¸ìš”.
*/
	MSG_ID_D5C = 0xd5c,
/*20171115 to latest
%.1f%% (+ %sì„œë²„ %.1f%%)
*/
	MSG_ID_D5D = 0xd5d,
#endif
#if PACKETVER >= 20171121
/*20171121 to latest
/ex (ìºë¦­í„°ì´ë¦„) or /ì°¨ë‹¨ (ìºë¦­í„°ì´ë¦„) : í•´ë‹¹ ìºë¦­í„°ì— ëŒ€í•´ ì „ì²´ì±„íŒ… ë° ê·“ë§ ì°¨ë‹¨
*/
	MSG_ID_D5E = 0xd5e,
/*20171121 to latest
/in (ìºë¦­í„°ì´ë¦„) or /í•´ì œ (ìºë¦­í„°ì´ë¦„) : í•´ë‹¹ ìºë¦­í„°ì— ëŒ€í•´ ì „ì²´ì±„íŒ… ë° ê·“ë§ í—ˆìš©
*/
	MSG_ID_D5F = 0xd5f,
/*20171121 to latest
/ex or /ì°¨ë‹¨ : ì „ì²´ì±„íŒ… ë° ê·“ë§ ì°¨ë‹¨ ìºë¦­í„° ë¦¬ìŠ¤íŠ¸
*/
	MSG_ID_D60 = 0xd60,
/*20171121 to latest
/exall or /ì°¨ë‹¨ì „ë¶€ : ëª¨ë‘ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ì°¨ë‹¨
*/
	MSG_ID_D61 = 0xd61,
/*20171121 to latest
/inall or /í•´ì œì „ë¶€ : ëª¨ë‘ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ í—ˆìš©
*/
	MSG_ID_D62 = 0xd62,
/*20171121 to latest
ëª¨ë‘ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê±°ë¶€ìƒíƒœ
*/
	MSG_ID_D63 = 0xd63,
/*20171121 to latest
ëª¨ë‘ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê±°ë¶€ìš”ì²­ ì‹¤íŒ¨
*/
	MSG_ID_D64 = 0xd64,
/*20171121 to latest
ëª¨ë‘ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê°€ëŠ¥ìƒíƒœ
*/
	MSG_ID_D65 = 0xd65,
/*20171121 to latest
ëª¨ë‘ì—ê²Œ ì „ì²´ì±„íŒ… ë° ê·“ë§ ê°€ëŠ¥ìš”ì²­ ì‹¤íŒ¨
*/
	MSG_ID_D66 = 0xd66,
#endif
#if PACKETVER >= 20171123
/*20171123 to latest
ì˜¤í”„ë‹
*/
	MSG_ID_D67 = 0xd67,
#endif
#if PACKETVER >= 20171127
/*20171127 to latest
ë¡œê·¸ì¸ í™”ë©´ìœ¼ë¡œ ëŒì•„ê°€ì‹œê² ìŠµë‹ˆê¹Œ?
*/
	MSG_ID_D68 = 0xd68,
#endif
#if PACKETVER >= 20171204
/*20171204 to latest
íž˜ê³¼ ê³µê²©ë ¥ì´ ê°•í•´ì¡ŒìŠµë‹ˆë‹¤.
*/
	MSG_ID_D69 = 0xd69,
/*20171204 to latest
íž˜, ì§€ëŠ¥, ì†ìž¬ì£¼ ë° ëª…ì¤‘ë¥ ì´ ì¦ê°€í•˜ì˜€ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D6A = 0xd6a,
/*20171204 to latest
ë°©ì–´ë ¥ ë° HPê°€ ì¦ê°€ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D6B = 0xd6b,
/*20171204 to latest
ì ¤ìŠ¤íƒ€
*/
	MSG_ID_D6C = 0xd6c,
/*20171204 to latest
ê³„ì •ë²„í”„
*/
	MSG_ID_D6D = 0xd6d,
/*20171204 to latest
ì •ì•¡ì„œë¹„ìŠ¤
*/
	MSG_ID_D6E = 0xd6e,
#endif
#if PACKETVER >= 20171208
/*20171208 to latest
í˜„ìž¬ ì ‘ì†ì´ ì§€ì—°ë˜ê³  ìžˆìŠµë‹ˆë‹¤. ìˆœì°¨ì ìœ¼ë¡œ ì ‘ì†ì´ ê°€ëŠ¥í•˜ë‹ˆ ìž ì‹œ í›„ ìž¬ì ‘ì† ë¶€íƒë“œë¦½ë‹ˆë‹¤.
*/
	MSG_ID_D6F = 0xd6f,
/*20171208 to latest
í˜„ìž¬ ì ‘ì†ì´ ì§€ì—°ë˜ê³  ìžˆìœ¼ë‹ˆ ìž ì‹œ í›„ ìž¬ì ‘ì† ë¶€íƒë“œë¦½ë‹ˆë‹¤.
*/
	MSG_ID_D70 = 0xd70,
#endif
#if PACKETVER >= 20171213
/*20171213 to latest
ë¶ˆëŸ‰ ë‹¨ì–´ê°€ í¬í•¨ëœ ì´ë¦„ì€ ê²€ìƒ‰í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D71 = 0xd71,
/*20171213 to latest
íŒŒí‹° ë§ˆìŠ¤í„°ê°€ ìš”ì²­ì„ ë°›ì„ ìˆ˜ ì—†ëŠ” ë§µì— ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D72 = 0xd72,
/*20171213 to latest
íŒŒí‹°ë¥¼ ì°¾ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D73 = 0xd73,
/*20171213 to 20180321
ë‹˜ì˜ íŒŒí‹°ìš”ì²­ìž…ë‹ˆë‹¤.
20180328 to latest
ë‹˜ì˜ íŒŒí‹° ê°€ìž… ìš”ì²­ìž…ë‹ˆë‹¤.
*/
	MSG_ID_D74 = 0xd74,
/*20171213 to latest
http://ro.gnjoy.com
*/
	MSG_ID_D75 = 0xd75,
#endif
#if PACKETVER >= 20171214
/*20171214 to latest
â–²
*/
	MSG_ID_D76 = 0xd76,
/*20171214 to latest
â–¼
*/
	MSG_ID_D77 = 0xd77,
#endif
#if PACKETVER >= 20171227
/*20171227 to latest
ì´ë¯¸ ì¹œêµ¬ìž…ë‹ˆë‹¤
*/
	MSG_ID_D78 = 0xd78,
/*20171227 to latest
ìƒëŒ€ë°©ì„ ì°¾ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤
*/
	MSG_ID_D79 = 0xd79,
/*20171227 to latest
ì´ë¯¸ ë‹¤ë¥¸ ìºë¦­í„°ê°€ ì¹œêµ¬ ì‹ ì²­ ì¤‘ìž…ë‹ˆë‹¤.
*/
	MSG_ID_D7A = 0xd7a,
/*20171227 to latest
í˜¼êµ¬ìŠ¬ í‘œì‹œ ON
*/
	MSG_ID_D7B = 0xd7b,
/*20171227 to latest
í˜¼êµ¬ìŠ¬ í‘œì‹œ OFF
*/
	MSG_ID_D7C = 0xd7c,
#endif
#if PACKETVER >= 20180117
/*20180117 to latest
í•´ë‹¹ ê³„ì •ì€ 2ì°¨ ë¹„ë°€ë²ˆí˜¸ ì˜¤ìž…ë ¥ìœ¼ë¡œ ì¸í•´ ê²Œìž„ë‚´ ì ‘ì†ì´ ì œí•œëœ ìƒíƒœìž…ë‹ˆë‹¤. 
 %02dì‹œê°„ %02dë¶„ í›„ì— ì ‘ì†ì œí•œì´ í•´ì œë˜ë©°, ì ‘ì†ì œí•œì˜ í•´ì œëŠ” í™ˆíŽ˜ì´ì§€ -> ê°œì¸ì •ë³´ë³€ê²½ -> 2ì°¨ ë¹„ë°€ë²ˆí˜¸ ì—ì„œ ë³¸ì¸ì¸ì¦ í›„ ì§„í–‰í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
*/
	MSG_ID_D7D = 0xd7d,
/*20180117 to latest
ë³´ì•ˆíŒ¨ìŠ¤ì›Œë“œë¥¼ 3íšŒì´ìƒ í‹€ë¦¬ì…¨ìŠµë‹ˆë‹¤. ê³„ì • ë³´ì•ˆì„ ìœ„í•´ 24ì‹œê°„ë™ì•ˆ ê²Œìž„ë‚´ ì ‘ì†ì´ ì œí•œë©ë‹ˆë‹¤.
 ì ‘ì†ì œí•œì˜ í•´ì œëŠ” í™ˆíŽ˜ì´ì§€ -> ê°œì¸ì •ë³´ë³€ê²½ -> 2ì°¨ ë¹„ë°€ë²ˆí˜¸ ì—ì„œ ë³¸ì¸ì¸ì¦ í›„ ì§„í–‰í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
*/
	MSG_ID_D7E = 0xd7e,
/*20180117 to latest
ìš´ì˜ì§„
*/
	MSG_ID_D7F = 0xd7f,
/*20180117 to latest
%dì¼ì°¨ ì¶œì„ ë³´ìƒì´ ì§€ê¸‰ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D80 = 0xd80,
/*20180117 to 20180117
ê³„ì •ì„¤ì •ì •ë³´ ë°›ì•„ì˜¤ëŠ”ë° ì‹¤íŒ¨ í–ˆìŠµë‹ˆë‹¤.( ìž¬ì‹œë„ë¥¼ ìœ„í•´ì„œëŠ” ìž¬ì‹œìž‘ í•´ì•¼ í•©ë‹ˆë‹¤. )
20180131 to latest
ê³„ì • ì„¤ì • ë°ì´í„°ë¥¼ ë¶ˆëŸ¬ì˜¤ëŠ” ì¤‘ì— ì˜¤ë¥˜ê°€ ë°œìƒí–ˆìŠµë‹ˆë‹¤. ( ìž¬ì‹œë„ë¥¼ ìœ„í•´ì„œëŠ” ìž¬ì‹œìž‘ í•´ì•¼ í•©ë‹ˆë‹¤. )
*/
	MSG_ID_D81 = 0xd81,
/*20180117 to latest
í•´ë‹¹ ìŠ¤í‚¬ì€ íŒŒí‹° ìƒíƒœì—ì„œ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ID_D82 = 0xd82,
#endif
#if PACKETVER >= 20180131
/*20180131 to latest
íŒŒí‹° ëª¨ì§‘ì„ ì¤‘ë‹¨í•˜ì˜€ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D83 = 0xd83,
/*20180131 to latest
ê¸¸ë“œ ìƒë‚© ê²½í—˜ì¹˜ëŠ” ìµœëŒ€ %d%%ê¹Œì§€ ê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ID_D84 = 0xd84,
/*20180131 to latest
ê¸¸ë“œ ë ˆë²¨ì´ ìµœëŒ€ì—¬ì„œ ë” ì´ìƒ ê²½í—˜ì¹˜ë¥¼ ìƒë‚©í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D85 = 0xd85,
/*20180131 to latest
ê³„ì •ë³´ì•ˆì„ ìœ„í•˜ì—¬ MOTPë¯¸ì‚¬ìš©ìžëŠ” í™ˆíŽ˜ì´ì§€ ë¡œê·¸ì¸ë§Œ ê°€ëŠ¥í•©ë‹ˆë‹¤.
í™ˆíŽ˜ì´ì§€ë¡œ ë¡œê·¸ì¸ì„ ì‹œë„í•´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
*/
	MSG_ID_D86 = 0xd86,
/*20180131 to latest
ë¬¼ë¦¬ ê³µê²©ë ¥ê³¼ ë§ˆë²• ê³µê²©ë ¥ì´ í–¥ìƒë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D87 = 0xd87,
/*20180131 to latest
ë¬¼ë¦¬ ê³µê²©ë ¥ê³¼ ë§ˆë²• ê³µê²©ë ¥ì´ ê°ì†Œë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D88 = 0xd88,
#endif
#if PACKETVER >= 20180207
/*20180207 to latest
%s ì¶œì„ì²´í¬ ë³´ìƒ
%s Attendance Check Reward
*/
	MSG_ID_D89 = 0xd89,
/*20180207 to 20180511
ì´ë²¤íŠ¸ ê¸°ê°„ : %02dì›” %02dì¼ ~ %2dì›” %2dì¼ 24:00ê¹Œì§€
Event period : From %02d/%02d ~ Until %2d/%2d (Month/Day) 24:00
20180523 to latest
ì´ë²¤íŠ¸ ê¸°ê°„ : %02dì›” %02dì¼ ~ %02dì›” %02dì¼ 24:00ê¹Œì§€
*/
	MSG_ID_D8A = 0xd8a,
/*20180207 to latest
%dì¼ì°¨
%d Day
*/
	MSG_ID_D8B = 0xd8b,
/*20180207 to latest
%dì¼ì°¨ ì¶œì„ì²´í¬
í´ë¦­í•´ì£¼ì„¸ìš”~!
%d Day attendance check
Please click~!
*/
	MSG_ID_D8C = 0xd8c,
/*20180207 to latest
%dì¼ì°¨ ì¶œì„ ì„±ê³µ!
%d Day attendance success!
*/
	MSG_ID_D8D = 0xd8d,
/*20180207 to latest
D-day
*/
	MSG_ID_D8E = 0xd8e,
/*20180207 to latest
ì¼
Day
*/
	MSG_ID_D8F = 0xd8f,
/*20180207 to latest
ì¶œì„ì²´í¬ì— ì‹¤íŒ¨í•˜ì˜€ìŠµë‹ˆë‹¤. ë‹¤ì‹œ ì‹¤í–‰í•´ì£¼ì„¸ìš”.
Attendance Check failed. Please run again.
*/
	MSG_ID_D90 = 0xd90,
/*20180207 to latest
ì¶œì„ì²´í¬
Attendance Check
*/
	MSG_ID_D91 = 0xd91,
/*20180207 to latest
í˜„ìž¬ ì¶œì„ì²´í¬ ì´ë²¤íŠ¸ ê¸°ê°„ì´ ì•„ë‹™ë‹ˆë‹¤
This is not the current attendance check event
*/
	MSG_ATTENDANCE_UNAVAILABLE = 0xd92,
/*20180207 to 20180321
ê¸¸ë“œ ìƒë‚© ê²½í—˜ì¹˜ê°€ maxì— ë„ë‹¬í•˜ì—¬, ë” ì´ìƒ ê¸¸ë“œ ê²½í—˜ì¹˜ë¥¼ ëˆ„ì í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
20180328 to latest
ê¸¸ë“œ ìƒë‚© ê²½í—˜ì¹˜ê°€ maxì— ë„ë‹¬í•˜ì—¬, ë” ì´ìƒ ê¸¸ë“œ ê²½í—˜ì¹˜ë¥¼ ëˆ„ì í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D93 = 0xd93,
/*20180207 to latest
ê°œì¸ ìƒë‚© ê²½í—˜ì¹˜ê°€ maxì— ë„ë‹¬í•˜ì—¬, ë” ì´ìƒ ê¸¸ë“œ ê²½í—˜ì¹˜ë¥¼ ëˆ„ì í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D94 = 0xd94,
#endif
#if PACKETVER >= 20180213
/*20180213 to latest
ë©”ì‹œì§€
*/
	MSG_ID_D95 = 0xd95,
/*20180213 to latest
íŠ¸ìœ„í„°ì— ë©”ì„¸ì§€ ì „ì†¡ì„ ì‹¤íŒ¨ í–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D96 = 0xd96,
/*20180213 to latest
ì˜ë¬¸ 4ìž, í•œê¸€ 2ìž ì´ìƒìœ¼ë¡œ ìž…ë ¥í•´ì•¼ í•©ë‹ˆë‹¤.
Enter 4 english words and 2 chinese words
*/
	MSG_ID_D97 = 0xd97,
#endif
#if PACKETVER >= 20180314
/*20180314 to latest
ëª¬ìŠ¤í„°ì˜ í…Œì´ë°ì´ ë¶ˆê°€ëŠ¥í•œ ì§€ì—­ìž…ë‹ˆë‹¤.
*/
	MSG_ID_D98 = 0xd98,
#endif
#if PACKETVER >= 20180328
/*20180328 to latest
ìˆœìœ„ë¥¼ ê°€ì ¸ì˜¤ê³  ìžˆìŠµë‹ˆë‹¤...
*/
	MSG_ID_D99 = 0xd99,
/*20180328 to latest
í•´ë‹¹ ìŠ¤í‚¬ì€ íŒŒí‹°ìž¥ì¼ë•Œë§Œ ì‚¬ìš© ê°€ëŠ¥í•©ë‹ˆë‹¤.
*/
	MSG_ID_D9A = 0xd9a,
/*20180328 to latest
íŒŒíŠ¸ë„ˆì˜ SPê°€ ë¶€ì¡±í•˜ê±°ë‚˜, ìŠ¤í‚¬ ì‚¬ìš© ë¶ˆê°€ ìƒíƒœìž…ë‹ˆë‹¤.
*/
	MSG_ID_D9B = 0xd9b,
/*20180328 to latest
ì•„ë¥´ë°”ì´íŠ¸ ë…¸ì  ê°•ì œ ì¢…ë£Œ ì•Œë¦¼ë©”ì¼
*/
	MSG_ID_D9C = 0xd9c,
/*20180328 to latest
ì•ˆë…•í•˜ì„¸ìš”. ìš´ì˜íŒ€ìž…ë‹ˆë‹¤.
í•´ë‹¹ ì•„ë¥´ë°”ì´íŠ¸ ë…¸ì ì€ ìš´ì˜ì •ì±… ìœ„ë°°ë˜ëŠ” ì‚¬í•­ì´ í™•ì¸ë˜ì–´ ê°•ì œ ì¢…ë£Œë˜ì—ˆìŠµë‹ˆë‹¤.
ìžì„¸í•œ í™•ì¸ì„ ì›í•˜ì‹œëŠ” ê²½ìš°ì—ëŠ” 1:1 ë¬¸ì˜ë¥¼ ì ‘ìˆ˜í•´ ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
ê°ì‚¬í•©ë‹ˆë‹¤
*/
	MSG_ID_D9D = 0xd9d,
/*20180328 to latest
50% ì´ìƒì˜ ê°’ì„ ìž…ë ¥í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_D9E = 0xd9e,
/*20180328 to latest
íŒŒí‹° ê°€ìž… ìš”ì²­ì„ ë³´ëƒˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_D9F = 0xd9f,
/*20180328 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œì— íŒŒí‹°ë¥¼ ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤
*/
	MSG_ID_DA0 = 0xda0,
/*20180328 to latest
ìˆ˜ë½
*/
	MSG_ID_DA1 = 0xda1,
/*20180328 to latest
ê±°ì ˆ
*/
	MSG_ID_DA2 = 0xda2,
/*20180328 to latest
ì„¤ì • ê¶Œí•œì€ íŒŒí‹°ìž¥ì—ê²Œ ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DA3 = 0xda3,
/*20180328 to latest
í•´ë‹¹ ìºë¦­í„°ë¥¼ ì°¾ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DA4 = 0xda4,
/*20180328 to latest
ë…¸ì  ê°•ì œ ì² ê±°
*/
	MSG_ID_DA5 = 0xda5,
/*20180328 to latest
í•´ë‹¹ íŒŒí‹°ì˜ íŒŒí‹°ìž¥ì„ ì°¾ì„ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DA6 = 0xda6,
/*20180328 to latest
ìž¡ë ˆë²¨ì´ ë‚®ì•„ íŒŒí‹°ì— ê°€ìž… í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DA7 = 0xda7,
/*20180328 to latest
í˜„ìž¬ ìš”ì²­ìžê°€ íŒŒí‹°ê°€ìž…ì´ ë¶ˆê°€ëŠ¥í•œ ì§€ì—­ì— ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DA8 = 0xda8,
/*20180328 to latest
íŒŒí‹° ì¸ì›ìˆ˜ê°€ ì´ˆê³¼ë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DA9 = 0xda9,
/*20180328 to latest
%s íŒŒí‹°ì˜ íŒŒí‹°ìž¥ì´ íŒŒí‹° ê°€ìž…ì„ ìŠ¹ì¸í–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DAA = 0xdaa,
/*20180328 to latest
%s íŒŒí‹°ì˜ íŒŒí‹°ìž¥ì´ íŒŒí‹° ê°€ìž…ì„ ê±°ë¶€í–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DAB = 0xdab,
/*20180328 to latest
%s ë‹˜ì´ ì´ë¯¸ íŒŒí‹°ì— ê°€ìž… ì¤‘ìž…ë‹ˆë‹¤.
*/
	MSG_ID_DAC = 0xdac,
/*20180328 to latest
%s ë‹˜ì˜ íŒŒí‹° ê°€ìž…ì„ ìˆ˜ë½í–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DAD = 0xdad,
/*20180328 to latest
%s ë‹˜ì˜ íŒŒí‹° ê°€ìž…ì„ ê±°ë¶€í–ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DAE = 0xdae,
/*20180328 to latest
íŒŒí‹° ìš”ì²­ì„ ë°›ì„ ìˆ˜ ì—†ëŠ” ìƒíƒœì—¬ì„œ %së‹˜ì˜ ì‹ ì²­ì´ ê±°ì ˆë˜ì—ˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DAF = 0xdaf,
#endif
#if PACKETVER >= 20180411
/*20180411 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œ ë¦¬ìŠ¤íŠ¸
*/
	MSG_ID_DB0 = 0xdb0,
/*20180411 to latest
íŒŒí‹° ê°€ìž… ìš”ì²­
*/
	MSG_ID_DB1 = 0xdb1,
/*20180411 to latest
íŒŒí‹°ìž¥ì´ ì•„ë‹Œ ê²½ìš°, ëª¨í—˜ê°€ ì¤‘ê°œì†Œì— íŒŒí‹°ë¥¼ ë“±ë¡í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DB2 = 0xdb2,
/*20180411 to latest
íŒŒí‹° ëª¨ì§‘ì„ ì¤‘ë‹¨í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DB3 = 0xdb3,
/*20180411 to latest
ì¡´ìž¬í•˜ì§€ ì•ŠëŠ” íŒŒí‹° ê¸€ìž…ë‹ˆë‹¤.
*/
	MSG_ID_DB4 = 0xdb4,
#endif
#if PACKETVER >= 20180425
/*20180425 to latest
Zoom Out
*/
	MSG_ID_DB5 = 0xdb5,
/*20180425 to latest
%s : Zoom Outì„ ì¼œê±°ë‚˜ ëŒìˆ˜ ìžˆìŠµë‹ˆë‹¤ On Off
*/
	MSG_ID_DB6 = 0xdb6,
/*20180425 to latest
Zoom Out ê¸°ëŠ¥ì„ ì¼­ë‹ˆë‹¤ (On)
*/
	MSG_ID_DB7 = 0xdb7,
/*20180425 to latest
Zoom Out ê¸°ëŠ¥ì„ í•´ì œí•©ë‹ˆë‹¤ (Off)
*/
	MSG_ID_DB8 = 0xdb8,
/*20180425 to latest
/zoom
*/
	MSG_ID_DB9 = 0xdb9,
/*20180425 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œ
*/
	MSG_ID_DBA = 0xdba,
/*20180425 to latest
íŒŒí‹°ìž¥ì¸ ê²½ìš°, ê°€ìž… ìš”ì²­ì„ í•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DBB = 0xdbb,
/*20180425 to latest
ëª¨í—˜ê°€ ì¤‘ê°œì†Œì— ë“±ë¡ ì¤‘ìž…ë‹ˆë‹¤. ìž ì‹œë§Œ ê¸°ë‹¤ë ¤ ì£¼ì„¸ìš”.
*/
	MSG_ID_DBC = 0xdbc,
/*20180425 to latest
ë” ì´ìƒ ì§ì—…ì„ ì„ íƒí•  ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DBD = 0xdbd,
/*20180425 to latest
ê²Œìž„ ì¤‘ í•´ë‹¹ ìœ ì €ì˜ ê°€ìž… ìš”ì²­ì„ ë°›ì§€ ì•ŠìŠµë‹ˆë‹¤.
*/
	MSG_ID_DBE = 0xdbe,
/*20180425 to latest
ìž ì‹œ í›„ ë‹¤ì‹œ ì—´ì–´ì£¼ì‹œê¸° ë°”ëžë‹ˆë‹¤.
*/
	MSG_ID_DBF = 0xdbf,
/*20180425 to latest
ê³µì„±ì‹œìž‘ ì „ %dë¶„ ë™ì•ˆì€ í•´ë‹¹ ê¸°ëŠ¥ì„ ì´ìš©í•˜ì‹¤ ìˆ˜ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DC0 = 0xdc0,
#endif
#if PACKETVER >= 20180509
/*20180509 to latest
/viewclear
*/
	MSG_ID_DC1 = 0xdc1,
/*20180509 to latest
ê±´ë¬¼ ë°˜ íˆ¬ëª…í™” ON
*/
	MSG_ID_DC2 = 0xdc2,
/*20180509 to latest
ê±´ë¬¼ ë°˜ íˆ¬ëª…í™” OFF
*/
	MSG_ID_DC3 = 0xdc3,
/*20180509 to latest
ê±´ë¬¼ íˆ¬ëª…í™”
*/
	MSG_ID_DC4 = 0xdc4,
/*20180509 to latest
ì•Œë¡œ ë˜ëŒë¦¬ê¸°ê°€ ì‹¤íŒ¨í–ˆìŠµë‹ˆë‹¤. ë¡œë±ìŠ¤ ìž‘ì„±ì°½ì„ ë‹«ì•„ì£¼ì„¸ìš”.
*/
	MSG_ID_DC5 = 0xdc5,
#endif
#if PACKETVER >= 20180523
/*20180523 to latest
Emblem Frame
*/
	MSG_ID_DC6 = 0xdc6,
/*20180523 to latest
Emblem í…Œë‘ë¦¬ë¥¼ ê·¸ë ¤ì¤ë‹ˆë‹¤
*/
	MSG_ID_DC7 = 0xdc7,
/*20180523 to latest
Emblem í…Œë‘ë¦¬ë¥¼ ê·¸ë ¤ì£¼ì§€ ì•ŠìŠµë‹ˆë‹¤
*/
	MSG_ID_DC8 = 0xdc8,
#endif
#if PACKETVER >= 20180605
/*20180605 to latest
ìž¥ì°©ëœ ë¬´ê¸°ê°€ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DC9 = 0xdc9,
/*20180605 to latest
ì—ë„ˆì§€ êµ¬ì²´ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
*/
	MSG_ID_DCA = 0xdca,
/*20180605 to latest
ë°°ìš¸ ìˆ˜ ì—†ëŠ” ìŠ¤í‚¬(%s)ì´ í¬í•¨ë˜ì–´ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DCB = 0xdcb,
/*20180605 to latest
/frame
*/
	MSG_ID_DCC = 0xdcc,
#endif
#if PACKETVER >= 20180627
/*20180627 to latest
ì›¨í° ë¸”ë¡œí‚¹ ë°œë™í›„ ì œí•œì‹œê°„ ë‚´ì— ì‚¬ìš©ê°€ëŠ¥í•œ ìŠ¤í‚¬ìž…ë‹ˆë‹¤.
*/
	MSG_ID_DCD = 0xdcd,
/*20180627 to latest
ì•„ì´ë””í˜¹ì€ íŒ¨ìŠ¤ì›Œë“œê°€ ìž˜ëª»ë˜ì—ˆìë‹ˆë‹¤.
*/
	MSG_ID_DCE = 0xdce,
#endif
#if PACKETVER >= 20180711
/*20180711 to latest
E X P : %.1f%% ( basic 100.0%% %s %.1f%%)
*/
	MSG_ID_DCF = 0xdcf,
/*20180711 to latest
DROP  : %.1f%% ( basic 100.0%% %s %.1f%%)
*/
	MSG_ID_DD0 = 0xdd0,
/*20180711 to latest
DEATH : %.1f%% ( basic 100.0%% %s %.1f%%)
*/
	MSG_ID_DD1 = 0xdd1,
#endif
#if PACKETVER >= 20180725
/*20180725 to latest
'
*/
	MSG_ID_DD2 = 0xdd2,
/*20180725 to latest
;
*/
	MSG_ID_DD3 = 0xdd3,
/*20180725 to latest
--
*/
	MSG_ID_DD4 = 0xdd4,
#endif

};
#endif /* MAP_MESSAGES_ZERO_H */
