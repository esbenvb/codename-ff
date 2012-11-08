<?php
/**
 * @file
 * ffr_product.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ffr_product_commerce_product_default_types() {
  $items = array(
    'fuel' => array(
      'type' => 'fuel',
      'name' => 'Fuel',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ffr_product_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ffr_product_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ffr_product_node_info() {
  $items = array(
    'pump' => array(
      'name' => t('Pump'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
