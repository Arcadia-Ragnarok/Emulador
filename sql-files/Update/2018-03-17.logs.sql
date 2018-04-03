ALTER TABLE `chatlog` MODIFY COLUMN `type` enum('O','W','P','G','M','C') NOT NULL DEFAULT 'O' AFTER `time`;
ALTER TABLE `rodex_mail` ADD COLUMN `sender_read` TINYINT(2) NOT NULL DEFAULT '0' AFTER `is_read`;
