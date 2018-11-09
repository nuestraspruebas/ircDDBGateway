#ifndef __GLOBAL_DEFS__
#define __GLOBAL_DEFS__

#if defined(__APPLE__)
#define DATA_DIR "/opt/mmdvm/conf/dstar"
#define LOG_DIR  "/opt/mmdvm/logs"
#define CONF_DIR "/opt/mmdvm/conf"
#define CONF_FILE "ircDDBGateway.ini"

#elif defined(OPENWRT) && OPENWRT == 1
#define DATA_DIR "/etc/mmdvm/dstar"
#define LOG_DIR  "/var/log/mmdvm"
#define CONF_DIR "/etc"
#define CONF_FILE "ircDDBGateway.ini"

#else
#define DATA_DIR "/usr/share/ircddbgateway"
#define LOG_DIR  "/tmp"
#define CONF_DIR "/etc"
#define CONF_FILE "ircddbgateway"

#endif

#endif
