#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationResult)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine::XR {
struct MeshVertexAttributes;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::XR {
struct MeshId;
}
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshGenerationResult);
// Type: UnityEngine.XR::MeshGenerationResult
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15636))
// CS Name: ::UnityEngine.XR::MeshGenerationResult
struct CORDL_TYPE MeshGenerationResult : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <MeshId>k__BackingField offset 0x0
 __declspec(property(get=__get__MeshId_k__BackingField, put=__set__MeshId_k__BackingField)) ::UnityEngine::XR::MeshId  _MeshId_k__BackingField;

/// @brief Field <Mesh>k__BackingField offset 0x10
 __declspec(property(get=__get__Mesh_k__BackingField, put=__set__Mesh_k__BackingField)) ::UnityEngine::Mesh*  _Mesh_k__BackingField;

/// @brief Field <MeshCollider>k__BackingField offset 0x18
 __declspec(property(get=__get__MeshCollider_k__BackingField, put=__set__MeshCollider_k__BackingField)) ::UnityEngine::MeshCollider*  _MeshCollider_k__BackingField;

/// @brief Field <Status>k__BackingField offset 0x20
 __declspec(property(get=__get__Status_k__BackingField, put=__set__Status_k__BackingField)) ::UnityEngine::XR::MeshGenerationStatus  _Status_k__BackingField;

/// @brief Field <Attributes>k__BackingField offset 0x24
 __declspec(property(get=__get__Attributes_k__BackingField, put=__set__Attributes_k__BackingField)) ::UnityEngine::XR::MeshVertexAttributes  _Attributes_k__BackingField;

/// @brief Field <Timestamp>k__BackingField offset 0x28
 __declspec(property(get=__get__Timestamp_k__BackingField, put=__set__Timestamp_k__BackingField)) uint64_t  _Timestamp_k__BackingField;

/// @brief Field <Position>k__BackingField offset 0x30
 __declspec(property(get=__get__Position_k__BackingField, put=__set__Position_k__BackingField)) ::UnityEngine::Vector3  _Position_k__BackingField;

/// @brief Field <Rotation>k__BackingField offset 0x3c
 __declspec(property(get=__get__Rotation_k__BackingField, put=__set__Rotation_k__BackingField)) ::UnityEngine::Quaternion  _Rotation_k__BackingField;

/// @brief Field <Scale>k__BackingField offset 0x4c
 __declspec(property(get=__get__Scale_k__BackingField, put=__set__Scale_k__BackingField)) ::UnityEngine::Vector3  _Scale_k__BackingField;

 __declspec(property(get=get_MeshId)) ::UnityEngine::XR::MeshId  MeshId;

 __declspec(property(get=get_Mesh)) ::UnityEngine::Mesh*  Mesh;

 __declspec(property(get=get_MeshCollider)) ::UnityEngine::MeshCollider*  MeshCollider;

 __declspec(property(get=get_Status)) ::UnityEngine::XR::MeshGenerationStatus  Status;

 __declspec(property(get=get_Attributes)) ::UnityEngine::XR::MeshVertexAttributes  Attributes;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Scale)) ::UnityEngine::Vector3  Scale;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>*() ;

constexpr void __set__MeshId_k__BackingField(::UnityEngine::XR::MeshId  value) ;

constexpr ::UnityEngine::XR::MeshId& __get__MeshId_k__BackingField() ;

constexpr ::UnityEngine::XR::MeshId const& __get__MeshId_k__BackingField() const;

constexpr void __set__Mesh_k__BackingField(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__Mesh_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__Mesh_k__BackingField() const;

constexpr void __set__MeshCollider_k__BackingField(::UnityEngine::MeshCollider*  value) ;

constexpr ::UnityEngine::MeshCollider* __get__MeshCollider_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> __get__MeshCollider_k__BackingField() const;

constexpr void __set__Status_k__BackingField(::UnityEngine::XR::MeshGenerationStatus  value) ;

constexpr ::UnityEngine::XR::MeshGenerationStatus& __get__Status_k__BackingField() ;

constexpr ::UnityEngine::XR::MeshGenerationStatus const& __get__Status_k__BackingField() const;

constexpr void __set__Attributes_k__BackingField(::UnityEngine::XR::MeshVertexAttributes  value) ;

constexpr ::UnityEngine::XR::MeshVertexAttributes& __get__Attributes_k__BackingField() ;

constexpr ::UnityEngine::XR::MeshVertexAttributes const& __get__Attributes_k__BackingField() const;

constexpr void __set__Timestamp_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__Timestamp_k__BackingField() ;

constexpr uint64_t const& __get__Timestamp_k__BackingField() const;

constexpr void __set__Position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__Position_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__Position_k__BackingField() const;

constexpr void __set__Rotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__Rotation_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __get__Rotation_k__BackingField() const;

constexpr void __set__Scale_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__Scale_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__Scale_k__BackingField() const;

/// @brief Method get_MeshId addr 0x2eb3928 size 0xc virtual false final false
inline ::UnityEngine::XR::MeshId get_MeshId() ;

/// @brief Method get_Mesh addr 0x2eb3934 size 0x8 virtual false final false
inline ::UnityEngine::Mesh* get_Mesh() ;

/// @brief Method get_MeshCollider addr 0x2eb393c size 0x8 virtual false final false
inline ::UnityEngine::MeshCollider* get_MeshCollider() ;

/// @brief Method get_Status addr 0x2eb3944 size 0x8 virtual false final false
inline ::UnityEngine::XR::MeshGenerationStatus get_Status() ;

/// @brief Method get_Attributes addr 0x2eb394c size 0x8 virtual false final false
inline ::UnityEngine::XR::MeshVertexAttributes get_Attributes() ;

/// @brief Method get_Position addr 0x2eb3954 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation addr 0x2eb3960 size 0xc virtual false final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Scale addr 0x2eb396c size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_Scale() ;

/// @brief Method Equals addr 0x2eb3978 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2eb3a08 size 0x184 virtual true final true
inline bool Equals(::UnityEngine::XR::MeshGenerationResult  other) ;

/// @brief Method GetHashCode addr 0x2eb3b8c size 0x208 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_MeshId_k__BackingField", ty: "::UnityEngine::XR::MeshId", modifiers: "", def_value: None }, CppParam { name: "_Mesh_k__BackingField", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: None }, CppParam { name: "_MeshCollider_k__BackingField", ty: "::UnityEngine::MeshCollider*", modifiers: "", def_value: None }, CppParam { name: "_Status_k__BackingField", ty: "::UnityEngine::XR::MeshGenerationStatus", modifiers: "", def_value: None }, CppParam { name: "_Attributes_k__BackingField", ty: "::UnityEngine::XR::MeshVertexAttributes", modifiers: "", def_value: None }, CppParam { name: "_Timestamp_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_Scale_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr MeshGenerationResult(::UnityEngine::XR::MeshId  _MeshId_k__BackingField, ::UnityEngine::Mesh*  _Mesh_k__BackingField, ::UnityEngine::MeshCollider*  _MeshCollider_k__BackingField, ::UnityEngine::XR::MeshGenerationStatus  _Status_k__BackingField, ::UnityEngine::XR::MeshVertexAttributes  _Attributes_k__BackingField, uint64_t  _Timestamp_k__BackingField, ::UnityEngine::Vector3  _Position_k__BackingField, ::UnityEngine::Quaternion  _Rotation_k__BackingField, ::UnityEngine::Vector3  _Scale_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MeshGenerationResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MeshGenerationResult()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshGenerationResult, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
