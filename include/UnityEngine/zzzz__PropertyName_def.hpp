#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyName)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct PropertyName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PropertyName);
// Type: UnityEngine::PropertyName
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10159))
// CS Name: ::UnityEngine::PropertyName
struct CORDL_TYPE PropertyName : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) int32_t  id;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PropertyName>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PropertyName>*() ;

constexpr void __set_id(int32_t  value) ;

constexpr int32_t& __get_id() ;

constexpr int32_t const& __get_id() const;

/// @brief Method .ctor addr 0x2cc8668 size 0x5c virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2cc8710 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::PropertyName  other) ;

/// @brief Method IsNullOrEmpty addr 0x2cc8718 size 0xc virtual false final false
static inline bool IsNullOrEmpty(::UnityEngine::PropertyName  prop) ;

/// @brief Method op_Equality addr 0x2cc8724 size 0xc virtual false final false
static inline bool op_Equality(::UnityEngine::PropertyName  lhs, ::UnityEngine::PropertyName  rhs) ;

/// @brief Method GetHashCode addr 0x2cc8730 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2cc8738 size 0x78 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cc87b0 size 0x10 virtual true final true
inline bool Equals(::UnityEngine::PropertyName  other) ;

/// @brief Method op_Implicit addr 0x2cc87c0 size 0x4c virtual false final false
static inline ::UnityEngine::PropertyName op_Implicit___UnityEngine__PropertyName(::StringW  name) ;

/// @brief Method ToString addr 0x2cc880c size 0x84 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyName(int32_t  id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PropertyName(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PropertyName()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PropertyName, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyName, "UnityEngine", "PropertyName");
