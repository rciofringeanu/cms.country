<?php
/**
 * @file
 * cms_country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_country_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_country_node_info() {
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
