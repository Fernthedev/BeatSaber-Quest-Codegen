#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Edge)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Edge);
// Type: UnityEngine.ProBuilder::Edge
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12117))
// CS Name: ::UnityEngine.ProBuilder::Edge
struct CORDL_TYPE Edge : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field a offset 0x0
 __declspec(property(get=__get_a, put=__set_a)) int32_t  a;

/// @brief Field b offset 0x4
 __declspec(property(get=__get_b, put=__set_b)) int32_t  b;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>*() ;

constexpr void __set_a(int32_t  value) ;

constexpr int32_t& __get_a() ;

constexpr int32_t const& __get_a() const;

constexpr void __set_b(int32_t  value) ;

constexpr int32_t& __get_b() ;

constexpr int32_t const& __get_b() const;

static inline void setStaticF_Empty(::UnityEngine::ProBuilder::Edge  value) ;

static inline ::UnityEngine::ProBuilder::Edge getStaticF_Empty() ;

/// @brief Method .ctor addr 0x2b3e2b0 size 0x8 virtual false final false
inline void _ctor(int32_t  a, int32_t  b) ;

/// @brief Method IsValid addr 0x2b3e2b8 size 0x2c virtual false final false
inline bool IsValid() ;

/// @brief Method ToString addr 0x2b3e2e4 size 0x1a4 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2b3e488 size 0x44 virtual true final true
inline bool Equals(::UnityEngine::ProBuilder::Edge  other) ;

/// @brief Method Equals addr 0x2b3e4cc size 0xa0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2b3e56c size 0x24 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Addition addr 0x2b3e590 size 0x18 virtual false final false
static inline ::UnityEngine::ProBuilder::Edge op_Addition(::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b) ;

/// @brief Method op_Subtraction addr 0x2b3e5a8 size 0x18 virtual false final false
static inline ::UnityEngine::ProBuilder::Edge op_Subtraction(::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b) ;

/// @brief Method op_Addition addr 0x2b3e5c0 size 0x14 virtual false final false
static inline ::UnityEngine::ProBuilder::Edge op_Addition(::UnityEngine::ProBuilder::Edge  a, int32_t  b) ;

/// @brief Method op_Subtraction addr 0x2b3e5d4 size 0x14 virtual false final false
static inline ::UnityEngine::ProBuilder::Edge op_Subtraction(::UnityEngine::ProBuilder::Edge  a, int32_t  b) ;

/// @brief Method op_Equality addr 0x2b3e5e8 size 0x38 virtual false final false
static inline bool op_Equality(::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b) ;

/// @brief Method op_Inequality addr 0x2b3e620 size 0x90 virtual false final false
static inline bool op_Inequality(::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b) ;

/// @brief Method Add addr 0x2b3e6b0 size 0x70 virtual false final false
static inline ::UnityEngine::ProBuilder::Edge Add(::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b) ;

/// @brief Method Subtract addr 0x2b3e720 size 0x70 virtual false final false
static inline ::UnityEngine::ProBuilder::Edge Subtract(::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b) ;

/// @brief Method Equals addr 0x2b3e790 size 0x10c virtual false final false
inline bool Equals(::UnityEngine::ProBuilder::Edge  other, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  lookup) ;

/// @brief Method Contains addr 0x2b3e89c size 0x24 virtual false final false
inline bool Contains(int32_t  index) ;

/// @brief Method Contains addr 0x2b3e8c0 size 0x30 virtual false final false
inline bool Contains(::UnityEngine::ProBuilder::Edge  other) ;

/// @brief Method Contains addr 0x2b3e8f0 size 0xa4 virtual false final false
inline bool Contains(int32_t  index, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  lookup) ;

/// @brief Method GetIndices addr 0x2b3e994 size 0x3d8 virtual false final false
static inline void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  edges, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

// Ctor Parameters [CppParam { name: "a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Edge(int32_t  a, int32_t  b) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Edge(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Edge()  = default;


// Fields

// Static field Empty


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Edge, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Edge, "UnityEngine.ProBuilder", "Edge");
