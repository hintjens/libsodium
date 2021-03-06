#ifndef crypto_stream_salsa20_H
#define crypto_stream_salsa20_H

/*
 *  WARNING: This is just a stream cipher. It is NOT authenticated encryption.
 *  While it provides some protection against eavesdropping, it does NOT
 *  provide any security against active attacks.
 *  Unless you know what you're doing, what you are looking for is probably
 *  the crypto_box functions.
 */

#include <stddef.h>
#include "export.h"

#ifdef __cplusplus
# if __GNUC__
#  pragma GCC diagnostic ignored "-Wlong-long"
# endif
extern "C" {
#endif

#define crypto_stream_salsa20_KEYBYTES 32U
SODIUM_EXPORT
size_t crypto_stream_salsa20_keybytes(void);

#define crypto_stream_salsa20_NONCEBYTES 8U
SODIUM_EXPORT
size_t crypto_stream_salsa20_noncebytes(void);

SODIUM_EXPORT
const char * crypto_stream_salsa20_primitive(void);

SODIUM_EXPORT
int crypto_stream_salsa20(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_salsa20_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

#ifdef __cplusplus
}
#endif

#endif
