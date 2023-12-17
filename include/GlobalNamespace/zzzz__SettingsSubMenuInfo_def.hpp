#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SettingsSubMenuInfo)
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsSubMenuInfo);
// Type: ::SettingsSubMenuInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5692))
// CS Name: ::SettingsSubMenuInfo*
class CORDL_TYPE SettingsSubMenuInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _viewController offset 0x10
 __declspec(property(get=__get__viewController, put=__set__viewController)) ::HMUI::ViewController*  _viewController;

/// @brief Field _menuName offset 0x18
 __declspec(property(get=__get__menuName, put=__set__menuName)) ::StringW  _menuName;

 __declspec(property(get=get_viewController)) ::HMUI::ViewController*  viewController;

 __declspec(property(get=get_localizedMenuName)) ::StringW  localizedMenuName;

constexpr void __set__viewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__viewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__viewController() const;

constexpr void __set__menuName(::StringW  value) ;

constexpr ::StringW& __get__menuName() ;

constexpr ::StringW const& __get__menuName() const;

/// @brief Method get_viewController addr 0x22c94f8 size 0x8 virtual false final false
inline ::HMUI::ViewController* get_viewController() ;

/// @brief Method get_localizedMenuName addr 0x22c9500 size 0xc virtual false final false
inline ::StringW get_localizedMenuName() ;

static inline ::GlobalNamespace::SettingsSubMenuInfo* New_ctor() ;

/// @brief Method .ctor addr 0x22c950c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSubMenuInfo(SettingsSubMenuInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSubMenuInfo(SettingsSubMenuInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SettingsSubMenuInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsSubMenuInfo, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsSubMenuInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsSubMenuInfo*, "", "SettingsSubMenuInfo");
