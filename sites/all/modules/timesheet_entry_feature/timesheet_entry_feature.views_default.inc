<?php
/**
 * @file
 * timesheet_entry_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function timesheet_entry_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'description';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'timesheet_entry' => 'timesheet_entry',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'description';
  $export['description'] = $view;

  $view = new view();
  $view->name = 'report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  /* Field: Content: Project Name */
  $handler->display->display_options['fields']['field_project_name']['id'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['fields']['field_project_name']['field'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issue Number */
  $handler->display->display_options['fields']['field_issue_number']['id'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['field'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Billable/Not Billable */
  $handler->display->display_options['fields']['field_billablenot_billable']['id'] = 'field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['table'] = 'field_data_field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['field'] = 'field_billablenot_billable';
  /* Field: Content: Approved/Not Approved */
  $handler->display->display_options['fields']['field_approvednot_approved']['id'] = 'field_approvednot_approved';
  $handler->display->display_options['fields']['field_approvednot_approved']['table'] = 'field_data_field_approvednot_approved';
  $handler->display->display_options['fields']['field_approvednot_approved']['field'] = 'field_approvednot_approved';
  /* Field: Content: Work Hour */
  $handler->display->display_options['fields']['field_work_hour']['id'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['table'] = 'field_data_field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['field'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['settings'] = array(
    'display_format' => array(
      'hour' => 'H',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'none',
      'period_separator' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Member';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'description/[nid]';
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Content: Project Name (field_project_name) */
  $handler->display->display_options['sorts']['field_project_name_target_id']['id'] = 'field_project_name_target_id';
  $handler->display->display_options['sorts']['field_project_name_target_id']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['sorts']['field_project_name_target_id']['field'] = 'field_project_name_target_id';
  /* Sort criterion: Content: Issue Number (field_issue_number) */
  $handler->display->display_options['sorts']['field_issue_number_value']['id'] = 'field_issue_number_value';
  $handler->display->display_options['sorts']['field_issue_number_value']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['sorts']['field_issue_number_value']['field'] = 'field_issue_number_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'timesheet_entry' => 'timesheet_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Name (field_project_name) */
  $handler->display->display_options['filters']['field_project_name_target_id']['id'] = 'field_project_name_target_id';
  $handler->display->display_options['filters']['field_project_name_target_id']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['filters']['field_project_name_target_id']['field'] = 'field_project_name_target_id';
  $handler->display->display_options['filters']['field_project_name_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_project_name_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_name_target_id']['expose']['operator_id'] = 'field_project_name_target_id_op';
  $handler->display->display_options['filters']['field_project_name_target_id']['expose']['label'] = 'Project Name';
  $handler->display->display_options['filters']['field_project_name_target_id']['expose']['operator'] = 'field_project_name_target_id_op';
  $handler->display->display_options['filters']['field_project_name_target_id']['expose']['identifier'] = 'field_project_name_target_id';
  $handler->display->display_options['filters']['field_project_name_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Billable/Not Billable (field_billablenot_billable) */
  $handler->display->display_options['filters']['field_billablenot_billable_value']['id'] = 'field_billablenot_billable_value';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['table'] = 'field_data_field_billablenot_billable';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['field'] = 'field_billablenot_billable_value';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['group'] = 1;
  $handler->display->display_options['filters']['field_billablenot_billable_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_billablenot_billable_value']['expose']['operator_id'] = 'field_billablenot_billable_value_op';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['expose']['label'] = 'Billable/Not Billable';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['expose']['operator'] = 'field_billablenot_billable_value_op';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['expose']['identifier'] = 'field_billablenot_billable_value';
  $handler->display->display_options['filters']['field_billablenot_billable_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Approved/Not Approved (field_approvednot_approved) */
  $handler->display->display_options['filters']['field_approvednot_approved_value']['id'] = 'field_approvednot_approved_value';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['table'] = 'field_data_field_approvednot_approved';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['field'] = 'field_approvednot_approved_value';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['group'] = 1;
  $handler->display->display_options['filters']['field_approvednot_approved_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_approvednot_approved_value']['expose']['operator_id'] = 'field_approvednot_approved_value_op';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['expose']['label'] = 'Approved/Not Approved';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['expose']['operator'] = 'field_approvednot_approved_value_op';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['expose']['identifier'] = 'field_approvednot_approved_value';
  $handler->display->display_options['filters']['field_approvednot_approved_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Member';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Invoice (field_invoice) */
  $handler->display->display_options['filters']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['filters']['field_invoice_value']['table'] = 'field_data_field_invoice';
  $handler->display->display_options['filters']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['filters']['field_invoice_value']['group'] = 1;
  $handler->display->display_options['filters']['field_invoice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_value']['expose']['operator_id'] = 'field_invoice_value_op';
  $handler->display->display_options['filters']['field_invoice_value']['expose']['label'] = 'Invoice Raised';
  $handler->display->display_options['filters']['field_invoice_value']['expose']['operator'] = 'field_invoice_value_op';
  $handler->display->display_options['filters']['field_invoice_value']['expose']['identifier'] = 'field_invoice_value';
  $handler->display->display_options['filters']['field_invoice_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'report_test';
  $export['report'] = $view;

  $view = new view();
  $view->name = 'timesheet';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'timesheet_dev';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timesheet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'ADD';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'ADD';
  $handler->display->display_options['header']['link']['path'] = 'node/add/timesheet-entry';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Project Name */
  $handler->display->display_options['fields']['field_project_name']['id'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['fields']['field_project_name']['field'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issue Number */
  $handler->display->display_options['fields']['field_issue_number']['id'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['field'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Billable/Not Billable */
  $handler->display->display_options['fields']['field_billablenot_billable']['id'] = 'field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['table'] = 'field_data_field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['field'] = 'field_billablenot_billable';
  /* Field: Content: Work Hour */
  $handler->display->display_options['fields']['field_work_hour']['id'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['table'] = 'field_data_field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['field'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['settings'] = array(
    'display_format' => array(
      'hour' => 'H',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'none',
      'period_separator' => '',
    ),
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Content';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Result';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$result = null;
$node = node_load($row->field_project_name);
if($node->field_approvednot_approved[\'und\'][0][\'value\'] == \'Approved\'){
$result = \'Approved\';
}
else{
$result = \'Not Approved\';
}
echo $result;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Project Name (field_project_name) */
  $handler->display->display_options['sorts']['field_project_name_target_id']['id'] = 'field_project_name_target_id';
  $handler->display->display_options['sorts']['field_project_name_target_id']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['sorts']['field_project_name_target_id']['field'] = 'field_project_name_target_id';
  /* Sort criterion: Content: Issue Number (field_issue_number) */
  $handler->display->display_options['sorts']['field_issue_number_value']['id'] = 'field_issue_number_value';
  $handler->display->display_options['sorts']['field_issue_number_value']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['sorts']['field_issue_number_value']['field'] = 'field_issue_number_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'timesheet_entry' => 'timesheet_entry',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Name */
  $handler->display->display_options['fields']['field_project_name']['id'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['fields']['field_project_name']['field'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issue Number */
  $handler->display->display_options['fields']['field_issue_number']['id'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['field'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Billable/Not Billable */
  $handler->display->display_options['fields']['field_billablenot_billable']['id'] = 'field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['table'] = 'field_data_field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['field'] = 'field_billablenot_billable';
  /* Field: Content: Work Hour */
  $handler->display->display_options['fields']['field_work_hour']['id'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['table'] = 'field_data_field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['field'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['settings'] = array(
    'display_format' => array(
      'hour' => 'H',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'none',
      'period_separator' => '',
    ),
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Content';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Result';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$result = null;
$node = node_load($row->field_project_name);
if($node->field_approvednot_approved[\'und\'][0][\'value\'] == \'Approved\'){
$result = \'Approved\';
}
else{
$result = \'Not Approved\';
}
echo $result;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'timesheet-dev';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'timesheet_dev';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['timesheet'] = $view;

  $view = new view();
  $view->name = 'timesheet_pm';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'timesheet_pm';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timesheet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'ADD';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'ADD';
  $handler->display->display_options['header']['link']['path'] = 'node/add/timesheet-entry';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Project Name */
  $handler->display->display_options['fields']['field_project_name']['id'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['fields']['field_project_name']['field'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issue Number */
  $handler->display->display_options['fields']['field_issue_number']['id'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['field'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Approved';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$vars = $row->field_project_name;
print drupal_render(drupal_get_form(\'attach_view_form\',$vars));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Project Name (field_project_name) */
  $handler->display->display_options['sorts']['field_project_name_target_id']['id'] = 'field_project_name_target_id';
  $handler->display->display_options['sorts']['field_project_name_target_id']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['sorts']['field_project_name_target_id']['field'] = 'field_project_name_target_id';
  /* Sort criterion: Content: Issue Number (field_issue_number) */
  $handler->display->display_options['sorts']['field_issue_number_value']['id'] = 'field_issue_number_value';
  $handler->display->display_options['sorts']['field_issue_number_value']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['sorts']['field_issue_number_value']['field'] = 'field_issue_number_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'timesheet_entry' => 'timesheet_entry',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Project Name */
  $handler->display->display_options['fields']['field_project_name']['id'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['fields']['field_project_name']['field'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issue Number */
  $handler->display->display_options['fields']['field_issue_number']['id'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['table'] = 'field_data_field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['field'] = 'field_issue_number';
  $handler->display->display_options['fields']['field_issue_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Billable/Not Billable */
  $handler->display->display_options['fields']['field_billablenot_billable']['id'] = 'field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['table'] = 'field_data_field_billablenot_billable';
  $handler->display->display_options['fields']['field_billablenot_billable']['field'] = 'field_billablenot_billable';
  /* Field: Content: Work Hour */
  $handler->display->display_options['fields']['field_work_hour']['id'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['table'] = 'field_data_field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['field'] = 'field_work_hour';
  $handler->display->display_options['fields']['field_work_hour']['settings'] = array(
    'display_format' => array(
      'hour' => 'H',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'none',
      'period_separator' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Member';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'description/[nid]';
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Content';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Approved';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$vars = $row->field_project_name;
$form = drupal_get_form(\'attach_view_form\',$vars,"timesheet");
print drupal_render($form);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'timesheet-pm';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'timesheet_pm';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Timesheet';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['timesheet_pm'] = $view;

  return $export;
}
