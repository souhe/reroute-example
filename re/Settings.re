open Navigation;

open BsReactNative;

let component = ReasonReact.statelessComponent("Settings");

let make = (~navigation, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      headerTitle="Settings" navigation animation=Animation.none>
      ...(
           () =>
             <TabNavigator
               initialRoute=Config.MainSettings
               routes=[|Config.MainSettings, Config.ProfileSettings|]>
               ...(
                    (~navigation) =>
                      switch navigation.currentRoute {
                      | Config.MainSettings => <MainSettings navigation />
                      | Config.ProfileSettings =>
                        <ProfileSettings navigation />
                      }
                  )
             </TabNavigator>
         )
    </StackNavigator.Screen>
};