#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XPlatformAccessTokenData)
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XPlatformAccessTokenData);
// Type: ::XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12925))
// CS Name: ::XPlatformAccessTokenData*
class CORDL_TYPE XPlatformAccessTokenData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <token>k__BackingField offset 0x10
 __declspec(property(get=__get__token_k__BackingField, put=__set__token_k__BackingField)) ::StringW  _token_k__BackingField;

/// @brief Field <platformEnvironment>k__BackingField offset 0x18
 __declspec(property(get=__get__platformEnvironment_k__BackingField, put=__set__platformEnvironment_k__BackingField)) ::GlobalNamespace::PlatformEnvironment  _platformEnvironment_k__BackingField;

 __declspec(property(get=get_token, put=set_token)) ::StringW  token;

 __declspec(property(get=get_platformEnvironment, put=set_platformEnvironment)) ::GlobalNamespace::PlatformEnvironment  platformEnvironment;

constexpr void __set__token_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__token_k__BackingField() ;

constexpr ::StringW const& __get__token_k__BackingField() const;

constexpr void __set__platformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment  value) ;

constexpr ::GlobalNamespace::PlatformEnvironment& __get__platformEnvironment_k__BackingField() ;

constexpr ::GlobalNamespace::PlatformEnvironment const& __get__platformEnvironment_k__BackingField() const;

/// @brief Method get_token addr 0xe51d4c size 0x8 virtual false final false
inline ::StringW get_token() ;

/// @brief Method set_token addr 0xe51d54 size 0x8 virtual false final false
inline void set_token(::StringW  value) ;

/// @brief Method get_platformEnvironment addr 0xe51d5c size 0x8 virtual false final false
inline ::GlobalNamespace::PlatformEnvironment get_platformEnvironment() ;

/// @brief Method set_platformEnvironment addr 0xe51d64 size 0x8 virtual false final false
inline void set_platformEnvironment(::GlobalNamespace::PlatformEnvironment  value) ;

static inline ::GlobalNamespace::XPlatformAccessTokenData* New_ctor(::StringW  token, ::GlobalNamespace::PlatformEnvironment  platformEnvironment) ;

/// @brief Method .ctor addr 0xe51d6c size 0x30 virtual false final false
inline void _ctor(::StringW  token, ::GlobalNamespace::PlatformEnvironment  platformEnvironment) ;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XPlatformAccessTokenData(XPlatformAccessTokenData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XPlatformAccessTokenData(XPlatformAccessTokenData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XPlatformAccessTokenData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XPlatformAccessTokenData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAccessTokenData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAccessTokenData*, "", "XPlatformAccessTokenData");
