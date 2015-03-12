<?php
/**
 * @file
 * front_icons_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_icons_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'front_icons' => 'front_icons',
      'basic_page' => 0,
      'closed_group' => 0,
      'conversation' => 0,
      'knowledge_object' => 0,
      'group' => 0,
      'idea' => 0,
      'news' => 0,
      'organisation' => 0,
      'project' => 0,
      'book' => 0,
    ),
    'node_only' => array(
      'node_changed' => 0,
    ),
    'og' => array(
      'current' => 0,
      'user' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links_1']['id'] = 'contextual_links_1';
  $handler->display->display_options['fields']['contextual_links_1']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links_1']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links_1']['label'] = '';
  $handler->display->display_options['fields']['contextual_links_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links_1']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_fi_link' => 0,
    'field_fi_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_fi_slogan' => 0,
    'contextual_links' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_fi_link']['id'] = 'field_fi_link';
  $handler->display->display_options['fields']['field_fi_link']['table'] = 'field_data_field_fi_link';
  $handler->display->display_options['fields']['field_fi_link']['field'] = 'field_fi_link';
  $handler->display->display_options['fields']['field_fi_link']['label'] = '';
  $handler->display->display_options['fields']['field_fi_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fi_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fi_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fi_link']['type'] = 'link_url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_fi_image']['id'] = 'field_fi_image';
  $handler->display->display_options['fields']['field_fi_image']['table'] = 'field_data_field_fi_image';
  $handler->display->display_options['fields']['field_fi_image']['field'] = 'field_fi_image';
  $handler->display->display_options['fields']['field_fi_image']['label'] = '';
  $handler->display->display_options['fields']['field_fi_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fi_image']['alter']['path'] = '[field_fi_link]';
  $handler->display->display_options['fields']['field_fi_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fi_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fi_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_fi_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Slogan */
  $handler->display->display_options['fields']['field_fi_slogan']['id'] = 'field_fi_slogan';
  $handler->display->display_options['fields']['field_fi_slogan']['table'] = 'field_data_field_fi_slogan';
  $handler->display->display_options['fields']['field_fi_slogan']['field'] = 'field_fi_slogan';
  $handler->display->display_options['fields']['field_fi_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_fi_slogan']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fi_slogan']['alter']['path'] = '[field_fi_link]';
  $handler->display->display_options['fields']['field_fi_slogan']['alter']['prefix'] = '<h4>';
  $handler->display->display_options['fields']['field_fi_slogan']['alter']['suffix'] = '</h4>';
  $handler->display->display_options['fields']['field_fi_slogan']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Weight (field_fi_weight) */
  $handler->display->display_options['sorts']['field_fi_weight_value']['id'] = 'field_fi_weight_value';
  $handler->display->display_options['sorts']['field_fi_weight_value']['table'] = 'field_data_field_fi_weight';
  $handler->display->display_options['sorts']['field_fi_weight_value']['field'] = 'field_fi_weight_value';
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
    'front_icons' => 'front_icons',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_icons'] = $view;

  return $export;
}
