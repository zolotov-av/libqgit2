/******************************************************************************
 * This file is part of the libqgit2 library
 * Copyright (c) 2011 Laszlo Papp <djszapi@archlinux.us>
 * Copyright (C) 2013 Leonardo Giordani
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef LIBQGIT2_OBJECT_H
#define LIBQGIT2_OBJECT_H

#include <QtCore/QString>
#include <QtCore/QDateTime>
#include <QtCore/QSharedPointer>

#include "libqgit2_export.h"

#include "git2.h"

namespace LibQGit2
{
    class Repository;
    class OId;
    class Commit;
    class Tag;
    class Tree;
    class Blob;

    /**
     * @brief Wrapper class for git_object.
     * This is the base class for every repository object, that is identified with it's LibQGit2::QGitOid.
     * @ingroup LibQGit2
     * @{
     */
    class LIBQGIT2_OBJECT_EXPORT Object
    {
        public:

            /**
             * Creates a Object that points to object. The pointer object becomes managed by
             * this Object, and must not be passed to another Object or closed outside this
             * object.
             */
            explicit Object(git_object *object = 0);

            /**
             * Copy constructor; creates a copy of the object, sharing the same underlaying data
             * structure.
             */
            Object(const Object& other);

            /**
             * Destroys the object.
             */
            ~Object();

            /**
             * Convert a generic object into a commit object.
             *
             * If the type of the object is commit, then a valid commit object is returned,
             * otherwise the returned object will be null.
             */
            Commit toCommit() const;

            /**
             * Convert a generic object into a tag object.
             *
             * If the type of the object is tag, then a valid tag object is returned,
             * otherwise the returned object will be null.
             */
            Tag toTag() const;

            /**
             * Convert a generic object into a tree object.
             *
             * If the type of the object is tree, then a valid tree object is returned,
             * otherwise the returned object will be null.
             */
            Tree toTree() const;

            /**
             * Convert a generic object into a blob object.
             *
             * If the type of the object is blob, then a valid blob object is returned,
             * otherwise the returned object will be null.
             */
            Blob toBlob() const;

            /**
             * Return true if the git object pointer owned by this instance is null
             */
            bool isNull() const;

            /**
             * Get the id (SHA1) of a repository object
             *
             * In-memory objects created by git_object_new() do not
             * have a SHA1 ID until they are written on a repository.
             *
             * @return the SHA1 id
             */
            OId oid() const;

            /**
             * Return true if the object represents a commit; false otherwise
             */
            bool isCommit() const;

            /**
             * Return true if the object represents a tag; false otherwise
             */
            bool isTag() const;

            /**
             * Return true if the object represents a tree; false otherwise
             */
            bool isTree() const;

            /**
             * Return true if the object represents a blob; false otherwise
             */
            bool isBlob() const;

            /**
             * Get the object type as a string
             */
            QString typeString() const;

            /**
             * Get the repository that owns this object
             *
             * @param obj the object
             * @return the repository who owns this object
             */
            Repository owner() const;

            git_object* data() const;
            const git_object* constData() const;

        private:
            QSharedPointer<git_object> d;
    };

    /**
     * Compares two Objects. Objects are equal when their oid is.
     */
    bool operator ==(const Object &o1, const Object &o2);
    /**
     * Compares two Objects. Objects are equal when their oid is.
     */
    bool operator !=(const Object &o1, const Object &o2);

    /**@}*/
}

#endif // LIBQGIT2_OBJECT_H
