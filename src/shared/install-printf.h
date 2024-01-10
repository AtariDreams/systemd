/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#include "install.h"
#include "unit-name.h"

int install_name_printf(
                RuntimeScope scope,
                const InstallInfo *info,
                const char * restrict format,
                char **ret);
