/*-----------------------------------------------------------------*\ 
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|    Source code          \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                      Projeto Ragnarok Online                      |
+-------------------------------------------------------------------+
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef COMMON_GRFIO_H
#define COMMON_GRFIO_H

#include "common/HPExport.h"

/** @file
 * GRF I/O library.
 */

/// The GRF I/O interface.
struct grfio_interface {
	/**
	 * Interface initialization.
	 *
	 * @param fname Name of the configuration file.
	 */
	void (*init) (const char *fname);

	/// Interface finalization.
	void (*final) (void);

	/**
	 * Reads a file into a newly allocated buffer (from grf or data directory).
	 *
	 * @param[in]  fname Name of the file to read.
	 * @param[out] size  Buffer to return the size of the read file (optional).
	 * @return The file data.
	 * @retval NULL in case of error.
	 */
	void *(*reads) (const char *fname, int *size);

	/**
	 * Finds a file in the grf or data directory
	 *
	 * @param fname The file to find.
	 * @return The original file name.
	 * @retval NULL if the file wasn't found.
	 */
	const char *(*find_file) (const char *fname);

	/**
	 * Calculates a CRC32 hash.
	 *
	 * @param buf The data to hash.
	 * @param len Data length.
	 *
	 * @return The CRC32 hash.
	 */
	unsigned long (*crc32) (const unsigned char *buf, unsigned int len);

	/**
	 * Decompresses ZIP data.
	 *
	 * Decompresses the source buffer into the destination buffer.
	 * source_len is the byte length of the source buffer.  Upon entry,
	 * dest_len is the total size of the destination buffer, which must be
	 * large enough to hold the entire uncompressed data.  (The size of the
	 * uncompressed data must have been saved previously by the compressor
	 * and transmitted to the decompressor by some mechanism outside the
	 * scope of this compression library.) Upon exit, dest_len is the
	 * actual size of the uncompressed buffer.
	 *
	 * @param[in,out] dest       The destination (uncompressed) buffer.
	 * @param[in,out] dest_len   Max length of the destination buffer, returns length of the decompressed data.
	 * @param[in]     source     The source (compressed) buffer.
	 * @param[in]     source_len Source data length.
	 * @return error code.
	 * @retval Z_OK in case of success.
	 */
	int (*decode_zip) (void *dest, unsigned long *dest_len, const void *source, unsigned long source_len);

	/**
	 * Compresses data to ZIP format.
	 *
	 * Compresses the source buffer into the destination buffer.
	 * source_len is the byte length of the source buffer.  Upon entry,
	 * dest_len is the total size of the destination buffer, which must be
	 * at least the value returned by compressBound(source_len).  Upon
	 * exit, dest_len is the actual size of the compressed buffer.
	 *
	 * @param[in,out] dest       The destination (compressed) buffer (if NULL, a new buffer will be created).
	 * @param[in,out] dest_len   Max length of the destination buffer (if 0, it will be calculated).
	 * @param[in]     source     The source (uncompressed) buffer.
	 * @param[in]     source_len Source data length.
	 */
	int (*encode_zip) (void *dest, unsigned long *dest_len, const void *source, unsigned long source_len);
};

/**
 * Reads a file into a newly allocated buffer (from grf or data directory)
 *
 * @param fn The filename to read.
 *
 * @see grfio_interface::reads()
 * @related grfio_interface
 */
#define grfio_read(fn) grfio->reads((fn), NULL)

#ifdef HPM_MAIN_CORE
void grfio_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct grfio_interface *grfio; ///< Pointer to the grfio interface.
#endif /* COMMON_GRFIO_H */
