#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelBuyView)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelBuyView);
// Type: ::StandardLevelBuyView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5813))
// CS Name: ::StandardLevelBuyView*
class CORDL_TYPE StandardLevelBuyView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _levelBar offset 0x18
 __declspec(property(get=__get__levelBar, put=__set__levelBar)) ::GlobalNamespace::LevelBar*  _levelBar;

/// @brief Field _buyButton offset 0x20
 __declspec(property(get=__get__buyButton, put=__set__buyButton)) ::UnityEngine::UI::Button*  _buyButton;

 __declspec(property(get=get_buyButton)) ::UnityEngine::UI::Button*  buyButton;

constexpr void __set__levelBar(::GlobalNamespace::LevelBar*  value) ;

constexpr ::GlobalNamespace::LevelBar* __get__levelBar() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> __get__levelBar() const;

constexpr void __set__buyButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__buyButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__buyButton() const;

/// @brief Method get_buyButton addr 0x22e9aa8 size 0x8 virtual false final false
inline ::UnityEngine::UI::Button* get_buyButton() ;

/// @brief Method SetContent addr 0x22e9ab0 size 0x1c virtual false final false
inline void SetContent(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

static inline ::GlobalNamespace::StandardLevelBuyView* New_ctor() ;

/// @brief Method .ctor addr 0x22e9acc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelBuyView(StandardLevelBuyView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelBuyView(StandardLevelBuyView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelBuyView()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelBuyView, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyView*, "", "StandardLevelBuyView");
