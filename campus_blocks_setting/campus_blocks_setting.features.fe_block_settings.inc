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

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-campus_copyright_menu' => array(
      'machine_name' => 'campus_copyright_menu',
      'module' => 'block',
    ),
    'block-campus_dropdown_menu' => array(
      'machine_name' => 'campus_dropdown_menu',
      'module' => 'block',
    ),
    'block-concierge_message_block' => array(
      'machine_name' => 'concierge_message_block',
      'module' => 'block',
    ),
    'menu-menu-footer-menu' => array(
      'delta' => 'menu-footer-menu',
      'module' => 'menu',
    ),
    'menu-menu-fresh-dashboard' => array(
      'delta' => 'menu-fresh-dashboard',
      'module' => 'menu',
    ),
    'menu-menu-new-influencer' => array(
      'delta' => 'menu-new-influencer',
      'module' => 'menu',
    ),
    'menu-menu-social-network-link' => array(
      'delta' => 'menu-social-network-link',
      'module' => 'menu',
    ),
    'menu_block-1' => array(
      'delta' => '1',
      'module' => 'menu_block',
    ),
    'menu_block-2' => array(
      'delta' => '2',
      'module' => 'menu_block',
    ),
    'menu_block-3' => array(
      'delta' => '3',
      'module' => 'menu_block',
    ),
    'menu_block-4' => array(
      'delta' => '4',
      'module' => 'menu_block',
    ),
    'menu_block-5' => array(
      'delta' => '5',
      'module' => 'menu_block',
    ),
    'menu_block-6' => array(
      'delta' => '6',
      'module' => 'menu_block',
    ),
    'superfish-1' => array(
      'delta' => '1',
      'module' => 'superfish',
    ),
    'superfish-2' => array(
      'delta' => '2',
      'module' => 'superfish',
    ),
    'vc_content-campus_address' => array(
      'delta' => 'campus_address',
      'module' => 'vc_content',
    ),
    'vc_content-campus_services' => array(
      'delta' => 'campus_services',
      'module' => 'vc_content',
    ),
    'vc_content-current_campus_menu' => array(
      'delta' => 'current_campus_menu',
      'module' => 'vc_content',
    ),
  );

  // admintheme
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-concierge_message_block'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'concierge_message_block',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'admintheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-new-influencer'] = array(
    'module' => 'menu',
    'delta' => 'menu-new-influencer',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-15',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['theme']['admintheme'] = $theme;

  // bartik
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-concierge_message_block'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'concierge_message_block',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-new-influencer'] = array(
    'module' => 'menu',
    'delta' => 'menu-new-influencer',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['theme']['bartik'] = $theme;

  // influencerschurch
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-concierge_message_block'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'concierge_message_block',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-38',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-new-influencer'] = array(
    'module' => 'menu',
    'delta' => 'menu-new-influencer',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'branding',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-37',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-13',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-26',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-38',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['theme']['influencerschurch'] = $theme;

  // seven
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-concierge_message_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'concierge_message_block',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-new-influencer'] = array(
    'module' => 'menu',
    'delta' => 'menu-new-influencer',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home
admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'global_home',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
