#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SettingsSectionInternal)
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::SettingsSectionInternal);
// Type: System.Net.Configuration::SettingsSectionInternal
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9315))
// CS Name: ::System.Net.Configuration::SettingsSectionInternal*
class CORDL_TYPE SettingsSectionInternal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field HttpListenerUnescapeRequestUrl offset 0x10
 __declspec(property(get=__get_HttpListenerUnescapeRequestUrl, put=__set_HttpListenerUnescapeRequestUrl)) bool  HttpListenerUnescapeRequestUrl;

/// @brief Field IPProtectionLevel offset 0x14
 __declspec(property(get=__get_IPProtectionLevel, put=__set_IPProtectionLevel)) ::System::Net::Sockets::IPProtectionLevel  IPProtectionLevel;

 __declspec(property(get=get_Ipv6Enabled)) bool  Ipv6Enabled;

static inline void setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal*  value) ;

static inline ::System::Net::Configuration::SettingsSectionInternal* getStaticF_instance() ;

constexpr void __set_HttpListenerUnescapeRequestUrl(bool  value) ;

constexpr bool& __get_HttpListenerUnescapeRequestUrl() ;

constexpr bool const& __get_HttpListenerUnescapeRequestUrl() const;

constexpr void __set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel  value) ;

constexpr ::System::Net::Sockets::IPProtectionLevel& __get_IPProtectionLevel() ;

constexpr ::System::Net::Sockets::IPProtectionLevel const& __get_IPProtectionLevel() const;

/// @brief Method get_Section addr 0x29f0db0 size 0x58 virtual false final false
static inline ::System::Net::Configuration::SettingsSectionInternal* get_Section() ;

/// @brief Method get_Ipv6Enabled addr 0x29f0e08 size 0x8 virtual false final false
inline bool get_Ipv6Enabled() ;

static inline ::System::Net::Configuration::SettingsSectionInternal* New_ctor() ;

/// @brief Method .ctor addr 0x29f0e10 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSectionInternal(SettingsSectionInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSectionInternal(SettingsSectionInternal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SettingsSectionInternal()  = default;
public:


// Fields

// Static field instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SettingsSectionInternal, 0x18>, "Size mismatch!");

} // namespace end def System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
