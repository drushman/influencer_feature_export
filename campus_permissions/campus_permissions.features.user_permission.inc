<?php
/**
 * @file
 * campus_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campus_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access google analytics reports.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer chart.
  $permissions['administer chart'] = array(
    'name' => 'administer chart',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'chart',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer custom content.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldable panels panes.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer google analytics reports.
  $permissions['administer google analytics reports'] = array(
    'name' => 'administer google analytics reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'google_analytics_api',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer media.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer theme assignments.
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: administer themekey settings.
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer vietcoop dashboard.
  $permissions['administer vietcoop dashboard'] = array(
    'name' => 'administer vietcoop dashboard',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'vc_admin',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: assign node themes.
  $permissions['assign node themes'] = array(
    'name' => 'assign node themes',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'themekey_ui',
  );

  // Exported permission: assign path alias themes.
  $permissions['assign path alias themes'] = array(
    'name' => 'assign path alias themes',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'themekey_ui',
  );

  // Exported permission: assign theme to own nodes.
  $permissions['assign theme to own nodes'] = array(
    'name' => 'assign theme to own nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'themekey_ui',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'user',
  );

  // Exported permission: create college content.
  $permissions['create college content'] = array(
    'name' => 'create college content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: create fieldable fieldable_panels_pane.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create ministry content.
  $permissions['create ministry content'] = array(
    'name' => 'create ministry content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'path',
  );

  // Exported permission: create video content.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any college content.
  $permissions['delete any college content'] = array(
    'name' => 'delete any college content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ministry content.
  $permissions['delete any ministry content'] = array(
    'name' => 'delete any ministry content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video content.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete fieldable fieldable_panels_pane.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete own college content.
  $permissions['delete own college content'] = array(
    'name' => 'delete own college content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ministry content.
  $permissions['delete own ministry content'] = array(
    'name' => 'delete own ministry content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video content.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any adelaide_leadership profile.
  $permissions['edit any adelaide_leadership profile'] = array(
    'name' => 'edit any adelaide_leadership profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any college content.
  $permissions['edit any college content'] = array(
    'name' => 'edit any college content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any global_leadership profile.
  $permissions['edit any global_leadership profile'] = array(
    'name' => 'edit any global_leadership profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any ministry content.
  $permissions['edit any ministry content'] = array(
    'name' => 'edit any ministry content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video content.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit fieldable fieldable_panels_pane.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'media',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit node machine name.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: edit own adelaide_leadership profile.
  $permissions['edit own adelaide_leadership profile'] = array(
    'name' => 'edit own adelaide_leadership profile',
    'roles' => array(
      0 => 'adelaide',
      1 => 'administrator',
      2 => 'content',
      3 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own college content.
  $permissions['edit own college content'] = array(
    'name' => 'edit own college content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own global_leadership profile.
  $permissions['edit own global_leadership profile'] = array(
    'name' => 'edit own global_leadership profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'global',
      3 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own ministry content.
  $permissions['edit own ministry content'] = array(
    'name' => 'edit own ministry content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video content.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'webform',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
    ),
    'module' => 'user',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'moderator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any adelaide_leadership profile.
  $permissions['view any adelaide_leadership profile'] = array(
    'name' => 'view any adelaide_leadership profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any global_leadership profile.
  $permissions['view any global_leadership profile'] = array(
    'name' => 'view any global_leadership profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view media.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'moderator',
    ),
    'module' => 'media',
  );

  // Exported permission: view own adelaide_leadership profile.
  $permissions['view own adelaide_leadership profile'] = array(
    'name' => 'view own adelaide_leadership profile',
    'roles' => array(
      0 => 'adelaide',
      1 => 'administrator',
      2 => 'content',
      3 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own global_leadership profile.
  $permissions['view own global_leadership profile'] = array(
    'name' => 'view own global_leadership profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'global',
      3 => 'moderator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'content',
      2 => 'moderator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
