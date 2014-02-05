<?php
/**
 * @file
 * timehub_setting_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function timehub_setting_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit own timesheet_entry content'.
  $permissions['edit own timesheet_entry content'] = array(
    'name' => 'edit own timesheet_entry content',
    'roles' => array(
      'Developer' => 'Developer',
      'Project Manager' => 'Project Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
