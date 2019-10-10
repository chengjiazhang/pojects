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

 Date: 10/10/2019 11:05:18
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for resale
-- ----------------------------
DROP TABLE IF EXISTS `resale`;
CREATE TABLE `resale` (
  `commodityname` varchar(45) NOT NULL,
  `commodityid` int(10) unsigned NOT NULL,
  `sellTime` datetime NOT NULL,
  `number` varchar(45) NOT NULL,
  `money` double NOT NULL,
  `operator` varchar(45) NOT NULL,
  `saleid` int(11) NOT NULL,
  `id` int(11) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=33 DEFAULT CHARSET=gb2312 PACK_KEYS=1;

-- ----------------------------
-- Records of resale
-- ----------------------------
BEGIN;
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 4);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 5);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 6);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 7);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 8);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 9);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 10);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 11);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 12);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 13);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 14);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 15);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 16);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 17);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 18);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 19);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 20);
INSERT INTO `resale` VALUES ('雪碧', 2, '2019-09-24 00:00:00', '1', 3, 'lili', 2, 21);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 22);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 23);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 24);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 25);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 26);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 27);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 28);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 29);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-10-10 00:00:00', '1', 2, 'lilei', 1, 30);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-10-10 00:00:00', '1', 2, 'lilei', 1, 31);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-10-10 00:00:00', '1', 2, 'lilei', 1, 32);
COMMIT;

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
INSERT INTO `sale` VALUES ('酸奶', 4, '2019-10-10 00:00:00', '1', 5, 'zz', 4, 4);
INSERT INTO `sale` VALUES ('运动饮料', 5, '2019-10-10 00:00:00', '1', 4, 'll', 5, 5);
COMMIT;

SET FOREIGN_KEY_CHECKS = 1;
