<?php
/**
 * @file
 * campus_blocks_setting.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function campus_blocks_setting_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-campus_copyright_menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'campus_copyright_menu',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'footer_second',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['block-campus_dropdown_menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'campus_dropdown_menu',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Dropdown mennu',
    'visibility' => '0',
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '-14',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'footer_first',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '-38',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-new-influencer'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'menu-new-influencer',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'global_home',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'branding',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-social-network-link'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'menu-social-network-link',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '-13',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'footer_first',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '-37',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '-13',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '-13',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '2',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '-15',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'influencerschurch',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['vc_admin-dashboard_menu_tool'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'dashboard_menu_tool',
    'module' => 'vc_admin',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'admintheme',
        'weight' => '-49',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['vc_admin-dashboard_user_tool'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'dashboard_user_tool',
    'module' => 'vc_admin',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => 'branding',
        'status' => '1',
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['vc_content-campus_address'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'campus_address',
    'module' => 'vc_content',
    'node_types' => array(),
    'pages' => 'global_home',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'user_first',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['vc_content-campus_services'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'campus_services',
    'module' => 'vc_content',
    'node_types' => array(),
    'pages' => 'global_home',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '-38',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['vc_content-current_campus_menu'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'current_campus_menu',
    'module' => 'vc_content',
    'node_types' => array(),
    'pages' => 'global_home',
    'roles' => array(),
    'themes' => array(
      'admintheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admintheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'influencerschurch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'influencerschurch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
