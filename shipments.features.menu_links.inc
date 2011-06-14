<?php
/**
 * @file
 * shipments.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function shipments_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:shipments
  $menu_links['features:shipments'] = array(
    'menu_name' => 'features',
    'link_path' => 'shipments',
    'router_path' => 'shipments',
    'link_title' => 'Shipments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Shipments');


  return $menu_links;
}
