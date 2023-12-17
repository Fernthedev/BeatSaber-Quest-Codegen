#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MainThreadDispatcher)
namespace GlobalNamespace {
template<typename A,typename B>
class __MainThreadDispatcher____c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template<typename A>
class __MainThreadDispatcher____c__DisplayClass2_0_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename A,typename B,typename C>
class __MainThreadDispatcher____c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template<typename A,typename B,typename C,typename D>
class __MainThreadDispatcher____c__DisplayClass5_0_4;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace Zenject {
class ITickable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename A>
class __MainThreadDispatcher____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
template<typename A,typename B>
class __MainThreadDispatcher____c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template<typename A,typename B,typename C>
class __MainThreadDispatcher____c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template<typename A,typename B,typename C,typename D>
class __MainThreadDispatcher____c__DisplayClass5_0_4;
}
namespace GlobalNamespace {
class MainThreadDispatcher;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type A>
class __MainThreadDispatcher____c__DisplayClass2_0_1<A>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
class __MainThreadDispatcher____c__DisplayClass3_0_2<A,B>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
class __MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
class __MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4);
MARK_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher);
// Type: ::<>c__DisplayClass2_0`1
// Type: ::<>c__DisplayClass3_0`2
// Type: ::<>c__DisplayClass4_0`3
// Type: ::<>c__DisplayClass5_0`4
// Type: ::MainThreadDispatcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5374))
// CS Name: ::MainThreadDispatcher*
class CORDL_TYPE MainThreadDispatcher : public ::System::Object {
public:
// Declarations
template<typename A,typename B,typename C,typename D>
using __c__DisplayClass5_0_4 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>;

template<typename A,typename B,typename C>
using __c__DisplayClass4_0_3 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>;

template<typename A,typename B>
using __c__DisplayClass3_0_2 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>;

template<typename A>
using __c__DisplayClass2_0_1 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _dispatchQueue offset 0x10
 __declspec(property(get=__get__dispatchQueue, put=__set__dispatchQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*  _dispatchQueue;

/// @brief Convert operator to "::Zenject::ITickable"
constexpr operator  ::Zenject::ITickable*() noexcept;

constexpr void __set__dispatchQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*  value) ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* __get__dispatchQueue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*> __get__dispatchQueue() const;

/// @brief Method DispatchOnMainThread addr 0x226ca44 size 0x58 virtual false final false
inline void DispatchOnMainThread(::System::Action*  action) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A>
inline void DispatchOnMainThread(::System::Action_1<A>*  action, A  firstParameter) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A,typename B>
inline void DispatchOnMainThread(::System::Action_2<A,B>*  action, A  firstParameter, B  secondParameter) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A,typename B,typename C>
inline void DispatchOnMainThread(::System::Action_3<A,B,C>*  action, A  firstParameter, B  secondParameter, C  thirdParameter) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A,typename B,typename C,typename D>
inline void DispatchOnMainThread(::System::Action_4<A,B,C,D>*  action, A  firstParameter, B  secondParameter, C  thirdParameter, D  fourthParameter) ;

/// @brief Method Tick addr 0x226ca9c size 0x104 virtual true final true
inline void Tick() ;

static inline ::GlobalNamespace::MainThreadDispatcher* New_ctor() ;

/// @brief Method .ctor addr 0x226cba0 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher(MainThreadDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher(MainThreadDispatcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainThreadDispatcher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainThreadDispatcher, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type A>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5370)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5370), inst: 2 })
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass2_0`1<A>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass2_0_1<A> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field action offset 0x10
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action_1<A>*  action;

/// @brief Field firstParameter offset 0x18
 __declspec(property(get=__get_firstParameter, put=__set_firstParameter)) A  firstParameter;

constexpr void __set_action(::System::Action_1<A>*  value) ;

constexpr ::System::Action_1<A>* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<A>*> __get_action() const;

constexpr void __set_firstParameter(A  value) ;

constexpr A& __get_firstParameter() ;

constexpr A const& __get_firstParameter() const;

static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _DispatchOnMainThread_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MainThreadDispatcher____c__DisplayClass2_0_1(__MainThreadDispatcher____c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MainThreadDispatcher____c__DisplayClass2_0_1(__MainThreadDispatcher____c__DisplayClass2_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MainThreadDispatcher____c__DisplayClass2_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5371))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5371), inst: 81 })
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass3_0`2<A,B>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass3_0_2<A,B> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field action offset 0x10
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action_2<A,B>*  action;

/// @brief Field firstParameter offset 0x18
 __declspec(property(get=__get_firstParameter, put=__set_firstParameter)) A  firstParameter;

/// @brief Field secondParameter offset 0x20
 __declspec(property(get=__get_secondParameter, put=__set_secondParameter)) B  secondParameter;

constexpr void __set_action(::System::Action_2<A,B>*  value) ;

constexpr ::System::Action_2<A,B>* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<A,B>*> __get_action() const;

constexpr void __set_firstParameter(A  value) ;

constexpr A& __get_firstParameter() ;

constexpr A const& __get_firstParameter() const;

constexpr void __set_secondParameter(B  value) ;

constexpr B& __get_secondParameter() ;

constexpr B const& __get_secondParameter() const;

static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _DispatchOnMainThread_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass3_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MainThreadDispatcher____c__DisplayClass3_0_2(__MainThreadDispatcher____c__DisplayClass3_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass3_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MainThreadDispatcher____c__DisplayClass3_0_2(__MainThreadDispatcher____c__DisplayClass3_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MainThreadDispatcher____c__DisplayClass3_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0`3
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5372))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5372), inst: 5330 })
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass4_0`3<A,B,C>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field action offset 0x10
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action_3<A,B,C>*  action;

/// @brief Field firstParameter offset 0x18
 __declspec(property(get=__get_firstParameter, put=__set_firstParameter)) A  firstParameter;

/// @brief Field secondParameter offset 0x20
 __declspec(property(get=__get_secondParameter, put=__set_secondParameter)) B  secondParameter;

/// @brief Field thirdParameter offset 0x28
 __declspec(property(get=__get_thirdParameter, put=__set_thirdParameter)) C  thirdParameter;

constexpr void __set_action(::System::Action_3<A,B,C>*  value) ;

constexpr ::System::Action_3<A,B,C>* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<A,B,C>*> __get_action() const;

constexpr void __set_firstParameter(A  value) ;

constexpr A& __get_firstParameter() ;

constexpr A const& __get_firstParameter() const;

constexpr void __set_secondParameter(B  value) ;

constexpr B& __get_secondParameter() ;

constexpr B const& __get_secondParameter() const;

constexpr void __set_thirdParameter(C  value) ;

constexpr C& __get_thirdParameter() ;

constexpr C const& __get_thirdParameter() const;

static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _DispatchOnMainThread_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass4_0_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MainThreadDispatcher____c__DisplayClass4_0_3(__MainThreadDispatcher____c__DisplayClass4_0_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass4_0_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MainThreadDispatcher____c__DisplayClass4_0_3(__MainThreadDispatcher____c__DisplayClass4_0_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MainThreadDispatcher____c__DisplayClass4_0_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0`4
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5373)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5373), inst: 6124 })
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass5_0`4<A,B,C,D>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field action offset 0x10
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action_4<A,B,C,D>*  action;

/// @brief Field firstParameter offset 0x18
 __declspec(property(get=__get_firstParameter, put=__set_firstParameter)) A  firstParameter;

/// @brief Field secondParameter offset 0x20
 __declspec(property(get=__get_secondParameter, put=__set_secondParameter)) B  secondParameter;

/// @brief Field thirdParameter offset 0x28
 __declspec(property(get=__get_thirdParameter, put=__set_thirdParameter)) C  thirdParameter;

/// @brief Field fourthParameter offset 0x30
 __declspec(property(get=__get_fourthParameter, put=__set_fourthParameter)) D  fourthParameter;

constexpr void __set_action(::System::Action_4<A,B,C,D>*  value) ;

constexpr ::System::Action_4<A,B,C,D>* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_4<A,B,C,D>*> __get_action() const;

constexpr void __set_firstParameter(A  value) ;

constexpr A& __get_firstParameter() ;

constexpr A const& __get_firstParameter() const;

constexpr void __set_secondParameter(B  value) ;

constexpr B& __get_secondParameter() ;

constexpr B const& __get_secondParameter() const;

constexpr void __set_thirdParameter(C  value) ;

constexpr C& __get_thirdParameter() ;

constexpr C const& __get_thirdParameter() const;

constexpr void __set_fourthParameter(D  value) ;

constexpr D& __get_fourthParameter() ;

constexpr D const& __get_fourthParameter() const;

static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _DispatchOnMainThread_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass5_0_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MainThreadDispatcher____c__DisplayClass5_0_4(__MainThreadDispatcher____c__DisplayClass5_0_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass5_0_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MainThreadDispatcher____c__DisplayClass5_0_4(__MainThreadDispatcher____c__DisplayClass5_0_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MainThreadDispatcher____c__DisplayClass5_0_4()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1, "", "MainThreadDispatcher/<>c__DisplayClass2_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2, "", "MainThreadDispatcher/<>c__DisplayClass3_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3, "", "MainThreadDispatcher/<>c__DisplayClass4_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4, "", "MainThreadDispatcher/<>c__DisplayClass5_0`4");
NEED_NO_BOX(::GlobalNamespace::MainThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainThreadDispatcher*, "", "MainThreadDispatcher");
