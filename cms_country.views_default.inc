<?php
/**
 * @file
 * country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View all countries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country_official_name' => 'field_country_official_name',
    'field_country_region' => 'field_country_region',
    'field_country_entry_into_force' => 'field_country_entry_into_force',
    'field_country_party_number' => 'field_country_party_number',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_official_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_entry_into_force' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_party_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, All',
  );
  /* Relationship: Content: Ratification status (field_country_instrument_status) */
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['id'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['table'] = 'field_data_field_country_instrument_status';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['field'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_country_official_name']['id'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['table'] = 'field_data_field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['field'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_country_official_name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_country_region']['id'] = 'field_country_region';
  $handler->display->display_options['fields']['field_country_region']['table'] = 'field_data_field_country_region';
  $handler->display->display_options['fields']['field_country_region']['field'] = 'field_country_region';
  $handler->display->display_options['fields']['field_country_region']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Entry into force */
  $handler->display->display_options['fields']['field_country_entry_into_force']['id'] = 'field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['table'] = 'field_data_field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['field'] = 'field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Party number */
  $handler->display->display_options['fields']['field_country_party_number']['id'] = 'field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['table'] = 'field_data_field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['field'] = 'field_country_party_number';
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: CMS Instrument (field_country_instrument) */
  $handler->display->display_options['filters']['field_country_instrument_target_id']['id'] = 'field_country_instrument_target_id';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['table'] = 'field_data_field_country_instrument';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['field'] = 'field_country_instrument_target_id';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_country_instrument_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_instrument_target_id']['expose']['operator_id'] = 'field_country_instrument_target_id_op';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['expose']['operator'] = 'field_country_instrument_target_id_op';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['expose']['identifier'] = 'field_country_instrument_target_id';
  /* Filter criterion: Field collection item: Status (field_country_status) */
  $handler->display->display_options['filters']['field_country_status_tid']['id'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['filters']['field_country_status_tid']['field'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator_id'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['identifier'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_status_tid']['vocabulary'] = 'party_status';
  $handler->display->display_options['filters']['field_country_status_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Region (field_country_region) */
  $handler->display->display_options['filters']['field_country_region_tid']['id'] = 'field_country_region_tid';
  $handler->display->display_options['filters']['field_country_region_tid']['table'] = 'field_data_field_country_region';
  $handler->display->display_options['filters']['field_country_region_tid']['field'] = 'field_country_region_tid';
  $handler->display->display_options['filters']['field_country_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_region_tid']['expose']['operator_id'] = 'field_country_region_tid_op';
  $handler->display->display_options['filters']['field_country_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_country_region_tid']['expose']['operator'] = 'field_country_region_tid_op';
  $handler->display->display_options['filters']['field_country_region_tid']['expose']['identifier'] = 'field_country_region_tid';
  $handler->display->display_options['filters']['field_country_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_region_tid']['vocabulary'] = 'region';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage/country/listing';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'country_export');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Countries - %timestamp-yyyy%timestamp-mm%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'country/export';
  $export['view_countries'] = $view;

  return $export;
}