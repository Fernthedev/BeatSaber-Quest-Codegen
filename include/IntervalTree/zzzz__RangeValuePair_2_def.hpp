#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RangeValuePair_2)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace IntervalTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct RangeValuePair_2<TKey,TValue>;
}
// Write type traits
MARK_GEN_VAL_T(::IntervalTree::RangeValuePair_2);
// Type: IntervalTree::RangeValuePair`2
// Type: IntervalTree::RangeValuePair`2
namespace IntervalTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16135))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16135), inst: 81 })
// CS Name: ::IntervalTree::RangeValuePair`2<TKey,TValue>
struct CORDL_TYPE RangeValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <From>k__BackingField offset 0x0
 __declspec(property(get=__get__From_k__BackingField, put=__set__From_k__BackingField)) TKey  _From_k__BackingField;

/// @brief Field <To>k__BackingField offset 0x8
 __declspec(property(get=__get__To_k__BackingField, put=__set__To_k__BackingField)) TKey  _To_k__BackingField;

/// @brief Field <Value>k__BackingField offset 0x10
 __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField)) TValue  _Value_k__BackingField;

 __declspec(property(get=get_From)) TKey  From;

 __declspec(property(get=get_To)) TKey  To;

 __declspec(property(get=get_Value)) TValue  Value;

/// @brief Convert operator to "::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
constexpr operator  ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>*() ;

constexpr void __set__From_k__BackingField(TKey  value) ;

constexpr TKey& __get__From_k__BackingField() ;

constexpr TKey const& __get__From_k__BackingField() const;

constexpr void __set__To_k__BackingField(TKey  value) ;

constexpr TKey& __get__To_k__BackingField() ;

constexpr TKey const& __get__To_k__BackingField() const;

constexpr void __set__Value_k__BackingField(TValue  value) ;

constexpr TValue& __get__Value_k__BackingField() ;

constexpr TValue const& __get__Value_k__BackingField() const;

/// @brief Method get_From addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_From() ;

/// @brief Method get_To addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_To() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Value() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  from, TKey  to, TValue  value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::IntervalTree::RangeValuePair_2<TKey,TValue>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::IntervalTree::RangeValuePair_2<TKey,TValue>  left, ::IntervalTree::RangeValuePair_2<TKey,TValue>  right) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::IntervalTree::RangeValuePair_2<TKey,TValue>  left, ::IntervalTree::RangeValuePair_2<TKey,TValue>  right) ;

// Ctor Parameters [CppParam { name: "_From_k__BackingField", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "_To_k__BackingField", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "TValue", modifiers: "", def_value: None }]
constexpr RangeValuePair_2(TKey  _From_k__BackingField, TKey  _To_k__BackingField, TValue  _Value_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RangeValuePair_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RangeValuePair_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::IntervalTree::RangeValuePair_2, "IntervalTree", "RangeValuePair`2");
