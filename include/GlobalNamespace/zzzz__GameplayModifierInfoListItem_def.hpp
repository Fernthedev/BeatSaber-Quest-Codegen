#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameplayModifierInfoListItem)
namespace HMUI {
class HoverHint;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierInfoListItem);
// Type: ::GameplayModifierInfoListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5419))
// CS Name: ::GameplayModifierInfoListItem*
class CORDL_TYPE GameplayModifierInfoListItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _hoverHint offset 0x18
 __declspec(property(get=__get__hoverHint, put=__set__hoverHint)) ::HMUI::HoverHint*  _hoverHint;

/// @brief Field _iconImage offset 0x20
 __declspec(property(get=__get__iconImage, put=__set__iconImage)) ::UnityEngine::UI::Image*  _iconImage;

constexpr void __set__hoverHint(::HMUI::HoverHint*  value) ;

constexpr ::HMUI::HoverHint* __get__hoverHint() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> __get__hoverHint() const;

constexpr void __set__iconImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__iconImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__iconImage() const;

/// @brief Method SetModifier addr 0x2278a9c size 0x224 virtual false final false
inline void SetModifier(::GlobalNamespace::GameplayModifierParamsSO*  modifierParam, bool  showName) ;

static inline ::GlobalNamespace::GameplayModifierInfoListItem* New_ctor() ;

/// @brief Method .ctor addr 0x2278cc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayModifierInfoListItem(GameplayModifierInfoListItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayModifierInfoListItem(GameplayModifierInfoListItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayModifierInfoListItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierInfoListItem, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierInfoListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
