import _x64dbg


def _plugin_logprintf(text='', *args):
    _x64dbg._plugin_logprintf(text % args)


def _plugin_logputs(text=''):
    _plugin_logprintf('%s\n' % text)
