#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeEventHandle)
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
struct RuntimeEventHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeEventHandle);
// Type: Mono::RuntimeEventHandle
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2231))
// CS Name: ::Mono::RuntimeEventHandle
struct CORDL_TYPE RuntimeEventHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::cordl_internals::intptr_t  value;

 __declspec(property(get=get_Value)) ::cordl_internals::intptr_t  Value;

constexpr void __set_value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_value() ;

constexpr ::cordl_internals::intptr_t const& __get_value() const;

/// @brief Method .ctor addr 0x2412824 size 0x8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  v) ;

/// @brief Method get_Value addr 0x241282c size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_Value() ;

/// @brief Method Equals addr 0x2412834 size 0x10c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2412940 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeEventHandle(::cordl_internals::intptr_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeEventHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeEventHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeEventHandle, 0x8>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeEventHandle, "Mono", "RuntimeEventHandle");
