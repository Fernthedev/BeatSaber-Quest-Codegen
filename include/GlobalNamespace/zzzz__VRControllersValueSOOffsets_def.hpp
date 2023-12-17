#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
CORDL_MODULE_EXPORT(VRControllersValueSOOffsets)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class Vector3SO;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllersValueSOOffsets;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllersValueSOOffsets);
// Type: ::VRControllersValueSOOffsets
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14439))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4686))
// CS Name: ::VRControllersValueSOOffsets*
class CORDL_TYPE VRControllersValueSOOffsets : public ::GlobalNamespace::VRControllerTransformOffset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::VRControllerTransformOffset)]{};

/// @brief Field _positionOffset offset 0x18
 __declspec(property(get=__get__positionOffset, put=__set__positionOffset)) ::GlobalNamespace::Vector3SO*  _positionOffset;

/// @brief Field _rotationOffset offset 0x20
 __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset)) ::GlobalNamespace::Vector3SO*  _rotationOffset;

 __declspec(property(get=get_positionOffset)) ::UnityEngine::Vector3  positionOffset;

 __declspec(property(get=get_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

constexpr void __set__positionOffset(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__positionOffset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__positionOffset() const;

constexpr void __set__rotationOffset(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__rotationOffset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__rotationOffset() const;

/// @brief Method get_positionOffset addr 0x2376250 size 0x4c virtual true final false
inline ::UnityEngine::Vector3 get_positionOffset() ;

/// @brief Method get_rotationOffset addr 0x237629c size 0x4c virtual true final false
inline ::UnityEngine::Vector3 get_rotationOffset() ;

static inline ::GlobalNamespace::VRControllersValueSOOffsets* New_ctor() ;

/// @brief Method .ctor addr 0x23762e8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSOOffsets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRControllersValueSOOffsets(VRControllersValueSOOffsets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSOOffsets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRControllersValueSOOffsets(VRControllersValueSOOffsets const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VRControllersValueSOOffsets()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersValueSOOffsets, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllersValueSOOffsets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersValueSOOffsets*, "", "VRControllersValueSOOffsets");
