ALTER TABLE `chatlog` MODIFY COLUMN `type` enum('O','W','P','G','M','C') NOT NULL DEFAULT 'O' AFTER `time`;
