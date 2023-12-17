#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Touchable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CircleTouchable)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
class CircleTouchable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CircleTouchable);
// Type: HMUI::CircleTouchable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13564))
// CS Name: ::HMUI::CircleTouchable*
class CORDL_TYPE CircleTouchable : public ::HMUI::Touchable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::HMUI::Touchable)]{};

/// @brief Field _minRadius offset 0xa0
 __declspec(property(get=__get__minRadius, put=__set__minRadius)) float_t  _minRadius;

/// @brief Field _maxRadius offset 0xa4
 __declspec(property(get=__get__maxRadius, put=__set__maxRadius)) float_t  _maxRadius;

/// @brief Field _containerRect offset 0xa8
 __declspec(property(get=__get__containerRect, put=__set__containerRect)) ::UnityEngine::RectTransform*  _containerRect;

constexpr void __set__minRadius(float_t  value) ;

constexpr float_t& __get__minRadius() ;

constexpr float_t const& __get__minRadius() const;

constexpr void __set__maxRadius(float_t  value) ;

constexpr float_t& __get__maxRadius() ;

constexpr float_t const& __get__maxRadius() const;

constexpr void __set__containerRect(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__containerRect() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__containerRect() const;

/// @brief Method OnEnable addr 0x212486c size 0x1c virtual true final false
inline void OnEnable() ;

/// @brief Method UpdateCachedReferences addr 0x2124888 size 0x6c virtual false final false
inline void UpdateCachedReferences() ;

/// @brief Method Raycast addr 0x21248f4 size 0xcc virtual true final false
inline bool Raycast(::UnityEngine::Vector2  sp, ::UnityEngine::Camera*  eventCamera) ;

/// @brief Method OnDrawGizmosSelected addr 0x21249c0 size 0x110 virtual false final false
inline void OnDrawGizmosSelected() ;

/// @brief Method DrawGizmoCircle addr 0x2124ad0 size 0xe0 virtual false final false
inline void DrawGizmoCircle(::UnityEngine::Vector3  center, float_t  radius, int32_t  steps) ;

static inline ::HMUI::CircleTouchable* New_ctor() ;

/// @brief Method .ctor addr 0x2124bb0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CircleTouchable(CircleTouchable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircleTouchable(CircleTouchable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CircleTouchable()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CircleTouchable, 0xb0>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::CircleTouchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CircleTouchable*, "HMUI", "CircleTouchable");
