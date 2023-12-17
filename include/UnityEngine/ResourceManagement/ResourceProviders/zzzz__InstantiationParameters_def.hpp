#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InstantiationParameters)
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
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters);
// Type: UnityEngine.ResourceManagement.ResourceProviders::InstantiationParameters
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13998))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::InstantiationParameters
struct CORDL_TYPE InstantiationParameters : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_Position offset 0x0
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Rotation offset 0xc
 __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation)) ::UnityEngine::Quaternion  m_Rotation;

/// @brief Field m_Parent offset 0x20
 __declspec(property(get=__get_m_Parent, put=__set_m_Parent)) ::UnityEngine::Transform*  m_Parent;

/// @brief Field m_InstantiateInWorldPosition offset 0x28
 __declspec(property(get=__get_m_InstantiateInWorldPosition, put=__set_m_InstantiateInWorldPosition)) bool  m_InstantiateInWorldPosition;

/// @brief Field m_SetPositionRotation offset 0x29
 __declspec(property(get=__get_m_SetPositionRotation, put=__set_m_SetPositionRotation)) bool  m_SetPositionRotation;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Parent)) ::UnityEngine::Transform*  Parent;

 __declspec(property(get=get_InstantiateInWorldPosition)) bool  InstantiateInWorldPosition;

 __declspec(property(get=get_SetPositionRotation)) bool  SetPositionRotation;

constexpr void __set_m_Position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Position() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

constexpr void __set_m_Rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_m_Rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_m_Rotation() const;

constexpr void __set_m_Parent(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_Parent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_Parent() const;

constexpr void __set_m_InstantiateInWorldPosition(bool  value) ;

constexpr bool& __get_m_InstantiateInWorldPosition() ;

constexpr bool const& __get_m_InstantiateInWorldPosition() const;

constexpr void __set_m_SetPositionRotation(bool  value) ;

constexpr bool& __get_m_SetPositionRotation() ;

constexpr bool const& __get_m_SetPositionRotation() const;

/// @brief Method get_Position addr 0x2bd6d2c size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation addr 0x2bd6d38 size 0xc virtual false final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Parent addr 0x2bd6d44 size 0x8 virtual false final false
inline ::UnityEngine::Transform* get_Parent() ;

/// @brief Method get_InstantiateInWorldPosition addr 0x2bd6d4c size 0x8 virtual false final false
inline bool get_InstantiateInWorldPosition() ;

/// @brief Method get_SetPositionRotation addr 0x2bd6d54 size 0x8 virtual false final false
inline bool get_SetPositionRotation() ;

/// @brief Method .ctor addr 0x2bd6d5c size 0xac virtual false final false
inline void _ctor(::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method .ctor addr 0x2bd6e08 size 0x20 virtual false final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline TObject Instantiate(TObject  source) ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Parent", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "m_InstantiateInWorldPosition", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SetPositionRotation", ty: "bool", modifiers: "", def_value: None }]
constexpr InstantiationParameters(::UnityEngine::Vector3  m_Position, ::UnityEngine::Quaternion  m_Rotation, ::UnityEngine::Transform*  m_Parent, bool  m_InstantiateInWorldPosition, bool  m_SetPositionRotation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InstantiationParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InstantiationParameters()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, "UnityEngine.ResourceManagement.ResourceProviders", "InstantiationParameters");
