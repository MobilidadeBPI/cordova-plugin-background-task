<h1>cordova-plugin-background-task</h1>
<p>This plugin allows you to start and stop background tasks to allow iOS apps to finish processing before the app is suspended.</p>
<h2>API Reference</h2>
<h3>BackgroundTask</h3>
<pre>startInBackground: function(successCallback, failureCallback)

BackgroundTask.startInBackground(onSuccess, onFailure);

Begins a background task, as of iOS7, this process is in average a 3 minute window, several executions that take too long may prompt the operating system to throttle back or terminate the app.
 </pre>
 <pre>startInBackground: function(successCallback, failureCallback)

 BackgroundTask.startInBackground(onSuccess, onFailure);

 Begins a background task, as of iOS7, this process is in average a 3 minute window, several executions that take too long may prompt the operating system to throttle back or terminate the app.
  </pre>

---------------------------
<p>To install this plugin, follow the [Command-line Interface Guide](http://cordova.apache.org/docs/en/edge/guide_cli_index.md.html#The%20Command-line%20Interface).</p>

<p>If you are not using the Cordova Command-line Interface, follow [Using Plugman to Manage Plugins](http://cordova.apache.org/docs/en/edge/plugin_ref_plugman.md.html).</p>
