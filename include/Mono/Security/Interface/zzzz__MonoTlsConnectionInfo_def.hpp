#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTlsConnectionInfo)
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsConnectionInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::MonoTlsConnectionInfo);
// Type: Mono.Security.Interface::MonoTlsConnectionInfo
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13778))
// CS Name: ::Mono.Security.Interface::MonoTlsConnectionInfo*
class CORDL_TYPE MonoTlsConnectionInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <CipherSuiteCode>k__BackingField offset 0x10
 __declspec(property(get=__get__CipherSuiteCode_k__BackingField, put=__set__CipherSuiteCode_k__BackingField)) ::Mono::Security::Interface::CipherSuiteCode  _CipherSuiteCode_k__BackingField;

/// @brief Field <ProtocolVersion>k__BackingField offset 0x14
 __declspec(property(get=__get__ProtocolVersion_k__BackingField, put=__set__ProtocolVersion_k__BackingField)) ::Mono::Security::Interface::TlsProtocols  _ProtocolVersion_k__BackingField;

/// @brief Field <PeerDomainName>k__BackingField offset 0x18
 __declspec(property(get=__get__PeerDomainName_k__BackingField, put=__set__PeerDomainName_k__BackingField)) ::StringW  _PeerDomainName_k__BackingField;

 __declspec(property(get=get_CipherSuiteCode, put=set_CipherSuiteCode)) ::Mono::Security::Interface::CipherSuiteCode  CipherSuiteCode;

 __declspec(property(get=get_ProtocolVersion, put=set_ProtocolVersion)) ::Mono::Security::Interface::TlsProtocols  ProtocolVersion;

 __declspec(property(put=set_PeerDomainName)) ::StringW  PeerDomainName;

constexpr void __set__CipherSuiteCode_k__BackingField(::Mono::Security::Interface::CipherSuiteCode  value) ;

constexpr ::Mono::Security::Interface::CipherSuiteCode& __get__CipherSuiteCode_k__BackingField() ;

constexpr ::Mono::Security::Interface::CipherSuiteCode const& __get__CipherSuiteCode_k__BackingField() const;

constexpr void __set__ProtocolVersion_k__BackingField(::Mono::Security::Interface::TlsProtocols  value) ;

constexpr ::Mono::Security::Interface::TlsProtocols& __get__ProtocolVersion_k__BackingField() ;

constexpr ::Mono::Security::Interface::TlsProtocols const& __get__ProtocolVersion_k__BackingField() const;

constexpr void __set__PeerDomainName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__PeerDomainName_k__BackingField() ;

constexpr ::StringW const& __get__PeerDomainName_k__BackingField() const;

/// @brief Method get_CipherSuiteCode addr 0x2402ac0 size 0x8 virtual false final false
inline ::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode() ;

/// @brief Method set_CipherSuiteCode addr 0x2402ac8 size 0x8 virtual false final false
inline void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode  value) ;

/// @brief Method get_ProtocolVersion addr 0x2402ad0 size 0x8 virtual false final false
inline ::Mono::Security::Interface::TlsProtocols get_ProtocolVersion() ;

/// @brief Method set_ProtocolVersion addr 0x2402ad8 size 0x8 virtual false final false
inline void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols  value) ;

/// @brief Method set_PeerDomainName addr 0x2402ae0 size 0x8 virtual false final false
inline void set_PeerDomainName(::StringW  value) ;

/// @brief Method ToString addr 0x2402ae8 size 0xbc virtual true final false
inline ::StringW ToString() ;

static inline ::Mono::Security::Interface::MonoTlsConnectionInfo* New_ctor() ;

/// @brief Method .ctor addr 0x2402ba4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsConnectionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoTlsConnectionInfo(MonoTlsConnectionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsConnectionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoTlsConnectionInfo(MonoTlsConnectionInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoTlsConnectionInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsConnectionInfo, 0x20>, "Size mismatch!");

} // namespace end def Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsConnectionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsConnectionInfo*, "Mono.Security.Interface", "MonoTlsConnectionInfo");
