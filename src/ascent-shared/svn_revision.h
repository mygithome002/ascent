// $Id$

#ifndef _SVN_REVISION_H
#define _SVN_REVISION_H

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\

static const char * REVISION_TEXT	= "$Rev$";
static const char * BUILD_TAG		= "4.0-STABLE";

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\

ASCENT_INLINE int g_getRevision()
{
	const char* p = REVISION_TEXT + 6;
	return atoi( p );
}

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\

#endif     
