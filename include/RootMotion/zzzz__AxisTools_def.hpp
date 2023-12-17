#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AxisTools)
namespace RootMotion {
struct Axis;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class AxisTools;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::AxisTools);
// Type: RootMotion::AxisTools
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12481))
// CS Name: ::RootMotion::AxisTools*
class CORDL_TYPE AxisTools : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToVector3 addr 0x123552c size 0xe0 virtual false final false
static inline ::UnityEngine::Vector3 ToVector3(::RootMotion::Axis  axis) ;

/// @brief Method ToAxis addr 0x123560c size 0x38 virtual false final false
static inline ::RootMotion::Axis ToAxis(::UnityEngine::Vector3  v) ;

/// @brief Method GetAxisToPoint addr 0x1235644 size 0xfc virtual false final false
static inline ::RootMotion::Axis GetAxisToPoint(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetAxisToDirection addr 0x123578c size 0xfc virtual false final false
static inline ::RootMotion::Axis GetAxisToDirection(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  direction) ;

/// @brief Method GetAxisVectorToPoint addr 0x1235740 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 GetAxisVectorToPoint(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetAxisVectorToDirection addr 0x1235888 size 0x44 virtual false final false
static inline ::UnityEngine::Vector3 GetAxisVectorToDirection(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  direction) ;

/// @brief Method GetAxisVectorToDirection addr 0x12358cc size 0x48c virtual false final false
static inline ::UnityEngine::Vector3 GetAxisVectorToDirection(::UnityEngine::Quaternion  r, ::UnityEngine::Vector3  direction) ;

static inline ::RootMotion::AxisTools* New_ctor() ;

/// @brief Method .ctor addr 0x1235d58 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AxisTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisTools(AxisTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisTools(AxisTools const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AxisTools()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::AxisTools, 0x10>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::AxisTools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::AxisTools*, "RootMotion", "AxisTools");
