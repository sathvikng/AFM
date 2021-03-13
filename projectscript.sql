create database users;
use users;
CREATE TABLE `users`.`usernamepwd` (
  `UserID` INT NOT NULL AUto_increment,
  `username` VARCHAR(45) NULL,
  `userpwd` VARCHAR(45) NULL,
  `userphno` VARCHAR(45) NULL,
  `useraddress` VARCHAR(45) NULL,
   primary key(`UserID`));
INSERT INTO usernamepwd(`username`,`userpwd`,`userphno`,`useraddress`) values (
	'Admin','gymadmin123','9456594565','Bengaluru');
ALTER TABLE usernamepwd 
ADD COLUMN bill int default 0,
ADD COLUMN bodyfat int null,
ADD COLUMN weight int null,
ADD COLUMN wrktype varchar(45) NULL;

ALTER TABLE usernamepwd
	ADD COLUMN DOB DATE NULL, 
	ADD COLUMN DOJ date default NOW(),
	ADD COLUMN currdate DATEtime DEFAULT now(),
	ADD COLUMN usrtype varchar(45) NULL;


ALTER TABLE usernamepwd
	ADD COLUMN Age INT NULL;
ALTER TABLE usernamepwd
	ADD COLUMN MCAL INT NULL;
    
CREATE TABLE `users`.`transac` (
  `transactionid` INT NOT NULL auto_increment,
  `userid` INT NULL,
  `amountpaid` INT NULL,
  `dap` DATE NULL,
  PRIMARY KEY (`transactionid`));


ALTER TABLE usernamepwd
	DROP COLUMN age;
    
ALTER TABLE `users`.`transac` 
CHANGE COLUMN `dap` `dap` DATETIME NULL DEFAULT CURRENT_TIMESTAMP ;
    
SELECT CURDATE();
use users;
delete from usernamepwd where UserID=7;
select * from transac;
select * from usernamepwd;
UPDATE usernamepwd set bodyfat=10,weight=100,wrktype="Rest",DOB='1985-01-01' where UserID=1;
UPDATE usernamepwd set wrktype="CUT" where UserID=6;