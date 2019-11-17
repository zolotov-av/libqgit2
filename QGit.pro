TEMPLATE = lib
CONFIG += staticlib

HEADERS+=src/private/annotatedcommit.h
HEADERS+=src/private/buffer.h
HEADERS+=src/private/pathcodec.h
HEADERS+=src/private/remotecallbacks.h
HEADERS+=src/private/strarray.h
HEADERS+=src/credentials_p.h
HEADERS+=src/libqgit2_config.h
HEADERS+=src/qgitblob.h
HEADERS+=src/qgitcheckoutoptions.h
HEADERS+=src/qgitcherrypickoptions.h
HEADERS+=src/qgitcommit.h
HEADERS+=src/qgitconfig.h
HEADERS+=src/qgitcredentials.h
HEADERS+=src/qgitdatabasebackend.h
HEADERS+=src/qgitdatabase.h
HEADERS+=src/qgitdiffdelta.h
HEADERS+=src/qgitdifffile.h
HEADERS+=src/qgitdiff.h
HEADERS+=src/qgitexception.h
HEADERS+=src/qgitglobal.h
HEADERS+=src/qgitindexentry.h
HEADERS+=src/qgitindex.h
HEADERS+=src/qgitindexmodel.h
HEADERS+=src/qgitmergeoptions.h
HEADERS+=src/qgitobject.h
HEADERS+=src/qgitoid.h
HEADERS+=src/qgitrebase.h
HEADERS+=src/qgitrebaseoptions.h
HEADERS+=src/qgitref.h
HEADERS+=src/qgitremote.h
HEADERS+=src/qgitrepository.h
HEADERS+=src/qgitrevwalk.h
HEADERS+=src/qgitsignature.h
HEADERS+=src/qgitstatusentry.h
HEADERS+=src/qgitstatus.h
HEADERS+=src/qgitstatuslist.h
HEADERS+=src/qgitstatusoptions.h
HEADERS+=src/qgittag.h
HEADERS+=src/qgittreeentry.h
HEADERS+=src/qgittree.h

SOURCES+=src/private/annotatedcommit.cpp
SOURCES+=src/private/buffer.cpp
SOURCES+=src/private/pathcodec.cpp
SOURCES+=src/private/remotecallbacks.cpp
SOURCES+=src/private/strarray.cpp
SOURCES+=src/qgitblob.cpp
SOURCES+=src/qgitcheckoutoptions.cpp
SOURCES+=src/qgitcherrypickoptions.cpp
SOURCES+=src/qgitcommit.cpp
SOURCES+=src/qgitconfig.cpp
SOURCES+=src/qgitcredentials.cpp
SOURCES+=src/qgitdatabasebackend.cpp
SOURCES+=src/qgitdatabase.cpp
SOURCES+=src/qgitdiff.cpp
SOURCES+=src/qgitdiffdelta.cpp
SOURCES+=src/qgitdifffile.cpp
SOURCES+=src/qgitexception.cpp
SOURCES+=src/qgitglobal.cpp
SOURCES+=src/qgitindex.cpp
SOURCES+=src/qgitindexentry.cpp
SOURCES+=src/qgitindexmodel.cpp
SOURCES+=src/qgitmergeoptions.cpp
SOURCES+=src/qgitobject.cpp
SOURCES+=src/qgitoid.cpp
SOURCES+=src/qgitrebase.cpp
SOURCES+=src/qgitrebaseoptions.cpp
SOURCES+=src/qgitref.cpp
SOURCES+=src/qgitremote.cpp
SOURCES+=src/qgitrepository.cpp
SOURCES+=src/qgitrevwalk.cpp
SOURCES+=src/qgitsignature.cpp
SOURCES+=src/qgitstatus.cpp
SOURCES+=src/qgitstatusentry.cpp
SOURCES+=src/qgitstatuslist.cpp
SOURCES+=src/qgitstatusoptions.cpp
SOURCES+=src/qgittag.cpp
SOURCES+=src/qgittree.cpp
SOURCES+=src/qgittreeentry.cpp

INCLUDEPATH+=src/