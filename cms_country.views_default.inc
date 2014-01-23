<?php
/**
 * @file
 * cms_country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cms_country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_end_countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Party and Range States';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country_ratification_date' => 'field_country_ratification_date',
    'field_country_status' => 'field_country_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_ratification_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_country_status']['id'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['fields']['field_country_status']['field'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_status']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Field collection item: Status date */
  $handler->display->display_options['fields']['field_country_ratification_date']['id'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['field'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_ratification_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Field collection item: CMS Instrument (field_country_instrument) */
  $handler->display->display_options['filters']['field_country_instrument_target_id']['id'] = 'field_country_instrument_target_id';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['table'] = 'field_data_field_country_instrument';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['field'] = 'field_country_instrument_target_id';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_instrument_target_id']['value']['value'] = '1';

  /* Display: Parties and Range States */
  $handler = $view->new_display('page', 'Parties and Range States', 'party_range_states_page');
  $handler->display->display_options['path'] = 'party-range-states';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'party_range_states_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_country_status',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country_status' => 'field_country_status',
    'field_country_ratification_date' => 'field_country_ratification_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_ratification_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_country_status']['id'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['fields']['field_country_status']['field'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_status']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Field collection item: Status date */
  $handler->display->display_options['fields']['field_country_ratification_date']['id'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['field'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_ratification_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'parties_range_states_list';
  $translatables['front_end_countries'] = array(
    t('Master'),
    t('Party and Range States'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_country_instrument_status'),
    t('Status'),
    t('Status date'),
    t('ISO 3166-2 code'),
    t('Parties and Range States'),
    t('List'),
  );
  $export['front_end_countries'] = $view;

  $view = new view();
  $view->name = 'related_national_reports_country';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related National reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related National reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Submitted by (field_document_submitted_by) */
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['id'] = 'field_document_submitted_by_tid';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['table'] = 'field_data_field_document_submitted_by';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['field'] = 'field_document_submitted_by_tid';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Sort criterion: Content: Number (field_document_number) */
  $handler->display->display_options['sorts']['field_document_number_value']['id'] = 'field_document_number_value';
  $handler->display->display_options['sorts']['field_document_number_value']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['sorts']['field_document_number_value']['field'] = 'field_document_number_value';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'related-national-reports/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['related_national_reports_country'] = array(
    t('Master'),
    t('Related National reports'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_document_submitted_by'),
    t('Title'),
    t('Number'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['related_national_reports_country'] = $view;

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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
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
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, All',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  $translatables['view_countries'] = array(
    t('Master'),
    t('View all countries'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t('field collection item from field_country_instrument_status'),
    t('Title'),
    t('Official name'),
    t('Region'),
    t('Entry into force'),
    t('Party number'),
    t('CMS Instrument'),
    t('Status'),
    t('Page'),
  );
  $export['view_countries'] = $view;

  return $export;
}
