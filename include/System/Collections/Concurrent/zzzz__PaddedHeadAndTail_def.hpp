#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaddedHeadAndTail)
// Forward declare root types
namespace System::Collections::Concurrent {
struct PaddedHeadAndTail;
}
// Write type traits
MARK_VAL_T(::System::Collections::Concurrent::PaddedHeadAndTail);
// Type: System.Collections.Concurrent::PaddedHeadAndTail
namespace System::Collections::Concurrent {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3804))
// CS Name: ::System.Collections.Concurrent::PaddedHeadAndTail
struct CORDL_TYPE PaddedHeadAndTail : public ::bs_hook::ValueTypeWrapper<0x180> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x180};

/// @brief Field Head offset 0x80
 __declspec(property(get=__get_Head, put=__set_Head)) int32_t  Head;

/// @brief Field Tail offset 0x100
 __declspec(property(get=__get_Tail, put=__set_Tail)) int32_t  Tail;

constexpr void __set_Head(int32_t  value) ;

constexpr int32_t& __get_Head() ;

constexpr int32_t const& __get_Head() const;

constexpr void __set_Tail(int32_t  value) ;

constexpr int32_t& __get_Tail() ;

constexpr int32_t const& __get_Tail() const;

// Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaddedHeadAndTail(int32_t  Head, int32_t  Tail) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PaddedHeadAndTail(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x180>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PaddedHeadAndTail()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Concurrent::PaddedHeadAndTail, 0x180>, "Size mismatch!");

} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Concurrent::PaddedHeadAndTail, "System.Collections.Concurrent", "PaddedHeadAndTail");
