module Config = {
  type route =
    | Settings
    | Home
    | MainSettings
    | ProfileSettings;
};

include ReRoute.CreateNavigation(Config);