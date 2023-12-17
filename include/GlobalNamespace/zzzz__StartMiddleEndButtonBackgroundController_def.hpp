#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StartMiddleEndButtonBackgroundController)
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class ImageView;
}
// Forward declare root types
namespace GlobalNamespace {
class StartMiddleEndButtonBackgroundController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartMiddleEndButtonBackgroundController);
// Type: ::StartMiddleEndButtonBackgroundController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5436))
// CS Name: ::StartMiddleEndButtonBackgroundController*
class CORDL_TYPE StartMiddleEndButtonBackgroundController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _startSprite offset 0x18
 __declspec(property(get=__get__startSprite, put=__set__startSprite)) ::UnityEngine::Sprite*  _startSprite;

/// @brief Field _middleSprite offset 0x20
 __declspec(property(get=__get__middleSprite, put=__set__middleSprite)) ::UnityEngine::Sprite*  _middleSprite;

/// @brief Field _endSprite offset 0x28
 __declspec(property(get=__get__endSprite, put=__set__endSprite)) ::UnityEngine::Sprite*  _endSprite;

/// @brief Field _image offset 0x30
 __declspec(property(get=__get__image, put=__set__image)) ::HMUI::ImageView*  _image;

constexpr void __set__startSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__startSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__startSprite() const;

constexpr void __set__middleSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__middleSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__middleSprite() const;

constexpr void __set__endSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__endSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__endSprite() const;

constexpr void __set__image(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__image() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__image() const;

/// @brief Method SetStartSprite addr 0x227c6b4 size 0x24 virtual false final false
inline void SetStartSprite() ;

/// @brief Method SetMiddleSprite addr 0x227c6d8 size 0x24 virtual false final false
inline void SetMiddleSprite() ;

/// @brief Method SetEndSprite addr 0x227c6fc size 0x24 virtual false final false
inline void SetEndSprite() ;

static inline ::GlobalNamespace::StartMiddleEndButtonBackgroundController* New_ctor() ;

/// @brief Method .ctor addr 0x227c720 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StartMiddleEndButtonBackgroundController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartMiddleEndButtonBackgroundController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartMiddleEndButtonBackgroundController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMiddleEndButtonBackgroundController*, "", "StartMiddleEndButtonBackgroundController");
