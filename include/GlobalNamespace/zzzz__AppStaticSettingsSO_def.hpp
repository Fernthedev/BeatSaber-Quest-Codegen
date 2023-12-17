#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AppStaticSettingsSO)
// Forward declare root types
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AppStaticSettingsSO);
// Type: ::AppStaticSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4122))
// CS Name: ::AppStaticSettingsSO*
class CORDL_TYPE AppStaticSettingsSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field requirePrivacyPolicy offset 0x18
 __declspec(property(get=__get_requirePrivacyPolicy, put=__set_requirePrivacyPolicy)) bool  requirePrivacyPolicy;

/// @brief Field enable360DegreeLevels offset 0x19
 __declspec(property(get=__get_enable360DegreeLevels, put=__set_enable360DegreeLevels)) bool  enable360DegreeLevels;

/// @brief Field enableCustomLevels offset 0x1a
 __declspec(property(get=__get_enableCustomLevels, put=__set_enableCustomLevels)) bool  enableCustomLevels;

/// @brief Field disableMultiplayer offset 0x1b
 __declspec(property(get=__get_disableMultiplayer, put=__set_disableMultiplayer)) bool  disableMultiplayer;

constexpr void __set_requirePrivacyPolicy(bool  value) ;

constexpr bool& __get_requirePrivacyPolicy() ;

constexpr bool const& __get_requirePrivacyPolicy() const;

constexpr void __set_enable360DegreeLevels(bool  value) ;

constexpr bool& __get_enable360DegreeLevels() ;

constexpr bool const& __get_enable360DegreeLevels() const;

constexpr void __set_enableCustomLevels(bool  value) ;

constexpr bool& __get_enableCustomLevels() ;

constexpr bool const& __get_enableCustomLevels() const;

constexpr void __set_disableMultiplayer(bool  value) ;

constexpr bool& __get_disableMultiplayer() ;

constexpr bool const& __get_disableMultiplayer() const;

static inline ::GlobalNamespace::AppStaticSettingsSO* New_ctor() ;

/// @brief Method .ctor addr 0x2239bd0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppStaticSettingsSO(AppStaticSettingsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppStaticSettingsSO(AppStaticSettingsSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AppStaticSettingsSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppStaticSettingsSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppStaticSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppStaticSettingsSO*, "", "AppStaticSettingsSO");
