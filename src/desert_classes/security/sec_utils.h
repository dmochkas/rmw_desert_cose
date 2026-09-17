/****************************************************************************
 * Copyright (C) 2026 Davide Costa                                          *
 *                                                                          *
 * This file is part of RMW desert.                                         *
 *                                                                          *
 *   RMW desert is free software: you can redistribute it and/or modify it  *
 *   under the terms of the GNU General Public License as published by the  *
 *   Free Software Foundation, either version 3 of the License, or any      *
 *   later version.                                                         *
 *                                                                          *
 *   RMW desert is distributed in the hope that it will be useful,          *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   You should have received a copy of the GNU General Public License      *
 *   along with RMW desert.  If not, see <http://www.gnu.org/licenses/>.    *
 ****************************************************************************/

/**
 * @file sec_utils.h
 * @brief Utilities for the security layer
 * 
 * This header declares utility functions shared by the security layer.
 * It includes helpers for converting hexadecimal strings into byte vectors
 * and small generic macros used while processing cryptographic input data.
 * These utilities support configuration parsing and internal data handling.
 *
 * @author Dmytro Ochkas
 *
 */

#ifndef SEC_UTILS_H
#define SEC_UTILS_H

#include <string>
#include <vector>
#include <cstdint>

#define MIN(a, b) ((a) > (b) ? (b) : (a))

bool decode_hex(const std::string& hex, std::vector<uint8_t>& out);

#endif
