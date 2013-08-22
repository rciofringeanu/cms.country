<?php
/**
 * @file
 * country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function country_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function country_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function country_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country'),
      'base' => 'node_content',
      'description' => t('World nation'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
