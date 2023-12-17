#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRMeshData)
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshData);
// Type: ::OVRMeshData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7565))
// CS Name: ::OVRMeshData
struct CORDL_TYPE OVRMeshData : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field mesh offset 0x0
 __declspec(property(get=__get_mesh, put=__set_mesh)) ::UnityEngine::Mesh*  mesh;

/// @brief Field material offset 0x8
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field baseAttributes offset 0x10
 __declspec(property(get=__get_baseAttributes, put=__set_baseAttributes)) ::GlobalNamespace::OVRMeshAttributes  baseAttributes;

/// @brief Field morphTargets offset 0x40
 __declspec(property(get=__get_morphTargets, put=__set_morphTargets)) ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>  morphTargets;

constexpr void __set_mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get_mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get_mesh() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_baseAttributes(::GlobalNamespace::OVRMeshAttributes  value) ;

constexpr ::GlobalNamespace::OVRMeshAttributes& __get_baseAttributes() ;

constexpr ::GlobalNamespace::OVRMeshAttributes const& __get_baseAttributes() const;

constexpr void __set_morphTargets(::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>& __get_morphTargets() ;

constexpr ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*> const& __get_morphTargets() const;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "baseAttributes", ty: "::GlobalNamespace::OVRMeshAttributes", modifiers: "", def_value: None }, CppParam { name: "morphTargets", ty: "::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>", modifiers: "", def_value: None }]
constexpr OVRMeshData(::UnityEngine::Mesh*  mesh, ::UnityEngine::Material*  material, ::GlobalNamespace::OVRMeshAttributes  baseAttributes, ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>  morphTargets) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRMeshData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRMeshData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshData, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshData, "", "OVRMeshData");
