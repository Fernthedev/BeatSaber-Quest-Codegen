#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Transform2D)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Transform2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Transform2D);
// Type: UnityEngine.ProBuilder::Transform2D
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12207))
// CS Name: ::UnityEngine.ProBuilder::Transform2D*
class CORDL_TYPE Transform2D : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field position offset 0x10
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector2  position;

/// @brief Field rotation offset 0x18
 __declspec(property(get=__get_rotation, put=__set_rotation)) float_t  rotation;

/// @brief Field scale offset 0x1c
 __declspec(property(get=__get_scale, put=__set_scale)) ::UnityEngine::Vector2  scale;

constexpr void __set_position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_position() ;

constexpr ::UnityEngine::Vector2 const& __get_position() const;

constexpr void __set_rotation(float_t  value) ;

constexpr float_t& __get_rotation() ;

constexpr float_t const& __get_rotation() const;

constexpr void __set_scale(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_scale() ;

constexpr ::UnityEngine::Vector2 const& __get_scale() const;

static inline ::UnityEngine::ProBuilder::Transform2D* New_ctor(::UnityEngine::Vector2  position, float_t  rotation, ::UnityEngine::Vector2  scale) ;

/// @brief Method .ctor addr 0x2b7c03c size 0x50 virtual false final false
inline void _ctor(::UnityEngine::Vector2  position, float_t  rotation, ::UnityEngine::Vector2  scale) ;

/// @brief Method TransformPoint addr 0x2b7c08c size 0x64 virtual false final false
inline ::UnityEngine::Vector2 TransformPoint(::UnityEngine::Vector2  p) ;

/// @brief Method ToString addr 0x2b7c0f0 size 0x1f4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transform2D(Transform2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transform2D(Transform2D const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Transform2D()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Transform2D, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Transform2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Transform2D*, "UnityEngine.ProBuilder", "Transform2D");
