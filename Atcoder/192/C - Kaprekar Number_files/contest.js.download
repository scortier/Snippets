"use strict";
$(function() {
  // fix contest nav-tabs
  var CNVTB_FIXED = 'cnvtb_fixed';
  function toggleCNVTB() {
    var a = $('#fix-cnvtb');
    if (a.hasClass('disabled')) {
      setLS(CNVTB_FIXED, true);
    } else {
      setLS(CNVTB_FIXED, false);
    }
    a.toggleClass('disabled');
    $('#contest-nav-tabs').toggleClass('cnvtb-fixed');
  }
  if (getLS(CNVTB_FIXED) === false) toggleCNVTB();
  $('#fix-cnvtb').click(toggleCNVTB);

  // convert relative link
  const RELATIVE_LINKS = ['/assignments','/submit','/clarifications','/submissions','/submissions/me','/standings','/rules','/glossary','/tutorial'];
  $('#main-container a').each(function() {
    var href = $(this).attr('href');
    if (RELATIVE_LINKS.indexOf(href) != -1) {
      $(this).attr('href', '/contests/{0}{1}'.format(contestScreenName, href));
    }
  });

  // code editor
  if (typeof CodeMirror !== 'undefined') {
    $('.editor').each(function(){
      var editor = CodeMirror.fromTextArea(this, {
        viewportMargin: Infinity,
        lineNumbers: true
      });
      $(this).data('editor', editor);
    });
    $('.btn-toggle-editor').click(function() {
      if ($(this).hasClass('active')) {
        $('.div-editor').show();
        $('.div-editor>textarea').attr('name','sourceCode');
        $('.plain-textarea').hide().removeAttr('name');
        $('.editor').data('editor').doc.setValue($('.plain-textarea').val());
        delLS('plain_editor');
      } else {
        $('.plain-textarea').val($('.editor').data('editor').doc.getValue());
        $('.div-editor').hide();
        $('.div-editor>textarea').removeAttr('name');
        $('.plain-textarea').show().attr('name','sourceCode');
        adjust();
        setLS('plain_editor', true);
      }
    });
    if (getLS('plain_editor')) $('.btn-toggle-editor').trigger('click');
    $('.btn-auto-height').click(function() {
      if ($(this).hasClass('active')) {
        $('.CodeMirror').css('height','');
        delLS('auto_height');
      } else {
        $('.CodeMirror').css('height','auto');
        setLS('auto_height', true);
      }
      adjust();
    });
    if (getLS('auto_height')) $('.btn-auto-height').trigger('click');
    function adjust() {
      $('.plain-textarea').each(function() {
        if (getLS('auto_height')) {
          $(this).css('height', $(this)[0].scrollHeight + 'px');
        } else {
          $(this).css('height', 'auto');
        }
      });
    }
    $('.plain-textarea').on('input keyup', adjust);

    // file open
    $('#btn-open-file').click(function() {
      $('#input-open-file').trigger('click');
    });
    $('#input-open-file').on('change', function(e) {
      var fileData = e.target.files[0];
      var reader = new FileReader();
      reader.onload = function() {
        $('.editor').data('editor').doc.setValue(reader.result);
        $('.plain-textarea').val(reader.result);
      };
      reader.readAsText(fileData);
    });

    getSourceCode = function() {
      if ($('.btn-toggle-editor').hasClass('active')) {
        return $('.plain-textarea').val();
      } else {
        return $('.editor').data('editor').doc.getValue();
      }
    };
  }
  
  // submit form
  if ($('#select-lang').length) {
    (function() {
      var name = $('#select-lang').data('name');

      function langUpdated() {
        currentLang = $('#select-lang select.current').val();
        if (currentLang) setLS('defaultLang', currentLang);
        var mime = $('#select-lang select.current>option:selected').data('mime');
        $('.editor').data('editor').setOption('mode', mime);
      }
      $('#select-lang select').on('change', langUpdated);

      function selectLang() {
        if (currentLang) {
          function selectLangFunc() {
            var s = $('#select-lang select.current');
            if (s.hasClass('select2-hidden-accessible')) {
              s.val(currentLang).trigger('change');
              langUpdated();
            }
            else setTimeout(selectLangFunc, 50);
          }
          selectLangFunc();
        } else langUpdated();
      }

      if ($('#select-task').length) {
        function switchSelectLang() {
          var task = $('#select-task').val();
          $('#select-lang>div').hide();
          $('#select-lang select').removeAttr('name');
          $('#select-lang select').removeAttr('required');
          $('#select-lang select').removeClass('current');
          $('#select-lang-'+task).show();
          $('#select-lang-'+task+'>select').attr('name',name);
          $('#select-lang-'+task+'>select').attr('required', true);
          $('#select-lang-'+task+'>select').addClass('current');
          selectLang();
        }
        switchSelectLang();
        $('#select-task').change(switchSelectLang);
      } else {
        selectLang();
      }

      $('#select-lang').show();
    })();
  }

  if ($('.form-code-submit').length) {
    var codeSubmitted = false;
    $('.form-code-submit').on('submit', function() {
      if (codeSubmitted) return false;
      codeSubmitted = true;
      setTimeout(function() { codeSubmitted = false;}, 10000);
    });
  }

  // copy button
  if (document.queryCommandSupported('copy') && (typeof PRINT === 'undefined')) {
    var cnt = 0;
    $('pre.prettyprint').each(function() {
      var pre_id = "for_copy"+cnt;
      var btn_html = '<div class="div-btn-copy"><span class="btn-copy btn-pre" tabindex="0" data-toggle="tooltip" data-trigger="manual" title="Copied!" data-target="'+pre_id+'">Copy</span></div>';
      $(this).before(btn_html);
      $(this).addClass('source-code');
      var for_copy_html = '<pre id="'+pre_id+'" class="source-code-for-copy"></pre>';
      $(this).after($(for_copy_html).text($(this).text()));
      cnt++;
    });
    $("#task-statement h3+pre").each(function(i) {
      var id = "pre-sample"+i;
      $(this).attr("id", id);
      var h3 = $(this).prev('h3');
      h3.append(' <span class="btn btn-default btn-sm btn-copy" tabindex="0" data-toggle="tooltip" data-trigger="manual" title="Copied!" data-target="'+id+'">Copy</span>');
      $(this).before('<div class="div-btn-copy"><span class="btn-copy btn-pre" tabindex="0" data-toggle="tooltip" data-trigger="manual" title="Copied!" data-target="'+id+'">Copy</span></div>');
    });
  }
  $('.btn-copy').click(function() {
    window.getSelection().removeAllRanges();
    try {
      copy($('#'+$(this).data('target')).text());
      $(this).tooltip('show');
      var _this = this;
      setTimeout(function(){$(_this).tooltip('hide');}, 800);
    } catch (err) {
      console.log(err);
    }
    window.getSelection().removeAllRanges();
  });

  // clar notification
  clearClarLS = function() {
    var items = [], expires = [];
    for (var i = 0, len = localStorage.length; i < len; i++) {
      var key = localStorage.key(i);
      if (!key) continue;
      if (key.endsWith('_clar_count')) items.push(key);
      else if (key.endsWith('_last_read')) items.push(key);
      else if (key.endsWith('_last_update')) items.push(key);
      else if (key.endsWith('_clar_expire')) expires.push(key);
    }
    var serverTime = getServerTime();
    for (var i = 0; i < expires.length; i++) {
      var key = expires[i];
      var val = getLS(key);
      if (val && moment(new Date(val)).isAfter(serverTime)) continue;
      delLS(key);
    }
    for (var i = 0; i < items.length; i++) {
      var key = items[i];
      var prefix = key.split('_').slice(0,-2).join('_');
      var expire = prefix+'_clar_expire';
      if (!getLS(expire)) delLS(key);
    }
  };
  if ($('#clar-badge').length) {
    var CLAR_EXPIRE_HOURS = 24;
    var clarExpireName = '{0}_clar_expire'.format(contestScreenName);
    setLS(clarExpireName, moment(endTime).add(CLAR_EXPIRE_HOURS, 'h'));
    clearClarLS();

    var CLAR_INTERVAL = 60*1000;
    var CLAR_BEGIN = 5*60*1000 + rand([0,CLAR_INTERVAL]);
    var clarCountName = '{0}_clar_count'.format(contestScreenName);
    var lastUpdateName = '{0}_last_update'.format(contestScreenName);
    var lastReadName = '{0}_last_read'.format(contestScreenName);
    
    if (typeof CLAR_READ !== 'undefined') {
      var serverTime = getServerTime();
      setLS(lastReadName, serverTime);
      delLS(clarCountName);
    }
    function getMomentFromLS(name) {
      var str = getLS(name);
      if (!str) return getServerTime().subtract(CLAR_INTERVAL+100, 'ms');
      return moment(new Date(str));
    }
    function updateBadge() {
      var clarCount = getLS(clarCountName) || 0;
      $('#clar-badge').text(clarCount===0?'':clarCount);
    }
    var timer;
    function updateClarCount() {
      var serverTime = getServerTime();
      if (-CLAR_INTERVAL <= serverTime.diff(startTime) && serverTime.diff(startTime) < CLAR_BEGIN) return;
      if (serverTime.isAfter(endTime)) {
        clearInterval(timer);
        return;
      }
      var lastUpdate = getMomentFromLS(lastUpdateName);
      if (serverTime.diff(lastUpdate) >= CLAR_INTERVAL) {
        var lastRead = getMomentFromLS(lastReadName);
        var t = encodeURIComponent(lastRead.format('YYYY-MM-DD HH:mm:ssZZ'));
        $.ajax('/contests/{0}/clarifications/count?t={1}'.format(contestScreenName, t))
        .done(function(data) {
          if (typeof data === 'number') {
            setLS(clarCountName, data);
            updateBadge();
          }
        });
        setLS(lastUpdateName, serverTime);
      } else updateBadge();
    }
    updateClarCount();
    timer = setInterval(updateClarCount, 3*1000);
  }

  // waiting judge
  if ($('.waiting-judge').length) {
    (function() {
      $('.waiting-judge').append('<img src="//img.atcoder.jp/assets/icon/waiting.gif">');
      var timer = null;
      var sids = [];
      $('.waiting-judge').each(function() {
        sids.push($(this).data('id'));
      });
      function reloadStatus() {
        if (sids.length == 0) {
          timer = null;
          return;
        }
        var requestURL = '{0}?reload=true&sids[]={1}'.format(submissionAPI, sids.join('&sids[]='));
        $.ajax(requestURL).done(function(data) {
          if (typeof data === 'object' && 'Result' in data) {
            $('.waiting-judge [data-toggle="tooltip"]').tooltip('hide');
            var results = data['Result'];
            for (var id in results) {
              var html = $.parseHTML(results[id].Html);
              if ($(html).hasClass('waiting-judge')) {
                $('.waiting-judge[data-id={0}] span'.format(id)).replaceWith($(html).find('span'));
              } else {
                $('.waiting-judge[data-id={0}]'.format(id)).replaceWith(html);
              }
              $('.submission-score[data-id={0}]'.format(id)).text(results[id].Score);
            }
            $('.waiting-judge [data-toggle="tooltip"]').tooltip();
            if ('Interval' in data) {
              timer = setTimeout(reloadStatus, data['Interval']);
            }
          }
        });
      }
      timer = setTimeout(reloadStatus, reloadInterval);
    })();
  }
});

var getSourceCode; // code editor
var clearClarLS;
