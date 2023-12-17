#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMesh)
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
}
namespace GlobalNamespace {
class OVRMesh;
}
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRMesh__MeshType);
MARK_REF_PTR_T(::GlobalNamespace::OVRMesh);
MARK_REF_PTR_T(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider);
// Type: ::IOVRMeshDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8121))
// CS Name: ::OVRMesh::IOVRMeshDataProvider*
class CORDL_TYPE __OVRMesh__IOVRMeshDataProvider {
public:
// Declarations
/// @brief Method GetMeshType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__OVRMesh__MeshType GetMeshType() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRMesh__IOVRMeshDataProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRMesh__IOVRMeshDataProvider(__OVRMesh__IOVRMeshDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRMesh__IOVRMeshDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRMesh__IOVRMeshDataProvider(__OVRMesh__IOVRMeshDataProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MeshType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8122))
// CS Name: ::OVRMesh::MeshType
struct CORDL_TYPE __OVRMesh__MeshType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRMesh__MeshType_Unwrapped
enum struct ____OVRMesh__MeshType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_HandLeft = static_cast<int32_t>(0x0),
__E_HandRight = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0xffffffff)
static ::GlobalNamespace::__OVRMesh__MeshType const None;

/// @brief Field HandLeft value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRMesh__MeshType const HandLeft;

/// @brief Field HandRight value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRMesh__MeshType const HandRight;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRMesh__MeshType_Unwrapped () const noexcept {
return std::bit_cast<____OVRMesh__MeshType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRMesh__MeshType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMesh__MeshType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMesh__MeshType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMesh__MeshType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRMesh
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8123))
// CS Name: ::OVRMesh*
class CORDL_TYPE OVRMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MeshType = ::GlobalNamespace::__OVRMesh__MeshType;

using IOVRMeshDataProvider = ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _dataProvider offset 0x18
 __declspec(property(get=__get__dataProvider, put=__set__dataProvider)) ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*  _dataProvider;

/// @brief Field _meshType offset 0x20
 __declspec(property(get=__get__meshType, put=__set__meshType)) ::GlobalNamespace::__OVRMesh__MeshType  _meshType;

/// @brief Field _mesh offset 0x28
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

/// @brief Field <IsInitialized>k__BackingField offset 0x30
 __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_Mesh)) ::UnityEngine::Mesh*  Mesh;

constexpr void __set__dataProvider(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*  value) ;

constexpr ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* __get__dataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*> __get__dataProvider() const;

constexpr void __set__meshType(::GlobalNamespace::__OVRMesh__MeshType  value) ;

constexpr ::GlobalNamespace::__OVRMesh__MeshType& __get__meshType() ;

constexpr ::GlobalNamespace::__OVRMesh__MeshType const& __get__meshType() const;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

constexpr void __set__IsInitialized_k__BackingField(bool  value) ;

constexpr bool& __get__IsInitialized_k__BackingField() ;

constexpr bool const& __get__IsInitialized_k__BackingField() const;

/// @brief Method get_IsInitialized addr 0x27b0710 size 0x8 virtual false final false
inline bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x27b0718 size 0xc virtual false final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method get_Mesh addr 0x27b0724 size 0x8 virtual false final false
inline ::UnityEngine::Mesh* get_Mesh() ;

/// @brief Method SetMeshType addr 0x27b072c size 0x8 virtual false final false
inline void SetMeshType(::GlobalNamespace::__OVRMesh__MeshType  type) ;

/// @brief Method Awake addr 0x27b0734 size 0xf4 virtual false final false
inline void Awake() ;

/// @brief Method ShouldInitialize addr 0x27b0828 size 0x20 virtual false final false
inline bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x27b0848 size 0xbc virtual false final false
inline void Initialize(::GlobalNamespace::__OVRMesh__MeshType  meshType) ;

/// @brief Method TransformOvrpMesh addr 0x27b0904 size 0xab4 virtual false final false
inline void TransformOvrpMesh(::GlobalNamespace::__OVRPlugin__Mesh*  ovrpMesh, ::UnityEngine::Mesh*  mesh) ;

static inline ::GlobalNamespace::OVRMesh* New_ctor() ;

/// @brief Method .ctor addr 0x27b13b8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMesh(OVRMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMesh(OVRMesh const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRMesh()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMesh, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMesh__MeshType, "", "OVRMesh/MeshType");
NEED_NO_BOX(::GlobalNamespace::OVRMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMesh*, "", "OVRMesh");
NEED_NO_BOX(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*, "", "OVRMesh/IOVRMeshDataProvider");
