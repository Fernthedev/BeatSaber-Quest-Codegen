#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectObservable_2)
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TSource,typename TResult>
class __SelectObservable_2__Select;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
template<typename TSource,typename TResult>
class SelectObservable_2;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TSource,typename TResult>
class __SelectObservable_2__Select;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
class SelectObservable_2<TSource,TResult>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
class __SelectObservable_2__Select<TSource,TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::SelectObservable_2);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select);
// Type: ::Select
// Type: UnityEngine.InputSystem.LowLevel::SelectObservable`2
// Type: ::Select
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6578)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6578), inst: 6445 })
// CS Name: ::SelectObservable`2::Select<TSource,TResult>*
class CORDL_TYPE __SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Observable offset 0x10
 __declspec(property(get=__get_m_Observable, put=__set_m_Observable)) ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  m_Observable;

/// @brief Field m_Observer offset 0x18
 __declspec(property(get=__get_m_Observer, put=__set_m_Observer)) ::System::IObserver_1<TResult>*  m_Observer;

/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

constexpr void __set_m_Observable(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* __get_m_Observable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*> __get_m_Observable() const;

constexpr void __set_m_Observer(::System::IObserver_1<TResult>*  value) ;

constexpr ::System::IObserver_1<TResult>* __get_m_Observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TResult>*> __get_m_Observer() const;

static inline ::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* New_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  observable, ::System::IObserver_1<TResult>*  observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  observable, ::System::IObserver_1<TResult>*  observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectObservable_2__Select", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectObservable_2__Select(__SelectObservable_2__Select && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectObservable_2__Select", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectObservable_2__Select(__SelectObservable_2__Select const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SelectObservable_2__Select()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::Select
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6578)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6578), inst: 81 })
// CS Name: ::SelectObservable`2::Select<TSource,TResult>*
class CORDL_TYPE __SelectObservable_2__Select<TSource,TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Observable offset 0x10
 __declspec(property(get=__get_m_Observable, put=__set_m_Observable)) ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  m_Observable;

/// @brief Field m_Observer offset 0x18
 __declspec(property(get=__get_m_Observer, put=__set_m_Observer)) ::System::IObserver_1<TResult>*  m_Observer;

/// @brief Convert operator to "::System::IObserver_1<TSource>"
constexpr operator  ::System::IObserver_1<TSource>*() noexcept;

constexpr void __set_m_Observable(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>* __get_m_Observable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*> __get_m_Observable() const;

constexpr void __set_m_Observer(::System::IObserver_1<TResult>*  value) ;

constexpr ::System::IObserver_1<TResult>* __get_m_Observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TResult>*> __get_m_Observer() const;

static inline ::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>* New_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  observable, ::System::IObserver_1<TResult>*  observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  observable, ::System::IObserver_1<TResult>*  observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnNext(TSource  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectObservable_2__Select", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectObservable_2__Select(__SelectObservable_2__Select && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectObservable_2__Select", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectObservable_2__Select(__SelectObservable_2__Select const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SelectObservable_2__Select()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::SelectObservable`2
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6579)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6579), inst: 6445 })
// CS Name: ::UnityEngine.InputSystem.LowLevel::SelectObservable`2<TSource,TResult>*
class CORDL_TYPE SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> : public ::System::Object {
public:
// Declarations
using Select = ::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr, TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Source offset 0x10
 __declspec(property(get=__get_m_Source, put=__set_m_Source)) ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  m_Source;

/// @brief Field m_Filter offset 0x18
 __declspec(property(get=__get_m_Filter, put=__set_m_Filter)) ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  m_Filter;

/// @brief Convert operator to "::System::IObservable_1<TResult>"
constexpr operator  ::System::IObservable_1<TResult>*() noexcept;

constexpr void __set_m_Source(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* __get_m_Source() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> __get_m_Source() const;

constexpr void __set_m_Filter(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  value) ;

constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* __get_m_Filter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*> __get_m_Filter() const;

static inline ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* New_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  source, ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  filter) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  source, ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  filter) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<TResult>*  observer) ;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectObservable_2(SelectObservable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectObservable_2(SelectObservable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectObservable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::SelectObservable`2
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6579))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6579), inst: 81 })
// CS Name: ::UnityEngine.InputSystem.LowLevel::SelectObservable`2<TSource,TResult>*
class CORDL_TYPE SelectObservable_2<TSource,TResult> : public ::System::Object {
public:
// Declarations
using Select = ::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource, TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Source offset 0x10
 __declspec(property(get=__get_m_Source, put=__set_m_Source)) ::System::IObservable_1<TSource>*  m_Source;

/// @brief Field m_Filter offset 0x18
 __declspec(property(get=__get_m_Filter, put=__set_m_Filter)) ::System::Func_2<TSource,TResult>*  m_Filter;

/// @brief Convert operator to "::System::IObservable_1<TResult>"
constexpr operator  ::System::IObservable_1<TResult>*() noexcept;

constexpr void __set_m_Source(::System::IObservable_1<TSource>*  value) ;

constexpr ::System::IObservable_1<TSource>* __get_m_Source() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TSource>*> __get_m_Source() const;

constexpr void __set_m_Filter(::System::Func_2<TSource,TResult>*  value) ;

constexpr ::System::Func_2<TSource,TResult>* __get_m_Filter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TResult>*> __get_m_Filter() const;

static inline ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>* New_ctor(::System::IObservable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  filter) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::IObservable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  filter) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<TResult>*  observer) ;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectObservable_2(SelectObservable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectObservable_2(SelectObservable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectObservable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::LowLevel::SelectObservable_2, "UnityEngine.InputSystem.LowLevel", "SelectObservable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select, "UnityEngine.InputSystem.LowLevel", "SelectObservable`2/Select");
