///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2019 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: Version.hxx
///
/// Author: $author$
///   Date: 7/12/2019
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_LIB_XSTARA_VERSION_HXX_
#define _XOS_LIB_XSTARA_VERSION_HXX_

#include "xos/lib/Version.hxx"

namespace xos {
namespace lib {
namespace xstara {

///////////////////////////////////////////////////////////////////////
///  Class: Version
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS Version {
public:
    static const lib::Version& Which();
}; /// class _EXPORT_CLASS Version

} /// namespace xstara
} /// namespace lib
} /// namespace xos

#endif /// _XOS_LIB_XSTARA_VERSION_HXX_
