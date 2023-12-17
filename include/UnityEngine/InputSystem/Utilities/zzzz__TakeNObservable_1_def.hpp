#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TakeNObservable_1)
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class __TakeNObservable_1__Take;
}
namespace System {
class IDisposable;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class TakeNObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class __TakeNObservable_1__Take;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class TakeNObservable_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class __TakeNObservable_1__Take<TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::TakeNObservable_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take);
// Type: ::Take
// Type: UnityEngine.InputSystem.Utilities::TakeNObservable`1
// Type: ::Take
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6692))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6692), inst: 2 })
// CS Name: ::TakeNObservable`1::Take<TValue>*
class CORDL_TYPE __TakeNObservable_1__Take<TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Observer offset 0x10
 __declspec(property(get=__get_m_Observer, put=__set_m_Observer)) ::System::IObserver_1<TValue>*  m_Observer;

/// @brief Field m_Remaining offset 0x18
 __declspec(property(get=__get_m_Remaining, put=__set_m_Remaining)) int32_t  m_Remaining;

/// @brief Convert operator to "::System::IObserver_1<TValue>"
constexpr operator  ::System::IObserver_1<TValue>*() noexcept;

constexpr void __set_m_Observer(::System::IObserver_1<TValue>*  value) ;

constexpr ::System::IObserver_1<TValue>* __get_m_Observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TValue>*> __get_m_Observer() const;

constexpr void __set_m_Remaining(int32_t  value) ;

constexpr int32_t& __get_m_Remaining() ;

constexpr int32_t const& __get_m_Remaining() const;

static inline ::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>* New_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*  observable, ::System::IObserver_1<TValue>*  observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*  observable, ::System::IObserver_1<TValue>*  observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnNext(TValue  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "__TakeNObservable_1__Take", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TakeNObservable_1__Take(__TakeNObservable_1__Take && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TakeNObservable_1__Take", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TakeNObservable_1__Take(__TakeNObservable_1__Take const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TakeNObservable_1__Take()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::TakeNObservable`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6693)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6693), inst: 2 })
// CS Name: ::UnityEngine.InputSystem.Utilities::TakeNObservable`1<TValue>*
class CORDL_TYPE TakeNObservable_1<TValue> : public ::System::Object {
public:
// Declarations
using Take = ::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Source offset 0x10
 __declspec(property(get=__get_m_Source, put=__set_m_Source)) ::System::IObservable_1<TValue>*  m_Source;

/// @brief Field m_Count offset 0x18
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

/// @brief Convert operator to "::System::IObservable_1<TValue>"
constexpr operator  ::System::IObservable_1<TValue>*() noexcept;

constexpr void __set_m_Source(::System::IObservable_1<TValue>*  value) ;

constexpr ::System::IObservable_1<TValue>* __get_m_Source() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TValue>*> __get_m_Source() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

static inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* New_ctor(::System::IObservable_1<TValue>*  source, int32_t  count) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::IObservable_1<TValue>*  source, int32_t  count) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<TValue>*  observer) ;

// Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TakeNObservable_1(TakeNObservable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TakeNObservable_1(TakeNObservable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TakeNObservable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::TakeNObservable_1, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1/Take");
