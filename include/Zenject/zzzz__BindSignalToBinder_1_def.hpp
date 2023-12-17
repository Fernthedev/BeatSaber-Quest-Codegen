#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BindSignalToBinder_1)
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass9_0_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass8_1_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TSignal>
class __BindSignalToBinder_1____c__DisplayClass7_0;
}
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
template<typename TSignal>
class __BindSignalToBinder_1____c__DisplayClass6_0;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class BindStatement;
}
namespace System {
class Action;
}
namespace Zenject {
template<typename TObject,typename TSignal>
class BindSignalFromBinder_2;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass8_0_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass9_1_1;
}
// Forward declare root types
namespace Zenject {
template<typename TSignal>
class BindSignalToBinder_1;
}
namespace Zenject {
template<typename TSignal>
class __BindSignalToBinder_1____c__DisplayClass6_0;
}
namespace Zenject {
template<typename TSignal>
class __BindSignalToBinder_1____c__DisplayClass7_0;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass8_0_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass8_1_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass9_0_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class __BindSignalToBinder_1____c__DisplayClass9_1_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal>
class BindSignalToBinder_1<TSignal>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal>
class __BindSignalToBinder_1____c__DisplayClass6_0<TSignal>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal>
class __BindSignalToBinder_1____c__DisplayClass7_0<TSignal>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
class __BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
class __BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal,TObject>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
class __BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
class __BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal,TObject>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1);
// Type: ::<>c__DisplayClass6_0
// Type: ::<>c__DisplayClass7_0
// Type: ::<>c__DisplayClass8_0`1
// Type: ::<>c__DisplayClass8_1`1
// Type: ::<>c__DisplayClass9_0`1
// Type: ::<>c__DisplayClass9_1`1
// Type: Zenject::BindSignalToBinder`1
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10641)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10641), inst: 2 })
// CS Name: ::BindSignalToBinder`1::<>c__DisplayClass6_0<TSignal>*
class CORDL_TYPE __BindSignalToBinder_1____c__DisplayClass6_0<TSignal> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field callback offset 0x10
 __declspec(property(get=__get_callback, put=__set_callback)) ::System::Action_1<TSignal>*  callback;

constexpr void __set_callback(::System::Action_1<TSignal>*  value) ;

constexpr ::System::Action_1<TSignal>* __get_callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TSignal>*> __get_callback() const;

static inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ToMethod_b__0(::System::Object*  o) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BindSignalToBinder_1____c__DisplayClass6_0(__BindSignalToBinder_1____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BindSignalToBinder_1____c__DisplayClass6_0(__BindSignalToBinder_1____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BindSignalToBinder_1____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass7_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10642)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10642), inst: 2 })
// CS Name: ::BindSignalToBinder`1::<>c__DisplayClass7_0<TSignal>*
class CORDL_TYPE __BindSignalToBinder_1____c__DisplayClass7_0<TSignal> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field callback offset 0x10
 __declspec(property(get=__get_callback, put=__set_callback)) ::System::Action*  callback;

constexpr void __set_callback(::System::Action*  value) ;

constexpr ::System::Action* __get_callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_callback() const;

static inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ToMethod_b__0(TSignal  signal) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BindSignalToBinder_1____c__DisplayClass7_0(__BindSignalToBinder_1____c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BindSignalToBinder_1____c__DisplayClass7_0(__BindSignalToBinder_1____c__DisplayClass7_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BindSignalToBinder_1____c__DisplayClass7_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10643)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10643), inst: 81 })
// CS Name: ::BindSignalToBinder`1::<>c__DisplayClass8_0`1<TSignal,TObject>*
class CORDL_TYPE __BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field handler offset 0x10
 __declspec(property(get=__get_handler, put=__set_handler)) ::System::Action_2<TObject,TSignal>*  handler;

constexpr void __set_handler(::System::Action_2<TObject,TSignal>*  value) ;

constexpr ::System::Action_2<TObject,TSignal>* __get_handler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TObject,TSignal>*> __get_handler() const;

static inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action_1<TSignal>* _ToMethod_b__0(TObject  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BindSignalToBinder_1____c__DisplayClass8_0_1(__BindSignalToBinder_1____c__DisplayClass8_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass8_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BindSignalToBinder_1____c__DisplayClass8_0_1(__BindSignalToBinder_1____c__DisplayClass8_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BindSignalToBinder_1____c__DisplayClass8_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_1`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10644)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10644), inst: 81 })
// CS Name: ::BindSignalToBinder`1::<>c__DisplayClass8_1`1<TSignal,TObject>*
class CORDL_TYPE __BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal,TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) TObject  x;

/// @brief Field CS$<>8__locals1 offset 0x18
 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1)) ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>*  CS$__8__locals1;

constexpr void __set_x(TObject  value) ;

constexpr TObject& __get_x() ;

constexpr TObject const& __get_x() const;

constexpr void __set_CS$__8__locals1(::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>*  value) ;

constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>* __get_CS$__8__locals1() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>*> __get_CS$__8__locals1() const;

static inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal,TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToMethod>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ToMethod_b__1(TSignal  s) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass8_1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BindSignalToBinder_1____c__DisplayClass8_1_1(__BindSignalToBinder_1____c__DisplayClass8_1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass8_1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BindSignalToBinder_1____c__DisplayClass8_1_1(__BindSignalToBinder_1____c__DisplayClass8_1_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BindSignalToBinder_1____c__DisplayClass8_1_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass9_0`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10645)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10645), inst: 81 })
// CS Name: ::BindSignalToBinder`1::<>c__DisplayClass9_0`1<TSignal,TObject>*
class CORDL_TYPE __BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field handlerGetter offset 0x10
 __declspec(property(get=__get_handlerGetter, put=__set_handlerGetter)) ::System::Func_2<TObject,::System::Action*>*  handlerGetter;

constexpr void __set_handlerGetter(::System::Func_2<TObject,::System::Action*>*  value) ;

constexpr ::System::Func_2<TObject,::System::Action*>* __get_handlerGetter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObject,::System::Action*>*> __get_handlerGetter() const;

static inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action_1<TSignal>* _ToMethod_b__0(TObject  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass9_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BindSignalToBinder_1____c__DisplayClass9_0_1(__BindSignalToBinder_1____c__DisplayClass9_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass9_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BindSignalToBinder_1____c__DisplayClass9_0_1(__BindSignalToBinder_1____c__DisplayClass9_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BindSignalToBinder_1____c__DisplayClass9_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass9_1`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal,::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10646))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10646), inst: 81 })
// CS Name: ::BindSignalToBinder`1::<>c__DisplayClass9_1`1<TSignal,TObject>*
class CORDL_TYPE __BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal,TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) TObject  x;

/// @brief Field CS$<>8__locals1 offset 0x18
 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1)) ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>*  CS$__8__locals1;

constexpr void __set_x(TObject  value) ;

constexpr TObject& __get_x() ;

constexpr TObject const& __get_x() const;

constexpr void __set_CS$__8__locals1(::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>*  value) ;

constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>* __get_CS$__8__locals1() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>*> __get_CS$__8__locals1() const;

static inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal,TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToMethod>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ToMethod_b__1(TSignal  s) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass9_1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BindSignalToBinder_1____c__DisplayClass9_1_1(__BindSignalToBinder_1____c__DisplayClass9_1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BindSignalToBinder_1____c__DisplayClass9_1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BindSignalToBinder_1____c__DisplayClass9_1_1(__BindSignalToBinder_1____c__DisplayClass9_1_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BindSignalToBinder_1____c__DisplayClass9_1_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::BindSignalToBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10647))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10647), inst: 2 })
// CS Name: ::Zenject::BindSignalToBinder`1<TSignal>*
class CORDL_TYPE BindSignalToBinder_1<TSignal> : public ::System::Object {
public:
// Declarations
template<typename TObject>
using __c__DisplayClass9_1_1 = ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>;

template<typename TObject>
using __c__DisplayClass9_0_1 = ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>;

template<typename TObject>
using __c__DisplayClass8_1_1 = ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>;

template<typename TObject>
using __c__DisplayClass8_0_1 = ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>;

using __c__DisplayClass7_0 = ::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>;

using __c__DisplayClass6_0 = ::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _bindStatement offset 0x18
 __declspec(property(get=__get__bindStatement, put=__set__bindStatement)) ::Zenject::BindStatement*  _bindStatement;

/// @brief Field _signalBindInfo offset 0x20
 __declspec(property(get=__get__signalBindInfo, put=__set__signalBindInfo)) ::Zenject::SignalBindingBindInfo*  _signalBindInfo;

 __declspec(property(get=get_SignalBindInfo)) ::Zenject::SignalBindingBindInfo*  SignalBindInfo;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__bindStatement(::Zenject::BindStatement*  value) ;

constexpr ::Zenject::BindStatement* __get__bindStatement() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::BindStatement*> __get__bindStatement() const;

constexpr void __set__signalBindInfo(::Zenject::SignalBindingBindInfo*  value) ;

constexpr ::Zenject::SignalBindingBindInfo* __get__signalBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBindingBindInfo*> __get__signalBindInfo() const;

static inline ::Zenject::BindSignalToBinder_1<TSignal>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SignalBindingBindInfo*  signalBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SignalBindingBindInfo*  signalBindInfo) ;

/// @brief Method get_SignalBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::SignalBindingBindInfo* get_SignalBindInfo() ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::SignalCopyBinder* ToMethod(::System::Action_1<TSignal>*  callback) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::SignalCopyBinder* ToMethod(::System::Action*  callback) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::Zenject::BindSignalFromBinder_2<TObject,TSignal>* ToMethod(::System::Action_2<TObject,TSignal>*  handler) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::Zenject::BindSignalFromBinder_2<TObject,TSignal>* ToMethod(::System::Func_2<TObject,::System::Action*>*  handlerGetter) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::Zenject::BindSignalFromBinder_2<TObject,TSignal>* ToMethod(::System::Func_2<TObject,::System::Action_1<TSignal>*>*  handlerGetter) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BindSignalToBinder_1(BindSignalToBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindSignalToBinder_1(BindSignalToBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BindSignalToBinder_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1, "Zenject", "BindSignalToBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass8_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass8_1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass9_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass9_1`1");
