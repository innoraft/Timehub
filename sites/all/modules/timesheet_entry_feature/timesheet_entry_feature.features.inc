<?php
/**
 * @file
 * timesheet_entry_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function timesheet_entry_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function timesheet_entry_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function timesheet_entry_feature_node_info() {
  $items = array(
    'timesheet_entry' => array(
      'name' => t('timesheet entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '0',
      'title_label' => '',
      'help' => '',
    ),
  );
  return $items;
}
