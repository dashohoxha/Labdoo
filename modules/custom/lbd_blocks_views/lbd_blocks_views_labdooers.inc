<?php

$view = new view();
$view->name = 'labdooers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Labdooers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Labdooers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'gmap';
$handler->display->display_options['style_options']['macro'] = '[gmap width=1175px | height=600px | zoom=2 | type=Map]';
$handler->display->display_options['style_options']['markers'] = 'userrole';
$handler->display->display_options['style_options']['markertype'] = 'orange';
$handler->display->display_options['style_options']['latfield'] = 'field_user_name';
$handler->display->display_options['style_options']['lonfield'] = 'field_user_name';
$handler->display->display_options['style_options']['markerfield'] = 'field_user_name';
$handler->display->display_options['style_options']['geofield'] = 'field_user_name';
$handler->display->display_options['style_options']['enablermt'] = 0;
$handler->display->display_options['style_options']['rmtfield'] = 'field_user_name';
$handler->display->display_options['style_options']['rmtfieldraw'] = 1;
$handler->display->display_options['style_options']['animation'] = '0';
$handler->display->display_options['style_options']['tooltipfield'] = 'city';
$handler->display->display_options['style_options']['bubbletextfield'] = 'field_user_name';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: User: Name */
$handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
$handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
$handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['empty'] = 'labdooer';
/* Field: User: Link */
$handler->display->display_options['fields']['view_user']['id'] = 'view_user';
$handler->display->display_options['fields']['view_user']['table'] = 'users';
$handler->display->display_options['fields']['view_user']['field'] = 'view_user';
$handler->display->display_options['fields']['view_user']['label'] = '';
$handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_user']['alter']['text'] = 'Visit';
$handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance_1']['id'] = 'distance_1';
$handler->display->display_options['filters']['distance_1']['table'] = 'location';
$handler->display->display_options['filters']['distance_1']['field'] = 'distance';
$handler->display->display_options['filters']['distance_1']['operator'] = 'dist';
$handler->display->display_options['filters']['distance_1']['value'] = array(
  'latitude' => '',
  'longitude' => '',
  'postal_code' => '',
  'country' => '',
  'php_code' => '',
  'nid_arg' => '',
  'nid_loc_field' => 'node',
  'uid_arg' => '',
  'search_distance' => '100',
  'search_units' => 'km',
);
$handler->display->display_options['filters']['distance_1']['group'] = 1;
$handler->display->display_options['filters']['distance_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance_1']['expose']['operator_id'] = 'distance_1_op';
$handler->display->display_options['filters']['distance_1']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance_1']['expose']['operator'] = 'distance_1_op';
$handler->display->display_options['filters']['distance_1']['expose']['identifier'] = 'distance_1';
$handler->display->display_options['filters']['distance_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['distance_1']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance_1']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance_1']['origin'] = 'latlon_gmap';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10000';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['empty'] = 'labdooer';
/* Field: User: Link */
$handler->display->display_options['fields']['view_user']['id'] = 'view_user';
$handler->display->display_options['fields']['view_user']['table'] = 'users';
$handler->display->display_options['fields']['view_user']['field'] = 'view_user';
$handler->display->display_options['fields']['view_user']['label'] = '';
$handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_user']['alter']['text'] = 'Visit';
$handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Location: Distance / Proximity */
$handler->display->display_options['filters']['distance_1']['id'] = 'distance_1';
$handler->display->display_options['filters']['distance_1']['table'] = 'location';
$handler->display->display_options['filters']['distance_1']['field'] = 'distance';
$handler->display->display_options['filters']['distance_1']['operator'] = 'dist';
$handler->display->display_options['filters']['distance_1']['value'] = array(
  'latitude' => '',
  'longitude' => '',
  'postal_code' => '',
  'country' => '',
  'php_code' => '',
  'nid_arg' => '',
  'nid_loc_field' => 'node',
  'uid_arg' => '',
  'search_distance' => '100',
  'search_units' => 'km',
);
$handler->display->display_options['filters']['distance_1']['group'] = 1;
$handler->display->display_options['filters']['distance_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['distance_1']['expose']['operator_id'] = 'distance_1_op';
$handler->display->display_options['filters']['distance_1']['expose']['label'] = 'Distance / Proximity';
$handler->display->display_options['filters']['distance_1']['expose']['operator'] = 'distance_1_op';
$handler->display->display_options['filters']['distance_1']['expose']['identifier'] = 'distance_1';
$handler->display->display_options['filters']['distance_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['distance_1']['expose']['gmap_macro'] = array(
  'default' => '[gmap ]',
);
$handler->display->display_options['filters']['distance_1']['expose']['user_location_choose'] = array(
  'default' => FALSE,
);
$handler->display->display_options['filters']['distance_1']['origin'] = 'latlon_gmap';
/* Filter criterion: Location: City */
$handler->display->display_options['filters']['city']['id'] = 'city';
$handler->display->display_options['filters']['city']['table'] = 'location';
$handler->display->display_options['filters']['city']['field'] = 'city';
$handler->display->display_options['filters']['city']['group'] = 1;
$handler->display->display_options['filters']['city']['exposed'] = TRUE;
$handler->display->display_options['filters']['city']['expose']['operator_id'] = 'city_op';
$handler->display->display_options['filters']['city']['expose']['label'] = 'City';
$handler->display->display_options['filters']['city']['expose']['operator'] = 'city_op';
$handler->display->display_options['filters']['city']['expose']['identifier'] = 'city';
$handler->display->display_options['filters']['city']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['city']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['city']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['city']['expose']['autocomplete_field'] = 'city';
$handler->display->display_options['filters']['city']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['city']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['city']['expose']['autocomplete_dependent'] = 0;
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['group'] = 1;
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  4 => 0,
);
$handler->display->display_options['path'] = 'labdooers';

