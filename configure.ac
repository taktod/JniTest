#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT([JniTest], [0.0.1], [poepoemix@hotmail.com])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CC_STDC
AC_C_CONST
AC_LIBTOOL_WIN32_DLL
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AM_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.
AX_JNI_INCLUDE_DIR
for JNI_INCLUDE_DIR in $JNI_INCLUDE_DIRS
  do
    CFLAGS="$CFLAGS -I$JNI_INCLUDE_DIR"
    CPPFLAGS="$CPPFLAGS -I$JNI_INCLUDE_DIR"
done

AS_ECHO $CFLAGS

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_FILES([Makefile
                 jni/Makefile])
AC_OUTPUT
