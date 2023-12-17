#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRGLTFAnimationNodeMorphTargetHandler)
namespace GlobalNamespace {
struct OVRMeshData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
// Type: ::OVRGLTFAnimationNodeMorphTargetHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7560))
// CS Name: ::OVRGLTFAnimationNodeMorphTargetHandler*
class CORDL_TYPE OVRGLTFAnimationNodeMorphTargetHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field <MeshData>k__BackingField offset 0x10
 __declspec(property(get=__get__MeshData_k__BackingField, put=__set__MeshData_k__BackingField)) ::GlobalNamespace::OVRMeshData  _MeshData_k__BackingField;

/// @brief Field Weights offset 0x58
 __declspec(property(get=__get_Weights, put=__set_Weights)) ::ArrayW<float_t,::Array<float_t>*>  Weights;

/// @brief Field modified offset 0x60
 __declspec(property(get=__get_modified, put=__set_modified)) bool  modified;

 __declspec(property(get=get_MeshData, put=set_MeshData)) ::GlobalNamespace::OVRMeshData  MeshData;

constexpr void __set__MeshData_k__BackingField(::GlobalNamespace::OVRMeshData  value) ;

constexpr ::GlobalNamespace::OVRMeshData& __get__MeshData_k__BackingField() ;

constexpr ::GlobalNamespace::OVRMeshData const& __get__MeshData_k__BackingField() const;

constexpr void __set_Weights(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_Weights() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_Weights() const;

constexpr void __set_modified(bool  value) ;

constexpr bool& __get_modified() ;

constexpr bool const& __get_modified() const;

/// @brief Method get_MeshData addr 0x2722b44 size 0x10 virtual false final false
inline ::GlobalNamespace::OVRMeshData get_MeshData() ;

/// @brief Method set_MeshData addr 0x2722b54 size 0x18 virtual false final false
inline void set_MeshData(::GlobalNamespace::OVRMeshData  value) ;

static inline ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* New_ctor(::GlobalNamespace::OVRMeshData  meshData) ;

/// @brief Method .ctor addr 0x2722b6c size 0x34 virtual false final false
inline void _ctor(::GlobalNamespace::OVRMeshData  meshData) ;

/// @brief Method Update addr 0x2722ba0 size 0x384 virtual false final false
inline void Update() ;

/// @brief Method MarkModified addr 0x2722f24 size 0xc virtual false final false
inline void MarkModified() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimationNodeMorphTargetHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGLTFAnimationNodeMorphTargetHandler(OVRGLTFAnimationNodeMorphTargetHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimationNodeMorphTargetHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGLTFAnimationNodeMorphTargetHandler(OVRGLTFAnimationNodeMorphTargetHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGLTFAnimationNodeMorphTargetHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, "", "OVRGLTFAnimationNodeMorphTargetHandler");
