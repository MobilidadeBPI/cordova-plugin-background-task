var utils = require('cordova/utils'), 
    exec = require('cordova/exec');

var BackgroundTask = {
	startInBackground: function(successCallback, failureCallback) {
    var id = utils.createUUID();

    var task = {
      stop: function() {
        exec(successCallback, failureCallback, "BackgroundTask", "stopInBackground", [id]);
      }
    };

    var success = function() {
      if(successCallback) successCallback(task);
    }

    var fail = function() {
      if(failureCallback) failureCallback();
    }

    exec(success, fail, "BackgroundTask", "startInBackground", [id]);

    return task;
  }
};
module.exports = BackgroundTask;
