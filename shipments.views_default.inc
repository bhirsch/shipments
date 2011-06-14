<?php
/**
 * @file
 * shipments.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function shipments_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'shipments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shipments';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shipments';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Unique Identifier */
  $handler->display->display_options['fields']['field_shipment_id']['id'] = 'field_shipment_id';
  $handler->display->display_options['fields']['field_shipment_id']['table'] = 'field_data_field_shipment_id';
  $handler->display->display_options['fields']['field_shipment_id']['field'] = 'field_shipment_id';
  $handler->display->display_options['fields']['field_shipment_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_shipment_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_id']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_shipment_date']['id'] = 'field_shipment_date';
  $handler->display->display_options['fields']['field_shipment_date']['table'] = 'field_data_field_shipment_date';
  $handler->display->display_options['fields']['field_shipment_date']['field'] = 'field_shipment_date';
  $handler->display->display_options['fields']['field_shipment_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_shipment_date']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_shipment_description']['id'] = 'field_shipment_description';
  $handler->display->display_options['fields']['field_shipment_description']['table'] = 'field_data_field_shipment_description';
  $handler->display->display_options['fields']['field_shipment_description']['field'] = 'field_shipment_description';
  $handler->display->display_options['fields']['field_shipment_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_description']['field_api_classes'] = 0;
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_shipment_destination']['id'] = 'field_shipment_destination';
  $handler->display->display_options['fields']['field_shipment_destination']['table'] = 'field_data_field_shipment_destination';
  $handler->display->display_options['fields']['field_shipment_destination']['field'] = 'field_shipment_destination';
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_destination']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_destination']['field_api_classes'] = 0;
  /* Field: Content: Final Destination */
  $handler->display->display_options['fields']['field_shipment_final_destination']['id'] = 'field_shipment_final_destination';
  $handler->display->display_options['fields']['field_shipment_final_destination']['table'] = 'field_data_field_shipment_final_destination';
  $handler->display->display_options['fields']['field_shipment_final_destination']['field'] = 'field_shipment_final_destination';
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_final_destination']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_final_destination']['field_api_classes'] = 0;
  /* Field: Content: Origin */
  $handler->display->display_options['fields']['field_shipment_origin']['id'] = 'field_shipment_origin';
  $handler->display->display_options['fields']['field_shipment_origin']['table'] = 'field_data_field_shipment_origin';
  $handler->display->display_options['fields']['field_shipment_origin']['field'] = 'field_shipment_origin';
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_origin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_origin']['field_api_classes'] = 0;
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_shipment_to']['id'] = 'field_shipment_to';
  $handler->display->display_options['fields']['field_shipment_to']['table'] = 'field_data_field_shipment_to';
  $handler->display->display_options['fields']['field_shipment_to']['field'] = 'field_shipment_to';
  $handler->display->display_options['fields']['field_shipment_to']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_to']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_to']['field_api_classes'] = 0;
  /* Field: Content: Sender */
  $handler->display->display_options['fields']['field_shipment_from']['id'] = 'field_shipment_from';
  $handler->display->display_options['fields']['field_shipment_from']['table'] = 'field_data_field_shipment_from';
  $handler->display->display_options['fields']['field_shipment_from']['field'] = 'field_shipment_from';
  $handler->display->display_options['fields']['field_shipment_from']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_from']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_from']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_shipment_status']['id'] = 'field_shipment_status';
  $handler->display->display_options['fields']['field_shipment_status']['table'] = 'field_data_field_shipment_status';
  $handler->display->display_options['fields']['field_shipment_status']['field'] = 'field_shipment_status';
  $handler->display->display_options['fields']['field_shipment_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shipment_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shipment_status']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'shipment' => 'shipment',
  );
  /* Filter criterion: Fields: Description (field_shipment_description) */
  $handler->display->display_options['filters']['field_shipment_description_value']['id'] = 'field_shipment_description_value';
  $handler->display->display_options['filters']['field_shipment_description_value']['table'] = 'field_data_field_shipment_description';
  $handler->display->display_options['filters']['field_shipment_description_value']['field'] = 'field_shipment_description_value';
  $handler->display->display_options['filters']['field_shipment_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shipment_description_value']['expose']['operator_id'] = 'field_shipment_description_value_op';
  $handler->display->display_options['filters']['field_shipment_description_value']['expose']['label'] = 'Description';
  $handler->display->display_options['filters']['field_shipment_description_value']['expose']['operator'] = 'field_shipment_description_value_op';
  $handler->display->display_options['filters']['field_shipment_description_value']['expose']['identifier'] = 'field_shipment_description_value';
  $handler->display->display_options['filters']['field_shipment_description_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'shipments';
  $translatables['shipments'] = array(
    t('Master'),
    t('Shipments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Unique Identifier'),
    t('node/[nid]'),
    t('Date'),
    t('Description'),
    t('Destination'),
    t('Final Destination'),
    t('Origin'),
    t('Recipient'),
    t('Sender'),
    t('Status'),
    t('Edit'),
    t('Page'),
  );
  $export['shipments'] = $view;

  return $export;
}
