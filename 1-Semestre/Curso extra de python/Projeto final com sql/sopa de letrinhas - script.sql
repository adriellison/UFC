-- MySQL Script generated by MySQL Workbench
-- Mon Dec 30 00:47:24 2019
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema bd_game
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema bd_game
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `bd_game` DEFAULT CHARACTER SET utf8 ;
USE `bd_game` ;

-- -----------------------------------------------------
-- Table `bd_game`.`categorias`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `bd_game`.`categorias` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `bd_game`.`palavras`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `bd_game`.`palavras` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NULL,
  `categorias_id` INT NOT NULL,
  PRIMARY KEY (`id`),
  INDEX `fk_palavras_categorias_idx` (`categorias_id` ASC) VISIBLE,
  CONSTRAINT `fk_palavras_categorias`
    FOREIGN KEY (`categorias_id`)
    REFERENCES `bd_game`.`categorias` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
