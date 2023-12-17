#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointManager)
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
struct SecurityProtocolType;
}
namespace System::Net {
class __ServicePointManager__SPKey;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class ICertificatePolicy;
}
namespace System {
class Uri;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ServicePointManager;
}
namespace System::Net {
class __ServicePointManager__SPKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServicePointManager);
MARK_REF_PTR_T(::System::Net::__ServicePointManager__SPKey);
// Type: ::SPKey
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9201))
// CS Name: ::ServicePointManager::SPKey*
class CORDL_TYPE __ServicePointManager__SPKey : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field uri offset 0x10
 __declspec(property(get=__get_uri, put=__set_uri)) ::System::Uri*  uri;

/// @brief Field proxy offset 0x18
 __declspec(property(get=__get_proxy, put=__set_proxy)) ::System::Uri*  proxy;

/// @brief Field use_connect offset 0x20
 __declspec(property(get=__get_use_connect, put=__set_use_connect)) bool  use_connect;

 __declspec(property(get=get_UsesProxy)) bool  UsesProxy;

constexpr void __set_uri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_uri() const;

constexpr void __set_proxy(::System::Uri*  value) ;

constexpr ::System::Uri* __get_proxy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_proxy() const;

constexpr void __set_use_connect(bool  value) ;

constexpr bool& __get_use_connect() ;

constexpr bool const& __get_use_connect() const;

static inline ::System::Net::__ServicePointManager__SPKey* New_ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect) ;

/// @brief Method .ctor addr 0x29d8d70 size 0x3c virtual false final false
inline void _ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect) ;

/// @brief Method get_UsesProxy addr 0x29d924c size 0x60 virtual false final false
inline bool get_UsesProxy() ;

/// @brief Method GetHashCode addr 0x29d92ac size 0xd0 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x29d937c size 0xf4 virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "__ServicePointManager__SPKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ServicePointManager__SPKey(__ServicePointManager__SPKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ServicePointManager__SPKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ServicePointManager__SPKey(__ServicePointManager__SPKey const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ServicePointManager__SPKey()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServicePointManager__SPKey, 0x28>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::ServicePointManager
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9202))
// CS Name: ::System.Net::ServicePointManager*
class CORDL_TYPE ServicePointManager : public ::System::Object {
public:
// Declarations
using SPKey = ::System::Net::__ServicePointManager__SPKey;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_servicePoints(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*,::System::Net::ServicePoint*>*  value) ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*,::System::Net::ServicePoint*>* getStaticF_servicePoints() ;

static inline void setStaticF_policy(::System::Net::ICertificatePolicy*  value) ;

static inline ::System::Net::ICertificatePolicy* getStaticF_policy() ;

static inline void setStaticF_defaultConnectionLimit(int32_t  value) ;

static inline int32_t getStaticF_defaultConnectionLimit() ;

static inline void setStaticF_maxServicePointIdleTime(int32_t  value) ;

static inline int32_t getStaticF_maxServicePointIdleTime() ;

static inline void setStaticF_maxServicePoints(int32_t  value) ;

static inline int32_t getStaticF_maxServicePoints() ;

static inline void setStaticF_dnsRefreshTimeout(int32_t  value) ;

static inline int32_t getStaticF_dnsRefreshTimeout() ;

static inline void setStaticF__checkCRL(bool  value) ;

static inline bool getStaticF__checkCRL() ;

static inline void setStaticF__securityProtocol(::System::Net::SecurityProtocolType  value) ;

static inline ::System::Net::SecurityProtocolType getStaticF__securityProtocol() ;

static inline void setStaticF_expectContinue(bool  value) ;

static inline bool getStaticF_expectContinue() ;

static inline void setStaticF_useNagle(bool  value) ;

static inline bool getStaticF_useNagle() ;

static inline void setStaticF_server_cert_cb(::System::Net::ServerCertValidationCallback*  value) ;

static inline ::System::Net::ServerCertValidationCallback* getStaticF_server_cert_cb() ;

static inline void setStaticF_tcp_keepalive(bool  value) ;

static inline bool getStaticF_tcp_keepalive() ;

static inline void setStaticF_tcp_keepalive_time(int32_t  value) ;

static inline int32_t getStaticF_tcp_keepalive_time() ;

static inline void setStaticF_tcp_keepalive_interval(int32_t  value) ;

static inline int32_t getStaticF_tcp_keepalive_interval() ;

/// @brief Method GetLegacyCertificatePolicy addr 0x29d84c8 size 0x58 virtual false final false
static inline ::System::Net::ICertificatePolicy* GetLegacyCertificatePolicy() ;

/// @brief Method get_CheckCertificateRevocationList addr 0x29d8520 size 0x58 virtual false final false
static inline bool get_CheckCertificateRevocationList() ;

/// @brief Method get_DnsRefreshTimeout addr 0x29d8578 size 0x58 virtual false final false
static inline int32_t get_DnsRefreshTimeout() ;

/// @brief Method get_SecurityProtocol addr 0x29d85d0 size 0x58 virtual false final false
static inline ::System::Net::SecurityProtocolType get_SecurityProtocol() ;

/// @brief Method get_ServerCertValidationCallback addr 0x29d8628 size 0x58 virtual false final false
static inline ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback() ;

/// @brief Method get_ServerCertificateValidationCallback addr 0x29d8680 size 0x88 virtual false final false
static inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback() ;

/// @brief Method FindServicePoint addr 0x29d8708 size 0x668 virtual false final false
static inline ::System::Net::ServicePoint* FindServicePoint(::System::Uri*  address, ::System::Net::IWebProxy*  proxy) ;

/// @brief Method CloseConnectionGroup addr 0x29d8dac size 0x408 virtual false final false
static inline void CloseConnectionGroup(::StringW  connectionGroupName) ;

/// @brief Method RemoveServicePoint addr 0x29d91b4 size 0x98 virtual false final false
static inline void RemoveServicePoint(::System::Net::ServicePoint*  sp) ;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointManager(ServicePointManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointManager(ServicePointManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServicePointManager()  = default;
public:


// Fields

// Static field servicePoints

// Static field policy

// Static field defaultConnectionLimit

// Static field maxServicePointIdleTime

// Static field maxServicePoints

// Static field dnsRefreshTimeout

// Static field _checkCRL

// Static field _securityProtocol

// Static field expectContinue

// Static field useNagle

// Static field server_cert_cb

// Static field tcp_keepalive

// Static field tcp_keepalive_time

// Static field tcp_keepalive_interval


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServicePointManager, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::ServicePointManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointManager*, "System.Net", "ServicePointManager");
NEED_NO_BOX(::System::Net::__ServicePointManager__SPKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServicePointManager__SPKey*, "System.Net", "ServicePointManager/SPKey");
