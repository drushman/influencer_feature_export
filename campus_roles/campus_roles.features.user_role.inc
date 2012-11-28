<?php
/**
 * @file
 * campus_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function campus_roles_user_default_roles() {
  $roles = array();

  // Exported role: adelaide.
  $roles['adelaide'] = array(
    'name' => 'adelaide',
    'weight' => '4',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: content.
  $roles['content'] = array(
    'name' => 'content',
    'weight' => '5',
  );

  // Exported role: global.
  $roles['global'] = array(
    'name' => 'global',
    'weight' => '3',
  );

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => '6',
  );

  return $roles;
}
