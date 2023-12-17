#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueListBuilder_1)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ValueListBuilder_1<T>;
}
namespace System::Collections::Generic {
template<>
struct ValueListBuilder_1<int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::ValueListBuilder_1);
// Type: System.Collections.Generic::ValueListBuilder`1
// Type: System.Collections.Generic::ValueListBuilder`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3844))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3844), inst: 98 })
// CS Name: ::System.Collections.Generic::ValueListBuilder`1<T>
struct CORDL_TYPE ValueListBuilder_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _span offset 0x0
 __declspec(property(get=__get__span, put=__set__span)) ::System::Span_1<int32_t>  _span;

/// @brief Field _arrayFromPool offset 0x10
 __declspec(property(get=__get__arrayFromPool, put=__set__arrayFromPool)) ::ArrayW<int32_t,::Array<int32_t>*>  _arrayFromPool;

/// @brief Field _pos offset 0x18
 __declspec(property(get=__get__pos, put=__set__pos)) int32_t  _pos;

 __declspec(property(get=get_Length)) int32_t  Length;

constexpr void __set__span(::System::Span_1<int32_t>  value) ;

constexpr ::System::Span_1<int32_t>& __get__span() ;

constexpr ::System::Span_1<int32_t> const& __get__span() const;

constexpr void __set__arrayFromPool(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__arrayFromPool() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__arrayFromPool() const;

constexpr void __set__pos(int32_t  value) ;

constexpr int32_t& __get__pos() ;

constexpr int32_t const& __get__pos() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Span_1<int32_t>  initialSpan) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(int32_t  item) ;

/// @brief Method AsSpan addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<int32_t> AsSpan() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Dispose() ;

/// @brief Method Grow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Grow() ;

// Ctor Parameters [CppParam { name: "_span", ty: "::System::Span_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueListBuilder_1(::System::Span_1<int32_t>  _span, ::ArrayW<int32_t,::Array<int32_t>*>  _arrayFromPool, int32_t  _pos) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueListBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueListBuilder_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::ValueListBuilder`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3844))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3844), inst: 2 })
// CS Name: ::System.Collections.Generic::ValueListBuilder`1<T>
struct CORDL_TYPE ValueListBuilder_1<T> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _span offset 0x0
 __declspec(property(get=__get__span, put=__set__span)) ::System::Span_1<T>  _span;

/// @brief Field _arrayFromPool offset 0x10
 __declspec(property(get=__get__arrayFromPool, put=__set__arrayFromPool)) ::ArrayW<T,::Array<T>*>  _arrayFromPool;

/// @brief Field _pos offset 0x18
 __declspec(property(get=__get__pos, put=__set__pos)) int32_t  _pos;

 __declspec(property(get=get_Length)) int32_t  Length;

constexpr void __set__span(::System::Span_1<T>  value) ;

constexpr ::System::Span_1<T>& __get__span() ;

constexpr ::System::Span_1<T> const& __get__span() const;

constexpr void __set__arrayFromPool(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__arrayFromPool() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__arrayFromPool() const;

constexpr void __set__pos(int32_t  value) ;

constexpr int32_t& __get__pos() ;

constexpr int32_t const& __get__pos() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Span_1<T>  initialSpan) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(T  item) ;

/// @brief Method AsSpan addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<T> AsSpan() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Dispose() ;

/// @brief Method Grow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Grow() ;

// Ctor Parameters [CppParam { name: "_span", ty: "::System::Span_1<T>", modifiers: "", def_value: None }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueListBuilder_1(::System::Span_1<T>  _span, ::ArrayW<T,::Array<T>*>  _arrayFromPool, int32_t  _pos) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueListBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueListBuilder_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::ValueListBuilder_1, "System.Collections.Generic", "ValueListBuilder`1");
