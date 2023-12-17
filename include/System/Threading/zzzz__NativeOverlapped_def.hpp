#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeOverlapped)
// Forward declare root types
namespace System::Threading {
struct NativeOverlapped;
}
// Write type traits
MARK_VAL_T(::System::Threading::NativeOverlapped);
// Type: System.Threading::NativeOverlapped
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2679))
// CS Name: ::System.Threading::NativeOverlapped
struct CORDL_TYPE NativeOverlapped : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field InternalLow offset 0x0
 __declspec(property(get=__get_InternalLow, put=__set_InternalLow)) ::cordl_internals::intptr_t  InternalLow;

/// @brief Field InternalHigh offset 0x8
 __declspec(property(get=__get_InternalHigh, put=__set_InternalHigh)) ::cordl_internals::intptr_t  InternalHigh;

/// @brief Field OffsetLow offset 0x10
 __declspec(property(get=__get_OffsetLow, put=__set_OffsetLow)) int32_t  OffsetLow;

/// @brief Field OffsetHigh offset 0x14
 __declspec(property(get=__get_OffsetHigh, put=__set_OffsetHigh)) int32_t  OffsetHigh;

/// @brief Field EventHandle offset 0x18
 __declspec(property(get=__get_EventHandle, put=__set_EventHandle)) ::cordl_internals::intptr_t  EventHandle;

constexpr void __set_InternalLow(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_InternalLow() ;

constexpr ::cordl_internals::intptr_t const& __get_InternalLow() const;

constexpr void __set_InternalHigh(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_InternalHigh() ;

constexpr ::cordl_internals::intptr_t const& __get_InternalHigh() const;

constexpr void __set_OffsetLow(int32_t  value) ;

constexpr int32_t& __get_OffsetLow() ;

constexpr int32_t const& __get_OffsetLow() const;

constexpr void __set_OffsetHigh(int32_t  value) ;

constexpr int32_t& __get_OffsetHigh() ;

constexpr int32_t const& __get_OffsetHigh() const;

constexpr void __set_EventHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_EventHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_EventHandle() const;

// Ctor Parameters [CppParam { name: "InternalLow", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "InternalHigh", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "OffsetLow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OffsetHigh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "EventHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr NativeOverlapped(::cordl_internals::intptr_t  InternalLow, ::cordl_internals::intptr_t  InternalHigh, int32_t  OffsetLow, int32_t  OffsetHigh, ::cordl_internals::intptr_t  EventHandle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeOverlapped(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeOverlapped()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::NativeOverlapped, 0x20>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::NativeOverlapped, "System.Threading", "NativeOverlapped");
