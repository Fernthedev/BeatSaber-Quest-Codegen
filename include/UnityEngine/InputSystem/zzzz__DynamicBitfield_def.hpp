#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicBitfield)
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct DynamicBitfield;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::DynamicBitfield);
// Type: UnityEngine.InputSystem::DynamicBitfield
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6321))
// CS Name: ::UnityEngine.InputSystem::DynamicBitfield
struct CORDL_TYPE DynamicBitfield : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  array;

/// @brief Field length offset 0x18
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> const& __get_array() const;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

/// @brief Method SetLength addr 0x2ab6e18 size 0x74 virtual false final false
inline void SetLength(int32_t  newLength) ;

/// @brief Method SetBit addr 0x2ac5154 size 0x98 virtual false final false
inline void SetBit(int32_t  bitIndex) ;

/// @brief Method TestBit addr 0x2ac51ec size 0x78 virtual false final false
inline bool TestBit(int32_t  bitIndex) ;

/// @brief Method ClearBit addr 0x2ab6f40 size 0x98 virtual false final false
inline void ClearBit(int32_t  bitIndex) ;

/// @brief Method BitCountToULongCount addr 0x2ac513c size 0x18 virtual false final false
static inline int32_t BitCountToULongCount(int32_t  bitCount) ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DynamicBitfield(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  array, int32_t  length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DynamicBitfield(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DynamicBitfield()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DynamicBitfield, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DynamicBitfield, "UnityEngine.InputSystem", "DynamicBitfield");
