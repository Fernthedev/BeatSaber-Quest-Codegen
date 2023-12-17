#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec4)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::IntVec4);
// Type: UnityEngine.ProBuilder::IntVec4
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12134))
// CS Name: ::UnityEngine.ProBuilder::IntVec4
struct CORDL_TYPE IntVec4 : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Vector4  value;

 __declspec(property(get=get_x)) float_t  x;

 __declspec(property(get=get_y)) float_t  y;

 __declspec(property(get=get_z)) float_t  z;

 __declspec(property(get=get_w)) float_t  w;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>*() ;

constexpr void __set_value(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_value() ;

constexpr ::UnityEngine::Vector4 const& __get_value() const;

/// @brief Method get_x addr 0x2b46e20 size 0x8 virtual false final false
inline float_t get_x() ;

/// @brief Method get_y addr 0x2b46e28 size 0x8 virtual false final false
inline float_t get_y() ;

/// @brief Method get_z addr 0x2b46e30 size 0x8 virtual false final false
inline float_t get_z() ;

/// @brief Method get_w addr 0x2b46e38 size 0x8 virtual false final false
inline float_t get_w() ;

/// @brief Method .ctor addr 0x2b46e40 size 0xc virtual false final false
inline void _ctor(::UnityEngine::Vector4  vector) ;

/// @brief Method ToString addr 0x2b46e4c size 0x1ac virtual true final false
inline ::StringW ToString() ;

/// @brief Method op_Equality addr 0x2b46ff8 size 0x38 virtual false final false
static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec4  a, ::UnityEngine::ProBuilder::IntVec4  b) ;

/// @brief Method op_Inequality addr 0x2b470e4 size 0x3c virtual false final false
static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec4  a, ::UnityEngine::ProBuilder::IntVec4  b) ;

/// @brief Method Equals addr 0x2b47030 size 0xb4 virtual true final true
inline bool Equals(::UnityEngine::ProBuilder::IntVec4  p) ;

/// @brief Method Equals addr 0x2b47188 size 0xb4 virtual false final false
inline bool Equals(::UnityEngine::Vector4  p) ;

/// @brief Method Equals addr 0x2b4723c size 0xc4 virtual true final false
inline bool Equals(::System::Object*  b) ;

/// @brief Method GetHashCode addr 0x2b47300 size 0x10 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method round addr 0x2b47120 size 0x68 virtual false final false
static inline int32_t round(float_t  v) ;

/// @brief Method op_Implicit addr 0x2b47310 size 0x4 virtual false final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::ProBuilder::IntVec4  p) ;

/// @brief Method op_Implicit addr 0x2b47314 size 0x4 virtual false final false
static inline ::UnityEngine::ProBuilder::IntVec4 op_Implicit___UnityEngine__ProBuilder__IntVec4(::UnityEngine::Vector4  p) ;

// Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr IntVec4(::UnityEngine::Vector4  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IntVec4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IntVec4()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IntVec4, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
