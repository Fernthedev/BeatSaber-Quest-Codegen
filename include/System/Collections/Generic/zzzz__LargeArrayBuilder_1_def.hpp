#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LargeArrayBuilder_1)
namespace System::Collections::Generic {
template<typename T>
struct ArrayBuilder_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct LargeArrayBuilder_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct LargeArrayBuilder_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::LargeArrayBuilder_1);
// Type: System.Collections.Generic::LargeArrayBuilder`1
// Type: System.Collections.Generic::LargeArrayBuilder`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3847))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3847), inst: 2 })
// CS Name: ::System.Collections.Generic::LargeArrayBuilder`1<T>
struct CORDL_TYPE LargeArrayBuilder_1<T> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field _maxCapacity offset 0x0
 __declspec(property(get=__get__maxCapacity, put=__set__maxCapacity)) int32_t  _maxCapacity;

/// @brief Field _first offset 0x8
 __declspec(property(get=__get__first, put=__set__first)) ::ArrayW<T,::Array<T>*>  _first;

/// @brief Field _buffers offset 0x10
 __declspec(property(get=__get__buffers, put=__set__buffers)) ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>  _buffers;

/// @brief Field _current offset 0x20
 __declspec(property(get=__get__current, put=__set__current)) ::ArrayW<T,::Array<T>*>  _current;

/// @brief Field _index offset 0x28
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _count offset 0x2c
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

constexpr void __set__maxCapacity(int32_t  value) ;

constexpr int32_t& __get__maxCapacity() ;

constexpr int32_t const& __get__maxCapacity() const;

constexpr void __set__first(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__first() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__first() const;

constexpr void __set__buffers(::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>  value) ;

constexpr ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>& __get__buffers() ;

constexpr ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>> const& __get__buffers() const;

constexpr void __set__current(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__current() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__current() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  initialize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxCapacity) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddRange(::System::Collections::Generic::IEnumerable_1<T>*  items) ;

/// @brief Method AddWithBufferAllocation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddWithBufferAllocation(T  item, ByRef<::ArrayW<T,::Array<T>*>>  destination, ByRef<int32_t>  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method GetBuffer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> GetBuffer(int32_t  index) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> ToArray() ;

/// @brief Method TryMove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryMove(ByRef<::ArrayW<T,::Array<T>*>>  array) ;

/// @brief Method AllocateBuffer addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AllocateBuffer() ;

// Ctor Parameters [CppParam { name: "_maxCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_first", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_buffers", ty: "::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LargeArrayBuilder_1(int32_t  _maxCapacity, ::ArrayW<T,::Array<T>*>  _first, ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>  _buffers, ::ArrayW<T,::Array<T>*>  _current, int32_t  _index, int32_t  _count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LargeArrayBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LargeArrayBuilder_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::LargeArrayBuilder_1, "System.Collections.Generic", "LargeArrayBuilder`1");
