#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformData)
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
namespace HoudiniEngineUnity {
struct TransformData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::TransformData);
// Type: HoudiniEngineUnity::TransformData
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9823))
// CS Name: ::HoudiniEngineUnity::TransformData
struct CORDL_TYPE TransformData : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation offset 0xc
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field localPosition offset 0x1c
 __declspec(property(get=__get_localPosition, put=__set_localPosition)) ::UnityEngine::Vector3  localPosition;

/// @brief Field localScale offset 0x28
 __declspec(property(get=__get_localScale, put=__set_localScale)) ::UnityEngine::Vector3  localScale;

/// @brief Field localRotation offset 0x34
 __declspec(property(get=__get_localRotation, put=__set_localRotation)) ::UnityEngine::Quaternion  localRotation;

/// @brief Field parent offset 0x48
 __declspec(property(get=__get_parent, put=__set_parent)) ::UnityEngine::Transform*  parent;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

constexpr void __set_localPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_localPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_localPosition() const;

constexpr void __set_localScale(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_localScale() ;

constexpr ::UnityEngine::Vector3 const& __get_localScale() const;

constexpr void __set_localRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_localRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_localRotation() const;

constexpr void __set_parent(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_parent() const;

/// @brief Method .ctor addr 0x21b3370 size 0x98 virtual false final false
inline void _ctor(::UnityEngine::Transform*  other) ;

/// @brief Method CopyTo addr 0x21b3408 size 0x80 virtual false final false
inline void CopyTo(::UnityEngine::Transform*  other, bool  copyParent) ;

/// @brief Method CopyToLocal addr 0x21b3488 size 0x80 virtual false final false
inline void CopyToLocal(::UnityEngine::Transform*  other, bool  copyParent) ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }]
constexpr TransformData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Vector3  localScale, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Transform*  parent) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TransformData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TransformData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::TransformData, 0x50>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TransformData, "HoudiniEngineUnity", "TransformData");
