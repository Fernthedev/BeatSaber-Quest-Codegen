#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncLocalValueChangedArgs_1)
// Forward declare root types
namespace System::Threading {
template<typename T>
struct AsyncLocalValueChangedArgs_1;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
struct AsyncLocalValueChangedArgs_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Threading::AsyncLocalValueChangedArgs_1);
// Type: System.Threading::AsyncLocalValueChangedArgs`1
// Type: System.Threading::AsyncLocalValueChangedArgs`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2659))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2659), inst: 2 })
// CS Name: ::System.Threading::AsyncLocalValueChangedArgs`1<T>
struct CORDL_TYPE AsyncLocalValueChangedArgs_1<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <PreviousValue>k__BackingField offset 0x0
 __declspec(property(get=__get__PreviousValue_k__BackingField, put=__set__PreviousValue_k__BackingField)) T  _PreviousValue_k__BackingField;

/// @brief Field <CurrentValue>k__BackingField offset 0x8
 __declspec(property(get=__get__CurrentValue_k__BackingField, put=__set__CurrentValue_k__BackingField)) T  _CurrentValue_k__BackingField;

/// @brief Field <ThreadContextChanged>k__BackingField offset 0x10
 __declspec(property(get=__get__ThreadContextChanged_k__BackingField, put=__set__ThreadContextChanged_k__BackingField)) bool  _ThreadContextChanged_k__BackingField;

 __declspec(property(get=get_CurrentValue)) T  CurrentValue;

constexpr void __set__PreviousValue_k__BackingField(T  value) ;

constexpr T& __get__PreviousValue_k__BackingField() ;

constexpr T const& __get__PreviousValue_k__BackingField() const;

constexpr void __set__CurrentValue_k__BackingField(T  value) ;

constexpr T& __get__CurrentValue_k__BackingField() ;

constexpr T const& __get__CurrentValue_k__BackingField() const;

constexpr void __set__ThreadContextChanged_k__BackingField(bool  value) ;

constexpr bool& __get__ThreadContextChanged_k__BackingField() ;

constexpr bool const& __get__ThreadContextChanged_k__BackingField() const;

/// @brief Method get_CurrentValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_CurrentValue() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  previousValue, T  currentValue, bool  contextChanged) ;

// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncLocalValueChangedArgs_1(T  _PreviousValue_k__BackingField, T  _CurrentValue_k__BackingField, bool  _ThreadContextChanged_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncLocalValueChangedArgs_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncLocalValueChangedArgs_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::AsyncLocalValueChangedArgs_1, "System.Threading", "AsyncLocalValueChangedArgs`1");
