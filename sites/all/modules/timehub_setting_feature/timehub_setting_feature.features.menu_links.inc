<?php
/**
 * @file
 * timehub_setting_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function timehub_setting_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_developer-timesheet:timesheet-dev
  $menu_links['main-menu_developer-timesheet:timesheet-dev'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'timesheet-dev',
    'router_path' => 'timesheet-dev',
    'link_title' => 'Developer Timesheet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_developer-timesheet:timesheet-dev',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manager-timesheet:timesheet-pm
  $menu_links['main-menu_manager-timesheet:timesheet-pm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'timesheet-pm',
    'router_path' => 'timesheet-pm',
    'link_title' => 'Manager Timesheet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manager-timesheet:timesheet-pm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Developer Timesheet');
  t('Manager Timesheet');


  return $menu_links;
}
