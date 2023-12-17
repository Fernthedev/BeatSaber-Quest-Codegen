#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ENetCallbacks)
namespace ENet {
class AllocCallback;
}
namespace ENet {
class FreeCallback;
}
namespace ENet {
class NoMemoryCallback;
}
// Forward declare root types
namespace ENet {
struct ENetCallbacks;
}
// Write type traits
MARK_VAL_T(::ENet::ENetCallbacks);
// Type: ENet::ENetCallbacks
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15220))
// CS Name: ::ENet::ENetCallbacks
struct CORDL_TYPE ENetCallbacks : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field malloc offset 0x0
 __declspec(property(get=__get_malloc, put=__set_malloc)) ::ENet::AllocCallback*  malloc;

/// @brief Field free offset 0x8
 __declspec(property(get=__get_free, put=__set_free)) ::ENet::FreeCallback*  free;

/// @brief Field noMemory offset 0x10
 __declspec(property(get=__get_noMemory, put=__set_noMemory)) ::ENet::NoMemoryCallback*  noMemory;

constexpr void __set_malloc(::ENet::AllocCallback*  value) ;

constexpr ::ENet::AllocCallback* __get_malloc() ;

constexpr ::cordl_internals::to_const_pointer<::ENet::AllocCallback*> __get_malloc() const;

constexpr void __set_free(::ENet::FreeCallback*  value) ;

constexpr ::ENet::FreeCallback* __get_free() ;

constexpr ::cordl_internals::to_const_pointer<::ENet::FreeCallback*> __get_free() const;

constexpr void __set_noMemory(::ENet::NoMemoryCallback*  value) ;

constexpr ::ENet::NoMemoryCallback* __get_noMemory() ;

constexpr ::cordl_internals::to_const_pointer<::ENet::NoMemoryCallback*> __get_noMemory() const;

// Ctor Parameters [CppParam { name: "malloc", ty: "::ENet::AllocCallback*", modifiers: "", def_value: None }, CppParam { name: "free", ty: "::ENet::FreeCallback*", modifiers: "", def_value: None }, CppParam { name: "noMemory", ty: "::ENet::NoMemoryCallback*", modifiers: "", def_value: None }]
constexpr ENetCallbacks(::ENet::AllocCallback*  malloc, ::ENet::FreeCallback*  free, ::ENet::NoMemoryCallback*  noMemory) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ENetCallbacks(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ENetCallbacks()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ENetCallbacks, 0x18>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetCallbacks, "ENet", "ENetCallbacks");
