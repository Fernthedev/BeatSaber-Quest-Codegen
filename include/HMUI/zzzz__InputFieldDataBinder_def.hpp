#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputFieldDataBinder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace HMUI {
template<typename T>
class __InputFieldDataBinder____c__3_1;
}
namespace HMUI {
template<typename T0,typename T1>
class __InputFieldDataBinder____c__DisplayClass2_0_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace GlobalNamespace {
class IObservableChange;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class __InputFieldDataBinder____c__3_1;
}
namespace HMUI {
template<typename T0,typename T1>
class __InputFieldDataBinder____c__DisplayClass2_0_2;
}
namespace HMUI {
class InputFieldDataBinder;
}
namespace HMUI {
template<::il2cpp_utils::il2cpp_reference_type T>
class __InputFieldDataBinder____c__3_1<T>;
}
namespace HMUI {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
class __InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HMUI::__InputFieldDataBinder____c__3_1);
MARK_GEN_REF_PTR_T(::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2);
MARK_REF_PTR_T(::HMUI::InputFieldDataBinder);
// Type: ::<>c__DisplayClass2_0`2
// Type: ::<>c__3`1
// Type: HMUI::InputFieldDataBinder
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13514))
// CS Name: ::HMUI::InputFieldDataBinder*
class CORDL_TYPE InputFieldDataBinder : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__3_1 = ::HMUI::__InputFieldDataBinder____c__3_1<T>;

template<typename T0,typename T1>
using __c__DisplayClass2_0_2 = ::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _bindings offset 0x10
 __declspec(property(get=__get__bindings, put=__set__bindings)) ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*  _bindings;

constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>* __get__bindings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*> __get__bindings() const;

static inline ::HMUI::InputFieldDataBinder* New_ctor() ;

/// @brief Method .ctor addr 0x21188d4 size 0x80 virtual false final false
inline void _ctor() ;

/// @brief Method AddBindings addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T0,typename T1>
inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,T0,::System::Func_2<::StringW,T1>*,::System::Func_2<T1,::StringW>*>*>*  bindingData) ;

/// @brief Method AddStringBindings addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void AddStringBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::InputField*,T>*>*  bindingData) ;

/// @brief Method ClearBindings addr 0x2118954 size 0x2c4 virtual false final false
inline void ClearBindings() ;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputFieldDataBinder(InputFieldDataBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputFieldDataBinder(InputFieldDataBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputFieldDataBinder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldDataBinder, 0x18>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass2_0`2
namespace HMUI {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13512))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13512), inst: 81 })
// CS Name: ::InputFieldDataBinder::<>c__DisplayClass2_0`2<T0,T1>*
class CORDL_TYPE __InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field toValueConvertor offset 0x10
 __declspec(property(get=__get_toValueConvertor, put=__set_toValueConvertor)) ::System::Func_2<::StringW,T1>*  toValueConvertor;

/// @brief Field valueItem offset 0x18
 __declspec(property(get=__get_valueItem, put=__set_valueItem)) T0  valueItem;

/// @brief Field inputField offset 0x20
 __declspec(property(get=__get_inputField, put=__set_inputField)) ::UnityEngine::UI::InputField*  inputField;

/// @brief Field toStringConvertor offset 0x28
 __declspec(property(get=__get_toStringConvertor, put=__set_toStringConvertor)) ::System::Func_2<T1,::StringW>*  toStringConvertor;

constexpr void __set_toValueConvertor(::System::Func_2<::StringW,T1>*  value) ;

constexpr ::System::Func_2<::StringW,T1>* __get_toValueConvertor() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW,T1>*> __get_toValueConvertor() const;

constexpr void __set_valueItem(T0  value) ;

constexpr T0& __get_valueItem() ;

constexpr T0 const& __get_valueItem() const;

constexpr void __set_inputField(::UnityEngine::UI::InputField*  value) ;

constexpr ::UnityEngine::UI::InputField* __get_inputField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> __get_inputField() const;

constexpr void __set_toStringConvertor(::System::Func_2<T1,::StringW>*  value) ;

constexpr ::System::Func_2<T1,::StringW>* __get_toStringConvertor() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T1,::StringW>*> __get_toStringConvertor() const;

static inline ::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <AddBindings>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _AddBindings_b__0(::StringW  value) ;

/// @brief Method <AddBindings>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _AddBindings_b__1() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputFieldDataBinder____c__DisplayClass2_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputFieldDataBinder____c__DisplayClass2_0_2(__InputFieldDataBinder____c__DisplayClass2_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputFieldDataBinder____c__DisplayClass2_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputFieldDataBinder____c__DisplayClass2_0_2(__InputFieldDataBinder____c__DisplayClass2_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputFieldDataBinder____c__DisplayClass2_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__3`1
namespace HMUI {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13513))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13513), inst: 2 })
// CS Name: ::InputFieldDataBinder::<>c__3`1<T>*
class CORDL_TYPE __InputFieldDataBinder____c__3_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::HMUI::__InputFieldDataBinder____c__3_1<T>*  value) ;

static inline ::HMUI::__InputFieldDataBinder____c__3_1<T>* getStaticF___9() ;

static inline void setStaticF___9__3_0(::System::Func_2<::StringW,::StringW>*  value) ;

static inline ::System::Func_2<::StringW,::StringW>* getStaticF___9__3_0() ;

static inline ::HMUI::__InputFieldDataBinder____c__3_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <AddStringBindings>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW _AddStringBindings_b__3_0(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputFieldDataBinder____c__3_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputFieldDataBinder____c__3_1(__InputFieldDataBinder____c__3_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputFieldDataBinder____c__3_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputFieldDataBinder____c__3_1(__InputFieldDataBinder____c__3_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputFieldDataBinder____c__3_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__3_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::__InputFieldDataBinder____c__3_1, "HMUI", "InputFieldDataBinder/<>c__3`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2, "HMUI", "InputFieldDataBinder/<>c__DisplayClass2_0`2");
NEED_NO_BOX(::HMUI::InputFieldDataBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldDataBinder*, "HMUI", "InputFieldDataBinder");
