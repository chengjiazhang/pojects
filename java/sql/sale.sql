/*
 Navicat Premium Data Transfer

 Source Server         : zcj
 Source Server Type    : MySQL
 Source Server Version : 80011
 Source Host           : localhost:3306
 Source Schema         : zcj

 Target Server Type    : MySQL
 Target Server Version : 80011
 File Encoding         : 65001

 Date: 09/10/2019 19:00:17
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for sale
-- ----------------------------
DROP TABLE IF EXISTS `sale`;
CREATE TABLE `sale` (
  `commodityname` varchar(45) NOT NULL,
  `commodityid` int(10) unsigned NOT NULL,
  `sellTime` datetime NOT NULL,
  `number` varchar(45) NOT NULL,
  `money` double NOT NULL,
  `operator` varchar(45) NOT NULL,
  `saleid` int(11) NOT NULL,
  `id` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312 PACK_KEYS=1;

-- ----------------------------
-- Records of sale
-- ----------------------------
BEGIN;
INSERT INTO `sale` VALUES ('可乐', 1, '2019-10-10 00:00:00', '1', 2, 'lilei', 1, 1);
INSERT INTO `sale` VALUES ('雪碧', 2, '2019-10-10 00:00:00', '1', 3, 'lili', 2, 2);
INSERT INTO `sale` VALUES ('橙汁', 3, '2019-10-10 00:00:00', '1', 3.5, 'ko', 3, 3);
COMMIT;

SET FOREIGN_KEY_CHECKS = 1;
