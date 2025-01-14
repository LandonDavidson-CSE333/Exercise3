// Copyright 2025 Landon Davidson
// Landon Davidson
// landond@uw.edu

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Point3d struct that has the uint16_t properties x, y,
// and z to represent a point in 3d space
typedef struct {
  uint16_t x;
  uint16_t y;
  uint16_t z;
} Point3d;

// Take three uint16_t args and return a Point3d struct
Point3d* AllocatePoint3d(uint16_t, uint16_t, uint16_t);

// #define testing values for the x, y, and z fields of the struct
#define X_VAL 10
#define Y_VAL 20
#define Z_VAL 30
// Create a Point3d struct with AllocatePoint3d
// and test that each field was assigned properly and then free
int main(int argc, char** argv) {
  // Store Point3d* returned by AllocatePoint3d
  Point3d *pt_ptr = AllocatePoint3d(X_VAL, Y_VAL, Z_VAL);
  // Test that each field of the Point3d struct was assigned properly
  if (pt_ptr->x != X_VAL) {
    printf("Point3d X field was not assigned properly");
  }
  if (pt_ptr->y != Y_VAL) {
    printf("Point3d Y field was not assigned properly");
  }
  if (pt_ptr->z != Z_VAL) {
    printf("Point3d Z field was not assigned properly");
  }
  // Free pt_ptr to avoid memory leaks
  free(pt_ptr);
}

Point3d* AllocatePoint3d(uint16_t x, uint16_t y, uint16_t z) {
  // Malloc a block of size Point3d and assigns x, y, z
  // to Point3d's x, y, z fields and return pointer to Point3d
  Point3d *pt_ptr = malloc(sizeof(Point3d));
  pt_ptr->x = x;
  pt_ptr->y = y;
  pt_ptr->z = z;
  return pt_ptr;
}
