#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HealthWarningDisplayViewController)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningDisplayViewController);
// Type: ::HealthWarningDisplayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5643))
// CS Name: ::HealthWarningDisplayViewController*
class CORDL_TYPE HealthWarningDisplayViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _healthAndSafetyTextMesh offset 0x70
 __declspec(property(get=__get__healthAndSafetyTextMesh, put=__set__healthAndSafetyTextMesh)) ::TMPro::TextMeshProUGUI*  _healthAndSafetyTextMesh;

/// @brief Field _healthAndSafetyFullLocalizationKey offset 0x78
 __declspec(property(get=__get__healthAndSafetyFullLocalizationKey, put=__set__healthAndSafetyFullLocalizationKey)) ::StringW  _healthAndSafetyFullLocalizationKey;

/// @brief Field _healthAndSafetyPSLocalizationKey offset 0x80
 __declspec(property(get=__get__healthAndSafetyPSLocalizationKey, put=__set__healthAndSafetyPSLocalizationKey)) ::StringW  _healthAndSafetyPSLocalizationKey;

/// @brief Field _showShortHealthAndSafety offset 0x88
 __declspec(property(get=__get__showShortHealthAndSafety, put=__set__showShortHealthAndSafety)) bool  _showShortHealthAndSafety;

constexpr void __set__healthAndSafetyTextMesh(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__healthAndSafetyTextMesh() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__healthAndSafetyTextMesh() const;

constexpr void __set__healthAndSafetyFullLocalizationKey(::StringW  value) ;

constexpr ::StringW& __get__healthAndSafetyFullLocalizationKey() ;

constexpr ::StringW const& __get__healthAndSafetyFullLocalizationKey() const;

constexpr void __set__healthAndSafetyPSLocalizationKey(::StringW  value) ;

constexpr ::StringW& __get__healthAndSafetyPSLocalizationKey() ;

constexpr ::StringW const& __get__healthAndSafetyPSLocalizationKey() const;

constexpr void __set__showShortHealthAndSafety(bool  value) ;

constexpr bool& __get__showShortHealthAndSafety() ;

constexpr bool const& __get__showShortHealthAndSafety() const;

/// @brief Method DidActivate addr 0x22b4f20 size 0x3c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::HealthWarningDisplayViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22b4f5c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningDisplayViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HealthWarningDisplayViewController(HealthWarningDisplayViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningDisplayViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HealthWarningDisplayViewController(HealthWarningDisplayViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HealthWarningDisplayViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningDisplayViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningDisplayViewController*, "", "HealthWarningDisplayViewController");
