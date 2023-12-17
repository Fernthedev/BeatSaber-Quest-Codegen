#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeArgumentHandle)
// Forward declare root types
namespace System {
struct RuntimeArgumentHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeArgumentHandle);
// Type: System::RuntimeArgumentHandle
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2615))
// CS Name: ::System::RuntimeArgumentHandle
struct CORDL_TYPE RuntimeArgumentHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field args offset 0x0
 __declspec(property(get=__get_args, put=__set_args)) ::cordl_internals::intptr_t  args;

constexpr void __set_args(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_args() ;

constexpr ::cordl_internals::intptr_t const& __get_args() const;

// Ctor Parameters [CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeArgumentHandle(::cordl_internals::intptr_t  args) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeArgumentHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeArgumentHandle()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeArgumentHandle, 0x8>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeArgumentHandle, "System", "RuntimeArgumentHandle");
