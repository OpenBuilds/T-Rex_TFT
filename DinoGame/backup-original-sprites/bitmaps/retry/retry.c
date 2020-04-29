/* GIMP RGB C-Source image dump (retry.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[32 * 29 * 3 + 1];
} gimp_image = {
  32, 29, 3,
  "\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377\377\377\377\377"
  "\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377"
  "\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSS\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377"
  "\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377\377\377\377SSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377SSSSSSSSS\377\377\377\377\377\377\377\377\377\377"
  "\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377SSSSSSSSS\377\377\377\377\377\377\377\377\377\377\377"
  "\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377SSSSSSSSSSSSSSS\377\377\377\377\377\377\377\377\377\377\377\377"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSS"
  "SSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377"
  "\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SS"
  "SSSSSSSSSS\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSS\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377"
  "\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377"
  "\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSS\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377SSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377"
  "\377\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"
  "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\377\377\377\377\377\377\377\377\377",
};
