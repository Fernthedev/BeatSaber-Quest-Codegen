#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteBone)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::U2D {
struct SpriteBone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::U2D::SpriteBone);
// Type: UnityEngine.U2D::SpriteBone
namespace UnityEngine::U2D {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10294))
// CS Name: ::UnityEngine.U2D::SpriteBone
struct CORDL_TYPE SpriteBone : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Name offset 0x0
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Guid offset 0x8
 __declspec(property(get=__get_m_Guid, put=__set_m_Guid)) ::StringW  m_Guid;

/// @brief Field m_Position offset 0x10
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Rotation offset 0x1c
 __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation)) ::UnityEngine::Quaternion  m_Rotation;

/// @brief Field m_Length offset 0x2c
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) float_t  m_Length;

/// @brief Field m_ParentId offset 0x30
 __declspec(property(get=__get_m_ParentId, put=__set_m_ParentId)) int32_t  m_ParentId;

/// @brief Field m_Color offset 0x34
 __declspec(property(get=__get_m_Color, put=__set_m_Color)) ::UnityEngine::Color32  m_Color;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Guid(::StringW  value) ;

constexpr ::StringW& __get_m_Guid() ;

constexpr ::StringW const& __get_m_Guid() const;

constexpr void __set_m_Position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Position() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

constexpr void __set_m_Rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_m_Rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_m_Rotation() const;

constexpr void __set_m_Length(float_t  value) ;

constexpr float_t& __get_m_Length() ;

constexpr float_t const& __get_m_Length() const;

constexpr void __set_m_ParentId(int32_t  value) ;

constexpr int32_t& __get_m_ParentId() ;

constexpr int32_t const& __get_m_ParentId() const;

constexpr void __set_m_Color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_Color() ;

constexpr ::UnityEngine::Color32 const& __get_m_Color() const;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Guid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr SpriteBone(::StringW  m_Name, ::StringW  m_Guid, ::UnityEngine::Vector3  m_Position, ::UnityEngine::Quaternion  m_Rotation, float_t  m_Length, int32_t  m_ParentId, ::UnityEngine::Color32  m_Color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SpriteBone(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SpriteBone()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteBone, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::U2D
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteBone, "UnityEngine.U2D", "SpriteBone");
