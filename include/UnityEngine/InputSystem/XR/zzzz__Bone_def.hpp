#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bone)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Bone);
// Type: UnityEngine.InputSystem.XR::Bone
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6337))
// CS Name: ::UnityEngine.InputSystem.XR::Bone
struct CORDL_TYPE Bone : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <parentBoneIndex>k__BackingField offset 0x0
 __declspec(property(get=__get__parentBoneIndex_k__BackingField, put=__set__parentBoneIndex_k__BackingField)) uint32_t  _parentBoneIndex_k__BackingField;

/// @brief Field <position>k__BackingField offset 0x4
 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField)) ::UnityEngine::Vector3  _position_k__BackingField;

/// @brief Field <rotation>k__BackingField offset 0x10
 __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField)) ::UnityEngine::Quaternion  _rotation_k__BackingField;

 __declspec(property(get=get_parentBoneIndex, put=set_parentBoneIndex)) uint32_t  parentBoneIndex;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

constexpr void __set__parentBoneIndex_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__parentBoneIndex_k__BackingField() ;

constexpr uint32_t const& __get__parentBoneIndex_k__BackingField() const;

constexpr void __set__position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__position_k__BackingField() const;

constexpr void __set__rotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__rotation_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __get__rotation_k__BackingField() const;

/// @brief Method get_parentBoneIndex addr 0x2ac8338 size 0x8 virtual false final false
inline uint32_t get_parentBoneIndex() ;

/// @brief Method set_parentBoneIndex addr 0x2ac8340 size 0x8 virtual false final false
inline void set_parentBoneIndex(uint32_t  value) ;

/// @brief Method get_position addr 0x2ac8348 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2ac8354 size 0xc virtual false final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method get_rotation addr 0x2ac8360 size 0xc virtual false final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x2ac836c size 0xc virtual false final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

// Ctor Parameters [CppParam { name: "_parentBoneIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr Bone(uint32_t  _parentBoneIndex_k__BackingField, ::UnityEngine::Vector3  _position_k__BackingField, ::UnityEngine::Quaternion  _rotation_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Bone(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Bone()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Bone, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Bone, "UnityEngine.InputSystem.XR", "Bone");
