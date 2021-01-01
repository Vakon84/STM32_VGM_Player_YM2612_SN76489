#define logo_width 128
#define logo_height 64
#include <Arduino.h>
const static uint8_t logo[]{
  0x3F, 0x80, 0x1F, 0xF8, 0x3F, 0xF0, 0xFF, 0x01, 0x3C, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x1F, 0xFC, 0x3F, 0xFC, 0xFF, 0x01, 
  0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x1F, 0xFE, 
  0x3F, 0xFE, 0xFF, 0x01, 0x7E, 0x00, 0x73, 0x18, 0x03, 0x80, 0x10, 0x0C, 
  0x7F, 0xC0, 0x1F, 0x1F, 0x00, 0x3E, 0x00, 0x00, 0xFE, 0x80, 0x8C, 0x24, 
  0x02, 0x00, 0x09, 0x12, 0x7F, 0xC0, 0x1F, 0x0F, 0x00, 0x1F, 0x00, 0x00, 
  0xFF, 0x00, 0x8C, 0x20, 0x02, 0x00, 0x09, 0x10, 0x7F, 0xC0, 0x9F, 0x0F, 
  0x00, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x8A, 0x10, 0x02, 0x07, 0x09, 0x0C, 
  0xEF, 0xE0, 0x9E, 0x07, 0x00, 0x0F, 0x00, 0x80, 0xE7, 0x01, 0x89, 0x08, 
  0x02, 0x00, 0x06, 0x10, 0xEF, 0xE0, 0x9E, 0x07, 0x00, 0x0F, 0x00, 0x80, 
  0xE7, 0x81, 0x88, 0x04, 0x02, 0x00, 0x06, 0x12, 0xEF, 0xE0, 0x9E, 0xFF, 
  0xBF, 0x0F, 0xFF, 0x81, 0xC7, 0x83, 0x77, 0x3C, 0x02, 0x00, 0x46, 0x0C, 
  0xCF, 0x71, 0x9E, 0xFF, 0xBF, 0x0F, 0xFF, 0xC1, 0xC3, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xCF, 0x71, 0x9E, 0xFF, 0xBF, 0x0F, 0xFF, 0xC1, 
  0xC3, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCF, 0x71, 0x9E, 0x07, 
  0x00, 0x0F, 0xE0, 0xE1, 0x81, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x8F, 0x3B, 0x9E, 0x07, 0x00, 0x0F, 0xE0, 0xE1, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x8F, 0x3B, 0x9E, 0x0F, 0x00, 0x0F, 0xE0, 0xE1, 
  0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8F, 0x3B, 0x1E, 0x0F, 
  0x00, 0x1F, 0xE0, 0xF1, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x8F, 0x1F, 0x1E, 0x1F, 0x00, 0x3E, 0xE0, 0xF1, 0x00, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1E, 0xFE, 0x3F, 0xFE, 0xFF, 0x79, 
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1E, 0xFC, 
  0x3F, 0xFC, 0xFF, 0x79, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0F, 0x1F, 0x1E, 0xF8, 0x3F, 0xF0, 0xFF, 0x7D, 0x00, 0x3C, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x1F, 0x78, 0x00, 
  0x00, 0x0F, 0x80, 0xFF, 0xDF, 0xFF, 0x3F, 0xFC, 0x9F, 0xFF, 0x0F, 0x00, 
  0xFF, 0x7F, 0x78, 0x00, 0x80, 0x1F, 0xC0, 0xFF, 0xDF, 0xFF, 0x3F, 0xFE, 
  0x9F, 0xFF, 0x3F, 0x00, 0xFF, 0xFF, 0x78, 0x00, 0x80, 0x1F, 0xE0, 0xFF, 
  0xDF, 0xFF, 0x3F, 0xFF, 0x9F, 0xFF, 0x7F, 0x00, 0x0F, 0xF8, 0x79, 0x00, 
  0x80, 0x3F, 0xE0, 0x03, 0x00, 0xF0, 0x80, 0x0F, 0x80, 0x07, 0x7C, 0x00, 
  0x0F, 0xE0, 0x79, 0x00, 0xC0, 0x3F, 0xE0, 0x01, 0x00, 0xF0, 0x80, 0x07, 
  0x80, 0x07, 0x7C, 0x00, 0x0F, 0xE0, 0x79, 0x00, 0xC0, 0x3F, 0xF0, 0x01, 
  0x00, 0xF0, 0xC0, 0x07, 0x80, 0x07, 0x78, 0x00, 0x0F, 0xE0, 0x79, 0x00, 
  0xE0, 0x79, 0xE0, 0x01, 0x00, 0xF0, 0xC0, 0x03, 0x80, 0x07, 0x7C, 0x00, 
  0x0F, 0xF0, 0x78, 0x00, 0xE0, 0x79, 0xE0, 0x07, 0x00, 0xF0, 0xC0, 0x03, 
  0x80, 0x07, 0x7C, 0x00, 0xFF, 0xFF, 0x78, 0x00, 0xE0, 0xF1, 0xE0, 0xFF, 
  0x0F, 0xF0, 0xC0, 0xFF, 0x9F, 0xFF, 0x7F, 0x00, 0xFF, 0x3F, 0x78, 0x00, 
  0xF0, 0xF0, 0xC0, 0xFF, 0x1F, 0xF0, 0xC0, 0xFF, 0x9F, 0xFF, 0x3F, 0x00, 
  0xFF, 0x7F, 0x78, 0x00, 0xF0, 0xF0, 0x80, 0xFF, 0x3F, 0xF0, 0xC0, 0xFF, 
  0x9F, 0xFF, 0x1F, 0x00, 0x0F, 0xF0, 0x78, 0x00, 0x78, 0xE0, 0x01, 0x00, 
  0x3E, 0xF0, 0xC0, 0x03, 0x80, 0xFF, 0x0F, 0x00, 0x0F, 0xE0, 0x79, 0x00, 
  0xF8, 0xFF, 0x01, 0x00, 0x3C, 0xF0, 0xC0, 0x03, 0x80, 0x07, 0x0F, 0x00, 
  0x0F, 0xE0, 0x79, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x3C, 0xF0, 0xC0, 0x07, 
  0x80, 0x07, 0x1F, 0x00, 0x0F, 0xE0, 0xF9, 0x00, 0x3C, 0xC0, 0x03, 0x00, 
  0x3C, 0xF0, 0x80, 0x07, 0x80, 0x07, 0x1E, 0x00, 0x0F, 0xF0, 0xF1, 0x01, 
  0x3C, 0xC0, 0x07, 0x00, 0x3E, 0xF0, 0x80, 0x0F, 0x80, 0x07, 0x3E, 0x00, 
  0xFF, 0xFF, 0xF1, 0xFF, 0x1E, 0x80, 0xE7, 0xFF, 0x1F, 0xF0, 0x00, 0xFF, 
  0x9F, 0x07, 0x3C, 0x00, 0xFF, 0xFF, 0xE0, 0xFF, 0x1E, 0x80, 0xE7, 0xFF, 
  0x1F, 0xF0, 0x00, 0xFE, 0x9F, 0x07, 0x7C, 0x00, 0xFF, 0x3F, 0x80, 0xFF, 
  0x1F, 0x00, 0xEF, 0xFF, 0x07, 0xF0, 0x00, 0xFC, 0x9F, 0x07, 0xF8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x01, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x03, 0x80, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x8C, 0x03, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x8C, 0x03, 0xC0, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8C, 0x03, 0xC0, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x08, 0x86, 0x03, 0x60, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x86, 0x03, 0x20, 0x0E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x83, 0x03, 0x30, 
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xC1, 0x01, 0x30, 0x0E, 0x0C, 0x81, 0x00, 0x00, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xC1, 0x40, 0x18, 0x0E, 0x0C, 0x81, 0x00, 
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x60, 0xF8, 0x18, 
  0x0E, 0x1E, 0x80, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFE, 0x00, 0xF8, 0x0F, 0x06, 0x12, 0xF1, 0x1C, 0x1A, 0x10, 0x9C, 0x89, 
  0x9C, 0xA3, 0xE1, 0x38, 0x7C, 0x00, 0xFC, 0x07, 0x07, 0x12, 0x89, 0x20, 
  0x26, 0x10, 0xA0, 0xD9, 0x44, 0x64, 0x32, 0x44, 0x00, 0x00, 0xFC, 0x07, 
  0x03, 0x3F, 0x89, 0x3C, 0x22, 0x10, 0x3C, 0x55, 0xC4, 0x27, 0x12, 0x7C, 
  0x00, 0x00, 0xFC, 0x87, 0x01, 0x33, 0x89, 0x22, 0x22, 0x10, 0x22, 0x55, 
  0x44, 0x20, 0x12, 0x04, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x21, 0x89, 0x22, 
  0x22, 0x10, 0x22, 0x57, 0xC4, 0x24, 0x12, 0x4C, 0x00, 0x00, 0xF0, 0x00, 
  0x80, 0x61, 0xF1, 0x3C, 0x22, 0xF0, 0x3D, 0x22, 0x84, 0x27, 0xE2, 0x78, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00};