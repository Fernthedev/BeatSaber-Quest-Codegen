#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRCursor)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCursor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCursor);
// Type: ::OVRCursor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8086))
// CS Name: ::OVRCursor*
class CORDL_TYPE OVRCursor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method SetCursorRay addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetCursorRay(::UnityEngine::Transform*  ray) ;

/// @brief Method SetCursorStartDest addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetCursorStartDest(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dest, ::UnityEngine::Vector3  normal) ;

static inline ::GlobalNamespace::OVRCursor* New_ctor() ;

/// @brief Method .ctor addr 0x27a8c7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRCursor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCursor(OVRCursor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCursor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCursor(OVRCursor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRCursor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCursor, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCursor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCursor*, "", "OVRCursor");
