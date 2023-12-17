#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeywordSpace)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeywordSpace);
// Type: UnityEngine.Rendering::LocalKeywordSpace
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10373))
// CS Name: ::UnityEngine.Rendering::LocalKeywordSpace
struct CORDL_TYPE LocalKeywordSpace : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_KeywordSpace offset 0x0
 __declspec(property(get=__get_m_KeywordSpace, put=__set_m_KeywordSpace)) ::cordl_internals::intptr_t  m_KeywordSpace;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*() ;

constexpr void __set_m_KeywordSpace(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_KeywordSpace() ;

constexpr ::cordl_internals::intptr_t const& __get_m_KeywordSpace() const;

/// @brief Method Equals addr 0x2cef1f8 size 0x7c virtual true final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals addr 0x2cef274 size 0xc virtual true final true
inline bool Equals(::UnityEngine::Rendering::LocalKeywordSpace  rhs) ;

/// @brief Method op_Equality addr 0x2cef178 size 0x8 virtual false final false
static inline bool op_Equality(::UnityEngine::Rendering::LocalKeywordSpace  lhs, ::UnityEngine::Rendering::LocalKeywordSpace  rhs) ;

/// @brief Method GetHashCode addr 0x2cef1d0 size 0x20 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr LocalKeywordSpace(::cordl_internals::intptr_t  m_KeywordSpace) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LocalKeywordSpace(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LocalKeywordSpace()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LocalKeywordSpace, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LocalKeywordSpace, "UnityEngine.Rendering", "LocalKeywordSpace");
