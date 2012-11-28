<?php
/**
 * @file
 * campus_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campus_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Highlights',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: main-menu:about-ash-jane
  $menu_links['main-menu:about-ash-jane'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-ash-jane',
    'router_path' => 'about-ash-jane',
    'link_title' => 'Ps Ashley & Jane',
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
    'weight' => '-50',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: main-menu:admin/appearance
  $menu_links['main-menu:admin/appearance'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Campuses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:admin/content
  $menu_links['main-menu:admin/content'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:admin/structure
  $menu_links['main-menu:admin/structure'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'TV',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:admin/structure/menu
  $menu_links['main-menu:admin/structure/menu'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Church Life',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:campus
  $menu_links['main-menu:campus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'campus',
    'router_path' => 'campus',
    'link_title' => 'Ministries',
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
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: main-menu:concierge
  $menu_links['main-menu:concierge'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'concierge',
    'router_path' => 'concierge ',
    'link_title' => 'Concierge',
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
    'parent_path' => 'node/add',
  );
  // Exported menu link: main-menu:devotions_online
  $menu_links['main-menu:devotions_online'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'devotions_online',
    'router_path' => 'devotions_online',
    'link_title' => 'Devotions Online',
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
    'weight' => '-49',
    'parent_path' => 'user',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
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
    'weight' => '-48',
    'parent_path' => 'admin/appearance',
  );
  // Exported menu link: main-menu:give
  $menu_links['main-menu:give'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'give',
    'router_path' => 'give',
    'link_title' => 'Giving',
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
    'parent_path' => 'user',
  );
  // Exported menu link: main-menu:group
  $menu_links['main-menu:group'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'group',
    'router_path' => 'group',
    'link_title' => 'Groups',
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
    'weight' => '-50',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: main-menu:influencers_live
  $menu_links['main-menu:influencers_live'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'influencers_live',
    'router_path' => 'influencers_live',
    'link_title' => 'Influencers Live',
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
    'weight' => '-50',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: main-menu:location
  $menu_links['main-menu:location'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'location',
    'router_path' => 'location',
    'link_title' => 'Location',
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
    'weight' => '-50',
    'parent_path' => 'admin/appearance',
  );
  // Exported menu link: main-menu:node/add
  $menu_links['main-menu:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:podcasts
  $menu_links['main-menu:podcasts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'podcasts',
    'router_path' => 'podcasts',
    'link_title' => 'Podcasts',
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
    'weight' => '-50',
    'parent_path' => 'user',
  );
  // Exported menu link: main-menu:services
  $menu_links['main-menu:services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
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
    'weight' => '-49',
    'parent_path' => 'admin/appearance',
  );
  // Exported menu link: main-menu:store
  $menu_links['main-menu:store'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Store',
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
    'weight' => '-48',
    'parent_path' => 'user',
  );
  // Exported menu link: main-menu:team
  $menu_links['main-menu:team'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'team',
    'router_path' => 'team',
    'link_title' => 'Team',
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
    'weight' => '-48',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:user
  $menu_links['main-menu:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Give',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:vision
  $menu_links['main-menu:vision'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vision',
    'router_path' => 'vision',
    'link_title' => 'Vision',
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
    'weight' => '-49',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-footer-menu:<front>
  $menu_links['menu-footer-menu:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Ps. Ashley & Jane',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-footer-menu:about-ash-jane
  $menu_links['menu-footer-menu:about-ash-jane'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about-ash-jane',
    'router_path' => 'about-ash-jane',
    'link_title' => 'Ps Ashley & Jane',
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
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:campus
  $menu_links['menu-footer-menu:campus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'campus',
    'router_path' => 'campus',
    'link_title' => 'Ministries',
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
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:concierge
  $menu_links['menu-footer-menu:concierge'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'concierge',
    'router_path' => 'concierge ',
    'link_title' => 'Concierge',
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
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:devotions_online
  $menu_links['menu-footer-menu:devotions_online'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'devotions_online',
    'router_path' => 'devotions_online',
    'link_title' => 'Devotions Online',
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
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:events
  $menu_links['menu-footer-menu:events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
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
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:group
  $menu_links['menu-footer-menu:group'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'group',
    'router_path' => 'group',
    'link_title' => 'Groups',
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
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:influencers_live
  $menu_links['menu-footer-menu:influencers_live'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'influencers_live',
    'router_path' => 'influencers_live',
    'link_title' => 'Influencers Live',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:location
  $menu_links['menu-footer-menu:location'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'location',
    'router_path' => 'location',
    'link_title' => 'Location',
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
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:podcasts
  $menu_links['menu-footer-menu:podcasts'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'podcasts',
    'router_path' => 'podcasts',
    'link_title' => 'Podcasts',
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
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:services
  $menu_links['menu-footer-menu:services'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
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
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:store
  $menu_links['menu-footer-menu:store'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Store',
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
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-menu:team
  $menu_links['menu-footer-menu:team'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'team',
    'router_path' => 'team',
    'link_title' => 'Team',
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
    'weight' => '-48',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-footer-menu:vision
  $menu_links['menu-footer-menu:vision'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'vision',
    'router_path' => 'vision',
    'link_title' => 'Vision',
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
    'weight' => '-49',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-fresh-dashboard:vc/contents
  $menu_links['menu-fresh-dashboard:vc/contents'] = array(
    'menu_name' => 'menu-fresh-dashboard',
    'link_path' => 'vc/contents',
    'router_path' => 'vc/contents',
    'link_title' => 'Content',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-fresh-dashboard:vc/dashboard
  $menu_links['menu-fresh-dashboard:vc/dashboard'] = array(
    'menu_name' => 'menu-fresh-dashboard',
    'link_path' => 'vc/dashboard',
    'router_path' => 'vc/dashboard',
    'link_title' => 'Dashboard',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-fresh-dashboard:vc/site_settings
  $menu_links['menu-fresh-dashboard:vc/site_settings'] = array(
    'menu_name' => 'menu-fresh-dashboard',
    'link_path' => 'vc/site_settings',
    'router_path' => 'vc/site_settings',
    'link_title' => 'Site settings',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-homepage-news-box:devotions_online
  $menu_links['menu-homepage-news-box:devotions_online'] = array(
    'menu_name' => 'menu-homepage-news-box',
    'link_path' => 'devotions_online',
    'router_path' => 'devotions_online',
    'link_title' => 'Paradise TV Online',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-homepage-news-box:give
  $menu_links['menu-homepage-news-box:give'] = array(
    'menu_name' => 'menu-homepage-news-box',
    'link_path' => 'give',
    'router_path' => 'give',
    'link_title' => 'Onling Giving',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-homepage-news-box:podcasts
  $menu_links['menu-homepage-news-box:podcasts'] = array(
    'menu_name' => 'menu-homepage-news-box',
    'link_path' => 'podcasts',
    'router_path' => 'podcasts',
    'link_title' => 'Podcast Download',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-homepage-news-box:store
  $menu_links['menu-homepage-news-box:store'] = array(
    'menu_name' => 'menu-homepage-news-box',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Paradise Album',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-influncer-campus:<front>
  $menu_links['menu-influncer-campus:<front>'] = array(
    'menu_name' => 'menu-influncer-campus',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Australia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: menu-new-influencer:i-am-new
  $menu_links['menu-new-influencer:i-am-new'] = array(
    'menu_name' => 'menu-new-influencer',
    'link_path' => 'i-am-new',
    'router_path' => 'i-am-new',
    'link_title' => 'I\'m new',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-new-influencer:influencer
  $menu_links['menu-new-influencer:influencer'] = array(
    'menu_name' => 'menu-new-influencer',
    'link_path' => 'influencer',
    'router_path' => 'influencer',
    'link_title' => 'Be an Influencer',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-social-network-link:<front>
  $menu_links['menu-social-network-link:<front>'] = array(
    'menu_name' => 'menu-social-network-link',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-social-network-link:http://vimeo.com/
  $menu_links['menu-social-network-link:http://vimeo.com/'] = array(
    'menu_name' => 'menu-social-network-link',
    'link_path' => 'http://vimeo.com/',
    'router_path' => '',
    'link_title' => 'Vimeo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-social-network-link:rss.xml
  $menu_links['menu-social-network-link:rss.xml'] = array(
    'menu_name' => 'menu-social-network-link',
    'link_path' => 'rss.xml',
    'router_path' => 'rss.xml',
    'link_title' => 'Rss',
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
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Australia');
  t('Be an Influencer');
  t('Campuses');
  t('Church Life');
  t('Concierge');
  t('Contact');
  t('Content');
  t('Dashboard');
  t('Devotions Online');
  t('Events');
  t('Facebook');
  t('Give');
  t('Giving');
  t('Groups');
  t('Highlights');
  t('I\'m new');
  t('Influencers Live');
  t('Location');
  t('Ministries');
  t('Onling Giving');
  t('Paradise Album');
  t('Paradise TV Online');
  t('Podcast Download');
  t('Podcasts');
  t('Ps Ashley & Jane');
  t('Ps. Ashley & Jane');
  t('Rss');
  t('Services');
  t('Site settings');
  t('Store');
  t('TV');
  t('Team');
  t('Vimeo');
  t('Vision');


  return $menu_links;
}
