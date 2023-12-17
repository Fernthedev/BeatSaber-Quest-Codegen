#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueChangedBinder_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace HMUI {
template<typename T>
class IValueChanger_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class ValueChangedBinder_1;
}
namespace HMUI {
template<::il2cpp_utils::il2cpp_reference_type T>
class ValueChangedBinder_1<T>;
}
namespace HMUI {
template<>
class ValueChangedBinder_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HMUI::ValueChangedBinder_1);
// Type: HMUI::ValueChangedBinder`1
// Type: HMUI::ValueChangedBinder`1
namespace HMUI {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13524)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13524), inst: 98 })
// CS Name: ::HMUI::ValueChangedBinder`1<T>*
class CORDL_TYPE ValueChangedBinder_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _bindings offset 0x10
 __declspec(property(get=__get__bindings, put=__set__bindings)) ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>*  _bindings;

constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>* __get__bindings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>*> __get__bindings() const;

static inline ::HMUI::ValueChangedBinder_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::HMUI::ValueChangedBinder_1<int32_t>* New_ctor(::HMUI::IValueChanger_1<int32_t>*  valueChanger, ::System::Action_1<int32_t>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::HMUI::IValueChanger_1<int32_t>*  valueChanger, ::System::Action_1<int32_t>*  action) ;

static inline ::HMUI::ValueChangedBinder_1<int32_t>* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>*  bindingData) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>*  bindingData) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init() ;

/// @brief Method AddBindings addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<int32_t>*,::System::Action_1<int32_t>*>*>*  bindingData) ;

/// @brief Method AddBinding addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBinding(::HMUI::IValueChanger_1<int32_t>*  valueChanger, ::System::Action_1<int32_t>*  action) ;

/// @brief Method ClearBindings addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearBindings() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueChangedBinder_1(ValueChangedBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueChangedBinder_1(ValueChangedBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueChangedBinder_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ValueChangedBinder`1
namespace HMUI {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13524)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13524), inst: 2 })
// CS Name: ::HMUI::ValueChangedBinder`1<T>*
class CORDL_TYPE ValueChangedBinder_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _bindings offset 0x10
 __declspec(property(get=__get__bindings, put=__set__bindings)) ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>*  _bindings;

constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>* __get__bindings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>*> __get__bindings() const;

static inline ::HMUI::ValueChangedBinder_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::HMUI::ValueChangedBinder_1<T>* New_ctor(::HMUI::IValueChanger_1<T>*  valueChanger, ::System::Action_1<T>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::HMUI::IValueChanger_1<T>*  valueChanger, ::System::Action_1<T>*  action) ;

static inline ::HMUI::ValueChangedBinder_1<T>* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>*  bindingData) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>*  bindingData) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init() ;

/// @brief Method AddBindings addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::IValueChanger_1<T>*,::System::Action_1<T>*>*>*  bindingData) ;

/// @brief Method AddBinding addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBinding(::HMUI::IValueChanger_1<T>*  valueChanger, ::System::Action_1<T>*  action) ;

/// @brief Method ClearBindings addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearBindings() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueChangedBinder_1(ValueChangedBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueChangedBinder_1(ValueChangedBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueChangedBinder_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::ValueChangedBinder_1, "HMUI", "ValueChangedBinder`1");
