open Navigation;

open BsReactNative;

module Styles = {
  open Style;
  let container =
    style([flex(1.), alignItems(Center), justifyContent(Center)]);
};

let component = ReasonReact.statelessComponent("ProfileSettings");

let make = (~navigation, _children) => {
  ...component,
  render: _self =>
    <TabNavigator.Screen
      tabItem=(
        ({isActive}) =>
          <TabNavigator.TabBar.Item
            label="Profile"
            style=(
              Style.style([Style.color(String(isActive ? "blue" : "gray"))])
            )
          />
      )
      navigation>
      ...(
           () =>
             <View style=Styles.container>
               <Text> (ReasonReact.string("Profile Settings")) </Text>
             </View>
         )
    </TabNavigator.Screen>
};