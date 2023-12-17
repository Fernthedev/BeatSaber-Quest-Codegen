#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebProxy)
namespace System::Net {
class IWebProxy;
}
namespace System {
class Uri;
}
namespace System::Net {
class AutoWebProxyScriptEngine;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Net {
class ICredentials;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Net {
class WebProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebProxy);
// Type: System.Net::WebProxy
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9139))
// CS Name: ::System.Net::WebProxy*
class CORDL_TYPE WebProxy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _UseRegistry offset 0x10
 __declspec(property(get=__get__UseRegistry, put=__set__UseRegistry)) bool  _UseRegistry;

/// @brief Field _BypassOnLocal offset 0x11
 __declspec(property(get=__get__BypassOnLocal, put=__set__BypassOnLocal)) bool  _BypassOnLocal;

/// @brief Field m_EnableAutoproxy offset 0x12
 __declspec(property(get=__get_m_EnableAutoproxy, put=__set_m_EnableAutoproxy)) bool  m_EnableAutoproxy;

/// @brief Field _ProxyAddress offset 0x18
 __declspec(property(get=__get__ProxyAddress, put=__set__ProxyAddress)) ::System::Uri*  _ProxyAddress;

/// @brief Field _BypassList offset 0x20
 __declspec(property(get=__get__BypassList, put=__set__BypassList)) ::System::Collections::ArrayList*  _BypassList;

/// @brief Field _Credentials offset 0x28
 __declspec(property(get=__get__Credentials, put=__set__Credentials)) ::System::Net::ICredentials*  _Credentials;

/// @brief Field _RegExBypassList offset 0x30
 __declspec(property(get=__get__RegExBypassList, put=__set__RegExBypassList)) ::ArrayW<::System::Text::RegularExpressions::Regex*,::Array<::System::Text::RegularExpressions::Regex*>*>  _RegExBypassList;

/// @brief Field _ProxyHostAddresses offset 0x38
 __declspec(property(get=__get__ProxyHostAddresses, put=__set__ProxyHostAddresses)) ::System::Collections::Hashtable*  _ProxyHostAddresses;

/// @brief Field m_ScriptEngine offset 0x40
 __declspec(property(get=__get_m_ScriptEngine, put=__set_m_ScriptEngine)) ::System::Net::AutoWebProxyScriptEngine*  m_ScriptEngine;

 __declspec(property(get=get_Credentials)) ::System::Net::ICredentials*  Credentials;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

 __declspec(property(get=get_ScriptEngine)) ::System::Net::AutoWebProxyScriptEngine*  ScriptEngine;

/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr operator  ::System::Net::IWebProxy*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set__UseRegistry(bool  value) ;

constexpr bool& __get__UseRegistry() ;

constexpr bool const& __get__UseRegistry() const;

constexpr void __set__BypassOnLocal(bool  value) ;

constexpr bool& __get__BypassOnLocal() ;

constexpr bool const& __get__BypassOnLocal() const;

constexpr void __set_m_EnableAutoproxy(bool  value) ;

constexpr bool& __get_m_EnableAutoproxy() ;

constexpr bool const& __get_m_EnableAutoproxy() const;

constexpr void __set__ProxyAddress(::System::Uri*  value) ;

constexpr ::System::Uri* __get__ProxyAddress() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get__ProxyAddress() const;

constexpr void __set__BypassList(::System::Collections::ArrayList*  value) ;

constexpr ::System::Collections::ArrayList* __get__BypassList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> __get__BypassList() const;

constexpr void __set__Credentials(::System::Net::ICredentials*  value) ;

constexpr ::System::Net::ICredentials* __get__Credentials() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> __get__Credentials() const;

constexpr void __set__RegExBypassList(::ArrayW<::System::Text::RegularExpressions::Regex*,::Array<::System::Text::RegularExpressions::Regex*>*>  value) ;

constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*,::Array<::System::Text::RegularExpressions::Regex*>*>& __get__RegExBypassList() ;

constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*,::Array<::System::Text::RegularExpressions::Regex*>*> const& __get__RegExBypassList() const;

constexpr void __set__ProxyHostAddresses(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get__ProxyHostAddresses() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get__ProxyHostAddresses() const;

constexpr void __set_m_ScriptEngine(::System::Net::AutoWebProxyScriptEngine*  value) ;

constexpr ::System::Net::AutoWebProxyScriptEngine* __get_m_ScriptEngine() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::AutoWebProxyScriptEngine*> __get_m_ScriptEngine() const;

static inline ::System::Net::WebProxy* New_ctor() ;

/// @brief Method .ctor addr 0x29b6bd8 size 0x14 virtual false final false
inline void _ctor() ;

static inline ::System::Net::WebProxy* New_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW,::Array<::StringW>*>  BypassList, ::System::Net::ICredentials*  Credentials) ;

/// @brief Method .ctor addr 0x29b6bec size 0xb4 virtual false final false
inline void _ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW,::Array<::StringW>*>  BypassList, ::System::Net::ICredentials*  Credentials) ;

/// @brief Method get_Credentials addr 0x29b6ed8 size 0x8 virtual true final true
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_UseDefaultCredentials addr 0x29b6ee0 size 0x7c virtual false final false
inline bool get_UseDefaultCredentials() ;

/// @brief Method set_UseDefaultCredentials addr 0x29b6f5c size 0x78 virtual false final false
inline void set_UseDefaultCredentials(bool  value) ;

/// @brief Method GetProxy addr 0x29b6fd4 size 0x190 virtual true final true
inline ::System::Uri* GetProxy(::System::Uri*  destination) ;

/// @brief Method UpdateRegExList addr 0x29b6ca0 size 0x238 virtual false final false
inline void UpdateRegExList(bool  canThrow) ;

/// @brief Method IsMatchInBypassList addr 0x29b73b4 size 0x198 virtual false final false
inline bool IsMatchInBypassList(::System::Uri*  input) ;

/// @brief Method IsLocal addr 0x29b754c size 0x160 virtual false final false
inline bool IsLocal(::System::Uri*  host) ;

/// @brief Method IsLocalInProxyHash addr 0x29b76ac size 0xf0 virtual false final false
inline bool IsLocalInProxyHash(::System::Uri*  host) ;

/// @brief Method IsBypassed addr 0x29b779c size 0xf4 virtual true final true
inline bool IsBypassed(::System::Uri*  host) ;

/// @brief Method IsBypassedManual addr 0x29b72ec size 0xc8 virtual false final false
inline bool IsBypassedManual(::System::Uri*  host) ;

static inline ::System::Net::WebProxy* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor addr 0x29b7998 size 0x360 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x29b7d04 size 0xc virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetObjectData addr 0x29b7d10 size 0x124 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method get_ScriptEngine addr 0x29b7e34 size 0x8 virtual false final false
inline ::System::Net::AutoWebProxyScriptEngine* get_ScriptEngine() ;

/// @brief Method CreateDefaultProxy addr 0x29b7e3c size 0x68 virtual false final false
static inline ::System::Net::IWebProxy* CreateDefaultProxy() ;

static inline ::System::Net::WebProxy* New_ctor(bool  enableAutoproxy) ;

/// @brief Method .ctor addr 0x29b7ea4 size 0x30 virtual false final false
inline void _ctor(bool  enableAutoproxy) ;

/// @brief Method UnsafeUpdateFromRegistry addr 0x29b7cf8 size 0xc virtual false final false
inline void UnsafeUpdateFromRegistry() ;

/// @brief Method GetProxyAuto addr 0x29b7164 size 0x188 virtual false final false
inline bool GetProxyAuto(::System::Uri*  destination, ByRef<::System::Uri*>  proxyUri) ;

/// @brief Method IsBypassedAuto addr 0x29b7890 size 0x108 virtual false final false
inline bool IsBypassedAuto(::System::Uri*  destination, ByRef<bool>  isBypassed) ;

/// @brief Method AreAllBypassed addr 0x29b7ed4 size 0x308 virtual false final false
static inline bool AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::StringW>*  proxies, bool  checkFirstOnly) ;

/// @brief Method ProxyUri addr 0x29b81dc size 0x10a4 virtual false final false
static inline ::System::Uri* ProxyUri(::StringW  proxyName) ;

// Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebProxy(WebProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebProxy(WebProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebProxy()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebProxy, 0x48>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebProxy*, "System.Net", "WebProxy");
