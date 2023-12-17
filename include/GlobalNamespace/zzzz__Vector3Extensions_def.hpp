#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Extensions)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector3Extensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector3Extensions);
// Type: ::Vector3Extensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15877))
// CS Name: ::Vector3Extensions*
class CORDL_TYPE Vector3Extensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InverseLerp addr 0xe28d50 size 0x54 virtual false final false
static inline float_t InverseLerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  value) ;

/// @brief Method RotatedAroundPivot addr 0xe28da4 size 0x60 virtual false final false
static inline ::UnityEngine::Vector3 RotatedAroundPivot(::UnityEngine::Vector3  vector, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  pivot) ;

/// @brief Method MirrorOnYZPlane addr 0xe28e04 size 0x8 virtual false final false
static inline ::UnityEngine::Vector3 MirrorOnYZPlane(::UnityEngine::Vector3  vector) ;

/// @brief Method MirrorEulerAnglesOnYZPlane addr 0xe28e0c size 0xc virtual false final false
static inline ::UnityEngine::Vector3 MirrorEulerAnglesOnYZPlane(::UnityEngine::Vector3  vector) ;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3Extensions(Vector3Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3Extensions(Vector3Extensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Vector3Extensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3Extensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector3Extensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3Extensions*, "", "Vector3Extensions");
