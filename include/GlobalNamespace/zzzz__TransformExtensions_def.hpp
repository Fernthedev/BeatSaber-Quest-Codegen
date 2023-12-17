#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransformExtensions)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransformExtensions);
// Type: ::TransformExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15859))
// CS Name: ::TransformExtensions*
class CORDL_TYPE TransformExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InverseTransformRotation addr 0xe28670 size 0xb4 virtual false final false
static inline ::UnityEngine::Quaternion InverseTransformRotation(::UnityEngine::Transform*  trans, ::UnityEngine::Quaternion  worldRotation) ;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformExtensions(TransformExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformExtensions(TransformExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransformExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransformExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformExtensions*, "", "TransformExtensions");
