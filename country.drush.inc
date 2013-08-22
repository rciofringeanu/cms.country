<?php

function country_drush_command() {
    $items['import_countries'] = array(
        'description' => 'Import official list of countries provided by this module in country.json file',
        'examples' => array(
            'drush import_default_countries' => 'Import countries into the Drupal instance'
        )
    );

    $items['export_countries'] = array(
        'description' => 'Export official list of countries',
        'arguments' => array(
            'destination' => 'Required',
        ),
        'required-arguments' => 1,
    );

    $items['import_countries_details'] = array(
        'description' => 'Import details for already imported countries',
        'options' => array(
            'source' => 'Optional. Alternative source file to load the data from. If missing, loads from the default file(s)'
        ),
    );

    return $items;
}

function drush_country_import_countries() {
    Country::import_default_countries();
}

/**
 * Export country nodes to a specified JSON file
 *
 * @param   string   $destination_dir
*/
function drush_country_export_countries($destination_dir = '') {
    if (!CMSUtils::is_valid_dir($destination_dir, TRUE)) {
        CMSUtils::println('Invalid export directory %s. Please provide a valid export directory', $destination_dir);
        return;
    }

    CMSUtils::println('Exporting countries to %s', $destination_dir);

    $file = $destination_dir . DIRECTORY_SEPARATOR . 'countries.json';
    $countries = array();
    $nodes = node_load_multiple(array(), array('type' => 'country'));

    CMSUtils::println('Found %s countries', count($nodes));
    $data = array();
    foreach ($nodes as $node) {
        $data[] = Country::node_to_array($node);
        CMSUtils::println('%s exported', $node->title);
    }

    if (CMSUtils::use_pretty_print()) {
        $json = json_encode($data, JSON_PRETTY_PRINT);
    }else {
        $json = json_encode($data);
    }

    $handler = fopen($file, 'w') or die(sprintf('Cannot open file %s', $file));
    CMSUtils::println('%d countries exported to %s', count($nodes), $file);
    fwrite($handler, $json);
    fclose($handler);
}

function drush_country_import_countries_details($source_file = 'countries.json') {
    $current_profile = CMSUtils::get_current_profile();
    $source_dir = drupal_realpath(drupal_get_path('module', 'cms_initial_data')) . DIRECTORY_SEPARATOR . $current_profile;

    if(!empty($source_dir) && !CMSUtils::is_valid_dir($source_dir)) {
        CMSUtils::println('Invalid source directory specified %s', $source_dir);
        return;
    }

    $file_path = $source_dir . DIRECTORY_SEPARATOR . $source_file;

    CMSUtils::println('Importing countries from %s', $file_path);
    $data = CMSUtils::read_json($file_path, TRUE);
    CMSUtils::println('Found %s countries', count($data));

    foreach ($data as $country) {
        Country::node_from_array($country);
    }
}
