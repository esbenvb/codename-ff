<?php
/**
 * @file
 * ffr_product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ffr_product_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pumps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pumps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pumps';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_fuel_type' => 'field_fuel_type',
    'commerce_price' => 'commerce_price',
    'add_to_cart_form' => 'add_to_cart_form',
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
    'field_fuel_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'add_to_cart_form' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_fuel_product_product_id']['id'] = 'field_fuel_product_product_id';
  $handler->display->display_options['relationships']['field_fuel_product_product_id']['table'] = 'field_data_field_fuel_product';
  $handler->display->display_options['relationships']['field_fuel_product_product_id']['field'] = 'field_fuel_product_product_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Commerce Product: Fuel type */
  $handler->display->display_options['fields']['field_fuel_type']['id'] = 'field_fuel_type';
  $handler->display->display_options['fields']['field_fuel_type']['table'] = 'field_data_field_fuel_type';
  $handler->display->display_options['fields']['field_fuel_type']['field'] = 'field_fuel_type';
  $handler->display->display_options['fields']['field_fuel_type']['relationship'] = 'field_fuel_product_product_id';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_fuel_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_components';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_fuel_product_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'pump' => 'pump',
  );
  /* Filter criterion: Commerce Product: Fuel type (field_fuel_type) */
  $handler->display->display_options['filters']['field_fuel_type_tid']['id'] = 'field_fuel_type_tid';
  $handler->display->display_options['filters']['field_fuel_type_tid']['table'] = 'field_data_field_fuel_type';
  $handler->display->display_options['filters']['field_fuel_type_tid']['field'] = 'field_fuel_type_tid';
  $handler->display->display_options['filters']['field_fuel_type_tid']['relationship'] = 'field_fuel_product_product_id';
  $handler->display->display_options['filters']['field_fuel_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fuel_type_tid']['expose']['operator_id'] = 'field_fuel_type_tid_op';
  $handler->display->display_options['filters']['field_fuel_type_tid']['expose']['label'] = 'Fuel type (field_fuel_type)';
  $handler->display->display_options['filters']['field_fuel_type_tid']['expose']['operator'] = 'field_fuel_type_tid_op';
  $handler->display->display_options['filters']['field_fuel_type_tid']['expose']['identifier'] = 'field_fuel_type_tid';
  $handler->display->display_options['filters']['field_fuel_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_fuel_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fuel_type_tid']['vocabulary'] = 'fuel_type';
  /* Filter criterion: Field: Station (field_station) */
  $handler->display->display_options['filters']['field_station_tid']['id'] = 'field_station_tid';
  $handler->display->display_options['filters']['field_station_tid']['table'] = 'field_data_field_station';
  $handler->display->display_options['filters']['field_station_tid']['field'] = 'field_station_tid';
  $handler->display->display_options['filters']['field_station_tid']['relationship'] = 'field_fuel_product_product_id';
  $handler->display->display_options['filters']['field_station_tid']['value'] = '';
  $handler->display->display_options['filters']['field_station_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_station_tid']['expose']['operator_id'] = 'field_station_tid_op';
  $handler->display->display_options['filters']['field_station_tid']['expose']['label'] = 'Station (field_station)';
  $handler->display->display_options['filters']['field_station_tid']['expose']['operator'] = 'field_station_tid_op';
  $handler->display->display_options['filters']['field_station_tid']['expose']['identifier'] = 'field_station_tid';
  $handler->display->display_options['filters']['field_station_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_station_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_station_tid']['vocabulary'] = 'station';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'pumps';
  $export['pumps'] = $view;

  return $export;
}
