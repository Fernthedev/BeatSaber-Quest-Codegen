#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CombineInstance)
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
struct CombineInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CombineInstance);
// Type: UnityEngine::CombineInstance
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10136))
// CS Name: ::UnityEngine::CombineInstance
struct CORDL_TYPE CombineInstance : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field m_MeshInstanceID offset 0x0
 __declspec(property(get=__get_m_MeshInstanceID, put=__set_m_MeshInstanceID)) int32_t  m_MeshInstanceID;

/// @brief Field m_SubMeshIndex offset 0x4
 __declspec(property(get=__get_m_SubMeshIndex, put=__set_m_SubMeshIndex)) int32_t  m_SubMeshIndex;

/// @brief Field m_Transform offset 0x8
 __declspec(property(get=__get_m_Transform, put=__set_m_Transform)) ::UnityEngine::Matrix4x4  m_Transform;

/// @brief Field m_LightmapScaleOffset offset 0x48
 __declspec(property(get=__get_m_LightmapScaleOffset, put=__set_m_LightmapScaleOffset)) ::UnityEngine::Vector4  m_LightmapScaleOffset;

/// @brief Field m_RealtimeLightmapScaleOffset offset 0x58
 __declspec(property(get=__get_m_RealtimeLightmapScaleOffset, put=__set_m_RealtimeLightmapScaleOffset)) ::UnityEngine::Vector4  m_RealtimeLightmapScaleOffset;

 __declspec(property(get=get_mesh, put=set_mesh)) ::UnityEngine::Mesh*  mesh;

 __declspec(property(put=set_subMeshIndex)) int32_t  subMeshIndex;

 __declspec(property(put=set_transform)) ::UnityEngine::Matrix4x4  transform;

constexpr void __set_m_MeshInstanceID(int32_t  value) ;

constexpr int32_t& __get_m_MeshInstanceID() ;

constexpr int32_t const& __get_m_MeshInstanceID() const;

constexpr void __set_m_SubMeshIndex(int32_t  value) ;

constexpr int32_t& __get_m_SubMeshIndex() ;

constexpr int32_t const& __get_m_SubMeshIndex() const;

constexpr void __set_m_Transform(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_m_Transform() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_m_Transform() const;

constexpr void __set_m_LightmapScaleOffset(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_m_LightmapScaleOffset() ;

constexpr ::UnityEngine::Vector4 const& __get_m_LightmapScaleOffset() const;

constexpr void __set_m_RealtimeLightmapScaleOffset(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_m_RealtimeLightmapScaleOffset() ;

constexpr ::UnityEngine::Vector4 const& __get_m_RealtimeLightmapScaleOffset() const;

/// @brief Method get_mesh addr 0x2cc4670 size 0xc virtual false final false
inline ::UnityEngine::Mesh* get_mesh() ;

/// @brief Method set_mesh addr 0x2cc467c size 0x88 virtual false final false
inline void set_mesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_subMeshIndex addr 0x2cc48a8 size 0x8 virtual false final false
inline void set_subMeshIndex(int32_t  value) ;

/// @brief Method set_transform addr 0x2cc48b0 size 0x1c virtual false final false
inline void set_transform(::UnityEngine::Matrix4x4  value) ;

// Ctor Parameters [CppParam { name: "m_MeshInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SubMeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_LightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "m_RealtimeLightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr CombineInstance(int32_t  m_MeshInstanceID, int32_t  m_SubMeshIndex, ::UnityEngine::Matrix4x4  m_Transform, ::UnityEngine::Vector4  m_LightmapScaleOffset, ::UnityEngine::Vector4  m_RealtimeLightmapScaleOffset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CombineInstance(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CombineInstance()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CombineInstance, 0x68>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CombineInstance, "UnityEngine", "CombineInstance");
