#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Normal)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Normal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Normal);
// Type: UnityEngine.ProBuilder::Normal
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12145))
// CS Name: ::UnityEngine.ProBuilder::Normal
struct CORDL_TYPE Normal : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <normal>k__BackingField offset 0x0
 __declspec(property(get=__get__normal_k__BackingField, put=__set__normal_k__BackingField)) ::UnityEngine::Vector3  _normal_k__BackingField;

/// @brief Field <tangent>k__BackingField offset 0xc
 __declspec(property(get=__get__tangent_k__BackingField, put=__set__tangent_k__BackingField)) ::UnityEngine::Vector4  _tangent_k__BackingField;

/// @brief Field <bitangent>k__BackingField offset 0x1c
 __declspec(property(get=__get__bitangent_k__BackingField, put=__set__bitangent_k__BackingField)) ::UnityEngine::Vector3  _bitangent_k__BackingField;

 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_tangent, put=set_tangent)) ::UnityEngine::Vector4  tangent;

 __declspec(property(get=get_bitangent, put=set_bitangent)) ::UnityEngine::Vector3  bitangent;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>*() ;

constexpr void __set__normal_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__normal_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__normal_k__BackingField() const;

constexpr void __set__tangent_k__BackingField(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get__tangent_k__BackingField() ;

constexpr ::UnityEngine::Vector4 const& __get__tangent_k__BackingField() const;

constexpr void __set__bitangent_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__bitangent_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__bitangent_k__BackingField() const;

/// @brief Method get_normal addr 0x2b54a9c size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method set_normal addr 0x2b54aa8 size 0xc virtual false final false
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method get_tangent addr 0x2b54ab4 size 0xc virtual false final false
inline ::UnityEngine::Vector4 get_tangent() ;

/// @brief Method set_tangent addr 0x2b54ac0 size 0xc virtual false final false
inline void set_tangent(::UnityEngine::Vector4  value) ;

/// @brief Method get_bitangent addr 0x2b54acc size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_bitangent() ;

/// @brief Method set_bitangent addr 0x2b54ad8 size 0xc virtual false final false
inline void set_bitangent(::UnityEngine::Vector3  value) ;

/// @brief Method Equals addr 0x2b54ae4 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2b54c0c size 0x64 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b54b74 size 0x98 virtual true final true
inline bool Equals(::UnityEngine::ProBuilder::Normal  other) ;

/// @brief Method op_Equality addr 0x2b54c70 size 0x30 virtual false final false
static inline bool op_Equality(::UnityEngine::ProBuilder::Normal  a, ::UnityEngine::ProBuilder::Normal  b) ;

/// @brief Method op_Inequality addr 0x2b54ca0 size 0x48 virtual false final false
static inline bool op_Inequality(::UnityEngine::ProBuilder::Normal  a, ::UnityEngine::ProBuilder::Normal  b) ;

// Ctor Parameters [CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_tangent_k__BackingField", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_bitangent_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Normal(::UnityEngine::Vector3  _normal_k__BackingField, ::UnityEngine::Vector4  _tangent_k__BackingField, ::UnityEngine::Vector3  _bitangent_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Normal(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Normal()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Normal, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
