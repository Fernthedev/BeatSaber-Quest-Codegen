#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AvatarPromoView)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarPromoView;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarPromoView);
// Type: BeatSaber.AvatarCore::AvatarPromoView
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15175))
// CS Name: ::BeatSaber.AvatarCore::AvatarPromoView*
class CORDL_TYPE AvatarPromoView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rectTransform offset 0x18
 __declspec(property(get=__get__rectTransform, put=__set__rectTransform)) ::UnityEngine::RectTransform*  _rectTransform;

 __declspec(property(get=get_rectTransform)) ::UnityEngine::RectTransform*  rectTransform;

constexpr void __set__rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransform() const;

/// @brief Method get_rectTransform addr 0xe0bdb8 size 0x8 virtual false final false
inline ::UnityEngine::RectTransform* get_rectTransform() ;

static inline ::BeatSaber::AvatarCore::AvatarPromoView* New_ctor() ;

/// @brief Method .ctor addr 0xe0bdc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPromoView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarPromoView(AvatarPromoView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPromoView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarPromoView(AvatarPromoView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarPromoView()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarPromoView, 0x20>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarPromoView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarPromoView*, "BeatSaber.AvatarCore", "AvatarPromoView");
