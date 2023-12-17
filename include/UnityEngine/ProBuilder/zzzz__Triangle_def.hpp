#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Triangle)
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Triangle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Triangle);
// Type: UnityEngine.ProBuilder::Triangle
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12209))
// CS Name: ::UnityEngine.ProBuilder::Triangle
struct CORDL_TYPE Triangle : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_A offset 0x0
 __declspec(property(get=__get_m_A, put=__set_m_A)) int32_t  m_A;

/// @brief Field m_B offset 0x4
 __declspec(property(get=__get_m_B, put=__set_m_B)) int32_t  m_B;

/// @brief Field m_C offset 0x8
 __declspec(property(get=__get_m_C, put=__set_m_C)) int32_t  m_C;

 __declspec(property(get=get_a)) int32_t  a;

 __declspec(property(get=get_b)) int32_t  b;

 __declspec(property(get=get_c)) int32_t  c;

 __declspec(property(get=get_indices)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  indices;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*() ;

constexpr void __set_m_A(int32_t  value) ;

constexpr int32_t& __get_m_A() ;

constexpr int32_t const& __get_m_A() const;

constexpr void __set_m_B(int32_t  value) ;

constexpr int32_t& __get_m_B() ;

constexpr int32_t const& __get_m_B() const;

constexpr void __set_m_C(int32_t  value) ;

constexpr int32_t& __get_m_C() ;

constexpr int32_t const& __get_m_C() const;

/// @brief Method get_a addr 0x2b7c9a8 size 0x8 virtual false final false
inline int32_t get_a() ;

/// @brief Method get_b addr 0x2b7c9b0 size 0x8 virtual false final false
inline int32_t get_b() ;

/// @brief Method get_c addr 0x2b7c9b8 size 0x8 virtual false final false
inline int32_t get_c() ;

/// @brief Method get_indices addr 0x2b7c9c0 size 0x88 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_indices() ;

/// @brief Method .ctor addr 0x2b7ca48 size 0xc virtual false final false
inline void _ctor(int32_t  a, int32_t  b, int32_t  c) ;

/// @brief Method Equals addr 0x2b7ca54 size 0x34 virtual true final true
inline bool Equals(::UnityEngine::ProBuilder::Triangle  other) ;

/// @brief Method Equals addr 0x2b7ca88 size 0x98 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2b7cb20 size 0x20 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsAdjacent addr 0x2b7cb40 size 0x94 virtual false final false
inline bool IsAdjacent(::UnityEngine::ProBuilder::Triangle  other) ;

/// @brief Method ContainsEdge addr 0x2b7cbd4 size 0x100 virtual false final false
inline bool ContainsEdge(::UnityEngine::ProBuilder::Edge  edge) ;

// Ctor Parameters [CppParam { name: "m_A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_C", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Triangle(int32_t  m_A, int32_t  m_B, int32_t  m_C) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Triangle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Triangle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Triangle, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Triangle, "UnityEngine.ProBuilder", "Triangle");
