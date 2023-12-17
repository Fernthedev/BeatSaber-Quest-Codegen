#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternedString)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::InternedString);
// Type: UnityEngine.InputSystem.Utilities::InternedString
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6671))
// CS Name: ::UnityEngine.InputSystem.Utilities::InternedString
struct CORDL_TYPE InternedString : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_StringOriginalCase offset 0x0
 __declspec(property(get=__get_m_StringOriginalCase, put=__set_m_StringOriginalCase)) ::StringW  m_StringOriginalCase;

/// @brief Field m_StringLowerCase offset 0x8
 __declspec(property(get=__get_m_StringLowerCase, put=__set_m_StringLowerCase)) ::StringW  m_StringLowerCase;

 __declspec(property(get=get_length)) int32_t  length;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::IComparable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

constexpr void __set_m_StringOriginalCase(::StringW  value) ;

constexpr ::StringW& __get_m_StringOriginalCase() ;

constexpr ::StringW const& __get_m_StringOriginalCase() const;

constexpr void __set_m_StringLowerCase(::StringW  value) ;

constexpr ::StringW& __get_m_StringLowerCase() ;

constexpr ::StringW const& __get_m_StringLowerCase() const;

/// @brief Method get_length addr 0x2b0fec4 size 0x18 virtual false final false
inline int32_t get_length() ;

/// @brief Method .ctor addr 0x2b0fedc size 0xa8 virtual false final false
inline void _ctor(::StringW  text) ;

/// @brief Method IsEmpty addr 0x2b0ff84 size 0x10 virtual false final false
inline bool IsEmpty() ;

/// @brief Method ToLower addr 0x2b0ff94 size 0x8 virtual false final false
inline ::StringW ToLower() ;

/// @brief Method Equals addr 0x2b0ff9c size 0x114 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2b100b0 size 0x10 virtual true final true
inline bool Equals(::UnityEngine::InputSystem::Utilities::InternedString  other) ;

/// @brief Method CompareTo addr 0x2b100c0 size 0x14 virtual true final true
inline int32_t CompareTo(::UnityEngine::InputSystem::Utilities::InternedString  other) ;

/// @brief Method GetHashCode addr 0x2b100d4 size 0x18 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2b096fc size 0x54 virtual true final false
inline ::StringW ToString() ;

/// @brief Method op_Equality addr 0x2b0920c size 0xc virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::InternedString  a, ::UnityEngine::InputSystem::Utilities::InternedString  b) ;

/// @brief Method op_Inequality addr 0x2b100ec size 0xc virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString  a, ::UnityEngine::InputSystem::Utilities::InternedString  b) ;

/// @brief Method op_Equality addr 0x2b100f8 size 0x98 virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::InternedString  a, ::StringW  b) ;

/// @brief Method op_Inequality addr 0x2b10190 size 0x98 virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString  a, ::StringW  b) ;

/// @brief Method op_Equality addr 0x2b10228 size 0x94 virtual false final false
static inline bool op_Equality(::StringW  a, ::UnityEngine::InputSystem::Utilities::InternedString  b) ;

/// @brief Method op_Inequality addr 0x2b102bc size 0x94 virtual false final false
static inline bool op_Inequality(::StringW  a, ::UnityEngine::InputSystem::Utilities::InternedString  b) ;

/// @brief Method op_LessThan addr 0x2b10350 size 0x24 virtual false final false
static inline bool op_LessThan(::UnityEngine::InputSystem::Utilities::InternedString  left, ::UnityEngine::InputSystem::Utilities::InternedString  right) ;

/// @brief Method op_GreaterThan addr 0x2b10374 size 0x28 virtual false final false
static inline bool op_GreaterThan(::UnityEngine::InputSystem::Utilities::InternedString  left, ::UnityEngine::InputSystem::Utilities::InternedString  right) ;

/// @brief Method op_Implicit addr 0x2b09218 size 0x54 virtual false final false
static inline ::StringW op_Implicit___StringW(::UnityEngine::InputSystem::Utilities::InternedString  str) ;

// Ctor Parameters [CppParam { name: "m_StringOriginalCase", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_StringLowerCase", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InternedString(::StringW  m_StringOriginalCase, ::StringW  m_StringLowerCase) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternedString(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternedString()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::InternedString, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InternedString, "UnityEngine.InputSystem.Utilities", "InternedString");
