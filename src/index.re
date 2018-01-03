[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

/* day 4: props are labelled arguments */
module Greeting = {
  let component = ReasonReact.statelessComponent("Greeting");

  /* props and default: https://reasonml.github.io/reason-react/docs/en/creation-props-self.html#props */
  let make = (~name={j|🎄|j}, _children) => {
    ...component,
    render: (_self) => <h1 className="some-class"> (ReasonReact.stringToElement("Hello " ++ name)) </h1>
  };
};

ReactDOMRe.renderToElementWithId(<div> <Greeting /> <Greeting name="bulbasaur" /> </div>, "root");

register_service_worker();
