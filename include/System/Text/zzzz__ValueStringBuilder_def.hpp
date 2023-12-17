#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueStringBuilder)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Text {
struct ValueStringBuilder;
}
// Write type traits
MARK_VAL_T(::System::Text::ValueStringBuilder);
// Type: System.Text::ValueStringBuilder
namespace System::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15655))
// CS Name: ::System.Text::ValueStringBuilder
struct CORDL_TYPE ValueStringBuilder : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _arrayToReturnToPool offset 0x0
 __declspec(property(get=__get__arrayToReturnToPool, put=__set__arrayToReturnToPool)) ::ArrayW<char16_t,::Array<char16_t>*>  _arrayToReturnToPool;

/// @brief Field _chars offset 0x8
 __declspec(property(get=__get__chars, put=__set__chars)) ::System::Span_1<char16_t>  _chars;

/// @brief Field _pos offset 0x18
 __declspec(property(get=__get__pos, put=__set__pos)) int32_t  _pos;

 __declspec(property(get=get_Length)) int32_t  Length;

constexpr void __set__arrayToReturnToPool(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__arrayToReturnToPool() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__arrayToReturnToPool() const;

constexpr void __set__chars(::System::Span_1<char16_t>  value) ;

constexpr ::System::Span_1<char16_t>& __get__chars() ;

constexpr ::System::Span_1<char16_t> const& __get__chars() const;

constexpr void __set__pos(int32_t  value) ;

constexpr int32_t& __get__pos() ;

constexpr int32_t const& __get__pos() const;

/// @brief Method .ctor addr 0x2847210 size 0x10 virtual false final false
inline void _ctor(::System::Span_1<char16_t>  initialBuffer) ;

/// @brief Method get_Length addr 0x284bf18 size 0x8 virtual false final false
inline int32_t get_Length() ;

/// @brief Method ToString addr 0x284767c size 0x198 virtual true final false
inline ::StringW ToString() ;

/// @brief Method TryCopyTo addr 0x28473f0 size 0x28c virtual false final false
inline bool TryCopyTo(::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten) ;

/// @brief Method Insert addr 0x2847220 size 0x1d0 virtual false final false
inline void Insert(int32_t  index, char16_t  value, int32_t  count) ;

/// @brief Method Append addr 0x284c164 size 0x7c virtual false final false
inline void Append(char16_t  c) ;

/// @brief Method Append addr 0x284c260 size 0xac virtual false final false
inline void Append(::StringW  s) ;

/// @brief Method AppendSlow addr 0x284c30c size 0x130 virtual false final false
inline void AppendSlow(::StringW  s) ;

/// @brief Method Append addr 0x284aec0 size 0xdc virtual false final false
inline void Append(char16_t  c, int32_t  count) ;

/// @brief Method Append addr 0x284ade0 size 0xe0 virtual false final false
inline void Append(::cordl_internals::Ptr<char16_t>  value, int32_t  length) ;

/// @brief Method AppendSpan addr 0x284c43c size 0xc0 virtual false final false
inline ::System::Span_1<char16_t> AppendSpan(int32_t  length) ;

/// @brief Method GrowAndAppend addr 0x284c1e0 size 0x80 virtual false final false
inline void GrowAndAppend(char16_t  c) ;

/// @brief Method Grow addr 0x284bf20 size 0x244 virtual false final false
inline void Grow(int32_t  requiredAdditionalCapacity) ;

/// @brief Method Dispose addr 0x284c4fc size 0x10f8 virtual false final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_chars", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueStringBuilder(::ArrayW<char16_t,::Array<char16_t>*>  _arrayToReturnToPool, ::System::Span_1<char16_t>  _chars, int32_t  _pos) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueStringBuilder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueStringBuilder()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::ValueStringBuilder, 0x20>, "Size mismatch!");

} // namespace end def System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueStringBuilder, "System.Text", "ValueStringBuilder");
