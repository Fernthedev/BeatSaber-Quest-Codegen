#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObservableVariable_1)
namespace GlobalNamespace {
class IObservableChange;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename T>
class IValue_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ObservableVariable_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class ObservableVariable_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ObservableVariable_1);
// Type: ::ObservableVariable`1
// Type: ::ObservableVariable`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15868))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15868), inst: 2 })
// CS Name: ::ObservableVariable`1<T>*
class CORDL_TYPE ObservableVariable_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field didChangeEvent offset 0x10
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x18
 __declspec(property(get=__get__value, put=__set__value)) T  _value;

 __declspec(property(get=get_value, put=set_value)) T  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
constexpr operator  ::GlobalNamespace::IValue_1<T>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(T  value) ;

constexpr T& __get__value() ;

constexpr T const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(T  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T op_Implicit_T(::GlobalNamespace::ObservableVariable_1<T>*  obj) ;

static inline ::GlobalNamespace::ObservableVariable_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariable_1(ObservableVariable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariable_1(ObservableVariable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariable_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ObservableVariable_1, "", "ObservableVariable`1");
