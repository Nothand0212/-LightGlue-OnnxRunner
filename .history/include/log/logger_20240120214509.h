/**
 ******************************************************************************
 * @file           : include/combined_onnx_runner.cpp
 * @author         : lin
 * @email          : linzeshi@foxmail.com
 * @brief          : None
 * @attention      : None
 * @date           : 24-1-18
 ******************************************************************************
 */

#pragma once

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

// #define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#define SPDLOG_LOGGER_INFO  INFO
#define SPDLOG_LOGGER_ERROR ERROR
#define SPDLOG_LOGGER_WARN  WARN
#define SPDLOG_LOGGER_DEBUG DEBUG
#define SPDLOG_LOGGER_TRACE TRACE
// 创建一个全局的spdlog对象
extern std::shared_ptr<spdlog::logger> logger;

void InitLogger( const std::string& log_path );