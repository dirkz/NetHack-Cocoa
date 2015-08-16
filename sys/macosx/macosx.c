/*
 *  macosx.c
 *  SlashEM
 *
 *  Created by dirk on 1/10/10.
 *  Copyright 2010 Dirk Zimmermann. All rights reserved.
 *
 */

#include "hack.h"

#include "macosx.h"

#ifdef MACOSX_CHDIR_ARGV0

FILE *osx_fopen(const char *restrict filename, const char *restrict mode) {
	char path[FQN_MAX_FILENAME] = "dat/";
	strcat(path, filename);
	return fopen(path, mode);
}

#endif /* MACOSX_CHDIR_ARGV0 */
