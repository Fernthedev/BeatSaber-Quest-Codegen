#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GeometryTools)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GeometryTools;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GeometryTools);
// Type: ::GeometryTools
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15855))
// CS Name: ::GeometryTools*
class CORDL_TYPE GeometryTools : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ThreePointsToBox addr 0xe28024 size 0x3ec virtual false final false
static inline bool ThreePointsToBox(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ByRef<::UnityEngine::Vector3>  center, ByRef<::UnityEngine::Vector3>  halfSize, ByRef<::UnityEngine::Quaternion>  orientation) ;

static inline ::GlobalNamespace::GeometryTools* New_ctor() ;

/// @brief Method .ctor addr 0xe28410 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GeometryTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryTools(GeometryTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryTools(GeometryTools const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GeometryTools()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GeometryTools, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GeometryTools);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GeometryTools*, "", "GeometryTools");
