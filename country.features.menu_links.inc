<?php
/**
 * @file
 * country.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function country_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_countries:<front>
  $menu_links['main-menu_countries:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_countries:<front>',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-40',
  );
  // Exported menu link: main-menu_manage-geopolitical-regions:admin/structure/taxonomy/geopolitical_region
  $menu_links['main-menu_manage-geopolitical-regions:admin/structure/taxonomy/geopolitical_region'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/geopolitical_region',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage geopolitical regions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-geopolitical-regions:admin/structure/taxonomy/geopolitical_region',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_identifier' => 'main-menu_countries:<front>',
  );
  // Exported menu link: main-menu_manage-official-languages:admin/structure/taxonomy/un_languages
  $menu_links['main-menu_manage-official-languages:admin/structure/taxonomy/un_languages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/un_languages',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage official languages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-official-languages:admin/structure/taxonomy/un_languages',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_identifier' => 'main-menu_countries:<front>',
  );
  // Exported menu link: main-menu_view-countries:country/listing
  $menu_links['main-menu_view-countries:country/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'country/listing',
    'router_path' => 'country/listing',
    'link_title' => 'View Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-countries:country/listing',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_identifier' => 'main-menu_countries:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Countries');
  t('Manage geopolitical regions');
  t('Manage official languages');
  t('View Countries');


  return $menu_links;
}
