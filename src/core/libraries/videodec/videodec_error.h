// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/libraries/error_codes.h"

// Videodec library
constexpr int ORBIS_VIDEODEC_ERROR_API_FAIL = 0x80C10000;
constexpr int ORBIS_VIDEODEC_ERROR_CODEC_TYPE = 0x80C10001;
constexpr int ORBIS_VIDEODEC_ERROR_STRUCT_SIZE = 0x80C10002;
constexpr int ORBIS_VIDEODEC_ERROR_HANDLE = 0x80C10003;
constexpr int ORBIS_VIDEODEC_ERROR_CPU_MEMORY_SIZE = 0x80C10004;
constexpr int ORBIS_VIDEODEC_ERROR_CPU_MEMORY_POINTER = 0x80C10005;
constexpr int ORBIS_VIDEODEC_ERROR_CPU_GPU_MEMORY_SIZE = 0x80C10006;
constexpr int ORBIS_VIDEODEC_ERROR_CPU_GPU_MEMORY_POINTER = 0x80C10007;
constexpr int ORBIS_VIDEODEC_ERROR_SHADER_CONTEXT_POINTER = 0x80C10008;
constexpr int ORBIS_VIDEODEC_ERROR_AU_SIZE = 0x80C10009;
constexpr int ORBIS_VIDEODEC_ERROR_AU_POINTER = 0x80C1000A;
constexpr int ORBIS_VIDEODEC_ERROR_FRAME_BUFFER_SIZE = 0x80C1000B;
constexpr int ORBIS_VIDEODEC_ERROR_FRAME_BUFFER_POINTER = 0x80C1000C;
constexpr int ORBIS_VIDEODEC_ERROR_FRAME_BUFFER_ALIGNMENT = 0x80C1000D;
constexpr int ORBIS_VIDEODEC_ERROR_CONFIG_INFO = 0x80C1000E;
constexpr int ORBIS_VIDEODEC_ERROR_ARGUMENT_POINTER = 0x80C1000F;
constexpr int ORBIS_VIDEODEC_ERROR_NEW_SEQUENCE = 0x80C10010;
constexpr int ORBIS_VIDEODEC_ERROR_DECODE_AU = 0x80C10011;
constexpr int ORBIS_VIDEODEC_ERROR_MISMATCH_SPEC = 0x80C10012;
constexpr int ORBIS_VIDEODEC_ERROR_INVALID_SEQUENCE = 0x80C10013;
constexpr int ORBIS_VIDEODEC_ERROR_FATAL_STREAM = 0x80C10014;
constexpr int ORBIS_VIDEODEC_ERROR_FATAL_STATE = 0x80C10015;

// Videodec2 library
constexpr int ORBIS_VIDEODEC2_ERROR_API_FAIL = 0x811D0100;
constexpr int ORBIS_VIDEODEC2_ERROR_STRUCT_SIZE = 0x811D0101;
constexpr int ORBIS_VIDEODEC2_ERROR_ARGUMENT_POINTER = 0x811D0102;
constexpr int ORBIS_VIDEODEC2_ERROR_DECODER_INSTANCE = 0x811D0103;
constexpr int ORBIS_VIDEODEC2_ERROR_MEMORY_SIZE = 0x811D0104;
constexpr int ORBIS_VIDEODEC2_ERROR_MEMORY_POINTER = 0x811D0105;
constexpr int ORBIS_VIDEODEC2_ERROR_FRAME_BUFFER_SIZE = 0x811D0106;
constexpr int ORBIS_VIDEODEC2_ERROR_FRAME_BUFFER_POINTER = 0x811D0107;
constexpr int ORBIS_VIDEODEC2_ERROR_FRAME_BUFFER_ALIGNMENT = 0x811D0108;
constexpr int ORBIS_VIDEODEC2_ERROR_NOT_ONION_MEMORY = 0x811D0109;
constexpr int ORBIS_VIDEODEC2_ERROR_NOT_GARLIC_MEMORY = 0x811D010A;
constexpr int ORBIS_VIDEODEC2_ERROR_NOT_DIRECT_MEMORY = 0x811D010B;
constexpr int ORBIS_VIDEODEC2_ERROR_MEMORY_INFO = 0x811D010C;
constexpr int ORBIS_VIDEODEC2_ERROR_ACCESS_UNIT_SIZE = 0x811D010D;
constexpr int ORBIS_VIDEODEC2_ERROR_ACCESS_UNIT_POINTER = 0x811D010E;
constexpr int ORBIS_VIDEODEC2_ERROR_OUTPUT_INFO = 0x811D010F;
constexpr int ORBIS_VIDEODEC2_ERROR_COMPUTE_QUEUE = 0x811D0110;
constexpr int ORBIS_VIDEODEC2_ERROR_FATAL_STATE = 0x811D0111;
constexpr int ORBIS_VIDEODEC2_ERROR_PRESET_VALUE = 0x811D0112;
constexpr int ORBIS_VIDEODEC2_ERROR_CONFIG_INFO = 0x811D0200;
constexpr int ORBIS_VIDEODEC2_ERROR_COMPUTE_PIPE_ID = 0x811D0201;
constexpr int ORBIS_VIDEODEC2_ERROR_COMPUTE_QUEUE_ID = 0x811D0202;
constexpr int ORBIS_VIDEODEC2_ERROR_RESOURCE_TYPE = 0x811D0203;
constexpr int ORBIS_VIDEODEC2_ERROR_CODEC_TYPE = 0x811D0204;
constexpr int ORBIS_VIDEODEC2_ERROR_PROFILE_LEVEL = 0x811D0205;
constexpr int ORBIS_VIDEODEC2_ERROR_PIPELINE_DEPTH = 0x811D0206;
constexpr int ORBIS_VIDEODEC2_ERROR_AFFINITY_MASK = 0x811D0207;
constexpr int ORBIS_VIDEODEC2_ERROR_THREAD_PRIORITY = 0x811D0208;
constexpr int ORBIS_VIDEODEC2_ERROR_DPB_FRAME_COUNT = 0x811D0209;
constexpr int ORBIS_VIDEODEC2_ERROR_FRAME_WIDTH_HEIGHT = 0x811D020A;
constexpr int ORBIS_VIDEODEC2_ERROR_EXTRA_CONFIG_INFO = 0x811D020B;
constexpr int ORBIS_VIDEODEC2_ERROR_NEW_SEQUENCE = 0x811D0300;
constexpr int ORBIS_VIDEODEC2_ERROR_ACCESS_UNIT = 0x811D0301;
constexpr int ORBIS_VIDEODEC2_ERROR_OVERSIZE_DECODE = 0x811D0302;
constexpr int ORBIS_VIDEODEC2_ERROR_INVALID_SEQUENCE = 0x811D0303;
constexpr int ORBIS_VIDEODEC2_ERROR_FATAL_STREAM = 0x811D0304;
