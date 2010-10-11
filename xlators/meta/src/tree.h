/*
   Copyright (c) 2006-2010 Gluster, Inc. <http://www.gluster.com>
   This file is part of GlusterFS.

   GlusterFS is free software; you can redistribute it and/or modify
   it under the terms of the GNU Affero General Public License as published
   by the Free Software Foundation; either version 3 of the License,
   or (at your option) any later version.

   GlusterFS is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program.  If not, see
   <http://www.gnu.org/licenses/>.
*/

#ifndef __TREE_H__
#define __TREE_H__

#ifndef _CONFIG_H
#define _CONFIG_H
#include "config.h"
#endif

meta_dirent_t *
insert_meta_entry (meta_dirent_t *root, const char *path,
		   int type, struct stat *stbuf, struct xlator_fops *fops);
meta_dirent_t *
lookup_meta_entry (meta_dirent_t *root, const char *path, 
		   char **remain);

#endif /* __TREE_H__ */
