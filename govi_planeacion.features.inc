<?php
/**
 * @file
 * govi_planeacion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_planeacion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function govi_planeacion_node_info() {
  $items = array(
    'planeacion' => array(
      'name' => t('Planeación'),
      'base' => 'node_content',
      'description' => t('Suministra información de planeación de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
