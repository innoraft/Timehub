<?php
/**
 * @file
 * project_entry_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function project_entry_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function project_entry_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function project_entry_feature_node_info() {
  $items = array(
    'project_entry' => array(
      'name' => t('project entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  return $items;
}
