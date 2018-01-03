[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

/* day 3: statelessComponent */
module Greeting = {
  let component = ReasonReact.statelessComponent("Greeting");

  let make = (_children) => {
    ...component,
    render: (_self) => <h1 className="some-class"> (ReasonReact.stringToElement({j|Hello 🎄|j})) </h1>
  };
};

ReactDOMRe.renderToElementWithId(<Greeting />, "root");

/* equivalent without JSX */
/* ReactDOMRe.renderToElementWithId(ReasonReact.element(Greeting.make()), "root"); */

register_service_worker();
