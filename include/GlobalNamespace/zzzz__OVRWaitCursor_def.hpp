#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRWaitCursor)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRWaitCursor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRWaitCursor);
// Type: ::OVRWaitCursor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8188))
// CS Name: ::OVRWaitCursor*
class CORDL_TYPE OVRWaitCursor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field rotateSpeeds offset 0x18
 __declspec(property(get=__get_rotateSpeeds, put=__set_rotateSpeeds)) ::UnityEngine::Vector3  rotateSpeeds;

constexpr void __set_rotateSpeeds(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_rotateSpeeds() ;

constexpr ::UnityEngine::Vector3 const& __get_rotateSpeeds() const;

/// @brief Method Update addr 0x27c5afc size 0x5c virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRWaitCursor* New_ctor() ;

/// @brief Method .ctor addr 0x27c5b58 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRWaitCursor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRWaitCursor(OVRWaitCursor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRWaitCursor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRWaitCursor(OVRWaitCursor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRWaitCursor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRWaitCursor, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRWaitCursor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRWaitCursor*, "", "OVRWaitCursor");
