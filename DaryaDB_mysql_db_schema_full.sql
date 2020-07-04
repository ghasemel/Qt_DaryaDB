
CREATE TABLE `kol` (`code` INTEGER NOT NULL AUTO_INCREMENT, `name` TEXT, PRIMARY KEY (`code`));
CREATE TABLE `moin` (`code` INTEGER NOT NULL AUTO_INCREMENT, `name` TEXT, `code_kol` INTEGER, PRIMARY KEY (`code`));
CREATE TABLE `taf` (`code` INTEGER NOT NULL AUTO_INCREMENT, `name` TEXT, `code_moin` INTEGER, PRIMARY KEY (`code`));
CREATE TABLE `v_kol_moin` (`qx_ee_no_id` INTEGER NOT NULL AUTO_INCREMENT, `code` INTEGER, `name` TEXT, `moin_code` INTEGER, `moin_name` TEXT, PRIMARY KEY (`qx_ee_no_id`));
ALTER TABLE `moin` ADD CONSTRAINT fk_moin_code_kol FOREIGN KEY (`code_kol`) REFERENCES `kol` (`code`);
ALTER TABLE `taf` ADD CONSTRAINT fk_taf_code_moin FOREIGN KEY (`code_moin`) REFERENCES `moin` (`code`);

