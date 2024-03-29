<?php
/**
 * @file
 * campus_webform.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function campus_webform_content_defaults() {
  $content = array();

  $content['bring_webform'] = (object) array(
    'exported_path' => 'content/bring',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Bring',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'email_to',
          'name' => 'To',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'nid',
          'name' => 'Nid',
          'type' => 'hidden',
          'value' => '',
          'extra' => array(
            'hidden_type' => 'hidden',
            'conditional_operator' => '=',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email_from',
          'name' => 'From',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'message',
          'name' => 'Message',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 0,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '3',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Bring',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352359537',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'bring_webform',
    'body' => array(),
  );

  $content['concierge_form_webform'] = (object) array(
    'exported_path' => 'content/concierge-form',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Reserve a seat',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'name',
          'name' => 'Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'number',
          'name' => 'Number',
          'type' => 'number',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'type' => 'textfield',
            'decimals' => '',
            'separator' => ',',
            'point' => '.',
            'unique' => 0,
            'integer' => 1,
            'conditional_operator' => '=',
            'excludezero' => 0,
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'min' => '',
            'max' => '',
            'step' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'services',
          'name' => 'Services',
          'type' => 'select',
          'value' => '1',
          'extra' => array(
            'items' => '1|9 AM
2|11 AM
3|5 PM',
            'multiple' => 0,
            'title_display' => 'inline',
            'private' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '3',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Concierge Form',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352344060',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'concierge_form_webform',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>
	<script type="text/javascript">
var dd = new YAHOO.util.DD(\'maindiv\'); dd.setHandleElId(\'titlediv\');	</script>
	<script type="text/javascript">
var dd = new YAHOO.util.DD(\'maindiv\'); dd.setHandleElId(\'titlediv\');	</script>
</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => ' <p><script type="text/javascript">
<!--//--><![CDATA[// ><!--

var dd = new YAHOO.util.DD(\'maindiv\'); dd.setHandleElId(\'titlediv\');	
//--><!]]>
</script><script type="text/javascript">
<!--//--><![CDATA[// ><!--

var dd = new YAHOO.util.DD(\'maindiv\'); dd.setHandleElId(\'titlediv\');	
//--><!]]>
</script></p>
 ',
          'safe_summary' => '  ',
        ),
      ),
    ),
  );

  $content['concierge_webform'] = (object) array(
    'exported_path' => 'content/concierge',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Reserve a seat',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'name',
          'name' => 'Name',
          'type' => 'textfield',
          'value' => 'Name',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'number',
          'name' => 'Number',
          'type' => 'textfield',
          'value' => 'Number',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => 'Email',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'service',
          'name' => 'Service',
          'type' => 'select',
          'value' => 'service',
          'extra' => array(
            'items' => 'service|Service',
            'multiple' => 0,
            'title_display' => 'before',
            'private' => 0,
            'aslist' => 1,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '3',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Concierge',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352192674',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'concierge_webform',
    'body' => array(),
  );

  $content['giving_time_webform'] = (object) array(
    'exported_path' => 'content/giving-time',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Give',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'first_name',
          'name' => 'First name',
          'type' => 'textfield',
          'value' => 'First name',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'last_name',
          'name' => 'Last name',
          'type' => 'textfield',
          'value' => 'Last name',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => 'Email',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'phone',
          'name' => 'Phone',
          'type' => 'textfield',
          'value' => 'Phone',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => '20',
            'conditional_operator' => '=',
            'width' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'skills',
          'name' => 'Skills',
          'type' => 'textarea',
          'value' => 'Skills',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '4',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Giving time',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352344442',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'giving_time_webform',
    'body' => array(),
  );

  $content['go_trip_webform'] = (object) array(
    'exported_path' => 'content/go-trip',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'full_name',
          'name' => 'Full Name',
          'type' => 'textfield',
          'value' => 'Full Name',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '2',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'contact_number',
          'name' => 'Contact Number',
          'type' => 'textfield',
          'value' => 'Contact Number',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'age',
          'name' => 'Age',
          'type' => 'textfield',
          'value' => 'Age',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => '3',
            'conditional_operator' => '=',
            'width' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '4',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => 'Email',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '5',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'nid',
          'name' => 'Nid',
          'type' => 'hidden',
          'value' => '',
          'extra' => array(
            'hidden_type' => 'hidden',
            'conditional_operator' => '=',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '6',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Go Trip',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352359634',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'go_trip_webform',
    'body' => array(),
  );

  $content['internship_webform'] = (object) array(
    'exported_path' => 'content/internship',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Grow',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'nid',
          'name' => 'Nid',
          'type' => 'hidden',
          'value' => '',
          'extra' => array(
            'hidden_type' => 'hidden',
            'conditional_operator' => '=',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '1',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Internship',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352359577',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'internship_webform',
    'body' => array(),
  );

  $content['join_group_webform'] = (object) array(
    'exported_path' => 'content/join-group',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'first_name',
          'name' => 'First name',
          'type' => 'textfield',
          'value' => 'First name',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'last_name',
          'name' => 'Last name',
          'type' => 'textfield',
          'value' => 'Last name',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email_address',
          'name' => 'Email address',
          'type' => 'email',
          'value' => 'Email address',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'phone_number',
          'name' => 'Phone number',
          'type' => 'textfield',
          'value' => 'Phone number',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => '20',
            'conditional_operator' => '=',
            'width' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'age',
          'name' => 'Age',
          'type' => 'textfield',
          'value' => 'Age',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => '3',
            'conditional_operator' => '=',
            'width' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '4',
          'page_num' => 1,
        ),
        5 => array(
          'pid' => '0',
          'form_key' => 'postcode',
          'name' => 'Postcode',
          'type' => 'textfield',
          'value' => 'Postcode/Zipcode',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => '30',
            'conditional_operator' => '=',
            'width' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '5',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Join Group',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352343702',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'join_group_webform',
    'body' => array(),
  );

  $content['ministry_connect_webform'] = (object) array(
    'exported_path' => 'content/ministry-connect-form',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '/thank_you',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Submit',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'full_name',
          'name' => 'Full name',
          'type' => 'textfield',
          'value' => 'Full name',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'contact_number',
          'name' => 'Contact number',
          'type' => 'textfield',
          'value' => 'Contact number',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => 'Email',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 1,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'nid',
          'name' => 'Nid',
          'type' => 'hidden',
          'value' => '%nid',
          'extra' => array(
            'hidden_type' => 'hidden',
            'conditional_operator' => '=',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'ntitle',
          'name' => 'Title',
          'type' => 'hidden',
          'value' => '%title',
          'extra' => array(
            'hidden_type' => 'hidden',
            'conditional_operator' => '=',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Ministry Connect Form',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352023993',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'ministry_connect_webform',
    'body' => array(),
  );

  $content['prayer_fasting_webform'] = (object) array(
    'exported_path' => 'content/prayer-fasting',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'filtered_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Commit',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'nid',
          'name' => 'Nid',
          'type' => 'hidden',
          'value' => '',
          'extra' => array(
            'hidden_type' => 'hidden',
            'conditional_operator' => '=',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '1',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Prayer & Fasting',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1352359455',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'prayer_fasting_webform',
    'body' => array(),
  );

return $content;
}
