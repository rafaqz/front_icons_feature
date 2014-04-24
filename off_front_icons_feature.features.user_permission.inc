<?php
/**
 * @file
 * off_front_icons_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function off_front_icons_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create front_icons content'.
  $permissions['create front_icons content'] = array(
    'name' => 'create front_icons content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any front_icons content'.
  $permissions['delete any front_icons content'] = array(
    'name' => 'delete any front_icons content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own front_icons content'.
  $permissions['delete own front_icons content'] = array(
    'name' => 'delete own front_icons content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any front_icons content'.
  $permissions['edit any front_icons content'] = array(
    'name' => 'edit any front_icons content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own front_icons content'.
  $permissions['edit own front_icons content'] = array(
    'name' => 'edit own front_icons content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
