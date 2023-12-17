#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueUtf8Converter)
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
struct ValueUtf8Converter;
}
// Write type traits
MARK_VAL_T(::System::Text::ValueUtf8Converter);
// Type: System.Text::ValueUtf8Converter
namespace System::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2869))
// CS Name: ::System.Text::ValueUtf8Converter
struct CORDL_TYPE ValueUtf8Converter : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _arrayToReturnToPool offset 0x0
 __declspec(property(get=__get__arrayToReturnToPool, put=__set__arrayToReturnToPool)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _arrayToReturnToPool;

/// @brief Field _bytes offset 0x8
 __declspec(property(get=__get__bytes, put=__set__bytes)) ::System::Span_1<uint8_t>  _bytes;

constexpr void __set__arrayToReturnToPool(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__arrayToReturnToPool() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__arrayToReturnToPool() const;

constexpr void __set__bytes(::System::Span_1<uint8_t>  value) ;

constexpr ::System::Span_1<uint8_t>& __get__bytes() ;

constexpr ::System::Span_1<uint8_t> const& __get__bytes() const;

/// @brief Method .ctor addr 0x2449a58 size 0xc virtual false final false
inline void _ctor(::System::Span_1<uint8_t>  initialBuffer) ;

/// @brief Method ConvertAndTerminateString addr 0x2449a64 size 0x224 virtual false final false
inline ::System::Span_1<uint8_t> ConvertAndTerminateString(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method Dispose addr 0x2449d34 size 0xf4 virtual false final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_bytes", ty: "::System::Span_1<uint8_t>", modifiers: "", def_value: None }]
constexpr ValueUtf8Converter(::ArrayW<uint8_t,::Array<uint8_t>*>  _arrayToReturnToPool, ::System::Span_1<uint8_t>  _bytes) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueUtf8Converter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueUtf8Converter()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::ValueUtf8Converter, 0x18>, "Size mismatch!");

} // namespace end def System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueUtf8Converter, "System.Text", "ValueUtf8Converter");
