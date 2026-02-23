# Makefile for PO directory in any package using GNU gettext.
# Copyright (C) 1995-2000 Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2000-2020 Free Software Foundation, Inc.
#
# Copying and distribution of this file, with or without modification,
# are permitted in any medium without royalty provided the copyright
# notice and this notice are preserved.  This file is offered as-is,
# without any warranty.
#
# Origin: gettext-0.21
GETTEXT_MACRO_VERSION = 0.20

PACKAGE = vlc
VERSION = 4.0.0-dev
PACKAGE_BUGREPORT = 

SED = /usr/bin/sed
SHELL = /bin/sh


srcdir = .
top_srcdir = ..


prefix = /usr/local
exec_prefix = ${prefix}
datarootdir = ${prefix}/share
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gettextsrcdir = $(datadir)/gettext/po

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

# We use $(mkdir_p).
# In automake <= 1.9.x, $(mkdir_p) is defined either as "mkdir -p --" or as
# "$(mkinstalldirs)" or as "$(install_sh) -d". For these automake versions,
# ${SHELL} /home/rohit/work/audio-video-stream/vlc/autotools/install-sh does not start with $(SHELL), so we add it.
# In automake >= 1.10, $(MKDIR_P) is derived from ${MKDIR_P}, which is defined
# either as "/path/to/mkdir -p" or ".../install-sh -c -d". For these automake
# versions, $(mkinstalldirs) and $(install_sh) are unused.
mkinstalldirs = $(SHELL) ${SHELL} /home/rohit/work/audio-video-stream/vlc/autotools/install-sh -d
install_sh = $(SHELL) ${SHELL} /home/rohit/work/audio-video-stream/vlc/autotools/install-sh
MKDIR_P = /usr/bin/mkdir -p
mkdir_p = $(MKDIR_P)

# When building gettext-tools, we prefer to use the built programs
# rather than installed programs.  However, we can't do that when we
# are cross compiling.
CROSS_COMPILING = @CROSS_COMPILING@

GMSGFMT_ = /usr/bin/msgfmt
GMSGFMT_no = /usr/bin/msgfmt
GMSGFMT_yes = /usr/bin/msgfmt
GMSGFMT = $(GMSGFMT_$(USE_MSGCTXT))
XGETTEXT_ = /usr/bin/xgettext
XGETTEXT_no = /usr/bin/xgettext
XGETTEXT_yes = /usr/bin/xgettext
XGETTEXT = $(XGETTEXT_$(USE_MSGCTXT))
MSGMERGE = /usr/bin/msgmerge
MSGMERGE_UPDATE = /usr/bin/msgmerge --update
MSGMERGE_FOR_MSGFMT_OPTION = --for-msgfmt
MSGINIT = msginit
MSGCONV = msgconv
MSGFILTER = msgfilter

POFILES =  ach.po af.po am.po an.po ar.po as.po ast.po az.po be.po bg.po bn_IN.po bn.po br.po brx.po bs.po ca.po cgg.po ckb.po co.po cs.po cy.po da.po de.po el.po en_GB.po es.po et.po eu.po fa.po ff.po fi.po fr.po fur.po fy.po ga.po gd.po gl.po gu.po he.po hi.po hr.po hu.po hy.po ia.po id.po is.po it.po ja.po ka.po kk.po km.po kn.po ko.po ks_IN.po ky.po lg.po lt.po lv.po mai.po mk.po ml.po mn.po mr.po ms.po my.po nb.po ne.po nl.po nn.po oc.po or.po pa.po pl.po ps.po pt_BR.po pt_PT.po ro.po ru.po si.po sk.po sl.po sq.po sr.po sv.po ta.po te.po tet.po th.po tl.po tr.po ug.po uk.po uz.po vi.po wa.po zh_CN.po zh_TW.po zu.po
GMOFILES =  ach.gmo af.gmo am.gmo an.gmo ar.gmo as.gmo ast.gmo az.gmo be.gmo bg.gmo bn_IN.gmo bn.gmo br.gmo brx.gmo bs.gmo ca.gmo cgg.gmo ckb.gmo co.gmo cs.gmo cy.gmo da.gmo de.gmo el.gmo en_GB.gmo es.gmo et.gmo eu.gmo fa.gmo ff.gmo fi.gmo fr.gmo fur.gmo fy.gmo ga.gmo gd.gmo gl.gmo gu.gmo he.gmo hi.gmo hr.gmo hu.gmo hy.gmo ia.gmo id.gmo is.gmo it.gmo ja.gmo ka.gmo kk.gmo km.gmo kn.gmo ko.gmo ks_IN.gmo ky.gmo lg.gmo lt.gmo lv.gmo mai.gmo mk.gmo ml.gmo mn.gmo mr.gmo ms.gmo my.gmo nb.gmo ne.gmo nl.gmo nn.gmo oc.gmo or.gmo pa.gmo pl.gmo ps.gmo pt_BR.gmo pt_PT.gmo ro.gmo ru.gmo si.gmo sk.gmo sl.gmo sq.gmo sr.gmo sv.gmo ta.gmo te.gmo tet.gmo th.gmo tl.gmo tr.gmo ug.gmo uk.gmo uz.gmo vi.gmo wa.gmo zh_CN.gmo zh_TW.gmo zu.gmo
UPDATEPOFILES =  ach.po-update af.po-update am.po-update an.po-update ar.po-update as.po-update ast.po-update az.po-update be.po-update bg.po-update bn_IN.po-update bn.po-update br.po-update brx.po-update bs.po-update ca.po-update cgg.po-update ckb.po-update co.po-update cs.po-update cy.po-update da.po-update de.po-update el.po-update en_GB.po-update es.po-update et.po-update eu.po-update fa.po-update ff.po-update fi.po-update fr.po-update fur.po-update fy.po-update ga.po-update gd.po-update gl.po-update gu.po-update he.po-update hi.po-update hr.po-update hu.po-update hy.po-update ia.po-update id.po-update is.po-update it.po-update ja.po-update ka.po-update kk.po-update km.po-update kn.po-update ko.po-update ks_IN.po-update ky.po-update lg.po-update lt.po-update lv.po-update mai.po-update mk.po-update ml.po-update mn.po-update mr.po-update ms.po-update my.po-update nb.po-update ne.po-update nl.po-update nn.po-update oc.po-update or.po-update pa.po-update pl.po-update ps.po-update pt_BR.po-update pt_PT.po-update ro.po-update ru.po-update si.po-update sk.po-update sl.po-update sq.po-update sr.po-update sv.po-update ta.po-update te.po-update tet.po-update th.po-update tl.po-update tr.po-update ug.po-update uk.po-update uz.po-update vi.po-update wa.po-update zh_CN.po-update zh_TW.po-update zu.po-update
DUMMYPOFILES =  ach.nop af.nop am.nop an.nop ar.nop as.nop ast.nop az.nop be.nop bg.nop bn_IN.nop bn.nop br.nop brx.nop bs.nop ca.nop cgg.nop ckb.nop co.nop cs.nop cy.nop da.nop de.nop el.nop en_GB.nop es.nop et.nop eu.nop fa.nop ff.nop fi.nop fr.nop fur.nop fy.nop ga.nop gd.nop gl.nop gu.nop he.nop hi.nop hr.nop hu.nop hy.nop ia.nop id.nop is.nop it.nop ja.nop ka.nop kk.nop km.nop kn.nop ko.nop ks_IN.nop ky.nop lg.nop lt.nop lv.nop mai.nop mk.nop ml.nop mn.nop mr.nop ms.nop my.nop nb.nop ne.nop nl.nop nn.nop oc.nop or.nop pa.nop pl.nop ps.nop pt_BR.nop pt_PT.nop ro.nop ru.nop si.nop sk.nop sl.nop sq.nop sr.nop sv.nop ta.nop te.nop tet.nop th.nop tl.nop tr.nop ug.nop uk.nop uz.nop vi.nop wa.nop zh_CN.nop zh_TW.nop zu.nop
DISTFILES.common = Makefile.in.in remove-potcdate.sin \
$(DISTFILES.common.extra1) $(DISTFILES.common.extra2) $(DISTFILES.common.extra3)
DISTFILES = $(DISTFILES.common) Makevars POTFILES.in \
$(POFILES) $(GMOFILES) \
$(DISTFILES.extra1) $(DISTFILES.extra2) $(DISTFILES.extra3)

POTFILES = \
     ../include/vlc_access.h \
     ../include/vlc_actions.h \
     ../include/vlc_aout.h \
     ../include/vlc_arrays.h \
     ../include/vlc_bits.h \
     ../include/vlc_block.h \
     ../include/vlc_block_helper.h \
     ../include/vlc_charset.h \
     ../include/vlc_codec.h \
     ../include/vlc_codecs.h \
     ../include/vlc_common.h \
     ../include/vlc_config.h \
     ../include/vlc_config_cat.h \
     ../include/vlc_configuration.h \
     ../include/vlc_demux.h \
     ../include/vlc_epg.h \
     ../include/vlc_es.h \
     ../include/vlc_es_out.h \
     ../include/vlc_filter.h \
     ../include/vlc_fixups.h \
     ../include/vlc_frame.h \
     ../include/vlc_gcrypt.h \
     ../include/vlc_httpd.h \
     ../include/vlc_image.h \
     ../include/vlc_input.h \
     ../include/vlc_intf_strings.h \
     ../include/vlc_iso_lang.h \
     ../include/vlc_messages.h \
     ../include/vlc_meta.h \
     ../include/vlc_modules.h \
     ../include/vlc_tick.h \
     ../include/vlc_network.h \
     ../include/vlc_objects.h \
     ../include/vlc_pgpkey.h \
     ../include/vlc_plugin.h \
     ../include/vlc_rand.h \
     ../include/vlc_services_discovery.h \
     ../include/vlc_sout.h \
     ../include/vlc_stream.h \
     ../include/vlc_strings.h \
     ../include/vlc_threads.h \
     ../include/vlc_tls.h \
     ../include/vlc_update.h \
     ../include/vlc_url.h \
     ../include/vlc_variables.h \
     ../include/vlc/vlc.h \
     ../include/vlc_vlm.h \
     ../include/vlc_vout.h \
     ../include/vlc_xml.h \
     ../src/audio_output/aout_internal.h \
     ../src/audio_output/common.c \
     ../src/audio_output/dec.c \
     ../src/audio_output/filters.c \
     ../src/audio_output/output.c \
     ../src/config/chain.c \
     ../src/config/cmdline.c \
     ../src/config/configuration.h \
     ../src/config/core.c \
     ../src/config/file.c \
     ../src/config/help.c \
     ../src/config/intf.c \
     ../src/darwin/error.c \
     ../src/extras/libc.c \
     ../src/input/access.c \
     ../src/input/decoder.c \
     ../src/input/decoder.h \
     ../src/input/demux.c \
     ../src/input/demux.h \
     ../src/input/es_out.c \
     ../src/input/es_out.h \
     ../src/input/input.c \
     ../src/input/input_internal.h \
     ../src/input/item.c \
     ../src/input/meta.c \
     ../src/input/stream.c \
     ../src/input/stream.h \
     ../src/input/stream_memory.c \
     ../src/input/subtitles.c \
     ../src/input/var.c \
     ../src/input/vlm.c \
     ../src/input/vlm_internal.h \
     ../src/input/vlmshell.c \
     ../src/interface/interface.c \
     ../src/libvlc.c \
     ../src/libvlc.h \
     ../src/libvlc-module.c \
     ../src/misc/actions.c \
     ../src/misc/cpu.c \
     ../src/misc/es_format.c \
     ../src/misc/filter_chain.c \
     ../src/misc/frame.c \
     ../src/misc/image.c \
     ../src/misc/md5.c \
     ../src/misc/messages.c \
     ../src/misc/mtime.c \
     ../src/misc/objects.c \
     ../src/misc/rand.c \
     ../src/misc/threads.c \
     ../src/misc/update.c \
     ../src/misc/update.h \
     ../src/misc/variables.c \
     ../src/misc/variables.h \
     ../src/misc/xml.c \
     ../src/missing.c \
     ../src/modules/cache.c \
     ../src/modules/entry.c \
     ../src/modules/modules.c \
     ../src/modules/modules.h \
     ../src/network/getaddrinfo.c \
     ../src/network/httpd.c \
     ../src/network/io.c \
     ../src/network/rootbind.c \
     ../src/network/tls.c \
     ../src/network/udp.c \
     ../src/player/osd.c \
     ../src/player/player.c \
     ../src/player/input.c \
     ../src/stream_output/sap.c \
     ../src/stream_output/stream_output.c \
     ../src/stream_output/stream_output.h \
     ../src/text/iso-639_def.h \
     ../src/version.c \
     ../src/video_output/interlacing.c \
     ../src/video_output/video_output.c \
     ../src/video_output/video_text.c \
     ../src/video_output/video_widgets.c \
     ../src/video_output/vout_internal.h \
     ../src/video_output/vout_intf.c \
     ../src/video_output/vout_private.h \
     ../src/video_output/vout_subpictures.c \
     ../src/win32/thread.c \
     ../lib/audio.c \
     ../lib/core.c \
     ../lib/event.c \
     ../lib/libvlc_internal.h \
     ../lib/log.c \
     ../lib/media.c \
     ../lib/media_discoverer.c \
     ../lib/media_list.c \
     ../lib/media_list_path.h \
     ../lib/media_list_player.c \
     ../lib/media_player.c \
     ../lib/video.c \
     ../modules/access/alsa.c \
     ../modules/access/amt.c \
     ../modules/access/avaudiocapture.m \
     ../modules/access/avcapture.m \
     ../modules/access/avio.h \
     ../modules/access/bluray.c \
     ../modules/access/cdda.c \
     ../modules/access/concat.c \
     ../modules/access/data.c \
     ../modules/access/dc1394.c \
     ../modules/access/dcp/dcp.cpp \
     ../modules/access/decklink.cpp \
     ../modules/access/disc_helper.h \
     ../modules/access/dshow/dshow.cpp \
     ../modules/access/dsm/access.c \
     ../modules/access/dsm/sd.c \
     ../modules/access/dtv/access.c \
     ../modules/access/dv.c \
     ../modules/access/dvb/access.c \
     ../modules/access/dvb/scan.c \
     ../modules/access/dvdnav.c \
     ../modules/access/dvdread.c \
     ../modules/access/fs.c \
     ../modules/access/ftp.c \
     ../modules/access/http.c \
     ../modules/access/http/access.c \
     ../modules/access/idummy.c \
     ../modules/access/imem-access.c \
     ../modules/access/imem.c \
     ../modules/access/jack.c \
     ../modules/access/linsys/linsys_hdsdi.c \
     ../modules/access/linsys/linsys_sdi.c \
     ../modules/access/live555.cpp \
     ../modules/access/mms/mms.c \
     ../modules/access/mtp.c \
     ../modules/access/nfs.c \
     ../modules/access/oss.c \
     ../modules/access/pulse.c \
     ../modules/access/rdp.c \
     ../modules/access/rist.c \
     ../modules/access/rist.h \
     ../modules/access/rtp/rtp.c \
     ../modules/access/samba.c \
     ../modules/access/satip.c \
     ../modules/access/screen/screen.c \
     ../modules/access/screen/wayland.c \
     ../modules/access/screen/xcb.c \
     ../modules/access/sdp.c \
     ../modules/access/sftp.c \
     ../modules/access/shm.c \
     ../modules/access/smb2.c \
     ../modules/access/smb_common.h \
     ../modules/access/srt.c \
     ../modules/access/srt_common.c \
     ../modules/access/tcp.c \
     ../modules/access/timecode.c \
     ../modules/access/udp.c \
     ../modules/access/unc.c \
     ../modules/access/v4l2/controls.c \
     ../modules/access/v4l2/v4l2.c \
     ../modules/access/vcd/vcd.c \
     ../modules/access/vdr.c \
     ../modules/access/vnc.c \
     ../modules/access/wasapi.c \
     ../modules/access_output/dummy.c \
     ../modules/access_output/file.c \
     ../modules/access_output/http-put.c \
     ../modules/access_output/http.c \
     ../modules/access_output/livehttp.c \
     ../modules/access_output/rist.c \
     ../modules/access_output/shout.c \
     ../modules/access_output/srt.c \
     ../modules/audio_filter/audiobargraph_a.c \
     ../modules/audio_filter/channel_mixer/dolby.c \
     ../modules/audio_filter/channel_mixer/headphone.c \
     ../modules/audio_filter/channel_mixer/mono.c \
     ../modules/audio_filter/channel_mixer/remap.c \
     ../modules/audio_filter/channel_mixer/simple.c \
     ../modules/audio_filter/channel_mixer/spatialaudio.cpp \
     ../modules/audio_filter/channel_mixer/trivial.c \
     ../modules/audio_filter/chorus_flanger.c \
     ../modules/audio_filter/compressor.c \
     ../modules/audio_filter/converter/format.c \
     ../modules/audio_filter/converter/tospdif.c \
     ../modules/audio_filter/equalizer.c \
     ../modules/audio_filter/equalizer_presets.h \
     ../modules/audio_filter/gain.c \
     ../modules/audio_filter/karaoke.c \
     ../modules/audio_filter/normvol.c \
     ../modules/audio_filter/param_eq.c \
     ../modules/audio_filter/resampler/soxr.c \
     ../modules/audio_filter/resampler/speex.c \
     ../modules/audio_filter/resampler/src.c \
     ../modules/audio_filter/resampler/ugly.c \
     ../modules/audio_filter/rnnoise.c \
     ../modules/audio_filter/scaletempo.c \
     ../modules/audio_filter/spatializer/spatializer.cpp \
     ../modules/audio_filter/stereo_widen.c \
     ../modules/audio_mixer/float.c \
     ../modules/audio_mixer/integer.c \
     ../modules/audio_output/adummy.c \
     ../modules/audio_output/alsa.c \
     ../modules/audio_output/amem.c \
     ../modules/audio_output/android/device.c \
     ../modules/audio_output/android/opensles.c \
     ../modules/audio_output/apple/audiounit_ios.m \
     ../modules/audio_output/apple/avsamplebuffer.m \
     ../modules/audio_output/apple/auhal.c \
     ../modules/audio_output/apple/coreaudio_common.c \
     ../modules/audio_output/file.c \
     ../modules/audio_output/jack.c \
     ../modules/audio_output/kai.c \
     ../modules/audio_output/mmdevice.c \
     ../modules/audio_output/oss.c \
     ../modules/audio_output/pulse.c \
     ../modules/audio_output/sndio.c \
     ../modules/audio_output/vlcpulse.c \
     ../modules/audio_output/volume.h \
     ../modules/audio_output/wasapi.c \
     ../modules/audio_output/waveout.c \
     ../modules/audio_output/windows_audio_common.h \
     ../modules/audio_output/winstore.c \
     ../modules/codec/adpcm.c \
     ../modules/codec/aes3.c \
     ../modules/codec/aom.c \
     ../modules/codec/araw.c \
     ../modules/codec/arib/aribsub.c \
     ../modules/codec/audiotoolbox_midi.c \
     ../modules/codec/avcodec/avcodec.c \
     ../modules/codec/avcodec/avcodec.h \
     ../modules/codec/avcodec/d3d11va.c \
     ../modules/codec/avcodec/dxva2.c \
     ../modules/codec/avcodec/encoder.c \
     ../modules/codec/avcodec/vaapi.c \
     ../modules/codec/bpg.c \
     ../modules/codec/cc.c \
     ../modules/codec/cdg.c \
     ../modules/codec/cea708.c \
     ../modules/codec/cea708.h \
     ../modules/codec/cvdsub.c \
     ../modules/codec/daala.c \
     ../modules/codec/dav1d.c \
     ../modules/codec/davs2.c \
     ../modules/codec/ddummy.c \
     ../modules/codec/dmo/dmo.c \
     ../modules/codec/dvbsub.c \
     ../modules/codec/edummy.c \
     ../modules/codec/faad.c \
     ../modules/codec/fdkaac.c \
     ../modules/codec/flac.c \
     ../modules/codec/fluidsynth.c \
     ../modules/codec/g711.c \
     ../modules/codec/gstreamer/gstdecode.c \
     ../modules/codec/jpeg.c \
     ../modules/codec/kate.c \
     ../modules/codec/libass.c \
     ../modules/codec/lpcm.c \
     ../modules/codec/mad.c \
     ../modules/codec/mft.cpp \
     ../modules/codec/mpg123.c \
     ../modules/codec/oggspots.c \
     ../modules/codec/omxil/mediacodec.c \
     ../modules/codec/omxil/omxil.c \
     ../modules/codec/opus.c \
     ../modules/codec/png.c \
     ../modules/codec/qsv.c \
     ../modules/codec/rawvideo.c \
     ../modules/codec/rtpvideo.c \
     ../modules/codec/scte18.c \
     ../modules/codec/scte18.h \
     ../modules/codec/scte27.c \
     ../modules/codec/shine.c \
     ../modules/codec/spdif.c \
     ../modules/codec/speex.c \
     ../modules/codec/spudec/spudec.c \
     ../modules/codec/stl.c \
     ../modules/codec/subsdec.c \
     ../modules/codec/substx3g.c \
     ../modules/codec/subsusf.c \
     ../modules/codec/svcdsub.c \
     ../modules/codec/svg.c \
     ../modules/codec/t140.c \
     ../modules/codec/telx.c \
     ../modules/codec/textst.c \
     ../modules/codec/theora.c \
     ../modules/codec/ttml/substtml.c \
     ../modules/codec/ttml/ttml.c \
     ../modules/codec/ttml/ttml.h \
     ../modules/codec/twolame.c \
     ../modules/codec/uleaddvaudio.c \
     ../modules/codec/videotoolbox/decoder.c \
     ../modules/codec/vorbis.c \
     ../modules/codec/vpx.c \
     ../modules/codec/webvtt/webvtt.c \
     ../modules/codec/x264.c \
     ../modules/codec/x265.c \
     ../modules/codec/xwd.c \
     ../modules/codec/zvbi.c \
     ../modules/control/cli/cli.c \
     ../modules/control/cli/player.c \
     ../modules/control/cli/playlist.c \
     ../modules/control/dbus/dbus.c \
     ../modules/control/dbus/dbus_root.c \
     ../modules/control/dummy.c \
     ../modules/control/gestures.c \
     ../modules/control/globalhotkeys/win32.c \
     ../modules/control/globalhotkeys/xcb.c \
     ../modules/control/hotkeys.c \
     ../modules/control/intromsg.h \
     ../modules/control/lirc.c \
     ../modules/control/ntservice.c \
     ../modules/control/win_msg.c \
     ../modules/demux/adaptive/adaptive.cpp \
     ../modules/demux/aiff.c \
     ../modules/demux/asf/asf.c \
     ../modules/demux/au.c \
     ../modules/demux/avformat/avformat.c \
     ../modules/demux/avformat/avformat.h \
     ../modules/demux/avi/avi.c \
     ../modules/demux/avi/libavi.c \
     ../modules/demux/avi/libavi.h \
     ../modules/demux/caf.c \
     ../modules/demux/cdg.c \
     ../modules/demux/demuxdump.c \
     ../modules/demux/directory.c \
     ../modules/demux/filter/noseek.c \
     ../modules/demux/flac.c \
     ../modules/demux/gme.c \
     ../modules/demux/image.c \
     ../modules/demux/mjpeg.c \
     ../modules/demux/mkv/mkv.cpp \
     ../modules/demux/mod.c \
     ../modules/demux/mp4/libmp4.c \
     ../modules/demux/mp4/libmp4.h \
     ../modules/demux/mp4/meta.c \
     ../modules/demux/mp4/mp4.c \
     ../modules/demux/mpc.c \
     ../modules/demux/mpeg/es.c \
     ../modules/demux/mpeg/h26x.c \
     ../modules/demux/mpeg/mpgv.c \
     ../modules/demux/mpeg/ps.c \
     ../modules/demux/mpeg/ts.c \
     ../modules/demux/mpeg/ts_descriptions.h \
     ../modules/demux/nsv.c \
     ../modules/demux/nuv.c \
     ../modules/demux/ogg.c \
     ../modules/demux/playlist/asx.c \
     ../modules/demux/playlist/b4s.c \
     ../modules/demux/playlist/dvb.c \
     ../modules/demux/playlist/ifo.c \
     ../modules/demux/playlist/itml.c \
     ../modules/demux/playlist/itml.h \
     ../modules/demux/playlist/m3u.c \
     ../modules/demux/playlist/playlist.c \
     ../modules/demux/playlist/playlist.h \
     ../modules/demux/playlist/pls.c \
     ../modules/demux/playlist/podcast.c \
     ../modules/demux/playlist/qtl.c \
     ../modules/demux/playlist/ram.c \
     ../modules/demux/playlist/sgimb.c \
     ../modules/demux/playlist/wpl.c \
     ../modules/demux/playlist/xspf.c \
     ../modules/demux/pva.c \
     ../modules/demux/rawaud.c \
     ../modules/demux/rawdv.c \
     ../modules/demux/rawvid.c \
     ../modules/demux/sid.cpp \
     ../modules/demux/smf.c \
     ../modules/demux/stl.c \
     ../modules/demux/subtitle.c \
     ../modules/demux/tta.c \
     ../modules/demux/ttml.c \
     ../modules/demux/ty.c \
     ../modules/demux/vc1.c \
     ../modules/demux/vobsub.c \
     ../modules/demux/voc.c \
     ../modules/demux/wav.c \
     ../modules/demux/webvtt.c \
     ../modules/demux/xa.c \
     ../modules/demux/xiph.h \
     ../modules/demux/xiph_metadata.c \
     ../modules/demux/xiph_metadata.h \
     ../modules/demux/ytdl.c \
     ../modules/gui/macosx/coreinteraction/VLCHotkeysController.h \
     ../modules/gui/macosx/coreinteraction/VLCHotkeysController.m \
     ../modules/gui/macosx/coreinteraction/VLCVideoFilterHelper.h \
     ../modules/gui/macosx/coreinteraction/VLCVideoFilterHelper.m \
     ../modules/gui/macosx/extensions/NSColor+VLCAdditions.h \
     ../modules/gui/macosx/extensions/NSColor+VLCAdditions.m \
     ../modules/gui/macosx/extensions/NSFont+VLCAdditions.h \
     ../modules/gui/macosx/extensions/NSFont+VLCAdditions.m \
     ../modules/gui/macosx/extensions/NSMenu+VLCAdditions.h \
     ../modules/gui/macosx/extensions/NSMenu+VLCAdditions.m \
     ../modules/gui/macosx/extensions/NSScreen+VLCAdditions.h \
     ../modules/gui/macosx/extensions/NSScreen+VLCAdditions.m \
     ../modules/gui/macosx/extensions/NSString+Helpers.h \
     ../modules/gui/macosx/extensions/NSString+Helpers.m \
     ../modules/gui/macosx/extensions/NSView+VLCAdditions.h \
     ../modules/gui/macosx/extensions/NSView+VLCAdditions.m \
     ../modules/gui/macosx/extensions/VLCHexNumberFormatter.h \
     ../modules/gui/macosx/extensions/VLCHexNumberFormatter.m \
     ../modules/gui/macosx/extensions/VLCPositionFormatter.h \
     ../modules/gui/macosx/extensions/VLCPositionFormatter.m \
     ../modules/gui/macosx/library/VLCInputItem.h \
     ../modules/gui/macosx/library/VLCInputItem.m \
     ../modules/gui/macosx/library/VLCLibraryCollectionViewItem.h \
     ../modules/gui/macosx/library/VLCLibraryCollectionViewItem.m \
     ../modules/gui/macosx/library/VLCLibraryCollectionViewSupplementaryElementView.h \
     ../modules/gui/macosx/library/VLCLibraryCollectionViewSupplementaryElementView.m \
     ../modules/gui/macosx/library/VLCLibraryController.h \
     ../modules/gui/macosx/library/VLCLibraryController.m \
     ../modules/gui/macosx/library/VLCLibraryDataTypes.h \
     ../modules/gui/macosx/library/VLCLibraryDataTypes.m \
     ../modules/gui/macosx/library/VLCLibraryImageCache.h \
     ../modules/gui/macosx/library/VLCLibraryImageCache.m \
     ../modules/gui/macosx/library/VLCLibraryMenuController.h \
     ../modules/gui/macosx/library/VLCLibraryMenuController.m \
     ../modules/gui/macosx/library/VLCLibraryModel.h \
     ../modules/gui/macosx/library/VLCLibraryModel.m \
     ../modules/gui/macosx/library/VLCLibrarySortingMenuController.h \
     ../modules/gui/macosx/library/VLCLibrarySortingMenuController.m \
     ../modules/gui/macosx/library/VLCLibraryTableCellView.h \
     ../modules/gui/macosx/library/VLCLibraryTableCellView.m \
     ../modules/gui/macosx/library/audio-library/VLCLibraryAlbumTableCellView.h \
     ../modules/gui/macosx/library/audio-library/VLCLibraryAlbumTableCellView.m \
     ../modules/gui/macosx/library/audio-library/VLCLibraryAudioDataSource.h \
     ../modules/gui/macosx/library/audio-library/VLCLibraryAudioDataSource.m \
     ../modules/gui/macosx/library/media-source/VLCMediaSource.h \
     ../modules/gui/macosx/library/media-source/VLCMediaSource.m \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceBaseDataSource.h \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceBaseDataSource.m \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceCollectionViewItem.h \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceCollectionViewItem.m \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceDataSource.h \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceDataSource.m \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceDeviceCollectionViewItem.h \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceDeviceCollectionViewItem.m \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceProvider.h \
     ../modules/gui/macosx/library/media-source/VLCMediaSourceProvider.m \
     ../modules/gui/macosx/library/video-library/VLCLibraryVideoGroupDescriptor.h \
     ../modules/gui/macosx/library/video-library/VLCLibraryVideoGroupDescriptor.m \
     ../modules/gui/macosx/library/video-library/VLCLibraryVideoDataSource.h \
     ../modules/gui/macosx/library/video-library/VLCLibraryVideoDataSource.m \
     ../modules/gui/macosx/library/VLCLibraryWindow.h \
     ../modules/gui/macosx/library/VLCLibraryWindow.m \
     ../modules/gui/macosx/main/CompatibilityFixes.h \
     ../modules/gui/macosx/main/CompatibilityFixes.m \
     ../modules/gui/macosx/main/VLCApplication.h \
     ../modules/gui/macosx/main/VLCApplication.m \
     ../modules/gui/macosx/main/VLCMain+OldPrefs.h \
     ../modules/gui/macosx/main/VLCMain+OldPrefs.m \
     ../modules/gui/macosx/main/VLCMain.h \
     ../modules/gui/macosx/main/VLCMain.m \
     ../modules/gui/macosx/main/macosx.m \
     ../modules/gui/macosx/menus/VLCMainMenu.h \
     ../modules/gui/macosx/menus/VLCMainMenu.m \
     ../modules/gui/macosx/menus/VLCStatusBarIcon.h \
     ../modules/gui/macosx/menus/VLCStatusBarIcon.m \
     ../modules/gui/macosx/menus/renderers/VLCRendererDiscovery.h \
     ../modules/gui/macosx/menus/renderers/VLCRendererDiscovery.m \
     ../modules/gui/macosx/menus/renderers/VLCRendererItem.h \
     ../modules/gui/macosx/menus/renderers/VLCRendererItem.m \
     ../modules/gui/macosx/menus/renderers/VLCRendererMenuController.h \
     ../modules/gui/macosx/menus/renderers/VLCRendererMenuController.m \
     ../modules/gui/macosx/os-integration/Spotify.h \
     ../modules/gui/macosx/os-integration/VLCClickerManager.h \
     ../modules/gui/macosx/os-integration/VLCClickerManager.m \
     ../modules/gui/macosx/os-integration/VLCDocumentController.h \
     ../modules/gui/macosx/os-integration/VLCDocumentController.m \
     ../modules/gui/macosx/os-integration/VLCKeyboardBacklightControl.h \
     ../modules/gui/macosx/os-integration/VLCKeyboardBacklightControl.m \
     ../modules/gui/macosx/os-integration/VLCRemoteControlService.h \
     ../modules/gui/macosx/os-integration/VLCRemoteControlService.m \
     ../modules/gui/macosx/os-integration/applescript.h \
     ../modules/gui/macosx/os-integration/applescript.m \
     ../modules/gui/macosx/os-integration/iTunes.h \
     ../modules/gui/macosx/panels/VLCAudioEffectsWindowController.h \
     ../modules/gui/macosx/panels/VLCAudioEffectsWindowController.m \
     ../modules/gui/macosx/panels/VLCBookmarksWindowController.h \
     ../modules/gui/macosx/panels/VLCBookmarksWindowController.m \
     ../modules/gui/macosx/panels/VLCInformationWindowController.h \
     ../modules/gui/macosx/panels/VLCInformationWindowController.m \
     ../modules/gui/macosx/panels/VLCTimeSelectionPanelController.h \
     ../modules/gui/macosx/panels/VLCTimeSelectionPanelController.m \
     ../modules/gui/macosx/panels/VLCTrackSynchronizationWindowController.h \
     ../modules/gui/macosx/panels/VLCTrackSynchronizationWindowController.m \
     ../modules/gui/macosx/panels/VLCVideoEffectsWindowController.h \
     ../modules/gui/macosx/panels/VLCVideoEffectsWindowController.m \
     ../modules/gui/macosx/panels/dialogs/VLCCoreDialogProvider.h \
     ../modules/gui/macosx/panels/dialogs/VLCCoreDialogProvider.m \
     ../modules/gui/macosx/panels/dialogs/VLCCustomCropArWindowController.h \
     ../modules/gui/macosx/panels/dialogs/VLCCustomCropArWindowController.m \
     ../modules/gui/macosx/panels/dialogs/VLCPopupPanelController.h \
     ../modules/gui/macosx/panels/dialogs/VLCPopupPanelController.m \
     ../modules/gui/macosx/panels/dialogs/VLCResumeDialogController.h \
     ../modules/gui/macosx/panels/dialogs/VLCResumeDialogController.m \
     ../modules/gui/macosx/panels/dialogs/VLCTextfieldPanelController.h \
     ../modules/gui/macosx/panels/dialogs/VLCTextfieldPanelController.m \
     ../modules/gui/macosx/playqueue/VLCPlaybackContinuityController.h \
     ../modules/gui/macosx/playqueue/VLCPlaybackContinuityController.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueController.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueController.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueDataSource.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueDataSource.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueItem.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueItem.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueMenuController.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueMenuController.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueModel.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueModel.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueSortingMenuController.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueSortingMenuController.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueTableCellView.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueTableCellView.m \
     ../modules/gui/macosx/playqueue/VLCPlayQueueTableView.h \
     ../modules/gui/macosx/playqueue/VLCPlayQueueTableView.m \
     ../modules/gui/macosx/preferences/VLCHotkeyChangeWindow.h \
     ../modules/gui/macosx/preferences/VLCHotkeyChangeWindow.m \
     ../modules/gui/macosx/preferences/VLCSimplePrefsController.h \
     ../modules/gui/macosx/preferences/VLCSimplePrefsController.m \
     ../modules/gui/macosx/preferences/VLCSimplePrefsWindow.h \
     ../modules/gui/macosx/preferences/VLCSimplePrefsWindow.m \
     ../modules/gui/macosx/preferences/prefs.h \
     ../modules/gui/macosx/preferences/prefs.m \
     ../modules/gui/macosx/preferences/prefs_widgets.h \
     ../modules/gui/macosx/preferences/prefs_widgets.m \
     ../modules/gui/macosx/views/VLCBottomBarView.h \
     ../modules/gui/macosx/views/VLCBottomBarView.m \
     ../modules/gui/macosx/views/VLCCustomWindowButton.h \
     ../modules/gui/macosx/views/VLCCustomWindowButton.m \
     ../modules/gui/macosx/views/VLCDefaultValueSlider.h \
     ../modules/gui/macosx/views/VLCDefaultValueSlider.m \
     ../modules/gui/macosx/views/VLCDefaultValueSliderCell.h \
     ../modules/gui/macosx/views/VLCDefaultValueSliderCell.m \
     ../modules/gui/macosx/views/VLCDragDropView.h \
     ../modules/gui/macosx/views/VLCDragDropView.m \
     ../modules/gui/macosx/views/VLCImageButton.h \
     ../modules/gui/macosx/views/VLCImageButton.m \
     ../modules/gui/macosx/views/VLCImageView.h \
     ../modules/gui/macosx/views/VLCImageView.m \
     ../modules/gui/macosx/views/VLCLinearProgressIndicator.h \
     ../modules/gui/macosx/views/VLCLinearProgressIndicator.m \
     ../modules/gui/macosx/views/VLCPlaybackProgressSlider.h \
     ../modules/gui/macosx/views/VLCPlaybackProgressSlider.m \
     ../modules/gui/macosx/views/VLCPlaybackProgressSliderCell.h \
     ../modules/gui/macosx/views/VLCPlaybackProgressSliderCell.m \
     ../modules/gui/macosx/views/VLCRoundedCornerTextField.h \
     ../modules/gui/macosx/views/VLCRoundedCornerTextField.m \
     ../modules/gui/macosx/views/VLCScrollingClipView.h \
     ../modules/gui/macosx/views/VLCScrollingClipView.m \
     ../modules/gui/macosx/views/VLCTimeField.h \
     ../modules/gui/macosx/views/VLCTimeField.m \
     ../modules/gui/macosx/views/VLCTrackingView.h \
     ../modules/gui/macosx/views/VLCTrackingView.m \
     ../modules/gui/macosx/views/VLCVolumeSlider.h \
     ../modules/gui/macosx/views/VLCVolumeSlider.m \
     ../modules/gui/macosx/views/VLCVolumeSliderCell.h \
     ../modules/gui/macosx/views/VLCVolumeSliderCell.m \
     ../modules/gui/macosx/windows/VLCAboutWindowController.h \
     ../modules/gui/macosx/windows/VLCAboutWindowController.m \
     ../modules/gui/macosx/windows/VLCDetachedAudioWindow.h \
     ../modules/gui/macosx/windows/VLCDetachedAudioWindow.m \
     ../modules/gui/macosx/windows/VLCErrorWindowController.h \
     ../modules/gui/macosx/windows/VLCErrorWindowController.m \
     ../modules/gui/macosx/windows/VLCHelpWindowController.h \
     ../modules/gui/macosx/windows/VLCHelpWindowController.m \
     ../modules/gui/macosx/windows/VLCOpenInputMetadata.h \
     ../modules/gui/macosx/windows/VLCOpenInputMetadata.m \
     ../modules/gui/macosx/windows/VLCOpenWindowController.h \
     ../modules/gui/macosx/windows/VLCOpenWindowController.m \
     ../modules/gui/macosx/windows/addons/VLCAddonListItem.h \
     ../modules/gui/macosx/windows/addons/VLCAddonListItem.m \
     ../modules/gui/macosx/windows/addons/VLCAddonsWindowController.h \
     ../modules/gui/macosx/windows/addons/VLCAddonsWindowController.m \
     ../modules/gui/macosx/windows/convertandsave/VLCConvertAndSaveWindowController.h \
     ../modules/gui/macosx/windows/convertandsave/VLCConvertAndSaveWindowController.m \
     ../modules/gui/macosx/windows/convertandsave/VLCOutput.h \
     ../modules/gui/macosx/windows/convertandsave/VLCOutput.m \
     ../modules/gui/macosx/windows/extensions/VLCExtensionsDialogProvider.h \
     ../modules/gui/macosx/windows/extensions/VLCExtensionsDialogProvider.m \
     ../modules/gui/macosx/windows/extensions/VLCExtensionsManager.h \
     ../modules/gui/macosx/windows/extensions/VLCExtensionsManager.m \
     ../modules/gui/macosx/windows/extensions/VLCUIWidgets.h \
     ../modules/gui/macosx/windows/extensions/VLCUIWidgets.m \
     ../modules/gui/macosx/windows/logging/VLCLogMessage.h \
     ../modules/gui/macosx/windows/logging/VLCLogMessage.m \
     ../modules/gui/macosx/windows/logging/VLCLogWindowController.h \
     ../modules/gui/macosx/windows/logging/VLCLogWindowController.m \
     ../modules/gui/macosx/windows/controlsbar/VLCControlsBarCommon.h \
     ../modules/gui/macosx/windows/controlsbar/VLCControlsBarCommon.m \
     ../modules/gui/macosx/windows/controlsbar/VLCMainWindowControlsBar.h \
     ../modules/gui/macosx/windows/controlsbar/VLCMainWindowControlsBar.m \
     ../modules/gui/macosx/windows/video/VLCVideoOutputProvider.h \
     ../modules/gui/macosx/windows/video/VLCVideoOutputProvider.m \
     ../modules/gui/macosx/windows/video/VLCVideoWindowCommon.h \
     ../modules/gui/macosx/windows/video/VLCVideoWindowCommon.m \
     ../modules/gui/macosx/windows/video/VLCVoutView.h \
     ../modules/gui/macosx/windows/video/VLCVoutView.m \
     ../modules/gui/macosx/windows/video/VLCWindow.h \
     ../modules/gui/macosx/windows/video/VLCWindow.m \
     ../modules/gui/minimal_macosx/VLCMinimalVoutWindow.h \
     ../modules/gui/minimal_macosx/VLCMinimalVoutWindow.m \
     ../modules/gui/minimal_macosx/intf.h \
     ../modules/gui/minimal_macosx/intf.m \
     ../modules/gui/minimal_macosx/macosx.c \
     ../modules/gui/ncurses.c \
     ../modules/gui/qt/dialogs/bookmarks/bookmarks.cpp \
     ../modules/gui/qt/dialogs/bookmarks/bookmarks.hpp \
     ../modules/gui/qt/dialogs/dialogs/qml/CustomDialog.qml \
     ../modules/gui/qt/dialogs/dialogs/qml/Dialogs.qml \
     ../modules/gui/qt/dialogs/dialogs/qml/WindowDialog.qml \
     ../modules/gui/qt/dialogs/dialogs_provider.cpp \
     ../modules/gui/qt/dialogs/dialogs_provider.hpp \
     ../modules/gui/qt/dialogs/epg/EPGChannels.cpp \
     ../modules/gui/qt/dialogs/epg/EPGChannels.hpp \
     ../modules/gui/qt/dialogs/epg/EPGItem.cpp \
     ../modules/gui/qt/dialogs/epg/EPGItem.hpp \
     ../modules/gui/qt/dialogs/epg/EPGProgram.cpp \
     ../modules/gui/qt/dialogs/epg/EPGProgram.hpp \
     ../modules/gui/qt/dialogs/epg/EPGRuler.cpp \
     ../modules/gui/qt/dialogs/epg/EPGRuler.hpp \
     ../modules/gui/qt/dialogs/epg/EPGView.cpp \
     ../modules/gui/qt/dialogs/epg/EPGView.hpp \
     ../modules/gui/qt/dialogs/epg/EPGWidget.cpp \
     ../modules/gui/qt/dialogs/epg/EPGWidget.hpp \
     ../modules/gui/qt/dialogs/epg/epg.cpp \
     ../modules/gui/qt/dialogs/epg/epg.hpp \
     ../modules/gui/qt/dialogs/extended/extended.cpp \
     ../modules/gui/qt/dialogs/extended/extended.hpp \
     ../modules/gui/qt/dialogs/extended/extended_panels.cpp \
     ../modules/gui/qt/dialogs/extended/extended_panels.hpp \
     ../modules/gui/qt/dialogs/extensions/extensions.cpp \
     ../modules/gui/qt/dialogs/extensions/extensions.hpp \
     ../modules/gui/qt/dialogs/extensions/extensions_manager.cpp \
     ../modules/gui/qt/dialogs/extensions/extensions_manager.hpp \
     ../modules/gui/qt/dialogs/fingerprint/chromaprint.cpp \
     ../modules/gui/qt/dialogs/fingerprint/chromaprint.hpp \
     ../modules/gui/qt/dialogs/fingerprint/fingerprintdialog.cpp \
     ../modules/gui/qt/dialogs/fingerprint/fingerprintdialog.hpp \
     ../modules/gui/qt/dialogs/firstrun/firstrunwizard.cpp \
     ../modules/gui/qt/dialogs/firstrun/firstrunwizard.hpp \
     ../modules/gui/qt/dialogs/gototime/gototime.cpp \
     ../modules/gui/qt/dialogs/gototime/gototime.hpp \
     ../modules/gui/qt/dialogs/help/help.cpp \
     ../modules/gui/qt/dialogs/help/help.hpp \
     ../modules/gui/qt/dialogs/mediainfo/info_panels.cpp \
     ../modules/gui/qt/dialogs/mediainfo/info_panels.hpp \
     ../modules/gui/qt/dialogs/mediainfo/info_widgets.cpp \
     ../modules/gui/qt/dialogs/mediainfo/info_widgets.hpp \
     ../modules/gui/qt/dialogs/mediainfo/mediainfo.cpp \
     ../modules/gui/qt/dialogs/mediainfo/mediainfo.hpp \
     ../modules/gui/qt/dialogs/messages/messages.cpp \
     ../modules/gui/qt/dialogs/messages/messages.hpp \
     ../modules/gui/qt/dialogs/open/open.cpp \
     ../modules/gui/qt/dialogs/open/open.hpp \
     ../modules/gui/qt/dialogs/open/open_panels.cpp \
     ../modules/gui/qt/dialogs/open/open_panels.hpp \
     ../modules/gui/qt/dialogs/open/openurl.cpp \
     ../modules/gui/qt/dialogs/open/openurl.hpp \
     ../modules/gui/qt/dialogs/playlists/playlists.cpp \
     ../modules/gui/qt/dialogs/playlists/playlists.hpp \
     ../modules/gui/qt/dialogs/plugins/plugins.cpp \
     ../modules/gui/qt/dialogs/plugins/plugins.hpp \
     ../modules/gui/qt/dialogs/podcast/podcast_configuration.cpp \
     ../modules/gui/qt/dialogs/podcast/podcast_configuration.hpp \
     ../modules/gui/qt/dialogs/preferences/complete_preferences.cpp \
     ../modules/gui/qt/dialogs/preferences/complete_preferences.hpp \
     ../modules/gui/qt/dialogs/preferences/expert_model.cpp \
     ../modules/gui/qt/dialogs/preferences/expert_model.hpp \
     ../modules/gui/qt/dialogs/preferences/expert_view.cpp \
     ../modules/gui/qt/dialogs/preferences/expert_view.hpp \
     ../modules/gui/qt/dialogs/preferences/preferences.cpp \
     ../modules/gui/qt/dialogs/preferences/preferences.hpp \
     ../modules/gui/qt/dialogs/preferences/preferences_widgets.cpp \
     ../modules/gui/qt/dialogs/preferences/preferences_widgets.hpp \
     ../modules/gui/qt/dialogs/preferences/simple_preferences.cpp \
     ../modules/gui/qt/dialogs/preferences/simple_preferences.hpp \
     ../modules/gui/qt/dialogs/sout/convert.cpp \
     ../modules/gui/qt/dialogs/sout/convert.hpp \
     ../modules/gui/qt/dialogs/sout/profile_selector.cpp \
     ../modules/gui/qt/dialogs/sout/profile_selector.hpp \
     ../modules/gui/qt/dialogs/sout/profiles.hpp \
     ../modules/gui/qt/dialogs/sout/sout.cpp \
     ../modules/gui/qt/dialogs/sout/sout.hpp \
     ../modules/gui/qt/dialogs/sout/sout_widgets.cpp \
     ../modules/gui/qt/dialogs/sout/sout_widgets.hpp \
     ../modules/gui/qt/dialogs/toolbar/controlbar_profile_model.cpp \
     ../modules/gui/qt/dialogs/toolbar/controlbar_profile_model.hpp \
     ../modules/gui/qt/dialogs/toolbar/qml/ToolbarEditor.qml \
     ../modules/gui/qt/dialogs/toolbar/qml/ToolbarEditorDialog.qml \
     ../modules/gui/qt/dialogs/vlm/vlm.cpp \
     ../modules/gui/qt/dialogs/vlm/vlm.hpp \
     ../modules/gui/qt/maininterface/mainctx.cpp \
     ../modules/gui/qt/maininterface/mainctx.hpp \
     ../modules/gui/qt/maininterface/mainctx_win32.cpp \
     ../modules/gui/qt/maininterface/mainctx_win32.hpp \
     ../modules/gui/qt/maininterface/qml/BannerSources.qml \
     ../modules/gui/qt/maininterface/qml/MainDisplay.qml \
     ../modules/gui/qt/maininterface/qml/MainInterface.qml \
     ../modules/gui/qt/maininterface/qml/NoMedialibHome.qml \
     ../modules/gui/qt/widgets/qml/EmptyLabelButton.qml \
     ../modules/gui/qt/widgets/qml/EmptyLabel.qml \
     ../modules/gui/qt/medialibrary/mlbookmarkmodel.cpp \
     ../modules/gui/qt/medialibrary/mlbookmarkmodel.hpp \
     ../modules/gui/qt/medialibrary/mlfolder.cpp \
     ../modules/gui/qt/medialibrary/mlfolder.hpp \
     ../modules/gui/qt/medialibrary/mlfoldersmodel.cpp \
     ../modules/gui/qt/medialibrary/mlfoldersmodel.hpp \
     ../modules/gui/qt/medialibrary/mlgroup.cpp \
     ../modules/gui/qt/medialibrary/mlgroup.hpp \
     ../modules/gui/qt/medialibrary/mlplaylistlistmodel.cpp \
     ../modules/gui/qt/medialibrary/mlplaylistlistmodel.hpp \
     ../modules/gui/qt/medialibrary/mlplaylistmedia.cpp \
     ../modules/gui/qt/medialibrary/mlplaylistmedia.hpp \
     ../modules/gui/qt/medialibrary/mlplaylistmodel.cpp \
     ../modules/gui/qt/medialibrary/mlplaylistmodel.hpp \
     ../modules/gui/qt/medialibrary/mlvideofoldersmodel.cpp \
     ../modules/gui/qt/medialibrary/mlvideofoldersmodel.hpp \
     ../modules/gui/qt/medialibrary/mlvideogroupsmodel.cpp \
     ../modules/gui/qt/medialibrary/mlvideogroupsmodel.hpp \
     ../modules/gui/qt/medialibrary/qml/ArtistTopBanner.qml \
     ../modules/gui/qt/medialibrary/qml/AudioGridItem.qml \
     ../modules/gui/qt/medialibrary/qml/HomeDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/HomePage.qml \
     ../modules/gui/qt/medialibrary/qml/MediaView.qml \
     ../modules/gui/qt/medialibrary/qml/VideoGroupDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicAlbums.qml \
     ../modules/gui/qt/medialibrary/qml/MusicAlbumsDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicAlbumsGridExpandDelegate.qml \
     ../modules/gui/qt/medialibrary/qml/MusicAllArtists.qml \
     ../modules/gui/qt/medialibrary/qml/MusicArtist.qml \
     ../modules/gui/qt/medialibrary/qml/MusicArtistDelegate.qml \
     ../modules/gui/qt/medialibrary/qml/MusicArtistsAlbums.qml \
     ../modules/gui/qt/medialibrary/qml/MusicArtistsDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicGenres.qml \
     ../modules/gui/qt/medialibrary/qml/MusicGenresDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicPlaylistsDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicTrackListDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicTracksDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/PlaylistMedia.qml \
     ../modules/gui/qt/medialibrary/qml/PlaylistMediaDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/PlaylistMediaList.qml \
     ../modules/gui/qt/medialibrary/qml/UrlListDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/VideoAll.qml \
     ../modules/gui/qt/medialibrary/qml/VideoAllDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/VideoAllSubDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/VideoDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/VideoGridItem.qml \
     ../modules/gui/qt/medialibrary/qml/VideoInfoExpandPanel.qml \
     ../modules/gui/qt/medialibrary/qml/VideoListDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/VideoPlaylistsDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/VideoGridDisplay.qml \
     ../modules/gui/qt/medialibrary/qml/MusicAlbumSectionDelegate.qml \
     ../modules/gui/qt/menus/custom_menus.cpp \
     ../modules/gui/qt/menus/custom_menus.hpp \
     ../modules/gui/qt/menus/menus.cpp \
     ../modules/gui/qt/menus/menus.hpp \
     ../modules/gui/qt/menus/qml/Menubar.qml \
     ../modules/gui/qt/menus/qml_menu_wrapper.cpp \
     ../modules/gui/qt/menus/qml_menu_wrapper.hpp \
     ../modules/gui/qt/network/addonsmodel.cpp \
     ../modules/gui/qt/network/standardpathmodel.cpp \
     ../modules/gui/qt/network/standardpathmodel.hpp \
     ../modules/gui/qt/network/qml/BrowseDeviceView.qml \
     ../modules/gui/qt/network/qml/BrowseDisplay.qml \
     ../modules/gui/qt/network/qml/BrowseHomeDisplay.qml \
     ../modules/gui/qt/network/qml/BrowseTreeDisplay.qml \
     ../modules/gui/qt/network/qml/BrowseTreeHeader.qml \
     ../modules/gui/qt/network/qml/DiscoverDisplay.qml \
     ../modules/gui/qt/network/qml/DiscoverUrlDisplay.qml \
     ../modules/gui/qt/network/qml/NetworkGridItem.qml \
     ../modules/gui/qt/network/qml/ServicesHomeDisplay.qml \
     ../modules/gui/qt/player/control_list_filter.cpp \
     ../modules/gui/qt/player/control_list_filter.hpp \
     ../modules/gui/qt/player/player_controlbar_model.cpp \
     ../modules/gui/qt/player/player_controlbar_model.hpp \
     ../modules/gui/qt/player/qml/PlayerControlbarControls.qml \
     ../modules/gui/qt/player/qml/NavigationBox.qml \
     ../modules/gui/qt/player/qml/PlaybackSpeed.qml \
     ../modules/gui/qt/player/qml/Player.qml \
     ../modules/gui/qt/player/qml/ResumeDialog.qml \
     ../modules/gui/qt/player/qml/TopBar.qml \
     ../modules/gui/qt/player/qml/TracksMenu.qml \
     ../modules/gui/qt/player/qml/TracksPageAudio.qml \
     ../modules/gui/qt/player/qml/TracksPageSubtitle.qml \
     ../modules/gui/qt/player/qml/TracksListPage.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ArtworkInfoWidget.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/AspectRatioWidget.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/AtoBButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/BackButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/BookmarkButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ChapterNextButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ChapterPreviousButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/DvdMenuButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ExpandingSpacerWidget.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ExtendedSettingsButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/Fallback.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/FasterButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/FrameButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/FullscreenButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/InfoButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/LangButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/LoopButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/MenuButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/NavigationBoxButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/NextButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/OpenButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/PlayButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/PlaybackSpeedButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/PlayerSwitchButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/PlaylistButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/PreviousButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ProgramButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/QuitButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/RandomButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/RecordButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/RendererButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/ReverseButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/SkipBackButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/SkipForwardButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/SlowerButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/SnapshotButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/SpacerWidget.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/StopButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/TeletextButton.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/TeletextWidget.qml \
     ../modules/gui/qt/player/qml/controlbarcontrols/VolumeWidget.qml \
     ../modules/gui/qt/playlist/qml/PlaylistDelegate.qml \
     ../modules/gui/qt/playlist/qml/PlaylistDetachedWindow.qml \
     ../modules/gui/qt/playlist/qml/PlaylistPane.qml \
     ../modules/gui/qt/playlist/qml/PlaylistToolbar.qml \
     ../modules/gui/qt/qt.cpp \
     ../modules/gui/qt/qt.hpp \
     ../modules/gui/qt/util/color_scheme_model.cpp \
     ../modules/gui/qt/util/covergenerator.cpp \
     ../modules/gui/qt/util/covergenerator.hpp \
     ../modules/gui/qt/util/csdmenu.cpp \
     ../modules/gui/qt/util/imagehelper.cpp \
     ../modules/gui/qt/util/imagehelper.hpp \
     ../modules/gui/qt/util/qt_dirs.cpp \
     ../modules/gui/qt/util/qt_dirs.hpp \
     ../modules/gui/qt/util/registry.cpp \
     ../modules/gui/qt/util/registry.hpp \
     ../modules/gui/qt/util/singleton.hpp \
     ../modules/gui/qt/util/ui_notifier.cpp \
     ../modules/gui/qt/util/validators.cpp \
     ../modules/gui/qt/util/validators.hpp \
     ../modules/gui/qt/util/vlctick.cpp \
     ../modules/gui/qt/util/model_recovery_agent.hpp \
     ../modules/gui/qt/widgets/native/animators.cpp \
     ../modules/gui/qt/widgets/native/animators.hpp \
     ../modules/gui/qt/widgets/native/customwidgets.cpp \
     ../modules/gui/qt/widgets/native/customwidgets.hpp \
     ../modules/gui/qt/widgets/native/interface_widgets.cpp \
     ../modules/gui/qt/widgets/native/interface_widgets.hpp \
     ../modules/gui/qt/widgets/native/mlfolderseditor.cpp \
     ../modules/gui/qt/widgets/native/qvlcframe.hpp \
     ../modules/gui/qt/widgets/native/searchlineedit.cpp \
     ../modules/gui/qt/widgets/native/searchlineedit.hpp \
     ../modules/gui/qt/widgets/qml/DragItem.qml \
     ../modules/gui/qt/widgets/qml/ScanProgressBar.qml \
     ../modules/gui/qt/widgets/qml/SearchBox.qml \
     ../modules/gui/qt/widgets/qml/SortControl.qml \
     ../modules/gui/qt/widgets/qml/TableColumns.qml \
     ../modules/gui/qt/widgets/qml/ViewHeader.qml \
     ../modules/gui/qt/widgets/qml/TableViewDelegateExt.qml \
     ../modules/gui/skins2/commands/async_queue.cpp \
     ../modules/gui/skins2/commands/async_queue.hpp \
     ../modules/gui/skins2/commands/cmd_add_item.cpp \
     ../modules/gui/skins2/commands/cmd_add_item.hpp \
     ../modules/gui/skins2/commands/cmd_audio.cpp \
     ../modules/gui/skins2/commands/cmd_audio.hpp \
     ../modules/gui/skins2/commands/cmd_callbacks.hpp \
     ../modules/gui/skins2/commands/cmd_change_skin.cpp \
     ../modules/gui/skins2/commands/cmd_change_skin.hpp \
     ../modules/gui/skins2/commands/cmd_dialogs.hpp \
     ../modules/gui/skins2/commands/cmd_dummy.hpp \
     ../modules/gui/skins2/commands/cmd_dvd.cpp \
     ../modules/gui/skins2/commands/cmd_dvd.hpp \
     ../modules/gui/skins2/commands/cmd_fullscreen.cpp \
     ../modules/gui/skins2/commands/cmd_fullscreen.hpp \
     ../modules/gui/skins2/commands/cmd_generic.hpp \
     ../modules/gui/skins2/commands/cmd_input.cpp \
     ../modules/gui/skins2/commands/cmd_input.hpp \
     ../modules/gui/skins2/commands/cmd_layout.cpp \
     ../modules/gui/skins2/commands/cmd_layout.hpp \
     ../modules/gui/skins2/commands/cmd_minimize.cpp \
     ../modules/gui/skins2/commands/cmd_minimize.hpp \
     ../modules/gui/skins2/commands/cmd_muxer.cpp \
     ../modules/gui/skins2/commands/cmd_muxer.hpp \
     ../modules/gui/skins2/commands/cmd_on_top.cpp \
     ../modules/gui/skins2/commands/cmd_on_top.hpp \
     ../modules/gui/skins2/commands/cmd_playlist.cpp \
     ../modules/gui/skins2/commands/cmd_playlist.hpp \
     ../modules/gui/skins2/commands/cmd_playtree.cpp \
     ../modules/gui/skins2/commands/cmd_playtree.hpp \
     ../modules/gui/skins2/commands/cmd_quit.cpp \
     ../modules/gui/skins2/commands/cmd_quit.hpp \
     ../modules/gui/skins2/commands/cmd_resize.cpp \
     ../modules/gui/skins2/commands/cmd_resize.hpp \
     ../modules/gui/skins2/commands/cmd_show_window.hpp \
     ../modules/gui/skins2/commands/cmd_snapshot.cpp \
     ../modules/gui/skins2/commands/cmd_snapshot.hpp \
     ../modules/gui/skins2/commands/cmd_vars.cpp \
     ../modules/gui/skins2/commands/cmd_vars.hpp \
     ../modules/gui/skins2/controls/ctrl_button.cpp \
     ../modules/gui/skins2/controls/ctrl_button.hpp \
     ../modules/gui/skins2/controls/ctrl_checkbox.cpp \
     ../modules/gui/skins2/controls/ctrl_checkbox.hpp \
     ../modules/gui/skins2/controls/ctrl_flat.hpp \
     ../modules/gui/skins2/controls/ctrl_generic.cpp \
     ../modules/gui/skins2/controls/ctrl_generic.hpp \
     ../modules/gui/skins2/controls/ctrl_image.cpp \
     ../modules/gui/skins2/controls/ctrl_image.hpp \
     ../modules/gui/skins2/controls/ctrl_list.cpp \
     ../modules/gui/skins2/controls/ctrl_list.hpp \
     ../modules/gui/skins2/controls/ctrl_move.cpp \
     ../modules/gui/skins2/controls/ctrl_move.hpp \
     ../modules/gui/skins2/controls/ctrl_radialslider.cpp \
     ../modules/gui/skins2/controls/ctrl_radialslider.hpp \
     ../modules/gui/skins2/controls/ctrl_resize.cpp \
     ../modules/gui/skins2/controls/ctrl_resize.hpp \
     ../modules/gui/skins2/controls/ctrl_slider.cpp \
     ../modules/gui/skins2/controls/ctrl_slider.hpp \
     ../modules/gui/skins2/controls/ctrl_text.cpp \
     ../modules/gui/skins2/controls/ctrl_text.hpp \
     ../modules/gui/skins2/controls/ctrl_tree.cpp \
     ../modules/gui/skins2/controls/ctrl_tree.hpp \
     ../modules/gui/skins2/controls/ctrl_video.cpp \
     ../modules/gui/skins2/controls/ctrl_video.hpp \
     ../modules/gui/skins2/events/evt_dragndrop.hpp \
     ../modules/gui/skins2/events/evt_enter.hpp \
     ../modules/gui/skins2/events/evt_focus.hpp \
     ../modules/gui/skins2/events/evt_generic.hpp \
     ../modules/gui/skins2/events/evt_input.cpp \
     ../modules/gui/skins2/events/evt_input.hpp \
     ../modules/gui/skins2/events/evt_key.cpp \
     ../modules/gui/skins2/events/evt_key.hpp \
     ../modules/gui/skins2/events/evt_leave.hpp \
     ../modules/gui/skins2/events/evt_menu.hpp \
     ../modules/gui/skins2/events/evt_motion.hpp \
     ../modules/gui/skins2/events/evt_mouse.cpp \
     ../modules/gui/skins2/events/evt_mouse.hpp \
     ../modules/gui/skins2/events/evt_refresh.hpp \
     ../modules/gui/skins2/events/evt_scroll.cpp \
     ../modules/gui/skins2/events/evt_scroll.hpp \
     ../modules/gui/skins2/events/evt_special.cpp \
     ../modules/gui/skins2/events/evt_special.hpp \
     ../modules/gui/skins2/parser/builder.cpp \
     ../modules/gui/skins2/parser/builder.hpp \
     ../modules/gui/skins2/parser/builder_data.hpp \
     ../modules/gui/skins2/parser/expr_evaluator.cpp \
     ../modules/gui/skins2/parser/expr_evaluator.hpp \
     ../modules/gui/skins2/parser/interpreter.cpp \
     ../modules/gui/skins2/parser/interpreter.hpp \
     ../modules/gui/skins2/parser/skin_parser.cpp \
     ../modules/gui/skins2/parser/skin_parser.hpp \
     ../modules/gui/skins2/parser/xmlparser.cpp \
     ../modules/gui/skins2/parser/xmlparser.hpp \
     ../modules/gui/skins2/src/anchor.cpp \
     ../modules/gui/skins2/src/anchor.hpp \
     ../modules/gui/skins2/src/anim_bitmap.cpp \
     ../modules/gui/skins2/src/anim_bitmap.hpp \
     ../modules/gui/skins2/src/bitmap_font.cpp \
     ../modules/gui/skins2/src/bitmap_font.hpp \
     ../modules/gui/skins2/src/dialogs.cpp \
     ../modules/gui/skins2/src/dialogs.hpp \
     ../modules/gui/skins2/src/file_bitmap.cpp \
     ../modules/gui/skins2/src/file_bitmap.hpp \
     ../modules/gui/skins2/src/ft2_bitmap.cpp \
     ../modules/gui/skins2/src/ft2_bitmap.hpp \
     ../modules/gui/skins2/src/ft2_font.cpp \
     ../modules/gui/skins2/src/ft2_font.hpp \
     ../modules/gui/skins2/src/generic_bitmap.cpp \
     ../modules/gui/skins2/src/generic_bitmap.hpp \
     ../modules/gui/skins2/src/generic_font.hpp \
     ../modules/gui/skins2/src/generic_layout.cpp \
     ../modules/gui/skins2/src/generic_layout.hpp \
     ../modules/gui/skins2/src/generic_window.cpp \
     ../modules/gui/skins2/src/generic_window.hpp \
     ../modules/gui/skins2/src/ini_file.cpp \
     ../modules/gui/skins2/src/ini_file.hpp \
     ../modules/gui/skins2/src/logger.cpp \
     ../modules/gui/skins2/src/logger.hpp \
     ../modules/gui/skins2/src/os_factory.cpp \
     ../modules/gui/skins2/src/os_factory.hpp \
     ../modules/gui/skins2/src/os_graphics.hpp \
     ../modules/gui/skins2/src/os_loop.hpp \
     ../modules/gui/skins2/src/os_popup.hpp \
     ../modules/gui/skins2/src/os_timer.hpp \
     ../modules/gui/skins2/src/os_tooltip.hpp \
     ../modules/gui/skins2/src/os_window.hpp \
     ../modules/gui/skins2/src/popup.cpp \
     ../modules/gui/skins2/src/popup.hpp \
     ../modules/gui/skins2/src/scaled_bitmap.cpp \
     ../modules/gui/skins2/src/scaled_bitmap.hpp \
     ../modules/gui/skins2/src/skin_common.hpp \
     ../modules/gui/skins2/src/skin_main.cpp \
     ../modules/gui/skins2/src/theme.cpp \
     ../modules/gui/skins2/src/theme.hpp \
     ../modules/gui/skins2/src/theme_loader.cpp \
     ../modules/gui/skins2/src/theme_loader.hpp \
     ../modules/gui/skins2/src/theme_repository.cpp \
     ../modules/gui/skins2/src/theme_repository.hpp \
     ../modules/gui/skins2/src/tooltip.cpp \
     ../modules/gui/skins2/src/tooltip.hpp \
     ../modules/gui/skins2/src/top_window.cpp \
     ../modules/gui/skins2/src/top_window.hpp \
     ../modules/gui/skins2/src/var_manager.cpp \
     ../modules/gui/skins2/src/var_manager.hpp \
     ../modules/gui/skins2/src/vlcproc.cpp \
     ../modules/gui/skins2/src/vlcproc.hpp \
     ../modules/gui/skins2/src/vout_window.cpp \
     ../modules/gui/skins2/src/vout_window.hpp \
     ../modules/gui/skins2/src/window_manager.cpp \
     ../modules/gui/skins2/src/window_manager.hpp \
     ../modules/gui/skins2/utils/bezier.cpp \
     ../modules/gui/skins2/utils/bezier.hpp \
     ../modules/gui/skins2/utils/fsm.cpp \
     ../modules/gui/skins2/utils/fsm.hpp \
     ../modules/gui/skins2/utils/observer.hpp \
     ../modules/gui/skins2/utils/pointer.hpp \
     ../modules/gui/skins2/utils/position.cpp \
     ../modules/gui/skins2/utils/position.hpp \
     ../modules/gui/skins2/utils/ustring.cpp \
     ../modules/gui/skins2/utils/ustring.hpp \
     ../modules/gui/skins2/utils/var_bool.cpp \
     ../modules/gui/skins2/utils/var_bool.hpp \
     ../modules/gui/skins2/utils/var_list.cpp \
     ../modules/gui/skins2/utils/var_list.hpp \
     ../modules/gui/skins2/utils/var_percent.cpp \
     ../modules/gui/skins2/utils/var_percent.hpp \
     ../modules/gui/skins2/utils/var_text.cpp \
     ../modules/gui/skins2/utils/var_text.hpp \
     ../modules/gui/skins2/utils/var_tree.cpp \
     ../modules/gui/skins2/utils/var_tree.hpp \
     ../modules/gui/skins2/utils/variable.hpp \
     ../modules/gui/skins2/vars/equalizer.cpp \
     ../modules/gui/skins2/vars/equalizer.hpp \
     ../modules/gui/skins2/vars/playtree.cpp \
     ../modules/gui/skins2/vars/playtree.hpp \
     ../modules/gui/skins2/vars/time.cpp \
     ../modules/gui/skins2/vars/time.hpp \
     ../modules/gui/skins2/vars/volume.cpp \
     ../modules/gui/skins2/vars/volume.hpp \
     ../modules/gui/skins2/win32/win32_dragdrop.cpp \
     ../modules/gui/skins2/win32/win32_dragdrop.hpp \
     ../modules/gui/skins2/win32/win32_factory.cpp \
     ../modules/gui/skins2/win32/win32_factory.hpp \
     ../modules/gui/skins2/win32/win32_graphics.cpp \
     ../modules/gui/skins2/win32/win32_graphics.hpp \
     ../modules/gui/skins2/win32/win32_loop.cpp \
     ../modules/gui/skins2/win32/win32_loop.hpp \
     ../modules/gui/skins2/win32/win32_popup.cpp \
     ../modules/gui/skins2/win32/win32_popup.hpp \
     ../modules/gui/skins2/win32/win32_timer.cpp \
     ../modules/gui/skins2/win32/win32_timer.hpp \
     ../modules/gui/skins2/win32/win32_tooltip.cpp \
     ../modules/gui/skins2/win32/win32_tooltip.hpp \
     ../modules/gui/skins2/win32/win32_window.cpp \
     ../modules/gui/skins2/win32/win32_window.hpp \
     ../modules/gui/skins2/x11/x11_display.cpp \
     ../modules/gui/skins2/x11/x11_display.hpp \
     ../modules/gui/skins2/x11/x11_dragdrop.cpp \
     ../modules/gui/skins2/x11/x11_dragdrop.hpp \
     ../modules/gui/skins2/x11/x11_factory.cpp \
     ../modules/gui/skins2/x11/x11_factory.hpp \
     ../modules/gui/skins2/x11/x11_graphics.cpp \
     ../modules/gui/skins2/x11/x11_graphics.hpp \
     ../modules/gui/skins2/x11/x11_loop.cpp \
     ../modules/gui/skins2/x11/x11_loop.hpp \
     ../modules/gui/skins2/x11/x11_popup.cpp \
     ../modules/gui/skins2/x11/x11_popup.hpp \
     ../modules/gui/skins2/x11/x11_timer.cpp \
     ../modules/gui/skins2/x11/x11_timer.hpp \
     ../modules/gui/skins2/x11/x11_tooltip.cpp \
     ../modules/gui/skins2/x11/x11_tooltip.hpp \
     ../modules/gui/skins2/x11/x11_window.cpp \
     ../modules/gui/skins2/x11/x11_window.hpp \
     ../modules/hw/d3d11/d3d11_filters.c \
     ../modules/hw/d3d9/d3d9_filters.c \
     ../modules/hw/mmal/codec.c \
     ../modules/hw/mmal/deinterlace.c \
     ../modules/hw/mmal/vout.c \
     ../modules/hw/vaapi/filters.c \
     ../modules/hw/vdpau/adjust.c \
     ../modules/hw/vdpau/avcodec.c \
     ../modules/hw/vdpau/chroma.c \
     ../modules/hw/vdpau/deinterlace.c \
     ../modules/hw/vdpau/sharpen.c \
     ../modules/isa/arm/neon/chroma_yuv.c \
     ../modules/isa/arm/neon/volume.c \
     ../modules/isa/arm/neon/yuv_rgb.c \
     ../modules/keystore/file.c \
     ../modules/keystore/keychain.m \
     ../modules/keystore/kwallet.c \
     ../modules/keystore/memory.c \
     ../modules/keystore/secret.c \
     ../modules/logger/android.c \
     ../modules/logger/console.c \
     ../modules/logger/file.c \
     ../modules/logger/journal.c \
     ../modules/logger/syslog.c \
     ../modules/lua/extension.c \
     ../modules/lua/intf.c \
     ../modules/lua/libs.h \
     ../modules/lua/libs/configuration.c \
     ../modules/lua/libs/gettext.c \
     ../modules/lua/libs/httpd.c \
     ../modules/lua/stream_filter.c \
     ../modules/lua/vlc.c \
     ../modules/meta_engine/ID3Genres.h \
     ../modules/meta_engine/folder.c \
     ../modules/meta_engine/taglib.cpp \
     ../modules/misc/addons/fsstorage.c \
     ../modules/misc/addons/vorepository.c \
     ../modules/misc/audioscrobbler.c \
     ../modules/misc/fingerprinter.c \
     ../modules/misc/gnutls.c \
     ../modules/misc/inhibit/dbus.c \
     ../modules/misc/inhibit/iokit-inhibit.c \
     ../modules/misc/inhibit/wl-idle-inhibit.c \
     ../modules/misc/inhibit/xdg.c \
     ../modules/misc/medialibrary/medialibrary.cpp \
     ../modules/misc/playlist/export.c \
     ../modules/misc/playlist/html.c \
     ../modules/misc/playlist/m3u.c \
     ../modules/misc/playlist/xspf.c \
     ../modules/misc/securetransport.c \
     ../modules/misc/stats.c \
     ../modules/misc/xml/libxml.c \
     ../modules/mux/asf.c \
     ../modules/mux/avi.c \
     ../modules/mux/dummy.c \
     ../modules/mux/mp4/libmp4mux.c \
     ../modules/mux/mp4/libmp4mux.h \
     ../modules/mux/mp4/mp4.c \
     ../modules/mux/mpeg/ps.c \
     ../modules/mux/mpeg/ts.c \
     ../modules/mux/mpjpeg.c \
     ../modules/mux/ogg.c \
     ../modules/mux/wav.c \
     ../modules/notify/notify.c \
     ../modules/notify/osx_notifications.m \
     ../modules/packetizer/a52.c \
     ../modules/packetizer/av1.c \
     ../modules/packetizer/avparser.h \
     ../modules/packetizer/copy.c \
     ../modules/packetizer/dts.c \
     ../modules/packetizer/flac.c \
     ../modules/packetizer/h264.c \
     ../modules/packetizer/hevc.c \
     ../modules/packetizer/mlp.c \
     ../modules/packetizer/mpeg4audio.c \
     ../modules/packetizer/mpeg4video.c \
     ../modules/packetizer/mpegaudio.c \
     ../modules/packetizer/mpegvideo.c \
     ../modules/packetizer/vc1.c \
     ../modules/services_discovery/avahi.c \
     ../modules/services_discovery/bonjour.m \
     ../modules/services_discovery/microdns.c \
     ../modules/services_discovery/mtp.c \
     ../modules/services_discovery/os2drive.c \
     ../modules/services_discovery/podcast.c \
     ../modules/services_discovery/pulse.c \
     ../modules/services_discovery/sap.c \
     ../modules/services_discovery/udev.c \
     ../modules/services_discovery/udisks.c \
     ../modules/services_discovery/upnp.cpp \
     ../modules/services_discovery/windrive.c \
     ../modules/services_discovery/xcb_apps.c \
     ../modules/spu/audiobargraph_v.c \
     ../modules/spu/common.h \
     ../modules/spu/dynamicoverlay/dynamicoverlay.c \
     ../modules/spu/logo.c \
     ../modules/spu/marq.c \
     ../modules/spu/mosaic.c \
     ../modules/spu/rss.c \
     ../modules/spu/subsdelay.c \
     ../modules/stream_extractor/archive.c \
     ../modules/stream_filter/adf.c \
     ../modules/stream_filter/aribcam.c \
     ../modules/stream_filter/cache_read.c \
     ../modules/stream_filter/decomp.c \
     ../modules/stream_filter/hds/hds.c \
     ../modules/stream_filter/inflate.c \
     ../modules/stream_filter/prefetch.c \
     ../modules/stream_filter/record.c \
     ../modules/stream_filter/skiptags.c \
     ../modules/stream_out/autodel.c \
     ../modules/stream_out/bridge.c \
     ../modules/stream_out/chromaprint.c \
     ../modules/stream_out/chromecast/cast.cpp \
     ../modules/stream_out/chromecast/chromecast_demux.cpp \
     ../modules/stream_out/cycle.c \
     ../modules/stream_out/delay.c \
     ../modules/stream_out/display.c \
     ../modules/stream_out/dlna/dlna.hpp \
     ../modules/stream_out/dummy.c \
     ../modules/stream_out/duplicate.c \
     ../modules/stream_out/es.c \
     ../modules/stream_out/gather.c \
     ../modules/stream_out/mosaic_bridge.c \
     ../modules/stream_out/record.c \
     ../modules/stream_out/renderer_common.hpp \
     ../modules/stream_out/rtcp.c \
     ../modules/stream_out/rtp.c \
     ../modules/stream_out/rtp.h \
     ../modules/stream_out/rtpfmt.c \
     ../modules/stream_out/rtsp.c \
     ../modules/stream_out/sdi/sdiout.cpp \
     ../modules/stream_out/setid.c \
     ../modules/stream_out/smem.c \
     ../modules/stream_out/standard.c \
     ../modules/stream_out/stats.c \
     ../modules/stream_out/transcode/transcode.c \
     ../modules/stream_out/udp.c \
     ../modules/text_renderer/freetype/fonts/fontconfig.c \
     ../modules/text_renderer/freetype/freetype.c \
     ../modules/text_renderer/nsspeechsynthesizer.m \
     ../modules/text_renderer/sapi.cpp \
     ../modules/text_renderer/svg.c \
     ../modules/text_renderer/tdummy.c \
     ../modules/video_chroma/chain.c \
     ../modules/video_chroma/cvpx.c \
     ../modules/video_chroma/grey_yuv.c \
     ../modules/video_chroma/i420_nv12.c \
     ../modules/video_chroma/i420_rgb.c \
     ../modules/video_chroma/i420_rgb.h \
     ../modules/video_chroma/i420_rgb16.c \
     ../modules/video_chroma/i420_rgb8.c \
     ../modules/video_chroma/i420_rgb_c.h \
     ../modules/video_chroma/i422_i420.c \
     ../modules/video_chroma/rv32.c \
     ../modules/video_chroma/swscale.c \
     ../modules/video_chroma/yuvp.c \
     ../modules/video_chroma/yuy2_i420.c \
     ../modules/video_chroma/yuy2_i422.c \
     ../modules/video_filter/adjust.c \
     ../modules/video_filter/alphamask.c \
     ../modules/video_filter/anaglyph.c \
     ../modules/video_filter/antiflicker.c \
     ../modules/video_filter/ball.c \
     ../modules/video_filter/blend.cpp \
     ../modules/video_filter/blendbench.c \
     ../modules/video_filter/bluescreen.c \
     ../modules/video_filter/canvas.c \
     ../modules/video_filter/ci_filters.m \
     ../modules/video_filter/colorthres.c \
     ../modules/video_filter/croppadd.c \
     ../modules/video_filter/deinterlace/algo_phosphor.h \
     ../modules/video_filter/deinterlace/deinterlace.c \
     ../modules/video_filter/deinterlace/deinterlace.h \
     ../modules/video_filter/edgedetection.c \
     ../modules/video_filter/erase.c \
     ../modules/video_filter/extract.c \
     ../modules/video_filter/formatcrop.c \
     ../modules/video_filter/fps.c \
     ../modules/video_filter/freeze.c \
     ../modules/video_filter/gaussianblur.c \
     ../modules/video_filter/gradfun.c \
     ../modules/video_filter/gradient.c \
     ../modules/video_filter/grain.c \
     ../modules/video_filter/hqdn3d.c \
     ../modules/video_filter/invert.c \
     ../modules/video_filter/magnify.c \
     ../modules/video_filter/mirror.c \
     ../modules/video_filter/motionblur.c \
     ../modules/video_filter/motiondetect.c \
     ../modules/video_filter/oldmovie.c \
     ../modules/video_filter/opencv_example.cpp \
     ../modules/video_filter/opencv_wrapper.c \
     ../modules/video_filter/posterize.c \
     ../modules/video_filter/postproc.c \
     ../modules/video_filter/psychedelic.c \
     ../modules/video_filter/puzzle/puzzle.c \
     ../modules/video_filter/ripple.c \
     ../modules/video_filter/rotate.c \
     ../modules/video_filter/scale.c \
     ../modules/video_filter/scene.c \
     ../modules/video_filter/sepia.c \
     ../modules/video_filter/sharpen.c \
     ../modules/video_filter/transform.c \
     ../modules/video_filter/vhs.c \
     ../modules/video_filter/wave.c \
     ../modules/video_output/android/window.c \
     ../modules/video_output/caca.c \
     ../modules/video_output/caopengllayer.m \
     ../modules/video_output/decklink.cpp \
     ../modules/video_output/glx.c \
     ../modules/video_output/kva.c \
     ../modules/video_output/libplacebo/display.c \
     ../modules/video_output/libplacebo/instance_opengl.c \
     ../modules/video_output/libplacebo/instance_vulkan.c \
     ../modules/video_output/macosx.m \
     ../modules/video_output/opengl/display.c \
     ../modules/video_output/opengl/egl.c \
     ../modules/video_output/opengl/vout_helper.h \
     ../modules/video_output/vdummy.c \
     ../modules/video_output/vmem.c \
     ../modules/video_output/wayland/shm.c \
     ../modules/video_output/wayland/xdg-shell.c \
     ../modules/video_output/win32/direct3d11.cpp \
     ../modules/video_output/win32/direct3d9.c \
     ../modules/video_output/win32/drawable.c \
     ../modules/video_output/win32/events.c \
     ../modules/video_output/win32/glwin32.c \
     ../modules/video_output/win32/wgl.c \
     ../modules/video_output/win32/window.c \
     ../modules/video_output/win32/wingdi.c \
     ../modules/video_output/xcb/render.c \
     ../modules/video_output/xcb/window.c \
     ../modules/video_output/xcb/x11.c \
     ../modules/video_output/yuv.c \
     ../modules/video_splitter/clone.c \
     ../modules/video_splitter/panoramix.c \
     ../modules/video_splitter/wall.c \
     ../modules/visualization/glspectrum.c \
     ../modules/visualization/goom.c \
     ../modules/visualization/projectm.cpp \
     ../modules/visualization/visual/visual.c \
     ../modules/visualization/visual/window_presets.h \
     ../modules/visualization/vsxu.cpp \
     ../share/lua/http/dialogs/batch_window.html \
     ../share/lua/http/dialogs/browse_window.html \
     ../share/lua/http/dialogs/create_stream.html \
     ../share/lua/http/dialogs/equalizer_window.html \
     ../share/lua/http/dialogs/error_window.html \
     ../share/lua/http/dialogs/mosaic_window.html \
     ../share/lua/http/dialogs/offset_window.html \
     ../share/lua/http/dialogs/stream_config_window.html \
     ../share/lua/http/dialogs/stream_window.html \
     ../share/lua/http/index.html \
     ../share/lua/http/mobile.html \
     ../share/lua/http/mobile_browse.html \
     ../share/lua/http/mobile_equalizer.html \
     ../share/lua/http/mobile_view.html \
     ../share/org.videolan.vlc.appdata.xml.in.in

CATALOGS =  ach.gmo af.gmo am.gmo an.gmo ar.gmo as.gmo ast.gmo az.gmo be.gmo bg.gmo bn_IN.gmo bn.gmo br.gmo brx.gmo bs.gmo ca.gmo cgg.gmo ckb.gmo co.gmo cs.gmo cy.gmo da.gmo de.gmo el.gmo en_GB.gmo es.gmo et.gmo eu.gmo fa.gmo ff.gmo fi.gmo fr.gmo fur.gmo fy.gmo ga.gmo gd.gmo gl.gmo gu.gmo he.gmo hi.gmo hr.gmo hu.gmo hy.gmo ia.gmo id.gmo is.gmo it.gmo ja.gmo ka.gmo kk.gmo km.gmo kn.gmo ko.gmo ks_IN.gmo ky.gmo lg.gmo lt.gmo lv.gmo mai.gmo mk.gmo ml.gmo mn.gmo mr.gmo ms.gmo my.gmo nb.gmo ne.gmo nl.gmo nn.gmo oc.gmo or.gmo pa.gmo pl.gmo ps.gmo pt_BR.gmo pt_PT.gmo ro.gmo ru.gmo si.gmo sk.gmo sl.gmo sq.gmo sr.gmo sv.gmo ta.gmo te.gmo tet.gmo th.gmo tl.gmo tr.gmo ug.gmo uk.gmo uz.gmo vi.gmo wa.gmo zh_CN.gmo zh_TW.gmo zu.gmo

POFILESDEPS_ = $(srcdir)/$(DOMAIN).pot
POFILESDEPS_yes = $(POFILESDEPS_)
POFILESDEPS_no =
POFILESDEPS = $(POFILESDEPS_$(PO_DEPENDS_ON_POT))

DISTFILESDEPS_ = update-po
DISTFILESDEPS_yes = $(DISTFILESDEPS_)
DISTFILESDEPS_no =
DISTFILESDEPS = $(DISTFILESDEPS_$(DIST_DEPENDS_ON_UPDATE_PO))

# Makevars gets inserted here. (Don't remove this line!)
# Makefile variables for PO directory in any package using GNU gettext.

VPATH += ../modules/gui ../modules/gui/qt ../modules/gui/qt/ui

# Usually the message domain is the same as the package name.
DOMAIN = $(PACKAGE)

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

# These options get passed to xgettext.
XGETTEXT_OPTIONS = --directory=.. --keyword=_ --keyword=N_ --keyword=_NS --keyword=qtr --keyword=qsTr --keyword=Q_ --language=C++ --keyword=vlc_ngettext:1,2 --keyword=vlc_pgettext:1c,2 --keyword=_PNS:1c,2 --add-comments=xgettext: --from-code=UTF-8

# This is the copyright holder that gets inserted into the header of the
# $(DOMAIN).pot file.  Set this to the copyright holder of the surrounding
# package.  (Note that the msgstr strings, extracted from the package's
# sources, belong to the copyright holder of the package.)  Translators are
# expected to transfer the copyright for their translations to this person
# or entity, or to disclaim their copyright.  The empty string stands for
# the public domain; in this case the translators are expected to disclaim
# their copyright.
COPYRIGHT_HOLDER = VideoLAN

# This is the email address or URL to which the translators shall report
# bugs in the untranslated strings:
# - Strings which are not entire sentences, see the maintainer guidelines
#   in the GNU gettext documentation, section 'Preparing Strings'.
# - Strings which use unclear terms or require additional context to be
#   understood.
# - Strings which make invalid assumptions about notation of date, time or
#   money.
# - Pluralisation problems.
# - Incorrect English spelling.
# - Incorrect formatting.
# It can be your email address, or a mailing list address where translators
# can write to without being subscribed, or the URL of a web page through
# which the translators can contact you.
MSGID_BUGS_ADDRESS = vlc-devel@videolan.org

# This is the list of locale categories, beyond LC_MESSAGES, for which the
# message catalogs shall be used.  It is usually empty.
EXTRA_LOCALE_CATEGORIES =

all: all-yes


.SUFFIXES:
.SUFFIXES: .po .gmo .sed .sin .nop .po-create .po-update

# The .pot file, stamp-po, .po files, and .gmo files appear in release tarballs.
# The GNU Coding Standards say in
# <https://www.gnu.org/prep/standards/html_node/Makefile-Basics.html>:
#   "GNU distributions usually contain some files which are not source files
#    ... . Since these files normally appear in the source directory, they
#    should always appear in the source directory, not in the build directory.
#    So Makefile rules to update them should put the updated files in the
#    source directory."
# Therefore we put these files in the source directory, not the build directory.

# During .po -> .gmo conversion, take into account the most recent changes to
# the .pot file. This eliminates the need to update the .po files when the
# .pot file has changed, which would be troublesome if the .po files are put
# under version control.
$(GMOFILES): $(srcdir)/$(DOMAIN).pot
.po.gmo:
	@lang=`echo $* | sed -e 's,.*/,,'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}rm -f $${lang}.gmo && $(MSGMERGE) $(MSGMERGE_FOR_MSGFMT_OPTION) -o $${lang}.1po $${lang}.po $(DOMAIN).pot && $(GMSGFMT) -c --statistics --verbose -o $${lang}.gmo $${lang}.1po && rm -f $${lang}.1po"; \
	cd $(srcdir) && \
	rm -f $${lang}.gmo && \
	$(MSGMERGE) $(MSGMERGE_FOR_MSGFMT_OPTION) -o $${lang}.1po $${lang}.po $(DOMAIN).pot && \
	$(GMSGFMT) -c --statistics --verbose -o t-$${lang}.gmo $${lang}.1po && \
	mv t-$${lang}.gmo $${lang}.gmo && \
	rm -f $${lang}.1po

.sin.sed:
	sed -e '/^#/d' $< > t-$@
	mv t-$@ $@


all-yes: $(srcdir)/stamp-po
all-no:

# Ensure that the gettext macros and this Makefile.in.in are in sync.
CHECK_MACRO_VERSION = \
	test "$(GETTEXT_MACRO_VERSION)" = "0.20" \
	  || { echo "*** error: gettext infrastructure mismatch: using a Makefile.in.in from gettext version $(GETTEXT_MACRO_VERSION) but the autoconf macros are from gettext version 0.20" 1>&2; \
	       exit 1; \
	     }

# $(srcdir)/$(DOMAIN).pot is only created when needed. When xgettext finds no
# internationalized messages, no $(srcdir)/$(DOMAIN).pot is created (because
# we don't want to bother translators with empty POT files). We assume that
# LINGUAS is empty in this case, i.e. $(POFILES) and $(GMOFILES) are empty.
# In this case, $(srcdir)/stamp-po is a nop (i.e. a phony target).

# $(srcdir)/stamp-po is a timestamp denoting the last time at which the CATALOGS
# have been loosely updated. Its purpose is that when a developer or translator
# checks out the package from a version control system, and the $(DOMAIN).pot
# file is not under version control, "make" will update the $(DOMAIN).pot and
# the $(CATALOGS), but subsequent invocations of "make" will do nothing. This
# timestamp would not be necessary if updating the $(CATALOGS) would always
# touch them; however, the rule for $(POFILES) has been designed to not touch
# files that don't need to be changed.
$(srcdir)/stamp-po: $(srcdir)/$(DOMAIN).pot
	@$(CHECK_MACRO_VERSION)
	test ! -f $(srcdir)/$(DOMAIN).pot || \
	  test -z "$(GMOFILES)" || $(MAKE) $(GMOFILES)
	@test ! -f $(srcdir)/$(DOMAIN).pot || { \
	  echo "touch $(srcdir)/stamp-po" && \
	  echo timestamp > $(srcdir)/stamp-poT && \
	  mv $(srcdir)/stamp-poT $(srcdir)/stamp-po; \
	}

# Note: Target 'all' must not depend on target '$(DOMAIN).pot-update',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

# This target rebuilds $(DOMAIN).pot; it is an expensive operation.
# Note that $(DOMAIN).pot is not touched if it doesn't need to be changed.
# The determination of whether the package xyz is a GNU one is based on the
# heuristic whether some file in the top level directory mentions "GNU xyz".
# If GNU 'find' is available, we avoid grepping through monster files.
$(DOMAIN).pot-update: $(POTFILES) $(srcdir)/POTFILES.in remove-potcdate.sed
	package_gnu="$(PACKAGE_GNU)"; \
	test -n "$$package_gnu" || { \
	  if { if (LC_ALL=C find --version) 2>/dev/null | grep GNU >/dev/null; then \
	         LC_ALL=C find -L $(top_srcdir) -maxdepth 1 -type f -size -10000000c -exec grep -i 'GNU vlc' /dev/null '{}' ';' 2>/dev/null; \
	       else \
	         LC_ALL=C grep -i 'GNU vlc' $(top_srcdir)/* 2>/dev/null; \
	       fi; \
	     } | grep -v 'libtool:' >/dev/null; then \
	     package_gnu=yes; \
	   else \
	     package_gnu=no; \
	   fi; \
	}; \
	if test "$$package_gnu" = "yes"; then \
	  package_prefix='GNU '; \
	else \
	  package_prefix=''; \
	fi; \
	if test -n '$(MSGID_BUGS_ADDRESS)' || test '$(PACKAGE_BUGREPORT)' = '@'PACKAGE_BUGREPORT'@'; then \
	  msgid_bugs_address='$(MSGID_BUGS_ADDRESS)'; \
	else \
	  msgid_bugs_address='$(PACKAGE_BUGREPORT)'; \
	fi; \
	case `$(XGETTEXT) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	  '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].* | 0.16 | 0.16.[0-1]*) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	      $(XGETTEXT_OPTIONS)  \
	    ;; \
	  *) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --package-name="$${package_prefix}vlc" \
	      --package-version='4.0.0-dev' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	      $(XGETTEXT_OPTIONS)  \
	    ;; \
	esac
	test ! -f $(DOMAIN).po || { \
	  if test -f $(srcdir)/$(DOMAIN).pot-header; then \
	    sed -e '1,/^#$$/d' < $(DOMAIN).po > $(DOMAIN).1po && \
	    cat $(srcdir)/$(DOMAIN).pot-header $(DOMAIN).1po > $(DOMAIN).po && \
	    rm -f $(DOMAIN).1po \
	    || exit 1; \
	  fi; \
	  if test -f $(srcdir)/$(DOMAIN).pot; then \
	    sed -f remove-potcdate.sed < $(srcdir)/$(DOMAIN).pot > $(DOMAIN).1po && \
	    sed -f remove-potcdate.sed < $(DOMAIN).po > $(DOMAIN).2po && \
	    if cmp $(DOMAIN).1po $(DOMAIN).2po >/dev/null 2>&1; then \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(DOMAIN).po; \
	    else \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(srcdir)/$(DOMAIN).pot && \
	      mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	    fi; \
	  else \
	    mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	  fi; \
	}

# This rule has no dependencies: we don't need to update $(DOMAIN).pot at
# every "make" invocation, only create it when it is missing.
# Only "make $(DOMAIN).pot-update" or "make dist" will force an update.
$(srcdir)/$(DOMAIN).pot:
	$(MAKE) $(DOMAIN).pot-update

# This target rebuilds a PO file if $(DOMAIN).pot has changed.
# Note that a PO file is not touched if it doesn't need to be changed.
$(POFILES): $(POFILESDEPS)
	@test -f $(srcdir)/$(DOMAIN).pot || $(MAKE) $(srcdir)/$(DOMAIN).pot
	@lang=`echo $@ | sed -e 's,.*/,,' -e 's/\.po$$//'`; \
	if test -f "$(srcdir)/$${lang}.po"; then \
	  test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	  echo "$${cdcmd}$(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} --previous $${lang}.po $(DOMAIN).pot"; \
	  cd $(srcdir) \
	    && { case `$(MSGMERGE_UPDATE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	           '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].*) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) $${lang}.po $(DOMAIN).pot;; \
	           0.1[6-7] | 0.1[6-7].*) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --previous $${lang}.po $(DOMAIN).pot;; \
	           *) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} --previous $${lang}.po $(DOMAIN).pot;; \
	         esac; \
	       }; \
	else \
	  $(MAKE) $${lang}.po-create; \
	fi


install: install-exec install-data
install-exec:
install-data: install-data-yes
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    $(INSTALL_DATA) $(srcdir)/$$file \
			    $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
install-data-no: all
install-data-yes: all
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  if test -r $$cat; then realcat=$$cat; else realcat=$(srcdir)/$$cat; fi; \
	  $(INSTALL_DATA) $$realcat $(DESTDIR)$$dir/$(DOMAIN).mo; \
	  echo "installing $$realcat as $(DESTDIR)$$dir/$(DOMAIN).mo"; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	      rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      ln -s ../LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      ln $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      cp -p $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      echo "installing $$realcat link as $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo"; \
	    fi; \
	  done; \
	done

install-strip: install

installdirs: installdirs-exec installdirs-data
installdirs-exec:
installdirs-data: installdirs-data-yes
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	else \
	  : ; \
	fi
installdirs-data-no:
installdirs-data-yes:
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	    fi; \
	  done; \
	done

# Define this as empty until I found a useful application.
installcheck:

uninstall: uninstall-exec uninstall-data
uninstall-exec:
uninstall-data: uninstall-data-yes
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
uninstall-data-no:
uninstall-data-yes:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  for lc in LC_MESSAGES $(EXTRA_LOCALE_CATEGORIES); do \
	    rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	  done; \
	done

check: all

info dvi ps pdf html tags TAGS ctags CTAGS ID:

install-dvi install-ps install-pdf install-html:

mostlyclean:
	rm -f remove-potcdate.sed
	rm -f $(srcdir)/stamp-poT
	rm -f core core.* $(DOMAIN).po $(DOMAIN).1po $(DOMAIN).2po *.new.po
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(srcdir)/$(DOMAIN).pot $(srcdir)/stamp-po $(GMOFILES)

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir:
	test -z "$(DISTFILESDEPS)" || $(MAKE) $(DISTFILESDEPS)
	@$(MAKE) dist2
# This is a separate target because 'update-po' must be executed before.
dist2: $(srcdir)/stamp-po $(DISTFILES)
	@dists="$(DISTFILES)"; \
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  dists="$$dists Makevars.template"; \
	fi; \
	if test -f $(srcdir)/$(DOMAIN).pot; then \
	  dists="$$dists $(DOMAIN).pot stamp-po"; \
	else \
	  case $(XGETTEXT) in \
	    :) echo "Warning: Creating a tarball without '$(DOMAIN).pot', because a suitable 'xgettext' program was not found in PATH." 1>&2;; \
	    *) echo "Warning: Creating a tarball without '$(DOMAIN).pot', because 'xgettext' found no strings to extract. Check the contents of the POTFILES.in file and the XGETTEXT_OPTIONS in the Makevars file." 1>&2;; \
	  esac; \
	fi; \
	if test -f $(srcdir)/ChangeLog; then \
	  dists="$$dists ChangeLog"; \
	fi; \
	for i in 0 1 2 3 4 5 6 7 8 9; do \
	  if test -f $(srcdir)/ChangeLog.$$i; then \
	    dists="$$dists ChangeLog.$$i"; \
	  fi; \
	done; \
	if test -f $(srcdir)/LINGUAS; then dists="$$dists LINGUAS"; fi; \
	for file in $$dists; do \
	  if test -f $$file; then \
	    cp -p $$file $(distdir) || exit 1; \
	  else \
	    cp -p $(srcdir)/$$file $(distdir) || exit 1; \
	  fi; \
	done

update-po: Makefile
	$(MAKE) $(DOMAIN).pot-update
	test -z "$(UPDATEPOFILES)" || $(MAKE) $(UPDATEPOFILES)
	$(MAKE) update-gmo

# General rule for creating PO files.

.nop.po-create:
	@lang=`echo $@ | sed -e 's/\.po-create$$//'`; \
	echo "File $$lang.po does not exist. If you are a translator, you can create it through 'msginit'." 1>&2; \
	exit 1

# General rule for updating PO files.

.nop.po-update:
	@lang=`echo $@ | sed -e 's/\.po-update$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools" && test "$(CROSS_COMPILING)" != "yes"; then PATH=`pwd`/../src:$$PATH; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang --previous $$lang.po $(DOMAIN).pot -o $$lang.new.po"; \
	cd $(srcdir); \
	if { case `$(MSGMERGE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	       '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].*) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	       0.1[6-7] | 0.1[6-7].*) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) --previous -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	       *) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang --previous -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	     esac; \
	   }; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "msgmerge for $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

$(DUMMYPOFILES):

update-gmo: Makefile $(GMOFILES)
	@:

# Recreate Makefile by invoking config.status. Explicitly invoke the shell,
# because execution permission bits may not work on the current file system.
# Use /bin/sh, which is the shell determined by autoconf for the use by its
# scripts, not $(SHELL) which is hardwired to /bin/sh and may be deficient.
Makefile: Makefile.in.in Makevars $(top_builddir)/config.status POTFILES.in LINGUAS
	cd $(top_builddir) \
	  && /bin/sh ./config.status $(subdir)/$@.in po-directories

force:

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
# Special Makefile rules for English message catalogs with quotation marks.
#
# Copyright (C) 2001-2017 Free Software Foundation, Inc.
# This file, Rules-quot, and its auxiliary files (listed under
# DISTFILES.common.extra1) are free software; the Free Software Foundation
# gives unlimited permission to use, copy, distribute, and modify them.

DISTFILES.common.extra1 = quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot

.SUFFIXES: .insert-header .po-update-en

en@quot.po-create:
	$(MAKE) en@quot.po-update
en@boldquot.po-create:
	$(MAKE) en@boldquot.po-update

en@quot.po-update: en@quot.po-update-en
en@boldquot.po-update: en@boldquot.po-update-en

.insert-header.po-update-en:
	@lang=`echo $@ | sed -e 's/\.po-update-en$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools" && test "$(CROSS_COMPILING)" != "yes"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) $(MSGINIT_OPTIONS) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null \
	   | $(SED) -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | \
	   { case `$(MSGFILTER) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	     '' | 0.[0-9] | 0.[0-9].* | 0.1[0-8] | 0.1[0-8].*) \
	       $(MSGFILTER) $(SED) -f `echo $$lang | sed -e 's/.*@//'`.sed \
	       ;; \
	     *) \
	       $(MSGFILTER) `echo $$lang | sed -e 's/.*@//'` \
	       ;; \
	     esac } 2>/dev/null > $$tmpdir/$$lang.new.po \
	     ; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@quot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@quot.header/g' $(srcdir)/insert-header.sin > en@quot.insert-header

en@boldquot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@boldquot.header/g' $(srcdir)/insert-header.sin > en@boldquot.insert-header

mostlyclean: mostlyclean-quot
mostlyclean-quot:
	rm -f *.insert-header
