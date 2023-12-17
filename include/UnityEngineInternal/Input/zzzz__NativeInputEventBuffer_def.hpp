#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputEventBuffer)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputEventBuffer);
// Type: UnityEngineInternal.Input::NativeInputEventBuffer
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16109))
// CS Name: ::UnityEngineInternal.Input::NativeInputEventBuffer
struct CORDL_TYPE NativeInputEventBuffer : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field eventBuffer offset 0x0
 __declspec(property(get=__get_eventBuffer, put=__set_eventBuffer)) ::cordl_internals::Ptr<void>  eventBuffer;

/// @brief Field eventCount offset 0x8
 __declspec(property(get=__get_eventCount, put=__set_eventCount)) int32_t  eventCount;

/// @brief Field sizeInBytes offset 0xc
 __declspec(property(get=__get_sizeInBytes, put=__set_sizeInBytes)) int32_t  sizeInBytes;

/// @brief Field capacityInBytes offset 0x10
 __declspec(property(get=__get_capacityInBytes, put=__set_capacityInBytes)) int32_t  capacityInBytes;

constexpr void __set_eventBuffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_eventBuffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_eventBuffer() const;

constexpr void __set_eventCount(int32_t  value) ;

constexpr int32_t& __get_eventCount() ;

constexpr int32_t const& __get_eventCount() const;

constexpr void __set_sizeInBytes(int32_t  value) ;

constexpr int32_t& __get_sizeInBytes() ;

constexpr int32_t const& __get_sizeInBytes() const;

constexpr void __set_capacityInBytes(int32_t  value) ;

constexpr int32_t& __get_capacityInBytes() ;

constexpr int32_t const& __get_capacityInBytes() const;

// Ctor Parameters [CppParam { name: "eventBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "eventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capacityInBytes", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputEventBuffer(::cordl_internals::Ptr<void>  eventBuffer, int32_t  eventCount, int32_t  sizeInBytes, int32_t  capacityInBytes) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeInputEventBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeInputEventBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEventBuffer, 0x14>, "Size mismatch!");

} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEventBuffer, "UnityEngineInternal.Input", "NativeInputEventBuffer");
