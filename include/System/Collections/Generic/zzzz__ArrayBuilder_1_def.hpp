#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayBuilder_1)
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct ArrayBuilder_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ArrayBuilder_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::ArrayBuilder_1);
// Type: System.Collections.Generic::ArrayBuilder`1
// Type: System.Collections.Generic::ArrayBuilder`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3845))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3845), inst: 2 })
// CS Name: ::System.Collections.Generic::ArrayBuilder`1<T>
struct CORDL_TYPE ArrayBuilder_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _array offset 0x0
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _count offset 0x8
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Item(int32_t  index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(T  item) ;

/// @brief Method UncheckedAdd addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UncheckedAdd(T  item) ;

/// @brief Method EnsureCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void EnsureCapacity(int32_t  minimum) ;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArrayBuilder_1(::ArrayW<T,::Array<T>*>  _array, int32_t  _count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ArrayBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ArrayBuilder_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::ArrayBuilder_1, "System.Collections.Generic", "ArrayBuilder`1");
