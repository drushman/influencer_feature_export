<?php
/**
 * @file
 * campus_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campus_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campus_content_type_node_info() {
  $items = array(
    'college' => array(
      'name' => t('College'),
      'base' => 'node_content',
      'description' => t('The College'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ministry' => array(
      'name' => t('Ministry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function campus_content_type_default_profile2_type() {
  $items = array();
  $items['adelaide_leadership'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "adelaide_leadership",
    "label" : "Adelaide Leadership",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 }
  }');
  $items['global_leadership'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "global_leadership",
    "label" : "Global Leadership",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 }
  }');
  return $items;
}
