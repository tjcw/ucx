/**
* Copyright (C) Mellanox Technologies Ltd. 2019.  ALL RIGHTS RESERVED.
*
* See file LICENSE for terms.
*/

#include <uct/base/uct_cm.h>


/**
 * A TCP connection manager
 */
typedef struct uct_tcp_sockcm {
    uct_cm_t        super;
    size_t          priv_data_len;
} uct_tcp_sockcm_t;

/**
 * TCP SOCKCM configuration.
 */
typedef struct uct_tcp_sockcm_config {
    uct_cm_config_t super;
    size_t          priv_data_len;
} uct_tcp_sockcm_config_t;

extern ucs_config_field_t uct_tcp_sockcm_config_table[];

UCS_CLASS_DECLARE_NEW_FUNC(uct_tcp_sockcm_t, uct_cm_t, uct_component_h,
                           uct_worker_h, const uct_cm_config_t *);
UCS_CLASS_DECLARE_DELETE_FUNC(uct_tcp_sockcm_t, uct_cm_t);
