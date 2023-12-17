#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyDisplayViewController)
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyDisplayViewController);
// Type: ::PrivacyPolicyDisplayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5732))
// CS Name: ::PrivacyPolicyDisplayViewController*
class CORDL_TYPE PrivacyPolicyDisplayViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _textPageScrollView offset 0x70
 __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView)) ::HMUI::TextPageScrollView*  _textPageScrollView;

/// @brief Field _localizedTextAsset offset 0x78
 __declspec(property(get=__get__localizedTextAsset, put=__set__localizedTextAsset)) ::GlobalNamespace::LocalizedTextAsset*  _localizedTextAsset;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView*  value) ;

constexpr ::HMUI::TextPageScrollView* __get__textPageScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> __get__textPageScrollView() const;

constexpr void __set__localizedTextAsset(::GlobalNamespace::LocalizedTextAsset*  value) ;

constexpr ::GlobalNamespace::LocalizedTextAsset* __get__localizedTextAsset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> __get__localizedTextAsset() const;

/// @brief Method DidActivate addr 0x22d56f0 size 0x44 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::PrivacyPolicyDisplayViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d5734 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyDisplayViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivacyPolicyDisplayViewController(PrivacyPolicyDisplayViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyDisplayViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivacyPolicyDisplayViewController(PrivacyPolicyDisplayViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrivacyPolicyDisplayViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyDisplayViewController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyDisplayViewController*, "", "PrivacyPolicyDisplayViewController");
