#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(ReleaseInfoViewController)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace HMUI {
class TextPageScrollView;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class ReleaseInfoViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReleaseInfoViewController);
// Type: ::ReleaseInfoViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5741))
// CS Name: ::ReleaseInfoViewController*
class CORDL_TYPE ReleaseInfoViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _mainSettingsModel offset 0x70
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

/// @brief Field _textPageScrollView offset 0x78
 __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView)) ::HMUI::TextPageScrollView*  _textPageScrollView;

/// @brief Field _releaseNotesTextAsset offset 0x80
 __declspec(property(get=__get__releaseNotesTextAsset, put=__set__releaseNotesTextAsset)) ::UnityEngine::TextAsset*  _releaseNotesTextAsset;

/// @brief Field _firstTextAsset offset 0x88
 __declspec(property(get=__get__firstTextAsset, put=__set__firstTextAsset)) ::UnityEngine::TextAsset*  _firstTextAsset;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView*  value) ;

constexpr ::HMUI::TextPageScrollView* __get__textPageScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> __get__textPageScrollView() const;

constexpr void __set__releaseNotesTextAsset(::UnityEngine::TextAsset*  value) ;

constexpr ::UnityEngine::TextAsset* __get__releaseNotesTextAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> __get__releaseNotesTextAsset() const;

constexpr void __set__firstTextAsset(::UnityEngine::TextAsset*  value) ;

constexpr ::UnityEngine::TextAsset* __get__firstTextAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> __get__firstTextAsset() const;

/// @brief Method DidActivate addr 0x22d624c size 0x5c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::ReleaseInfoViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d62a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseInfoViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReleaseInfoViewController(ReleaseInfoViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseInfoViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReleaseInfoViewController(ReleaseInfoViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReleaseInfoViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReleaseInfoViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReleaseInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReleaseInfoViewController*, "", "ReleaseInfoViewController");
