#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgIterator)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct ArgIterator;
}
// Write type traits
MARK_VAL_T(::System::ArgIterator);
// Type: System::ArgIterator
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2583))
// CS Name: ::System::ArgIterator
struct CORDL_TYPE ArgIterator : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sig offset 0x0
 __declspec(property(get=__get_sig, put=__set_sig)) ::cordl_internals::intptr_t  sig;

/// @brief Field args offset 0x8
 __declspec(property(get=__get_args, put=__set_args)) ::cordl_internals::intptr_t  args;

/// @brief Field next_arg offset 0x10
 __declspec(property(get=__get_next_arg, put=__set_next_arg)) int32_t  next_arg;

/// @brief Field num_args offset 0x14
 __declspec(property(get=__get_num_args, put=__set_num_args)) int32_t  num_args;

constexpr void __set_sig(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_sig() ;

constexpr ::cordl_internals::intptr_t const& __get_sig() const;

constexpr void __set_args(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_args() ;

constexpr ::cordl_internals::intptr_t const& __get_args() const;

constexpr void __set_next_arg(int32_t  value) ;

constexpr int32_t& __get_next_arg() ;

constexpr int32_t const& __get_next_arg() const;

constexpr void __set_num_args(int32_t  value) ;

constexpr int32_t& __get_num_args() ;

constexpr int32_t const& __get_num_args() const;

/// @brief Method Equals addr 0x25f62a8 size 0x50 virtual true final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode addr 0x25f62f8 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "sig", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "next_arg", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArgIterator(::cordl_internals::intptr_t  sig, ::cordl_internals::intptr_t  args, int32_t  next_arg, int32_t  num_args) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ArgIterator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ArgIterator()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgIterator, 0x18>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ArgIterator, "System", "ArgIterator");
